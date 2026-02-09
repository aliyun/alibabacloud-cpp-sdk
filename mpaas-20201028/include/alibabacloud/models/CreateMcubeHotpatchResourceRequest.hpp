// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEHOTPATCHRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEHOTPATCHRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeHotpatchResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeHotpatchResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FixDesc, fixDesc_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeHotpatchResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FixDesc, fixDesc_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMcubeHotpatchResourceRequest() = default ;
    CreateMcubeHotpatchResourceRequest(const CreateMcubeHotpatchResourceRequest &) = default ;
    CreateMcubeHotpatchResourceRequest(CreateMcubeHotpatchResourceRequest &&) = default ;
    CreateMcubeHotpatchResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeHotpatchResourceRequest() = default ;
    CreateMcubeHotpatchResourceRequest& operator=(const CreateMcubeHotpatchResourceRequest &) = default ;
    CreateMcubeHotpatchResourceRequest& operator=(CreateMcubeHotpatchResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->fileUrl_ == nullptr && this->fixDesc_ == nullptr && this->onexFlag_ == nullptr && this->platform_ == nullptr && this->productVersion_ == nullptr
        && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMcubeHotpatchResourceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateMcubeHotpatchResourceRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // fixDesc Field Functions 
    bool hasFixDesc() const { return this->fixDesc_ != nullptr;};
    void deleteFixDesc() { this->fixDesc_ = nullptr;};
    inline string getFixDesc() const { DARABONBA_PTR_GET_DEFAULT(fixDesc_, "") };
    inline CreateMcubeHotpatchResourceRequest& setFixDesc(string fixDesc) { DARABONBA_PTR_SET_VALUE(fixDesc_, fixDesc) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool getOnexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline CreateMcubeHotpatchResourceRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateMcubeHotpatchResourceRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline CreateMcubeHotpatchResourceRequest& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMcubeHotpatchResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMcubeHotpatchResourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    shared_ptr<string> fixDesc_ {};
    // This parameter is required.
    shared_ptr<bool> onexFlag_ {};
    // This parameter is required.
    shared_ptr<string> platform_ {};
    // This parameter is required.
    shared_ptr<string> productVersion_ {};
    shared_ptr<string> tenantId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
