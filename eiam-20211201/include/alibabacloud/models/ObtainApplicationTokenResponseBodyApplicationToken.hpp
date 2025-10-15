// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENRESPONSEBODYAPPLICATIONTOKEN_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENRESPONSEBODYAPPLICATIONTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationTokenResponseBodyApplicationToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationTokenResponseBodyApplicationToken& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_TO_JSON(ApplicationTokenId, applicationTokenId_);
      DARABONBA_PTR_TO_JSON(ApplicationTokenType, applicationTokenType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationTokenResponseBodyApplicationToken& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_FROM_JSON(ApplicationTokenId, applicationTokenId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTokenType, applicationTokenType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ObtainApplicationTokenResponseBodyApplicationToken() = default ;
    ObtainApplicationTokenResponseBodyApplicationToken(const ObtainApplicationTokenResponseBodyApplicationToken &) = default ;
    ObtainApplicationTokenResponseBodyApplicationToken(ObtainApplicationTokenResponseBodyApplicationToken &&) = default ;
    ObtainApplicationTokenResponseBodyApplicationToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationTokenResponseBodyApplicationToken() = default ;
    ObtainApplicationTokenResponseBodyApplicationToken& operator=(const ObtainApplicationTokenResponseBodyApplicationToken &) = default ;
    ObtainApplicationTokenResponseBodyApplicationToken& operator=(ObtainApplicationTokenResponseBodyApplicationToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationToken_ == nullptr && return this->applicationTokenId_ == nullptr && return this->applicationTokenType_ == nullptr && return this->createTime_ == nullptr && return this->expirationTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->lastUsedTime_ == nullptr && return this->status_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationToken Field Functions 
    bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
    void deleteApplicationToken() { this->applicationToken_ = nullptr;};
    inline string applicationToken() const { DARABONBA_PTR_GET_DEFAULT(applicationToken_, "") };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setApplicationToken(string applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };


    // applicationTokenId Field Functions 
    bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
    void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
    inline string applicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


    // applicationTokenType Field Functions 
    bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
    void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
    inline string applicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ObtainApplicationTokenResponseBodyApplicationToken& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // IDaaS EIAM 应用Id
    std::shared_ptr<string> applicationId_ = nullptr;
    // 客户端密钥
    std::shared_ptr<string> applicationToken_ = nullptr;
    // IDaaS EIAM 客户端ID
    std::shared_ptr<string> applicationTokenId_ = nullptr;
    // IDaaS EIAM 客户端密钥Id
    std::shared_ptr<string> applicationTokenType_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    // IDaaS EIAM 实例Id
    std::shared_ptr<string> instanceId_ = nullptr;
    // IDaaS EIAM 客户端密钥最近使用时间
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    // IDaaS EIAM 客户端密钥状态
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
