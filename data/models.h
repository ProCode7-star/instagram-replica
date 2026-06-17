 #ifndef MODELS_H
#define MODELS_H

#include <string>
#include <vector>

// Estructura de un usuario en el sistema
struct UserProfile {
    std::string username;      // Identificador único, ej: "user_123"
    std::string bio;           // Descripción, ej: "Desarrollador"
    int followers_count;       // Contador, no información personal
    bool is_verified;          // Bandera de estado
};

// Estructura de una publicación
struct Post {
    std::string post_id;       // ID generado por el sistema
    std::string image_url;     // Referencia a la ruta del archivo
    std::string caption;       // Texto de la publicación
    int likes;                 // Contador de interacciones
};

#endif
