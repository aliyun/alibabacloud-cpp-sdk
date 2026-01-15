// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KMSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSecretResponseBody() = default ;
    GetSecretResponseBody(const GetSecretResponseBody &) = default ;
    GetSecretResponseBody(GetSecretResponseBody &&) = default ;
    GetSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretResponseBody() = default ;
    GetSecretResponseBody& operator=(const GetSecretResponseBody &) = default ;
    GetSecretResponseBody& operator=(GetSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(kmsConfig, kmsConfig_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(referenceCount, referenceCount_);
        DARABONBA_PTR_TO_JSON(secretId, secretId_);
        DARABONBA_PTR_TO_JSON(secretSource, secretSource_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(kmsConfig, kmsConfig_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(referenceCount, referenceCount_);
        DARABONBA_PTR_FROM_JSON(secretId, secretId_);
        DARABONBA_PTR_FROM_JSON(secretSource, secretSource_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
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
      virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->gatewayType_ == nullptr && this->kmsConfig_ == nullptr && this->name_ == nullptr && this->referenceCount_ == nullptr && this->secretId_ == nullptr
        && this->secretSource_ == nullptr && this->status_ == nullptr && this->updateTimestamp_ == nullptr; };
      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Data& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline Data& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


      // kmsConfig Field Functions 
      bool hasKmsConfig() const { return this->kmsConfig_ != nullptr;};
      void deleteKmsConfig() { this->kmsConfig_ = nullptr;};
      inline const KMSConfig & getKmsConfig() const { DARABONBA_PTR_GET_CONST(kmsConfig_, KMSConfig) };
      inline KMSConfig getKmsConfig() { DARABONBA_PTR_GET(kmsConfig_, KMSConfig) };
      inline Data& setKmsConfig(const KMSConfig & kmsConfig) { DARABONBA_PTR_SET_VALUE(kmsConfig_, kmsConfig) };
      inline Data& setKmsConfig(KMSConfig && kmsConfig) { DARABONBA_PTR_SET_RVALUE(kmsConfig_, kmsConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // referenceCount Field Functions 
      bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
      void deleteReferenceCount() { this->referenceCount_ = nullptr;};
      inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
      inline Data& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


      // secretId Field Functions 
      bool hasSecretId() const { return this->secretId_ != nullptr;};
      void deleteSecretId() { this->secretId_ = nullptr;};
      inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
      inline Data& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


      // secretSource Field Functions 
      bool hasSecretSource() const { return this->secretSource_ != nullptr;};
      void deleteSecretSource() { this->secretSource_ = nullptr;};
      inline string getSecretSource() const { DARABONBA_PTR_GET_DEFAULT(secretSource_, "") };
      inline Data& setSecretSource(string secretSource) { DARABONBA_PTR_SET_VALUE(secretSource_, secretSource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Data& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    protected:
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> gatewayType_ {};
      shared_ptr<KMSConfig> kmsConfig_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> referenceCount_ {};
      shared_ptr<string> secretId_ {};
      shared_ptr<string> secretSource_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> updateTimestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecretResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSecretResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSecretResponseBody::Data) };
    inline GetSecretResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSecretResponseBody::Data) };
    inline GetSecretResponseBody& setData(const GetSecretResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSecretResponseBody& setData(GetSecretResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecretResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSecretResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
