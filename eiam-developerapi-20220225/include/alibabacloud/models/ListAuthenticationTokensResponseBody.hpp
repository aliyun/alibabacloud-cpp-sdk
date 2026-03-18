// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHENTICATIONTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHENTICATIONTOKENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListAuthenticationTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthenticationTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthenticationTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListAuthenticationTokensResponseBody() = default ;
    ListAuthenticationTokensResponseBody(const ListAuthenticationTokensResponseBody &) = default ;
    ListAuthenticationTokensResponseBody(ListAuthenticationTokensResponseBody &&) = default ;
    ListAuthenticationTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthenticationTokensResponseBody() = default ;
    ListAuthenticationTokensResponseBody& operator=(const ListAuthenticationTokensResponseBody &) = default ;
    ListAuthenticationTokensResponseBody& operator=(ListAuthenticationTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(authenticationTokenId, authenticationTokenId_);
        DARABONBA_PTR_TO_JSON(authenticationTokenType, authenticationTokenType_);
        DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(consumerType, consumerType_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(creatorType, creatorType_);
        DARABONBA_PTR_TO_JSON(credentialProviderId, credentialProviderId_);
        DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(revoked, revoked_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(authenticationTokenId, authenticationTokenId_);
        DARABONBA_PTR_FROM_JSON(authenticationTokenType, authenticationTokenType_);
        DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(consumerType, consumerType_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(creatorType, creatorType_);
        DARABONBA_PTR_FROM_JSON(credentialProviderId, credentialProviderId_);
        DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(revoked, revoked_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Entities() = default ;
      Entities(const Entities &) = default ;
      Entities(Entities &&) = default ;
      Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entities() = default ;
      Entities& operator=(const Entities &) = default ;
      Entities& operator=(Entities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authenticationTokenId_ == nullptr
        && this->authenticationTokenType_ == nullptr && this->consumerId_ == nullptr && this->consumerType_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr
        && this->creatorType_ == nullptr && this->credentialProviderId_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->revoked_ == nullptr
        && this->updateTime_ == nullptr; };
      // authenticationTokenId Field Functions 
      bool hasAuthenticationTokenId() const { return this->authenticationTokenId_ != nullptr;};
      void deleteAuthenticationTokenId() { this->authenticationTokenId_ = nullptr;};
      inline string getAuthenticationTokenId() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenId_, "") };
      inline Entities& setAuthenticationTokenId(string authenticationTokenId) { DARABONBA_PTR_SET_VALUE(authenticationTokenId_, authenticationTokenId) };


      // authenticationTokenType Field Functions 
      bool hasAuthenticationTokenType() const { return this->authenticationTokenType_ != nullptr;};
      void deleteAuthenticationTokenType() { this->authenticationTokenType_ = nullptr;};
      inline string getAuthenticationTokenType() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenType_, "") };
      inline Entities& setAuthenticationTokenType(string authenticationTokenType) { DARABONBA_PTR_SET_VALUE(authenticationTokenType_, authenticationTokenType) };


      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline Entities& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // consumerType Field Functions 
      bool hasConsumerType() const { return this->consumerType_ != nullptr;};
      void deleteConsumerType() { this->consumerType_ = nullptr;};
      inline string getConsumerType() const { DARABONBA_PTR_GET_DEFAULT(consumerType_, "") };
      inline Entities& setConsumerType(string consumerType) { DARABONBA_PTR_SET_VALUE(consumerType_, consumerType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Entities& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Entities& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorType Field Functions 
      bool hasCreatorType() const { return this->creatorType_ != nullptr;};
      void deleteCreatorType() { this->creatorType_ = nullptr;};
      inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
      inline Entities& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


      // credentialProviderId Field Functions 
      bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
      void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
      inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
      inline Entities& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline Entities& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Entities& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // revoked Field Functions 
      bool hasRevoked() const { return this->revoked_ != nullptr;};
      void deleteRevoked() { this->revoked_ = nullptr;};
      inline bool getRevoked() const { DARABONBA_PTR_GET_DEFAULT(revoked_, false) };
      inline Entities& setRevoked(bool revoked) { DARABONBA_PTR_SET_VALUE(revoked_, revoked) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Entities& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> authenticationTokenId_ {};
      shared_ptr<string> authenticationTokenType_ {};
      shared_ptr<string> consumerId_ {};
      shared_ptr<string> consumerType_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> creatorType_ {};
      shared_ptr<string> credentialProviderId_ {};
      shared_ptr<int64_t> expirationTime_ {};
      // EIAM实例ID。
      shared_ptr<string> instanceId_ {};
      shared_ptr<bool> revoked_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->entities_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<ListAuthenticationTokensResponseBody::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<ListAuthenticationTokensResponseBody::Entities>) };
    inline vector<ListAuthenticationTokensResponseBody::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<ListAuthenticationTokensResponseBody::Entities>) };
    inline ListAuthenticationTokensResponseBody& setEntities(const vector<ListAuthenticationTokensResponseBody::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline ListAuthenticationTokensResponseBody& setEntities(vector<ListAuthenticationTokensResponseBody::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListAuthenticationTokensResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthenticationTokensResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthenticationTokensResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 资源实体列表。
    shared_ptr<vector<ListAuthenticationTokensResponseBody::Entities>> entities_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
