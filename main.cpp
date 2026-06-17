#include <iostream>
#include <string>

using namespace std;

// Clase que representa una publicación de Instagram
class Post {
private:
    string autor;
    string descripcion;
    int likes;
    bool leDiLike;

public:
    // Constructor para inicializar los datos del post
    Post(string _autor, string _descripcion, int _likesIniciales) {
        autor = _autor;
        descripcion = _descripcion;
        likes = _likesIniciales;
        leDiLike = false;
    }

    // Función para mostrar el post en la consola con diseño limpio
    void mostrarPost() {
        cout << "\n========================================" << endl;
        cout << " 👤 " << autor << endl;
        cout << "----------------------------------------" << endl;
        cout << " [ FOTO ESPACIAL DE KEPLER-452b 🌌 ]" << endl;
        cout << "----------------------------------------" << endl;
        
        // Muestra corazón rojo relleno si tiene tu like, o blanco vacío si no
        if (leDiLike) {
            cout << " ❤️  " << likes << " Me gusta" << endl;
        } else {
            cout << " 🤍 " << likes << " Me gusta" << endl;
        }

        cout << " 💬 Ver los 18 comentarios" << endl;
        cout << " 📝 " << autor << ": " << descripcion << endl;
        cout << "========================================\n" << endl;
    }

    // Función que simula dar o quitar Like (como el botón o el doble clic de la web)
    void alternarLike() {
        if (!leDiLike) {
            likes++;
            leDiLike = true;
            cout << "\n ¡Le diste Me gusta al post de " << autor << "! ❤️" << endl;
        } else {
            likes--;
            leDiLike = false;
            cout << "\n Quitaste tu Me gusta. 🤍" << endl;
        }
    }
};

int main() {
    // Creamos el post con los datos iniciales
    Post miPost("astro_fanatic", "¡Explorando nuevos horizontes en el espacio! 🚀🌌 #space", 1245);

    int opcion;
    do {
        // Muestra el feed actualizado en cada vuelta del menú
        miPost.mostrarPost();

        // Menú interactivo de opciones
        cout << "--- MENÚ INSTAGRAM (CONSOLA) ---" << endl;
        cout << "1. Dar / Quitar 'Me gusta' (Simular toque)" << endl;
        cout << "2. Volver a cargar feed" << endl;
        cout << "3. Salir de la app" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                miPost.alternarLike();
                break;
            case 2:
                cout << "\n Actualizando feed..." << endl;
                break;
            case 3:
                cout << "\nCerrando Instagram. ¡Hasta pronto!" << endl;
                break;
            default:
                cout << "\n Opción no válida, intenta de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}
