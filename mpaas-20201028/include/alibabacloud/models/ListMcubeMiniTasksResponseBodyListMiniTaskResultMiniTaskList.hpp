// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINITASKSRESPONSEBODYLISTMINITASKRESULTMINITASKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINITASKSRESPONSEBODYLISTMINITASKRESULTMINITASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
    };
    ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList() = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList(const ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList &) = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList(ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList &&) = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList() = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& operator=(const ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList &) = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& operator=(ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCode_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->greyConfigInfo_ != nullptr && this->greyEndtime_ != nullptr && this->greyEndtimeData_ != nullptr
        && this->greyNum_ != nullptr && this->id_ != nullptr && this->memo_ != nullptr && this->packageId_ != nullptr && this->platform_ != nullptr
        && this->productVersion_ != nullptr && this->publishMode_ != nullptr && this->publishType_ != nullptr && this->status_ != nullptr && this->taskStatus_ != nullptr
        && this->whitelistIds_ != nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtime Field Functions 
    bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
    void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
    inline string greyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


    // greyEndtimeData Field Functions 
    bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
    void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
    inline string greyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline int64_t greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0L) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setGreyNum(int64_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline int64_t packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline int64_t publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0L) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setPublishMode(int64_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int64_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int64_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0L) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setTaskStatus(int64_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtime_ = nullptr;
    std::shared_ptr<string> greyEndtimeData_ = nullptr;
    std::shared_ptr<int64_t> greyNum_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<int64_t> packageId_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int64_t> publishMode_ = nullptr;
    std::shared_ptr<int64_t> publishType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> taskStatus_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
