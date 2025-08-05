// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIRESPONSECONTRACTITEMS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIRESPONSECONTRACTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiResponseContractItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiResponseContractItems& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(example, example_);
      DARABONBA_PTR_TO_JSON(jsonSchema, jsonSchema_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiResponseContractItems& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(example, example_);
      DARABONBA_PTR_FROM_JSON(jsonSchema, jsonSchema_);
    };
    HttpApiResponseContractItems() = default ;
    HttpApiResponseContractItems(const HttpApiResponseContractItems &) = default ;
    HttpApiResponseContractItems(HttpApiResponseContractItems &&) = default ;
    HttpApiResponseContractItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiResponseContractItems() = default ;
    HttpApiResponseContractItems& operator=(const HttpApiResponseContractItems &) = default ;
    HttpApiResponseContractItems& operator=(HttpApiResponseContractItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->description_ != nullptr && this->example_ != nullptr && this->jsonSchema_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline HttpApiResponseContractItems& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpApiResponseContractItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string example() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline HttpApiResponseContractItems& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // jsonSchema Field Functions 
    bool hasJsonSchema() const { return this->jsonSchema_ != nullptr;};
    void deleteJsonSchema() { this->jsonSchema_ = nullptr;};
    inline string jsonSchema() const { DARABONBA_PTR_GET_DEFAULT(jsonSchema_, "") };
    inline HttpApiResponseContractItems& setJsonSchema(string jsonSchema) { DARABONBA_PTR_SET_VALUE(jsonSchema_, jsonSchema) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> example_ = nullptr;
    std::shared_ptr<string> jsonSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
