// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfoParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfoParameters& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfoParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    GetRequestLogResponseBodyLogInfoParameters() = default ;
    GetRequestLogResponseBodyLogInfoParameters(const GetRequestLogResponseBodyLogInfoParameters &) = default ;
    GetRequestLogResponseBodyLogInfoParameters(GetRequestLogResponseBodyLogInfoParameters &&) = default ;
    GetRequestLogResponseBodyLogInfoParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfoParameters() = default ;
    GetRequestLogResponseBodyLogInfoParameters& operator=(const GetRequestLogResponseBodyLogInfoParameters &) = default ;
    GetRequestLogResponseBodyLogInfoParameters& operator=(GetRequestLogResponseBodyLogInfoParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->required_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRequestLogResponseBodyLogInfoParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline GetRequestLogResponseBodyLogInfoParameters& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRequestLogResponseBodyLogInfoParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline GetRequestLogResponseBodyLogInfoParameters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline GetRequestLogResponseBodyLogInfoParameters& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The name of the request parameter.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the request parameter is required.
    std::shared_ptr<bool> required_ = nullptr;
    // The type of the request parameter.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the request parameter.
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
