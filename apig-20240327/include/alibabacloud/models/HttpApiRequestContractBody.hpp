// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIREQUESTCONTRACTBODY_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIREQUESTCONTRACTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiRequestContractBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRequestContractBody& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(example, example_);
      DARABONBA_PTR_TO_JSON(jsonSchema, jsonSchema_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRequestContractBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(example, example_);
      DARABONBA_PTR_FROM_JSON(jsonSchema, jsonSchema_);
    };
    HttpApiRequestContractBody() = default ;
    HttpApiRequestContractBody(const HttpApiRequestContractBody &) = default ;
    HttpApiRequestContractBody(HttpApiRequestContractBody &&) = default ;
    HttpApiRequestContractBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRequestContractBody() = default ;
    HttpApiRequestContractBody& operator=(const HttpApiRequestContractBody &) = default ;
    HttpApiRequestContractBody& operator=(HttpApiRequestContractBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentType_ != nullptr
        && this->description_ != nullptr && this->example_ != nullptr && this->jsonSchema_ != nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline HttpApiRequestContractBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpApiRequestContractBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string example() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline HttpApiRequestContractBody& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // jsonSchema Field Functions 
    bool hasJsonSchema() const { return this->jsonSchema_ != nullptr;};
    void deleteJsonSchema() { this->jsonSchema_ = nullptr;};
    inline string jsonSchema() const { DARABONBA_PTR_GET_DEFAULT(jsonSchema_, "") };
    inline HttpApiRequestContractBody& setJsonSchema(string jsonSchema) { DARABONBA_PTR_SET_VALUE(jsonSchema_, jsonSchema) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> example_ = nullptr;
    std::shared_ptr<string> jsonSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
