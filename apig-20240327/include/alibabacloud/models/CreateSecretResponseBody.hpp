// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateSecretResponseBody() = default ;
    CreateSecretResponseBody(const CreateSecretResponseBody &) = default ;
    CreateSecretResponseBody(CreateSecretResponseBody &&) = default ;
    CreateSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretResponseBody() = default ;
    CreateSecretResponseBody& operator=(const CreateSecretResponseBody &) = default ;
    CreateSecretResponseBody& operator=(CreateSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(secretId, secretId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(secretId, secretId_);
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
      virtual bool empty() const override { return this->secretId_ == nullptr; };
      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline Data& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    protected:
      shared_ptr<string> secretId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSecretResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSecretResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSecretResponseBody::Data) };
    inline CreateSecretResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSecretResponseBody::Data) };
    inline CreateSecretResponseBody& setData(const CreateSecretResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSecretResponseBody& setData(CreateSecretResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSecretResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateSecretResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
