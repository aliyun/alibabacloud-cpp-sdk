// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLCLOUDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLCLOUDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UninstallCloudAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallCloudAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallCloudAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    UninstallCloudAppRequest() = default ;
    UninstallCloudAppRequest(const UninstallCloudAppRequest &) = default ;
    UninstallCloudAppRequest(UninstallCloudAppRequest &&) = default ;
    UninstallCloudAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallCloudAppRequest() = default ;
    UninstallCloudAppRequest& operator=(const UninstallCloudAppRequest &) = default ;
    UninstallCloudAppRequest& operator=(UninstallCloudAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->patchId_ == nullptr && this->projectId_ == nullptr && this->renderingInstanceId_ == nullptr
        && this->renderingInstanceIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UninstallCloudAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline UninstallCloudAppRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline UninstallCloudAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline UninstallCloudAppRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UninstallCloudAppRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UninstallCloudAppRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline UninstallCloudAppRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline UninstallCloudAppRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // The ID of the cloud application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The page number for instance associations in a project. By default, a paged query sorts results in descending order of instance association time. This parameter is valid only when ProjectId is not empty. It limits the maximum number of instances on which the action is executed in the project to control the impact scope of the action. Default value: 1.
    // 1. Valid values of PageNumber:
    //   a. [Recommended] Method 1: Calculate the upper limit based on the total number of instances associated with the project. You can call the ListRenderingProjectInstances operation to obtain the total number.
    //   b. Method 2: Determine whether PageNumber reaches the upper limit for the project based on the response. [Advantage: No need to calculate the valid value range]. PageNumber reaches the upper limit if the response meets any of the following conditions:
    //     i. The response returns HTTP status code 403 and error code 200301.
    //     ii. The sum of SuccessInstanceCount and FailedInstanceCount in the response is less than PageSize.
    // 2. Scenario example:
    //   a. Uninstall instances in a project in full: If the number of instances in the project is greater than PageSize (default value: 100), you can call the Uninstall operation multiple times and increment PageNumber by 1 each time to uninstall all instances. You can call the ListCloudAppInstallations operation to query the uninstallation progress of the instances in the project.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of selected instances in a project. This parameter is valid only when ProjectId is not empty. It limits the maximum number of instances on which the action is executed in the project to control the impact scope of the action. Default value: 100. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the patch package to uninstall. This parameter is supported only in Windows scenarios.
    // 1. By default, the StablePatchId is uninstalled.
    // 2. If you set this parameter to origin, the original version is uninstalled.
    // 3. If you set this parameter to all, all installed versions are uninstalled.
    shared_ptr<string> patchId_ {};
    // The ID of the project.
    shared_ptr<string> projectId_ {};
    // The cloud application service instance ID.
    shared_ptr<string> renderingInstanceId_ {};
    // The list of cloud application service instance IDs.
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
