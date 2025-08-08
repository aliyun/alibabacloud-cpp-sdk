// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMDSMINIPROGRAMTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMDSMINIPROGRAMTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMdsMiniprogramTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMdsMiniprogramTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMdsMiniprogramTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMdsMiniprogramTaskRequest() = default ;
    CreateMdsMiniprogramTaskRequest(const CreateMdsMiniprogramTaskRequest &) = default ;
    CreateMdsMiniprogramTaskRequest(CreateMdsMiniprogramTaskRequest &&) = default ;
    CreateMdsMiniprogramTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMdsMiniprogramTaskRequest() = default ;
    CreateMdsMiniprogramTaskRequest& operator=(const CreateMdsMiniprogramTaskRequest &) = default ;
    CreateMdsMiniprogramTaskRequest& operator=(CreateMdsMiniprogramTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->greyConfigInfo_ != nullptr && this->greyEndtimeData_ != nullptr && this->greyNum_ != nullptr && this->id_ != nullptr && this->memo_ != nullptr
        && this->packageId_ != nullptr && this->publishMode_ != nullptr && this->publishType_ != nullptr && this->syncMode_ != nullptr && this->tenantId_ != nullptr
        && this->whitelistIds_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMdsMiniprogramTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline CreateMdsMiniprogramTaskRequest& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtimeData Field Functions 
    bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
    void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
    inline string greyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
    inline CreateMdsMiniprogramTaskRequest& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline string greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, "") };
    inline CreateMdsMiniprogramTaskRequest& setGreyNum(string greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateMdsMiniprogramTaskRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CreateMdsMiniprogramTaskRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline int64_t packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
    inline CreateMdsMiniprogramTaskRequest& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline string publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, "") };
    inline CreateMdsMiniprogramTaskRequest& setPublishMode(string publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int64_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
    inline CreateMdsMiniprogramTaskRequest& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline string syncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
    inline CreateMdsMiniprogramTaskRequest& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMdsMiniprogramTaskRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline CreateMdsMiniprogramTaskRequest& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMdsMiniprogramTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtimeData_ = nullptr;
    std::shared_ptr<string> greyNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> packageId_ = nullptr;
    std::shared_ptr<string> publishMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> publishType_ = nullptr;
    std::shared_ptr<string> syncMode_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
