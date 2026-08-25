// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(NewRelayState, newRelayState_);
      DARABONBA_PTR_TO_JSON(NewSessionDuration, newSessionDuration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(NewRelayState, newRelayState_);
      DARABONBA_PTR_FROM_JSON(NewSessionDuration, newSessionDuration_);
    };
    UpdateAccessConfigurationRequest() = default ;
    UpdateAccessConfigurationRequest(const UpdateAccessConfigurationRequest &) = default ;
    UpdateAccessConfigurationRequest(UpdateAccessConfigurationRequest &&) = default ;
    UpdateAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccessConfigurationRequest() = default ;
    UpdateAccessConfigurationRequest& operator=(const UpdateAccessConfigurationRequest &) = default ;
    UpdateAccessConfigurationRequest& operator=(UpdateAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->newDescription_ == nullptr && this->newRelayState_ == nullptr && this->newSessionDuration_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline UpdateAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string getNewDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateAccessConfigurationRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // newRelayState Field Functions 
    bool hasNewRelayState() const { return this->newRelayState_ != nullptr;};
    void deleteNewRelayState() { this->newRelayState_ = nullptr;};
    inline string getNewRelayState() const { DARABONBA_PTR_GET_DEFAULT(newRelayState_, "") };
    inline UpdateAccessConfigurationRequest& setNewRelayState(string newRelayState) { DARABONBA_PTR_SET_VALUE(newRelayState_, newRelayState) };


    // newSessionDuration Field Functions 
    bool hasNewSessionDuration() const { return this->newSessionDuration_ != nullptr;};
    void deleteNewSessionDuration() { this->newSessionDuration_ = nullptr;};
    inline int32_t getNewSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(newSessionDuration_, 0) };
    inline UpdateAccessConfigurationRequest& setNewSessionDuration(int32_t newSessionDuration) { DARABONBA_PTR_SET_VALUE(newSessionDuration_, newSessionDuration) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The new description of the access configuration.
    // 
    // The description can be up to 1,024 characters in length.
    shared_ptr<string> newDescription_ {};
    // The new initial web page
    // 
    // that is displayed after a CloudSSO user accesses an account in your resource directory by using the access configuration.
    // 
    // The web page must be a page of the Alibaba Cloud Management Console.
    shared_ptr<string> newRelayState_ {};
    // The new duration of a session
    // 
    // in which a CloudSSO user accesses an account in your resource directory by using the access configuration.
    // 
    // Unit: seconds.
    // 
    // Valid values: 900 to 43200. The value 900 indicates 15 minutes. The value 43200 indicates 12 hours.
    shared_ptr<int32_t> newSessionDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
