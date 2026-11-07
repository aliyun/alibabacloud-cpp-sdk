// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATELLMTEMPLATECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATELLMTEMPLATECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ValidateLlmTemplateConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateLlmTemplateConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateLlmTemplateConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ValidateLlmTemplateConfigResponseBody() = default ;
    ValidateLlmTemplateConfigResponseBody(const ValidateLlmTemplateConfigResponseBody &) = default ;
    ValidateLlmTemplateConfigResponseBody(ValidateLlmTemplateConfigResponseBody &&) = default ;
    ValidateLlmTemplateConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateLlmTemplateConfigResponseBody() = default ;
    ValidateLlmTemplateConfigResponseBody& operator=(const ValidateLlmTemplateConfigResponseBody &) = default ;
    ValidateLlmTemplateConfigResponseBody& operator=(ValidateLlmTemplateConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Valid, valid_);
        DARABONBA_PTR_TO_JSON(ValidationErrors, validationErrors_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Valid, valid_);
        DARABONBA_PTR_FROM_JSON(ValidationErrors, validationErrors_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValidationErrors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidationErrors& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Field, field_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, ValidationErrors& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Field, field_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        ValidationErrors() = default ;
        ValidationErrors(const ValidationErrors &) = default ;
        ValidationErrors(ValidationErrors &&) = default ;
        ValidationErrors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValidationErrors() = default ;
        ValidationErrors& operator=(const ValidationErrors &) = default ;
        ValidationErrors& operator=(ValidationErrors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->field_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ValidationErrors& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // field Field Functions 
        bool hasField() const { return this->field_ != nullptr;};
        void deleteField() { this->field_ = nullptr;};
        inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
        inline ValidationErrors& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ValidationErrors& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> field_ {};
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->valid_ == nullptr
        && this->validationErrors_ == nullptr; };
      // valid Field Functions 
      bool hasValid() const { return this->valid_ != nullptr;};
      void deleteValid() { this->valid_ = nullptr;};
      inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
      inline Data& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


      // validationErrors Field Functions 
      bool hasValidationErrors() const { return this->validationErrors_ != nullptr;};
      void deleteValidationErrors() { this->validationErrors_ = nullptr;};
      inline const vector<Data::ValidationErrors> & getValidationErrors() const { DARABONBA_PTR_GET_CONST(validationErrors_, vector<Data::ValidationErrors>) };
      inline vector<Data::ValidationErrors> getValidationErrors() { DARABONBA_PTR_GET(validationErrors_, vector<Data::ValidationErrors>) };
      inline Data& setValidationErrors(const vector<Data::ValidationErrors> & validationErrors) { DARABONBA_PTR_SET_VALUE(validationErrors_, validationErrors) };
      inline Data& setValidationErrors(vector<Data::ValidationErrors> && validationErrors) { DARABONBA_PTR_SET_RVALUE(validationErrors_, validationErrors) };


    protected:
      shared_ptr<bool> valid_ {};
      shared_ptr<vector<Data::ValidationErrors>> validationErrors_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ValidateLlmTemplateConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ValidateLlmTemplateConfigResponseBody::Data) };
    inline ValidateLlmTemplateConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ValidateLlmTemplateConfigResponseBody::Data) };
    inline ValidateLlmTemplateConfigResponseBody& setData(const ValidateLlmTemplateConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ValidateLlmTemplateConfigResponseBody& setData(ValidateLlmTemplateConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateLlmTemplateConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ValidateLlmTemplateConfigResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
