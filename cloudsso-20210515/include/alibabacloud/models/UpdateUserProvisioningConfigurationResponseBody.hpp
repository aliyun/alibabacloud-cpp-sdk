// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPROVISIONINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPROVISIONINGCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateUserProvisioningConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserProvisioningConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserProvisioningConfiguration, userProvisioningConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserProvisioningConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserProvisioningConfiguration, userProvisioningConfiguration_);
    };
    UpdateUserProvisioningConfigurationResponseBody() = default ;
    UpdateUserProvisioningConfigurationResponseBody(const UpdateUserProvisioningConfigurationResponseBody &) = default ;
    UpdateUserProvisioningConfigurationResponseBody(UpdateUserProvisioningConfigurationResponseBody &&) = default ;
    UpdateUserProvisioningConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserProvisioningConfigurationResponseBody() = default ;
    UpdateUserProvisioningConfigurationResponseBody& operator=(const UpdateUserProvisioningConfigurationResponseBody &) = default ;
    UpdateUserProvisioningConfigurationResponseBody& operator=(UpdateUserProvisioningConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProvisioningConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProvisioningConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultLandingPage, defaultLandingPage_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(SessionDuration, sessionDuration_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, UserProvisioningConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultLandingPage, defaultLandingPage_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(SessionDuration, sessionDuration_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      UserProvisioningConfiguration() = default ;
      UserProvisioningConfiguration(const UserProvisioningConfiguration &) = default ;
      UserProvisioningConfiguration(UserProvisioningConfiguration &&) = default ;
      UserProvisioningConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserProvisioningConfiguration() = default ;
      UserProvisioningConfiguration& operator=(const UserProvisioningConfiguration &) = default ;
      UserProvisioningConfiguration& operator=(UserProvisioningConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultLandingPage_ == nullptr && this->directoryId_ == nullptr && this->sessionDuration_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserProvisioningConfiguration& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultLandingPage Field Functions 
      bool hasDefaultLandingPage() const { return this->defaultLandingPage_ != nullptr;};
      void deleteDefaultLandingPage() { this->defaultLandingPage_ = nullptr;};
      inline string getDefaultLandingPage() const { DARABONBA_PTR_GET_DEFAULT(defaultLandingPage_, "") };
      inline UserProvisioningConfiguration& setDefaultLandingPage(string defaultLandingPage) { DARABONBA_PTR_SET_VALUE(defaultLandingPage_, defaultLandingPage) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline UserProvisioningConfiguration& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // sessionDuration Field Functions 
      bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
      void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
      inline int32_t getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, 0) };
      inline UserProvisioningConfiguration& setSessionDuration(int32_t sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline UserProvisioningConfiguration& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The default URL for a CloudSSO user who logs on to the Alibaba Cloud Management Console.
      // 
      // Default value: https://homenew.console.aliyun.com.
      shared_ptr<string> defaultLandingPage_ {};
      // The ID of the resource directory.
      shared_ptr<string> directoryId_ {};
      // The duration of the logon session.
      // 
      // Unit: hours.
      // 
      // Valid values: 1 to 24.
      // 
      // Default value: 6.
      shared_ptr<int32_t> sessionDuration_ {};
      // The modification time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userProvisioningConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserProvisioningConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userProvisioningConfiguration Field Functions 
    bool hasUserProvisioningConfiguration() const { return this->userProvisioningConfiguration_ != nullptr;};
    void deleteUserProvisioningConfiguration() { this->userProvisioningConfiguration_ = nullptr;};
    inline const UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration & getUserProvisioningConfiguration() const { DARABONBA_PTR_GET_CONST(userProvisioningConfiguration_, UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration) };
    inline UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration getUserProvisioningConfiguration() { DARABONBA_PTR_GET(userProvisioningConfiguration_, UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration) };
    inline UpdateUserProvisioningConfigurationResponseBody& setUserProvisioningConfiguration(const UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration & userProvisioningConfiguration) { DARABONBA_PTR_SET_VALUE(userProvisioningConfiguration_, userProvisioningConfiguration) };
    inline UpdateUserProvisioningConfigurationResponseBody& setUserProvisioningConfiguration(UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration && userProvisioningConfiguration) { DARABONBA_PTR_SET_RVALUE(userProvisioningConfiguration_, userProvisioningConfiguration) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The global configurations of the RAM user provisioning.
    shared_ptr<UpdateUserProvisioningConfigurationResponseBody::UserProvisioningConfiguration> userProvisioningConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
