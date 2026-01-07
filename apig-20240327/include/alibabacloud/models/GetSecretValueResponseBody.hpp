// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody(GetSecretValueResponseBody &&) = default ;
    GetSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody& operator=(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody& operator=(GetSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(secretData, secretData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(secretData, secretData_);
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
      virtual bool empty() const override { return this->secretData_ == nullptr; };
      // secretData Field Functions 
      bool hasSecretData() const { return this->secretData_ != nullptr;};
      void deleteSecretData() { this->secretData_ = nullptr;};
      inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
      inline Data& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    protected:
      shared_ptr<string> secretData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecretValueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSecretValueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSecretValueResponseBody::Data) };
    inline GetSecretValueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSecretValueResponseBody::Data) };
    inline GetSecretValueResponseBody& setData(const GetSecretValueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSecretValueResponseBody& setData(GetSecretValueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecretValueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSecretValueResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
