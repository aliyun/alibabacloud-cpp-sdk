// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ProvisionAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ProvisionAccessConfigurationRequest() = default ;
    ProvisionAccessConfigurationRequest(const ProvisionAccessConfigurationRequest &) = default ;
    ProvisionAccessConfigurationRequest(ProvisionAccessConfigurationRequest &&) = default ;
    ProvisionAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionAccessConfigurationRequest() = default ;
    ProvisionAccessConfigurationRequest& operator=(const ProvisionAccessConfigurationRequest &) = default ;
    ProvisionAccessConfigurationRequest& operator=(ProvisionAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->originTargetId_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline ProvisionAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ProvisionAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // originTargetId Field Functions 
    bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
    void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
    inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
    inline ProvisionAccessConfigurationRequest& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ProvisionAccessConfigurationRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ProvisionAccessConfigurationRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    shared_ptr<string> originTargetId_ {};
    // The ID of the task object.
    shared_ptr<string> targetId_ {};
    // The type of the task object. Set the value to RD-Account, which specifies the accounts in the resource directory.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
