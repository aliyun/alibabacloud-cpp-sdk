// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONTOKENSRESPONSEBODYAPPLICATIONTOKENS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONTOKENSRESPONSEBODYAPPLICATIONTOKENS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationTokensResponseBodyApplicationTokens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationTokensResponseBodyApplicationTokens& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListApplicationTokensResponseBodyApplicationTokens& obj) { 
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
    ListApplicationTokensResponseBodyApplicationTokens() = default ;
    ListApplicationTokensResponseBodyApplicationTokens(const ListApplicationTokensResponseBodyApplicationTokens &) = default ;
    ListApplicationTokensResponseBodyApplicationTokens(ListApplicationTokensResponseBodyApplicationTokens &&) = default ;
    ListApplicationTokensResponseBodyApplicationTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationTokensResponseBodyApplicationTokens() = default ;
    ListApplicationTokensResponseBodyApplicationTokens& operator=(const ListApplicationTokensResponseBodyApplicationTokens &) = default ;
    ListApplicationTokensResponseBodyApplicationTokens& operator=(ListApplicationTokensResponseBodyApplicationTokens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->applicationId_ == nullptr && return this->applicationToken_ == nullptr && return this->applicationTokenId_ == nullptr && return this->applicationTokenType_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->expirationTime_ == nullptr && return this->instanceId_ == nullptr && return this->lastUsedTime_ == nullptr && return this->status_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListApplicationTokensResponseBodyApplicationTokens& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationToken Field Functions 
    bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
    void deleteApplicationToken() { this->applicationToken_ = nullptr;};
    inline string applicationToken() const { DARABONBA_PTR_GET_DEFAULT(applicationToken_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setApplicationToken(string applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };


    // applicationTokenId Field Functions 
    bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
    void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
    inline string applicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


    // applicationTokenType Field Functions 
    bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
    void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
    inline string applicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationTokensResponseBodyApplicationTokens& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline ListApplicationTokensResponseBodyApplicationTokens& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ListApplicationTokensResponseBodyApplicationTokens& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApplicationTokensResponseBodyApplicationTokens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // aliUid。
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // 应用ID
    std::shared_ptr<string> applicationId_ = nullptr;
    // 应用token
    std::shared_ptr<string> applicationToken_ = nullptr;
    // 应用token ID
    std::shared_ptr<string> applicationTokenId_ = nullptr;
    // 应用token类型
    std::shared_ptr<string> applicationTokenType_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 应用token描述
    std::shared_ptr<string> description_ = nullptr;
    // 到期时间
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    // IDaaS EIAM 实例Id
    std::shared_ptr<string> instanceId_ = nullptr;
    // 最后使用时间
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    // 应用状态
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
