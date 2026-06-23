// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ListMcubeUpgradeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListTaskResult, listTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListTaskResult, listTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeUpgradeTasksResponseBody() = default ;
    ListMcubeUpgradeTasksResponseBody(const ListMcubeUpgradeTasksResponseBody &) = default ;
    ListMcubeUpgradeTasksResponseBody(ListMcubeUpgradeTasksResponseBody &&) = default ;
    ListMcubeUpgradeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradeTasksResponseBody() = default ;
    ListMcubeUpgradeTasksResponseBody& operator=(const ListMcubeUpgradeTasksResponseBody &) = default ;
    ListMcubeUpgradeTasksResponseBody& operator=(ListMcubeUpgradeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ListTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      };
      ListTaskResult() = default ;
      ListTaskResult(const ListTaskResult &) = default ;
      ListTaskResult(ListTaskResult &&) = default ;
      ListTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListTaskResult() = default ;
      ListTaskResult& operator=(const ListTaskResult &) = default ;
      ListTaskResult& operator=(ListTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_TO_JSON(HistoryForce, historyForce_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
          DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_FROM_JSON(HistoryForce, historyForce_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
          DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
        };
        TaskInfo() = default ;
        TaskInfo(const TaskInfo &) = default ;
        TaskInfo(TaskInfo &&) = default ;
        TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskInfo() = default ;
        TaskInfo& operator=(const TaskInfo &) = default ;
        TaskInfo& operator=(TaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->greyConfigInfo_ == nullptr && this->greyEndtime_ == nullptr
        && this->greyNum_ == nullptr && this->historyForce_ == nullptr && this->id_ == nullptr && this->isEnterprise_ == nullptr && this->memo_ == nullptr
        && this->modifier_ == nullptr && this->packageInfoId_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr
        && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->pushContent_ == nullptr && this->taskStatus_ == nullptr && this->upgradeContent_ == nullptr
        && this->upgradeType_ == nullptr && this->whitelistIds_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline TaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline TaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline TaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtime Field Functions 
        bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
        void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
        inline string getGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
        inline TaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int32_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
        inline TaskInfo& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // historyForce Field Functions 
        bool hasHistoryForce() const { return this->historyForce_ != nullptr;};
        void deleteHistoryForce() { this->historyForce_ = nullptr;};
        inline int32_t getHistoryForce() const { DARABONBA_PTR_GET_DEFAULT(historyForce_, 0) };
        inline TaskInfo& setHistoryForce(int32_t historyForce) { DARABONBA_PTR_SET_VALUE(historyForce_, historyForce) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isEnterprise Field Functions 
        bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
        void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
        inline int32_t getIsEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
        inline TaskInfo& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline TaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline TaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageInfoId Field Functions 
        bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
        void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
        inline int64_t getPackageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
        inline TaskInfo& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline TaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline TaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline TaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int32_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
        inline TaskInfo& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int32_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
        inline TaskInfo& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // pushContent Field Functions 
        bool hasPushContent() const { return this->pushContent_ != nullptr;};
        void deletePushContent() { this->pushContent_ = nullptr;};
        inline string getPushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
        inline TaskInfo& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
        inline TaskInfo& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // upgradeContent Field Functions 
        bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
        void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
        inline string getUpgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
        inline TaskInfo& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


        // upgradeType Field Functions 
        bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
        void deleteUpgradeType() { this->upgradeType_ = nullptr;};
        inline int32_t getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0) };
        inline TaskInfo& setUpgradeType(int32_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline TaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtime_ {};
        shared_ptr<int32_t> greyNum_ {};
        shared_ptr<int32_t> historyForce_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> isEnterprise_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int64_t> packageInfoId_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int32_t> publishMode_ {};
        shared_ptr<int32_t> publishType_ {};
        shared_ptr<string> pushContent_ {};
        shared_ptr<int32_t> taskStatus_ {};
        shared_ptr<string> upgradeContent_ {};
        shared_ptr<int32_t> upgradeType_ {};
        shared_ptr<string> whitelistIds_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr && this->taskInfo_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskInfo Field Functions 
      bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
      void deleteTaskInfo() { this->taskInfo_ = nullptr;};
      inline const vector<ListTaskResult::TaskInfo> & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<ListTaskResult::TaskInfo>) };
      inline vector<ListTaskResult::TaskInfo> getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<ListTaskResult::TaskInfo>) };
      inline ListTaskResult& setTaskInfo(const vector<ListTaskResult::TaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
      inline ListTaskResult& setTaskInfo(vector<ListTaskResult::TaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<vector<ListTaskResult::TaskInfo>> taskInfo_ {};
    };

    virtual bool empty() const override { return this->listTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listTaskResult Field Functions 
    bool hasListTaskResult() const { return this->listTaskResult_ != nullptr;};
    void deleteListTaskResult() { this->listTaskResult_ = nullptr;};
    inline const ListMcubeUpgradeTasksResponseBody::ListTaskResult & getListTaskResult() const { DARABONBA_PTR_GET_CONST(listTaskResult_, ListMcubeUpgradeTasksResponseBody::ListTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody::ListTaskResult getListTaskResult() { DARABONBA_PTR_GET(listTaskResult_, ListMcubeUpgradeTasksResponseBody::ListTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody& setListTaskResult(const ListMcubeUpgradeTasksResponseBody::ListTaskResult & listTaskResult) { DARABONBA_PTR_SET_VALUE(listTaskResult_, listTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody& setListTaskResult(ListMcubeUpgradeTasksResponseBody::ListTaskResult && listTaskResult) { DARABONBA_PTR_SET_RVALUE(listTaskResult_, listTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeUpgradeTasksResponseBody::ListTaskResult> listTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
