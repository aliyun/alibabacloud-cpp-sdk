// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTEPREDICATESHEADERPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTEPREDICATESHEADERPREDICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoutePredicatesHeaderPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoutePredicatesHeaderPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoutePredicatesHeaderPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    HttpApiRoutePredicatesHeaderPredicates() = default ;
    HttpApiRoutePredicatesHeaderPredicates(const HttpApiRoutePredicatesHeaderPredicates &) = default ;
    HttpApiRoutePredicatesHeaderPredicates(HttpApiRoutePredicatesHeaderPredicates &&) = default ;
    HttpApiRoutePredicatesHeaderPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoutePredicatesHeaderPredicates() = default ;
    HttpApiRoutePredicatesHeaderPredicates& operator=(const HttpApiRoutePredicatesHeaderPredicates &) = default ;
    HttpApiRoutePredicatesHeaderPredicates& operator=(HttpApiRoutePredicatesHeaderPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiRoutePredicatesHeaderPredicates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiRoutePredicatesHeaderPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline HttpApiRoutePredicatesHeaderPredicates& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
