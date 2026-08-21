// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELDEPLOYMENTSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELDEPLOYMENTSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class GetModelDeploymentSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelDeploymentSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizKey, bizKey_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(ProfileId, profileId_);
      DARABONBA_PTR_TO_JSON(ResourceSelections, resourceSelections_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelDeploymentSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizKey, bizKey_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(ProfileId, profileId_);
      DARABONBA_PTR_FROM_JSON(ResourceSelections, resourceSelections_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetModelDeploymentSpecRequest() = default ;
    GetModelDeploymentSpecRequest(const GetModelDeploymentSpecRequest &) = default ;
    GetModelDeploymentSpecRequest(GetModelDeploymentSpecRequest &&) = default ;
    GetModelDeploymentSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelDeploymentSpecRequest() = default ;
    GetModelDeploymentSpecRequest& operator=(const GetModelDeploymentSpecRequest &) = default ;
    GetModelDeploymentSpecRequest& operator=(GetModelDeploymentSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizKey_ == nullptr
        && this->modelVersion_ == nullptr && this->profileId_ == nullptr && this->resourceSelections_ == nullptr && this->workspaceId_ == nullptr; };
    // bizKey Field Functions 
    bool hasBizKey() const { return this->bizKey_ != nullptr;};
    void deleteBizKey() { this->bizKey_ = nullptr;};
    inline string getBizKey() const { DARABONBA_PTR_GET_DEFAULT(bizKey_, "") };
    inline GetModelDeploymentSpecRequest& setBizKey(string bizKey) { DARABONBA_PTR_SET_VALUE(bizKey_, bizKey) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline GetModelDeploymentSpecRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // profileId Field Functions 
    bool hasProfileId() const { return this->profileId_ != nullptr;};
    void deleteProfileId() { this->profileId_ = nullptr;};
    inline string getProfileId() const { DARABONBA_PTR_GET_DEFAULT(profileId_, "") };
    inline GetModelDeploymentSpecRequest& setProfileId(string profileId) { DARABONBA_PTR_SET_VALUE(profileId_, profileId) };


    // resourceSelections Field Functions 
    bool hasResourceSelections() const { return this->resourceSelections_ != nullptr;};
    void deleteResourceSelections() { this->resourceSelections_ = nullptr;};
    inline string getResourceSelections() const { DARABONBA_PTR_GET_DEFAULT(resourceSelections_, "") };
    inline GetModelDeploymentSpecRequest& setResourceSelections(string resourceSelections) { DARABONBA_PTR_SET_VALUE(resourceSelections_, resourceSelections) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetModelDeploymentSpecRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> bizKey_ {};
    // This parameter is required.
    shared_ptr<string> modelVersion_ {};
    // This parameter is required.
    shared_ptr<string> profileId_ {};
    shared_ptr<string> resourceSelections_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
