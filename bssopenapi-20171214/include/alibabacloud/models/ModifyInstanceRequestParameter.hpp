// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUESTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUESTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ModifyInstanceRequestParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceRequestParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceRequestParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ModifyInstanceRequestParameter() = default ;
    ModifyInstanceRequestParameter(const ModifyInstanceRequestParameter &) = default ;
    ModifyInstanceRequestParameter(ModifyInstanceRequestParameter &&) = default ;
    ModifyInstanceRequestParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceRequestParameter() = default ;
    ModifyInstanceRequestParameter& operator=(const ModifyInstanceRequestParameter &) = default ;
    ModifyInstanceRequestParameter& operator=(ModifyInstanceRequestParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->value_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyInstanceRequestParameter& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ModifyInstanceRequestParameter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The code of the parameter n. Valid values of n: 1 to 100. Multiple parameters are concatenated in the order of n.
    // 
    // >  Only the parameters of the attributes that you want to modify for the instance must be configured. For example, if the instance has Attribute A and Attribute B and only Attribute A must be modified, configure only the parameter of Attribute A.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // The value of the parameter n. Valid values of n: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
