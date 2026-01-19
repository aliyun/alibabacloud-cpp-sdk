// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTPUBLICKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTPUBLICKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetClientPublicKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientPublicKey, clientPublicKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientPublicKey, clientPublicKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientPublicKeyResponseBody() = default ;
    GetClientPublicKeyResponseBody(const GetClientPublicKeyResponseBody &) = default ;
    GetClientPublicKeyResponseBody(GetClientPublicKeyResponseBody &&) = default ;
    GetClientPublicKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientPublicKeyResponseBody() = default ;
    GetClientPublicKeyResponseBody& operator=(const GetClientPublicKeyResponseBody &) = default ;
    GetClientPublicKeyResponseBody& operator=(GetClientPublicKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientPublicKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientPublicKey& obj) { 
        DARABONBA_PTR_TO_JSON(AlgorithmType, algorithmType_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ClientPublicKeyId, clientPublicKeyId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(Primary, primary_);
        DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ClientPublicKey& obj) { 
        DARABONBA_PTR_FROM_JSON(AlgorithmType, algorithmType_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ClientPublicKeyId, clientPublicKeyId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(Primary, primary_);
        DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ClientPublicKey() = default ;
      ClientPublicKey(const ClientPublicKey &) = default ;
      ClientPublicKey(ClientPublicKey &&) = default ;
      ClientPublicKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientPublicKey() = default ;
      ClientPublicKey& operator=(const ClientPublicKey &) = default ;
      ClientPublicKey& operator=(ClientPublicKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithmType_ == nullptr
        && this->applicationId_ == nullptr && this->clientPublicKeyId_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr
        && this->primary_ == nullptr && this->publicKey_ == nullptr && this->status_ == nullptr; };
      // algorithmType Field Functions 
      bool hasAlgorithmType() const { return this->algorithmType_ != nullptr;};
      void deleteAlgorithmType() { this->algorithmType_ = nullptr;};
      inline string getAlgorithmType() const { DARABONBA_PTR_GET_DEFAULT(algorithmType_, "") };
      inline ClientPublicKey& setAlgorithmType(string algorithmType) { DARABONBA_PTR_SET_VALUE(algorithmType_, algorithmType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ClientPublicKey& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // clientPublicKeyId Field Functions 
      bool hasClientPublicKeyId() const { return this->clientPublicKeyId_ != nullptr;};
      void deleteClientPublicKeyId() { this->clientPublicKeyId_ = nullptr;};
      inline string getClientPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientPublicKeyId_, "") };
      inline ClientPublicKey& setClientPublicKeyId(string clientPublicKeyId) { DARABONBA_PTR_SET_VALUE(clientPublicKeyId_, clientPublicKeyId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ClientPublicKey& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ClientPublicKey& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ClientPublicKey& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // primary Field Functions 
      bool hasPrimary() const { return this->primary_ != nullptr;};
      void deletePrimary() { this->primary_ = nullptr;};
      inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
      inline ClientPublicKey& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


      // publicKey Field Functions 
      bool hasPublicKey() const { return this->publicKey_ != nullptr;};
      void deletePublicKey() { this->publicKey_ = nullptr;};
      inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
      inline ClientPublicKey& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ClientPublicKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // IDaaS EIAM 应用公私钥对算法类型 rsa2048、ecc256
      shared_ptr<string> algorithmType_ {};
      // IDaaS EIAM 应用Id
      shared_ptr<string> applicationId_ {};
      // IDaaS EIAM 应用公私钥对Id
      shared_ptr<string> clientPublicKeyId_ {};
      // IDaaS EIAM 应用公私钥对创建时间
      shared_ptr<int64_t> createTime_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> lastUsedTime_ {};
      // IDaaS EIAM 应用当前是否为首要使用的公私钥对
      shared_ptr<bool> primary_ {};
      // IDaaS EIAM 应用公钥
      shared_ptr<string> publicKey_ {};
      // IDaaS EIAM 应用公私钥对状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clientPublicKey_ == nullptr
        && this->requestId_ == nullptr; };
    // clientPublicKey Field Functions 
    bool hasClientPublicKey() const { return this->clientPublicKey_ != nullptr;};
    void deleteClientPublicKey() { this->clientPublicKey_ = nullptr;};
    inline const GetClientPublicKeyResponseBody::ClientPublicKey & getClientPublicKey() const { DARABONBA_PTR_GET_CONST(clientPublicKey_, GetClientPublicKeyResponseBody::ClientPublicKey) };
    inline GetClientPublicKeyResponseBody::ClientPublicKey getClientPublicKey() { DARABONBA_PTR_GET(clientPublicKey_, GetClientPublicKeyResponseBody::ClientPublicKey) };
    inline GetClientPublicKeyResponseBody& setClientPublicKey(const GetClientPublicKeyResponseBody::ClientPublicKey & clientPublicKey) { DARABONBA_PTR_SET_VALUE(clientPublicKey_, clientPublicKey) };
    inline GetClientPublicKeyResponseBody& setClientPublicKey(GetClientPublicKeyResponseBody::ClientPublicKey && clientPublicKey) { DARABONBA_PTR_SET_RVALUE(clientPublicKey_, clientPublicKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientPublicKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetClientPublicKeyResponseBody::ClientPublicKey> clientPublicKey_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
