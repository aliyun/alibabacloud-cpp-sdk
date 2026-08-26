// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERIDEINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERIDEINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateServerIdeInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerIdeInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Datasets, datasetsShrink_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpcShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerIdeInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasetsShrink_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpcShrink_);
    };
    UpdateServerIdeInstanceShrinkRequest() = default ;
    UpdateServerIdeInstanceShrinkRequest(const UpdateServerIdeInstanceShrinkRequest &) = default ;
    UpdateServerIdeInstanceShrinkRequest(UpdateServerIdeInstanceShrinkRequest &&) = default ;
    UpdateServerIdeInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerIdeInstanceShrinkRequest() = default ;
    UpdateServerIdeInstanceShrinkRequest& operator=(const UpdateServerIdeInstanceShrinkRequest &) = default ;
    UpdateServerIdeInstanceShrinkRequest& operator=(UpdateServerIdeInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && this->cu_ == nullptr && this->datasetsShrink_ == nullptr && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->projectId_ == nullptr && this->userVpcShrink_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline UpdateServerIdeInstanceShrinkRequest& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // datasetsShrink Field Functions 
    bool hasDatasetsShrink() const { return this->datasetsShrink_ != nullptr;};
    void deleteDatasetsShrink() { this->datasetsShrink_ = nullptr;};
    inline string getDatasetsShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetsShrink_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setDatasetsShrink(string datasetsShrink) { DARABONBA_PTR_SET_VALUE(datasetsShrink_, datasetsShrink) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateServerIdeInstanceShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userVpcShrink Field Functions 
    bool hasUserVpcShrink() const { return this->userVpcShrink_ != nullptr;};
    void deleteUserVpcShrink() { this->userVpcShrink_ = nullptr;};
    inline string getUserVpcShrink() const { DARABONBA_PTR_GET_DEFAULT(userVpcShrink_, "") };
    inline UpdateServerIdeInstanceShrinkRequest& setUserVpcShrink(string userVpcShrink) { DARABONBA_PTR_SET_VALUE(userVpcShrink_, userVpcShrink) };


  protected:
    // The credential injection configuration for the instance. After this feature is enabled, you can use the default RAM role chain or specify a custom RAM role.
    shared_ptr<string> credentialConfigShrink_ {};
    // The number of CUs used by the instance.
    shared_ptr<int32_t> cu_ {};
    // The list of datasets mounted to the instance.
    shared_ptr<string> datasetsShrink_ {};
    // The image ID. You can call ListServerIdeImages to obtain the ID.
    shared_ptr<string> imageId_ {};
    // The image URL. This parameter is required when you use a non-DataWorks official image.
    shared_ptr<string> imageUrl_ {};
    // The personal development environment instance ID. You can call ListServerIdeInstances to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the personal development environment instance.
    shared_ptr<string> instanceName_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The VPC configuration used by the instance.
    shared_ptr<string> userVpcShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
