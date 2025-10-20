// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDENTIFIER_HPP_
#define ALIBABACLOUD_MODELS_IDENTIFIER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Identifier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Identifier& obj) { 
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(object, object_);
    };
    friend void from_json(const Darabonba::Json& j, Identifier& obj) { 
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(object, object_);
    };
    Identifier() = default ;
    Identifier(const Identifier &) = default ;
    Identifier(Identifier &&) = default ;
    Identifier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Identifier() = default ;
    Identifier& operator=(const Identifier &) = default ;
    Identifier& operator=(Identifier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->object_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline Identifier& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline Identifier& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


  protected:
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<string> object_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
