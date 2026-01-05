// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIRESPONSECONTRACT_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIRESPONSECONTRACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiResponseContract : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiResponseContract& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiResponseContract& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    HttpApiResponseContract() = default ;
    HttpApiResponseContract(const HttpApiResponseContract &) = default ;
    HttpApiResponseContract(HttpApiResponseContract &&) = default ;
    HttpApiResponseContract(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiResponseContract() = default ;
    HttpApiResponseContract& operator=(const HttpApiResponseContract &) = default ;
    HttpApiResponseContract& operator=(HttpApiResponseContract &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(example, example_);
        DARABONBA_PTR_TO_JSON(jsonSchema, jsonSchema_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(example, example_);
        DARABONBA_PTR_FROM_JSON(jsonSchema, jsonSchema_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->example_ == nullptr && this->jsonSchema_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Items& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // example Field Functions 
      bool hasExample() const { return this->example_ != nullptr;};
      void deleteExample() { this->example_ = nullptr;};
      inline string getExample() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
      inline Items& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


      // jsonSchema Field Functions 
      bool hasJsonSchema() const { return this->jsonSchema_ != nullptr;};
      void deleteJsonSchema() { this->jsonSchema_ = nullptr;};
      inline string getJsonSchema() const { DARABONBA_PTR_GET_DEFAULT(jsonSchema_, "") };
      inline Items& setJsonSchema(string jsonSchema) { DARABONBA_PTR_SET_VALUE(jsonSchema_, jsonSchema) };


    protected:
      shared_ptr<int32_t> code_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> example_ {};
      shared_ptr<string> jsonSchema_ {};
    };

    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->items_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline HttpApiResponseContract& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<HttpApiResponseContract::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<HttpApiResponseContract::Items>) };
    inline vector<HttpApiResponseContract::Items> getItems() { DARABONBA_PTR_GET(items_, vector<HttpApiResponseContract::Items>) };
    inline HttpApiResponseContract& setItems(const vector<HttpApiResponseContract::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline HttpApiResponseContract& setItems(vector<HttpApiResponseContract::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    shared_ptr<vector<HttpApiResponseContract::Items>> items_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
