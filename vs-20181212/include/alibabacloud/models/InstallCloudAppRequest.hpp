// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLOUDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLOUDAPPREQUEST_HPP_
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
  class InstallCloudAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallCloudAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, InstallCloudAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    InstallCloudAppRequest() = default ;
    InstallCloudAppRequest(const InstallCloudAppRequest &) = default ;
    InstallCloudAppRequest(InstallCloudAppRequest &&) = default ;
    InstallCloudAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallCloudAppRequest() = default ;
    InstallCloudAppRequest& operator=(const InstallCloudAppRequest &) = default ;
    InstallCloudAppRequest& operator=(InstallCloudAppRequest &&) = default ;
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
    inline InstallCloudAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline InstallCloudAppRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline InstallCloudAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline InstallCloudAppRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline InstallCloudAppRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline InstallCloudAppRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline InstallCloudAppRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline InstallCloudAppRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> patchId_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
