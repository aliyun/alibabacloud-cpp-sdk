// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUESTPRODUCTSINSTANCEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUESTPRODUCTSINSTANCEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateProductOrdersRequestProductsInstanceProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductOrdersRequestProductsInstanceProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductOrdersRequestProductsInstanceProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateProductOrdersRequestProductsInstanceProperties() = default ;
    CreateProductOrdersRequestProductsInstanceProperties(const CreateProductOrdersRequestProductsInstanceProperties &) = default ;
    CreateProductOrdersRequestProductsInstanceProperties(CreateProductOrdersRequestProductsInstanceProperties &&) = default ;
    CreateProductOrdersRequestProductsInstanceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductOrdersRequestProductsInstanceProperties() = default ;
    CreateProductOrdersRequestProductsInstanceProperties& operator=(const CreateProductOrdersRequestProductsInstanceProperties &) = default ;
    CreateProductOrdersRequestProductsInstanceProperties& operator=(CreateProductOrdersRequestProductsInstanceProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateProductOrdersRequestProductsInstanceProperties& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProductOrdersRequestProductsInstanceProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateProductOrdersRequestProductsInstanceProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The property code.
    std::shared_ptr<string> code_ = nullptr;
    // The property name.
    std::shared_ptr<string> name_ = nullptr;
    // The property value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
