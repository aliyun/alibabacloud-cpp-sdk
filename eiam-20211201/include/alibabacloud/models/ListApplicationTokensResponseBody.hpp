// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONTOKENSRESPONSEBODY_HPP_
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
  class ListApplicationTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTokens, applicationTokens_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTokens, applicationTokens_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApplicationTokensResponseBody() = default ;
    ListApplicationTokensResponseBody(const ListApplicationTokensResponseBody &) = default ;
    ListApplicationTokensResponseBody(ListApplicationTokensResponseBody &&) = default ;
    ListApplicationTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationTokensResponseBody() = default ;
    ListApplicationTokensResponseBody& operator=(const ListApplicationTokensResponseBody &) = default ;
    ListApplicationTokensResponseBody& operator=(ListApplicationTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationTokens : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationTokens& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationToken, applicationToken_);
        DARABONBA_PTR_TO_JSON(ApplicationTokenId, applicationTokenId_);
        DARABONBA_PTR_TO_JSON(ApplicationTokenType, applicationTokenType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationTokens& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationToken, applicationToken_);
        DARABONBA_PTR_FROM_JSON(ApplicationTokenId, applicationTokenId_);
        DARABONBA_PTR_FROM_JSON(ApplicationTokenType, applicationTokenType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ApplicationTokens() = default ;
      ApplicationTokens(const ApplicationTokens &) = default ;
      ApplicationTokens(ApplicationTokens &&) = default ;
      ApplicationTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationTokens() = default ;
      ApplicationTokens& operator=(const ApplicationTokens &) = default ;
      ApplicationTokens& operator=(ApplicationTokens &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->applicationId_ == nullptr && this->applicationToken_ == nullptr && this->applicationTokenId_ == nullptr && this->applicationTokenType_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->expirationTime_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ApplicationTokens& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationTokens& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationToken Field Functions 
      bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
      void deleteApplicationToken() { this->applicationToken_ = nullptr;};
      inline string getApplicationToken() const { DARABONBA_PTR_GET_DEFAULT(applicationToken_, "") };
      inline ApplicationTokens& setApplicationToken(string applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };


      // applicationTokenId Field Functions 
      bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
      void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
      inline string getApplicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
      inline ApplicationTokens& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


      // applicationTokenType Field Functions 
      bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
      void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
      inline string getApplicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
      inline ApplicationTokens& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationTokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationTokens& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline ApplicationTokens& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationTokens& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ApplicationTokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationTokens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // aliUid。
      shared_ptr<int64_t> aliUid_ {};
      // 应用ID
      shared_ptr<string> applicationId_ {};
      // 应用token
      shared_ptr<string> applicationToken_ {};
      // 应用token ID
      shared_ptr<string> applicationTokenId_ {};
      // 应用token类型
      shared_ptr<string> applicationTokenType_ {};
      shared_ptr<int64_t> createTime_ {};
      // 应用token描述
      shared_ptr<string> description_ {};
      // 到期时间
      shared_ptr<int64_t> expirationTime_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // 最后使用时间
      shared_ptr<int64_t> lastUsedTime_ {};
      // 应用状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applicationTokens_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationTokens Field Functions 
    bool hasApplicationTokens() const { return this->applicationTokens_ != nullptr;};
    void deleteApplicationTokens() { this->applicationTokens_ = nullptr;};
    inline const vector<ListApplicationTokensResponseBody::ApplicationTokens> & getApplicationTokens() const { DARABONBA_PTR_GET_CONST(applicationTokens_, vector<ListApplicationTokensResponseBody::ApplicationTokens>) };
    inline vector<ListApplicationTokensResponseBody::ApplicationTokens> getApplicationTokens() { DARABONBA_PTR_GET(applicationTokens_, vector<ListApplicationTokensResponseBody::ApplicationTokens>) };
    inline ListApplicationTokensResponseBody& setApplicationTokens(const vector<ListApplicationTokensResponseBody::ApplicationTokens> & applicationTokens) { DARABONBA_PTR_SET_VALUE(applicationTokens_, applicationTokens) };
    inline ListApplicationTokensResponseBody& setApplicationTokens(vector<ListApplicationTokensResponseBody::ApplicationTokens> && applicationTokens) { DARABONBA_PTR_SET_RVALUE(applicationTokens_, applicationTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationTokensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListApplicationTokensResponseBody::ApplicationTokens>> applicationTokens_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
