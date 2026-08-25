// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPROVISIONINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPROVISIONINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateUserProvisioningConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserProvisioningConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewDefaultLandingPage, newDefaultLandingPage_);
      DARABONBA_PTR_TO_JSON(NewSessionDuration, newSessionDuration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserProvisioningConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewDefaultLandingPage, newDefaultLandingPage_);
      DARABONBA_PTR_FROM_JSON(NewSessionDuration, newSessionDuration_);
    };
    UpdateUserProvisioningConfigurationRequest() = default ;
    UpdateUserProvisioningConfigurationRequest(const UpdateUserProvisioningConfigurationRequest &) = default ;
    UpdateUserProvisioningConfigurationRequest(UpdateUserProvisioningConfigurationRequest &&) = default ;
    UpdateUserProvisioningConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserProvisioningConfigurationRequest() = default ;
    UpdateUserProvisioningConfigurationRequest& operator=(const UpdateUserProvisioningConfigurationRequest &) = default ;
    UpdateUserProvisioningConfigurationRequest& operator=(UpdateUserProvisioningConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->newDefaultLandingPage_ == nullptr && this->newSessionDuration_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateUserProvisioningConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newDefaultLandingPage Field Functions 
    bool hasNewDefaultLandingPage() const { return this->newDefaultLandingPage_ != nullptr;};
    void deleteNewDefaultLandingPage() { this->newDefaultLandingPage_ = nullptr;};
    inline string getNewDefaultLandingPage() const { DARABONBA_PTR_GET_DEFAULT(newDefaultLandingPage_, "") };
    inline UpdateUserProvisioningConfigurationRequest& setNewDefaultLandingPage(string newDefaultLandingPage) { DARABONBA_PTR_SET_VALUE(newDefaultLandingPage_, newDefaultLandingPage) };


    // newSessionDuration Field Functions 
    bool hasNewSessionDuration() const { return this->newSessionDuration_ != nullptr;};
    void deleteNewSessionDuration() { this->newSessionDuration_ = nullptr;};
    inline int32_t getNewSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(newSessionDuration_, 0) };
    inline UpdateUserProvisioningConfigurationRequest& setNewSessionDuration(int32_t newSessionDuration) { DARABONBA_PTR_SET_VALUE(newSessionDuration_, newSessionDuration) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The new default URL for a CloudSSO user who logs on to the Alibaba Cloud Management Console.
    // 
    // Default value: https://homenew.console.aliyun.com.
    shared_ptr<string> newDefaultLandingPage_ {};
    // The new duration of the logon session.
    // 
    // Unit: hours.
    // 
    // Valid values: 1 to 24.
    // 
    // Default value: 6.
    shared_ptr<int32_t> newSessionDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
