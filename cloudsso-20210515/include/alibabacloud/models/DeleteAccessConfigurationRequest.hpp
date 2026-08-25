// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(ForceRemovePermissionPolicies, forceRemovePermissionPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(ForceRemovePermissionPolicies, forceRemovePermissionPolicies_);
    };
    DeleteAccessConfigurationRequest() = default ;
    DeleteAccessConfigurationRequest(const DeleteAccessConfigurationRequest &) = default ;
    DeleteAccessConfigurationRequest(DeleteAccessConfigurationRequest &&) = default ;
    DeleteAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessConfigurationRequest() = default ;
    DeleteAccessConfigurationRequest& operator=(const DeleteAccessConfigurationRequest &) = default ;
    DeleteAccessConfigurationRequest& operator=(DeleteAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->forceRemovePermissionPolicies_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline DeleteAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // forceRemovePermissionPolicies Field Functions 
    bool hasForceRemovePermissionPolicies() const { return this->forceRemovePermissionPolicies_ != nullptr;};
    void deleteForceRemovePermissionPolicies() { this->forceRemovePermissionPolicies_ = nullptr;};
    inline bool getForceRemovePermissionPolicies() const { DARABONBA_PTR_GET_DEFAULT(forceRemovePermissionPolicies_, false) };
    inline DeleteAccessConfigurationRequest& setForceRemovePermissionPolicies(bool forceRemovePermissionPolicies) { DARABONBA_PTR_SET_VALUE(forceRemovePermissionPolicies_, forceRemovePermissionPolicies) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // Specifies whether to forcibly remove system policies and inline policies. Valid values:
    // 
    // - true: When you delete the access configuration, the associated system policies and inline policies are forcibly removed.
    // 
    // - false: When you delete the access configuration, the associated system policies and inline policies are not forcibly removed. This is the default value. If these policies exist in the access configuration, the deletion fails. Before you delete the access configuration, you must remove the system policies and inline policies. For more information, see [RemovePermissionPolicyFromAccessConfiguration](https://help.aliyun.com/document_detail/336904.html).
    shared_ptr<bool> forceRemovePermissionPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
