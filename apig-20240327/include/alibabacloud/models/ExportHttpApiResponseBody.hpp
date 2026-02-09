// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTHTTPAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTHTTPAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ExportHttpApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportHttpApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportHttpApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ExportHttpApiResponseBody() = default ;
    ExportHttpApiResponseBody(const ExportHttpApiResponseBody &) = default ;
    ExportHttpApiResponseBody(ExportHttpApiResponseBody &&) = default ;
    ExportHttpApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportHttpApiResponseBody() = default ;
    ExportHttpApiResponseBody& operator=(const ExportHttpApiResponseBody &) = default ;
    ExportHttpApiResponseBody& operator=(ExportHttpApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(specContentBase64, specContentBase64_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(specContentBase64, specContentBase64_);
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
      virtual bool empty() const override { return this->specContentBase64_ == nullptr; };
      // specContentBase64 Field Functions 
      bool hasSpecContentBase64() const { return this->specContentBase64_ != nullptr;};
      void deleteSpecContentBase64() { this->specContentBase64_ = nullptr;};
      inline string getSpecContentBase64() const { DARABONBA_PTR_GET_DEFAULT(specContentBase64_, "") };
      inline Data& setSpecContentBase64(string specContentBase64) { DARABONBA_PTR_SET_VALUE(specContentBase64_, specContentBase64) };


    protected:
      // The Base64-encoded API definition.
      shared_ptr<string> specContentBase64_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExportHttpApiResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExportHttpApiResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExportHttpApiResponseBody::Data) };
    inline ExportHttpApiResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExportHttpApiResponseBody::Data) };
    inline ExportHttpApiResponseBody& setData(const ExportHttpApiResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExportHttpApiResponseBody& setData(ExportHttpApiResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExportHttpApiResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportHttpApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The API definition.
    shared_ptr<ExportHttpApiResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
