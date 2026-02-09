// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEHOTPATCHTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEHOTPATCHTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeHotpatchTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeHotpatchTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListHotpatchTasksResult, listHotpatchTasksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeHotpatchTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListHotpatchTasksResult, listHotpatchTasksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeHotpatchTasksResponseBody() = default ;
    ListMcubeHotpatchTasksResponseBody(const ListMcubeHotpatchTasksResponseBody &) = default ;
    ListMcubeHotpatchTasksResponseBody(ListMcubeHotpatchTasksResponseBody &&) = default ;
    ListMcubeHotpatchTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeHotpatchTasksResponseBody() = default ;
    ListMcubeHotpatchTasksResponseBody& operator=(const ListMcubeHotpatchTasksResponseBody &) = default ;
    ListMcubeHotpatchTasksResponseBody& operator=(ListMcubeHotpatchTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListHotpatchTasksResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListHotpatchTasksResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HotpatchTaskInfo, hotpatchTaskInfo_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ListHotpatchTasksResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HotpatchTaskInfo, hotpatchTaskInfo_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ListHotpatchTasksResult() = default ;
      ListHotpatchTasksResult(const ListHotpatchTasksResult &) = default ;
      ListHotpatchTasksResult(ListHotpatchTasksResult &&) = default ;
      ListHotpatchTasksResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListHotpatchTasksResult() = default ;
      ListHotpatchTasksResult& operator=(const ListHotpatchTasksResult &) = default ;
      ListHotpatchTasksResult& operator=(ListHotpatchTasksResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotpatchTaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotpatchTaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_TO_JSON(ResIds, resIds_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
        };
        friend void from_json(const Darabonba::Json& j, HotpatchTaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
          DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_FROM_JSON(ResIds, resIds_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
        };
        HotpatchTaskInfo() = default ;
        HotpatchTaskInfo(const HotpatchTaskInfo &) = default ;
        HotpatchTaskInfo(HotpatchTaskInfo &&) = default ;
        HotpatchTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotpatchTaskInfo() = default ;
        HotpatchTaskInfo& operator=(const HotpatchTaskInfo &) = default ;
        HotpatchTaskInfo& operator=(HotpatchTaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->gmtModifiedStr_ == nullptr && this->greyConfigInfo_ == nullptr
        && this->greyEndtime_ == nullptr && this->greyEndtimeData_ == nullptr && this->greyNum_ == nullptr && this->id_ == nullptr && this->memo_ == nullptr
        && this->modifier_ == nullptr && this->packageId_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr
        && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->releaseVersion_ == nullptr && this->resIds_ == nullptr && this->taskStatus_ == nullptr
        && this->whitelistIds_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline HotpatchTaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline HotpatchTaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline HotpatchTaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline HotpatchTaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gmtModifiedStr Field Functions 
        bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
        void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
        inline string getGmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
        inline HotpatchTaskInfo& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline HotpatchTaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtime Field Functions 
        bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
        void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
        inline string getGreyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
        inline HotpatchTaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


        // greyEndtimeData Field Functions 
        bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
        void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
        inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
        inline HotpatchTaskInfo& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


        // greyNum Field Functions 
        bool hasGreyNum() const { return this->greyNum_ != nullptr;};
        void deleteGreyNum() { this->greyNum_ = nullptr;};
        inline int64_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0L) };
        inline HotpatchTaskInfo& setGreyNum(int64_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline HotpatchTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline HotpatchTaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline HotpatchTaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
        inline HotpatchTaskInfo& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline HotpatchTaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline HotpatchTaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline HotpatchTaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishMode Field Functions 
        bool hasPublishMode() const { return this->publishMode_ != nullptr;};
        void deletePublishMode() { this->publishMode_ = nullptr;};
        inline int64_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0L) };
        inline HotpatchTaskInfo& setPublishMode(int64_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


        // publishType Field Functions 
        bool hasPublishType() const { return this->publishType_ != nullptr;};
        void deletePublishType() { this->publishType_ = nullptr;};
        inline int64_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
        inline HotpatchTaskInfo& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


        // releaseVersion Field Functions 
        bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
        void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
        inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
        inline HotpatchTaskInfo& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


        // resIds Field Functions 
        bool hasResIds() const { return this->resIds_ != nullptr;};
        void deleteResIds() { this->resIds_ = nullptr;};
        inline string getResIds() const { DARABONBA_PTR_GET_DEFAULT(resIds_, "") };
        inline HotpatchTaskInfo& setResIds(string resIds) { DARABONBA_PTR_SET_VALUE(resIds_, resIds) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline int64_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0L) };
        inline HotpatchTaskInfo& setTaskStatus(int64_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline HotpatchTaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> gmtModifiedStr_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtime_ {};
        shared_ptr<string> greyEndtimeData_ {};
        shared_ptr<int64_t> greyNum_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int64_t> packageId_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int64_t> publishMode_ {};
        shared_ptr<int64_t> publishType_ {};
        shared_ptr<string> releaseVersion_ {};
        shared_ptr<string> resIds_ {};
        shared_ptr<int64_t> taskStatus_ {};
        shared_ptr<string> whitelistIds_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->hotpatchTaskInfo_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListHotpatchTasksResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hotpatchTaskInfo Field Functions 
      bool hasHotpatchTaskInfo() const { return this->hotpatchTaskInfo_ != nullptr;};
      void deleteHotpatchTaskInfo() { this->hotpatchTaskInfo_ = nullptr;};
      inline const vector<ListHotpatchTasksResult::HotpatchTaskInfo> & getHotpatchTaskInfo() const { DARABONBA_PTR_GET_CONST(hotpatchTaskInfo_, vector<ListHotpatchTasksResult::HotpatchTaskInfo>) };
      inline vector<ListHotpatchTasksResult::HotpatchTaskInfo> getHotpatchTaskInfo() { DARABONBA_PTR_GET(hotpatchTaskInfo_, vector<ListHotpatchTasksResult::HotpatchTaskInfo>) };
      inline ListHotpatchTasksResult& setHotpatchTaskInfo(const vector<ListHotpatchTasksResult::HotpatchTaskInfo> & hotpatchTaskInfo) { DARABONBA_PTR_SET_VALUE(hotpatchTaskInfo_, hotpatchTaskInfo) };
      inline ListHotpatchTasksResult& setHotpatchTaskInfo(vector<ListHotpatchTasksResult::HotpatchTaskInfo> && hotpatchTaskInfo) { DARABONBA_PTR_SET_RVALUE(hotpatchTaskInfo_, hotpatchTaskInfo) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListHotpatchTasksResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListHotpatchTasksResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListHotpatchTasksResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<vector<ListHotpatchTasksResult::HotpatchTaskInfo>> hotpatchTaskInfo_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->listHotpatchTasksResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listHotpatchTasksResult Field Functions 
    bool hasListHotpatchTasksResult() const { return this->listHotpatchTasksResult_ != nullptr;};
    void deleteListHotpatchTasksResult() { this->listHotpatchTasksResult_ = nullptr;};
    inline const ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult & getListHotpatchTasksResult() const { DARABONBA_PTR_GET_CONST(listHotpatchTasksResult_, ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult) };
    inline ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult getListHotpatchTasksResult() { DARABONBA_PTR_GET(listHotpatchTasksResult_, ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult) };
    inline ListMcubeHotpatchTasksResponseBody& setListHotpatchTasksResult(const ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult & listHotpatchTasksResult) { DARABONBA_PTR_SET_VALUE(listHotpatchTasksResult_, listHotpatchTasksResult) };
    inline ListMcubeHotpatchTasksResponseBody& setListHotpatchTasksResult(ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult && listHotpatchTasksResult) { DARABONBA_PTR_SET_RVALUE(listHotpatchTasksResult_, listHotpatchTasksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeHotpatchTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeHotpatchTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeHotpatchTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeHotpatchTasksResponseBody::ListHotpatchTasksResult> listHotpatchTasksResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
