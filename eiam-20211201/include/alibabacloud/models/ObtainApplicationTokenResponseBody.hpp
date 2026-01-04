// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ObtainApplicationTokenResponseBody() = default ;
    ObtainApplicationTokenResponseBody(const ObtainApplicationTokenResponseBody &) = default ;
    ObtainApplicationTokenResponseBody(ObtainApplicationTokenResponseBody &&) = default ;
    ObtainApplicationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationTokenResponseBody() = default ;
    ObtainApplicationTokenResponseBody& operator=(const ObtainApplicationTokenResponseBody &) = default ;
    ObtainApplicationTokenResponseBody& operator=(ObtainApplicationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationToken& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ApplicationToken& obj) { 
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
      ApplicationToken() = default ;
      ApplicationToken(const ApplicationToken &) = default ;
      ApplicationToken(ApplicationToken &&) = default ;
      ApplicationToken(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationToken() = default ;
      ApplicationToken& operator=(const ApplicationToken &) = default ;
      ApplicationToken& operator=(ApplicationToken &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationToken_ == nullptr && this->applicationTokenId_ == nullptr && this->applicationTokenType_ == nullptr && this->createTime_ == nullptr && this->expirationTime_ == nullptr
        && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr && this->status_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationToken& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationToken Field Functions 
      bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
      void deleteApplicationToken() { this->applicationToken_ = nullptr;};
      inline string getApplicationToken() const { DARABONBA_PTR_GET_DEFAULT(applicationToken_, "") };
      inline ApplicationToken& setApplicationToken(string applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };


      // applicationTokenId Field Functions 
      bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
      void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
      inline string getApplicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
      inline ApplicationToken& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


      // applicationTokenType Field Functions 
      bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
      void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
      inline string getApplicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
      inline ApplicationToken& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationToken& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline ApplicationToken& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationToken& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ApplicationToken& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationToken& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // IDaaS EIAM 应用Id
      shared_ptr<string> applicationId_ {};
      // 客户端密钥
      shared_ptr<string> applicationToken_ {};
      // IDaaS EIAM 客户端ID
      shared_ptr<string> applicationTokenId_ {};
      // IDaaS EIAM 客户端密钥Id
      shared_ptr<string> applicationTokenType_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<int64_t> expirationTime_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // IDaaS EIAM 客户端密钥最近使用时间
      shared_ptr<int64_t> lastUsedTime_ {};
      // IDaaS EIAM 客户端密钥状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applicationToken_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationToken Field Functions 
    bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
    void deleteApplicationToken() { this->applicationToken_ = nullptr;};
    inline const ObtainApplicationTokenResponseBody::ApplicationToken & getApplicationToken() const { DARABONBA_PTR_GET_CONST(applicationToken_, ObtainApplicationTokenResponseBody::ApplicationToken) };
    inline ObtainApplicationTokenResponseBody::ApplicationToken getApplicationToken() { DARABONBA_PTR_GET(applicationToken_, ObtainApplicationTokenResponseBody::ApplicationToken) };
    inline ObtainApplicationTokenResponseBody& setApplicationToken(const ObtainApplicationTokenResponseBody::ApplicationToken & applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };
    inline ObtainApplicationTokenResponseBody& setApplicationToken(ObtainApplicationTokenResponseBody::ApplicationToken && applicationToken) { DARABONBA_PTR_SET_RVALUE(applicationToken_, applicationToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ObtainApplicationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ObtainApplicationTokenResponseBody::ApplicationToken> applicationToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
