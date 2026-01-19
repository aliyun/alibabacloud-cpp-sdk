// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTPUBLICKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTPUBLICKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListClientPublicKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientPublicKeys, clientPublicKeys_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientPublicKeys, clientPublicKeys_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListClientPublicKeysResponseBody() = default ;
    ListClientPublicKeysResponseBody(const ListClientPublicKeysResponseBody &) = default ;
    ListClientPublicKeysResponseBody(ListClientPublicKeysResponseBody &&) = default ;
    ListClientPublicKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientPublicKeysResponseBody() = default ;
    ListClientPublicKeysResponseBody& operator=(const ListClientPublicKeysResponseBody &) = default ;
    ListClientPublicKeysResponseBody& operator=(ListClientPublicKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientPublicKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientPublicKeys& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ClientPublicKeys& obj) { 
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
      ClientPublicKeys() = default ;
      ClientPublicKeys(const ClientPublicKeys &) = default ;
      ClientPublicKeys(ClientPublicKeys &&) = default ;
      ClientPublicKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientPublicKeys() = default ;
      ClientPublicKeys& operator=(const ClientPublicKeys &) = default ;
      ClientPublicKeys& operator=(ClientPublicKeys &&) = default ;
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
      inline ClientPublicKeys& setAlgorithmType(string algorithmType) { DARABONBA_PTR_SET_VALUE(algorithmType_, algorithmType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ClientPublicKeys& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // clientPublicKeyId Field Functions 
      bool hasClientPublicKeyId() const { return this->clientPublicKeyId_ != nullptr;};
      void deleteClientPublicKeyId() { this->clientPublicKeyId_ = nullptr;};
      inline string getClientPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientPublicKeyId_, "") };
      inline ClientPublicKeys& setClientPublicKeyId(string clientPublicKeyId) { DARABONBA_PTR_SET_VALUE(clientPublicKeyId_, clientPublicKeyId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ClientPublicKeys& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ClientPublicKeys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ClientPublicKeys& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // primary Field Functions 
      bool hasPrimary() const { return this->primary_ != nullptr;};
      void deletePrimary() { this->primary_ = nullptr;};
      inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
      inline ClientPublicKeys& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


      // publicKey Field Functions 
      bool hasPublicKey() const { return this->publicKey_ != nullptr;};
      void deletePublicKey() { this->publicKey_ = nullptr;};
      inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
      inline ClientPublicKeys& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ClientPublicKeys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // IDaaS EIAM 应用ClientPublicKey的算法类型 rsa2048、ecc256
      shared_ptr<string> algorithmType_ {};
      // IDaaS EIAM 应用Id
      shared_ptr<string> applicationId_ {};
      // IDaaS EIAM 应用ClientPublicKey的Id
      shared_ptr<string> clientPublicKeyId_ {};
      // IDaaS EIAM 应用ClientPublicKey的创建时间
      shared_ptr<int64_t> createTime_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> lastUsedTime_ {};
      // IDaaS EIAM 应用当前是否为首要使用的应用ClientPublicKey的
      shared_ptr<bool> primary_ {};
      // IDaaS EIAM 应用ClientPublicKey的公钥
      shared_ptr<string> publicKey_ {};
      // IDaaS EIAM 应用ClientPublicKey的状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clientPublicKeys_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clientPublicKeys Field Functions 
    bool hasClientPublicKeys() const { return this->clientPublicKeys_ != nullptr;};
    void deleteClientPublicKeys() { this->clientPublicKeys_ = nullptr;};
    inline const vector<ListClientPublicKeysResponseBody::ClientPublicKeys> & getClientPublicKeys() const { DARABONBA_PTR_GET_CONST(clientPublicKeys_, vector<ListClientPublicKeysResponseBody::ClientPublicKeys>) };
    inline vector<ListClientPublicKeysResponseBody::ClientPublicKeys> getClientPublicKeys() { DARABONBA_PTR_GET(clientPublicKeys_, vector<ListClientPublicKeysResponseBody::ClientPublicKeys>) };
    inline ListClientPublicKeysResponseBody& setClientPublicKeys(const vector<ListClientPublicKeysResponseBody::ClientPublicKeys> & clientPublicKeys) { DARABONBA_PTR_SET_VALUE(clientPublicKeys_, clientPublicKeys) };
    inline ListClientPublicKeysResponseBody& setClientPublicKeys(vector<ListClientPublicKeysResponseBody::ClientPublicKeys> && clientPublicKeys) { DARABONBA_PTR_SET_RVALUE(clientPublicKeys_, clientPublicKeys) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListClientPublicKeysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListClientPublicKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientPublicKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListClientPublicKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListClientPublicKeysResponseBody::ClientPublicKeys>> clientPublicKeys_ {};
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
