// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODY_HPP_
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
  class GetMcubeUpgradeTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetTaskResult, getTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetTaskResult, getTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeUpgradeTaskInfoResponseBody() = default ;
    GetMcubeUpgradeTaskInfoResponseBody(const GetMcubeUpgradeTaskInfoResponseBody &) = default ;
    GetMcubeUpgradeTaskInfoResponseBody(GetMcubeUpgradeTaskInfoResponseBody &&) = default ;
    GetMcubeUpgradeTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradeTaskInfoResponseBody() = default ;
    GetMcubeUpgradeTaskInfoResponseBody& operator=(const GetMcubeUpgradeTaskInfoResponseBody &) = default ;
    GetMcubeUpgradeTaskInfoResponseBody& operator=(GetMcubeUpgradeTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetTaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetTaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      };
      friend void from_json(const Darabonba::Json& j, GetTaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      };
      GetTaskResult() = default ;
      GetTaskResult(const GetTaskResult &) = default ;
      GetTaskResult(GetTaskResult &&) = default ;
      GetTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetTaskResult() = default ;
      GetTaskResult& operator=(const GetTaskResult &) = default ;
      GetTaskResult& operator=(GetTaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppstoreUrl, appstoreUrl_);
          DARABONBA_PTR_TO_JSON(Creater, creater_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_TO_JSON(HistoryForce, historyForce_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
          DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
          DARABONBA_PTR_TO_JSON(IsRc, isRc_);
          DARABONBA_PTR_TO_JSON(IsRelease, isRelease_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
          DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_TO_JSON(PublishType, publishType_);
          DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
          DARABONBA_PTR_TO_JSON(QrcodeUrl, qrcodeUrl_);
          DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
          DARABONBA_PTR_TO_JSON(SilentType, silentType_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
          DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
          DARABONBA_PTR_TO_JSON(UpgradeValidTime, upgradeValidTime_);
          DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
          DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppstoreUrl, appstoreUrl_);
          DARABONBA_PTR_FROM_JSON(Creater, creater_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
          DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
          DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
          DARABONBA_PTR_FROM_JSON(HistoryForce, historyForce_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
          DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
          DARABONBA_PTR_FROM_JSON(IsRc, isRc_);
          DARABONBA_PTR_FROM_JSON(IsRelease, isRelease_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
          DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
          DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
          DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
          DARABONBA_PTR_FROM_JSON(QrcodeUrl, qrcodeUrl_);
          DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
          DARABONBA_PTR_FROM_JSON(SilentType, silentType_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
          DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
          DARABONBA_PTR_FROM_JSON(UpgradeValidTime, upgradeValidTime_);
          DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
          DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
        class Whitelist : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Whitelist& obj) { 
            DARABONBA_PTR_TO_JSON(AppCode, appCode_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IdType, idType_);
            DARABONBA_PTR_TO_JSON(Platform, platform_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(UserType, userType_);
            DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
            DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
            DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
          };
          friend void from_json(const Darabonba::Json& j, Whitelist& obj) { 
            DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IdType, idType_);
            DARABONBA_PTR_FROM_JSON(Platform, platform_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(UserType, userType_);
            DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
            DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
            DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
          };
          Whitelist() = default ;
          Whitelist(const Whitelist &) = default ;
          Whitelist(Whitelist &&) = default ;
          Whitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Whitelist() = default ;
          Whitelist& operator=(const Whitelist &) = default ;
          Whitelist& operator=(Whitelist &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appCode_ == nullptr
        && this->id_ == nullptr && this->idType_ == nullptr && this->platform_ == nullptr && this->status_ == nullptr && this->userType_ == nullptr
        && this->whiteListCount_ == nullptr && this->whiteListName_ == nullptr && this->whitelistType_ == nullptr; };
          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline Whitelist& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Whitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // idType Field Functions 
          bool hasIdType() const { return this->idType_ != nullptr;};
          void deleteIdType() { this->idType_ = nullptr;};
          inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
          inline Whitelist& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


          // platform Field Functions 
          bool hasPlatform() const { return this->platform_ != nullptr;};
          void deletePlatform() { this->platform_ = nullptr;};
          inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
          inline Whitelist& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Whitelist& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // userType Field Functions 
          bool hasUserType() const { return this->userType_ != nullptr;};
          void deleteUserType() { this->userType_ = nullptr;};
          inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
          inline Whitelist& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


          // whiteListCount Field Functions 
          bool hasWhiteListCount() const { return this->whiteListCount_ != nullptr;};
          void deleteWhiteListCount() { this->whiteListCount_ = nullptr;};
          inline int64_t getWhiteListCount() const { DARABONBA_PTR_GET_DEFAULT(whiteListCount_, 0L) };
          inline Whitelist& setWhiteListCount(int64_t whiteListCount) { DARABONBA_PTR_SET_VALUE(whiteListCount_, whiteListCount) };


          // whiteListName Field Functions 
          bool hasWhiteListName() const { return this->whiteListName_ != nullptr;};
          void deleteWhiteListName() { this->whiteListName_ = nullptr;};
          inline string getWhiteListName() const { DARABONBA_PTR_GET_DEFAULT(whiteListName_, "") };
          inline Whitelist& setWhiteListName(string whiteListName) { DARABONBA_PTR_SET_VALUE(whiteListName_, whiteListName) };


          // whitelistType Field Functions 
          bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
          void deleteWhitelistType() { this->whitelistType_ = nullptr;};
          inline string getWhitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
          inline Whitelist& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


        protected:
          shared_ptr<string> appCode_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> idType_ {};
          shared_ptr<string> platform_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> userType_ {};
          shared_ptr<int64_t> whiteListCount_ {};
          shared_ptr<string> whiteListName_ {};
          shared_ptr<string> whitelistType_ {};
        };

        class RuleJsonList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleJsonList& obj) { 
            DARABONBA_PTR_TO_JSON(Operation, operation_);
            DARABONBA_PTR_TO_JSON(RuleElement, ruleElement_);
            DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RuleJsonList& obj) { 
            DARABONBA_PTR_FROM_JSON(Operation, operation_);
            DARABONBA_PTR_FROM_JSON(RuleElement, ruleElement_);
            DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RuleJsonList() = default ;
          RuleJsonList(const RuleJsonList &) = default ;
          RuleJsonList(RuleJsonList &&) = default ;
          RuleJsonList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleJsonList() = default ;
          RuleJsonList& operator=(const RuleJsonList &) = default ;
          RuleJsonList& operator=(RuleJsonList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->operation_ == nullptr
        && this->ruleElement_ == nullptr && this->ruleType_ == nullptr && this->value_ == nullptr; };
          // operation Field Functions 
          bool hasOperation() const { return this->operation_ != nullptr;};
          void deleteOperation() { this->operation_ = nullptr;};
          inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
          inline RuleJsonList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


          // ruleElement Field Functions 
          bool hasRuleElement() const { return this->ruleElement_ != nullptr;};
          void deleteRuleElement() { this->ruleElement_ = nullptr;};
          inline string getRuleElement() const { DARABONBA_PTR_GET_DEFAULT(ruleElement_, "") };
          inline RuleJsonList& setRuleElement(string ruleElement) { DARABONBA_PTR_SET_VALUE(ruleElement_, ruleElement) };


          // ruleType Field Functions 
          bool hasRuleType() const { return this->ruleType_ != nullptr;};
          void deleteRuleType() { this->ruleType_ = nullptr;};
          inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
          inline RuleJsonList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RuleJsonList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> operation_ {};
          shared_ptr<string> ruleElement_ {};
          shared_ptr<string> ruleType_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appId_ == nullptr && this->appstoreUrl_ == nullptr && this->creater_ == nullptr && this->creator_ == nullptr && this->downloadUrl_ == nullptr
        && this->greyConfigInfo_ == nullptr && this->greyEndtimeData_ == nullptr && this->greyNum_ == nullptr && this->historyForce_ == nullptr && this->id_ == nullptr
        && this->isEnterprise_ == nullptr && this->isOfficial_ == nullptr && this->isRc_ == nullptr && this->isRelease_ == nullptr && this->memo_ == nullptr
        && this->modifier_ == nullptr && this->netType_ == nullptr && this->osVersion_ == nullptr && this->packageInfoId_ == nullptr && this->packageType_ == nullptr
        && this->platform_ == nullptr && this->productId_ == nullptr && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->pushContent_ == nullptr
        && this->qrcodeUrl_ == nullptr && this->ruleJsonList_ == nullptr && this->silentType_ == nullptr && this->taskStatus_ == nullptr && this->upgradeContent_ == nullptr
        && this->upgradeType_ == nullptr && this->upgradeValidTime_ == nullptr && this->whitelist_ == nullptr && this->whitelistIds_ == nullptr && this->workspaceId_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline TaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline TaskInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appstoreUrl Field Functions 
        bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
        void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
        inline string getAppstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
        inline TaskInfo& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


        // creater Field Functions 
        bool hasCreater() const { return this->creater_ != nullptr;};
        void deleteCreater() { this->creater_ = nullptr;};
        inline string getCreater() const { DARABONBA_PTR_GET_DEFAULT(creater_, "") };
        inline TaskInfo& setCreater(string creater) { DARABONBA_PTR_SET_VALUE(creater_, creater) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline TaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline TaskInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // greyConfigInfo Field Functions 
        bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
        void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
        inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
        inline TaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


        // greyEndtimeData Field Functions 
        bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
        void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
        inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
        inline TaskInfo& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


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


        // isOfficial Field Functions 
        bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
        void deleteIsOfficial() { this->isOfficial_ = nullptr;};
        inline int32_t getIsOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, 0) };
        inline TaskInfo& setIsOfficial(int32_t isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


        // isRc Field Functions 
        bool hasIsRc() const { return this->isRc_ != nullptr;};
        void deleteIsRc() { this->isRc_ = nullptr;};
        inline int32_t getIsRc() const { DARABONBA_PTR_GET_DEFAULT(isRc_, 0) };
        inline TaskInfo& setIsRc(int32_t isRc) { DARABONBA_PTR_SET_VALUE(isRc_, isRc) };


        // isRelease Field Functions 
        bool hasIsRelease() const { return this->isRelease_ != nullptr;};
        void deleteIsRelease() { this->isRelease_ = nullptr;};
        inline int32_t getIsRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0) };
        inline TaskInfo& setIsRelease(int32_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


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


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline TaskInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // osVersion Field Functions 
        bool hasOsVersion() const { return this->osVersion_ != nullptr;};
        void deleteOsVersion() { this->osVersion_ = nullptr;};
        inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
        inline TaskInfo& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


        // packageInfoId Field Functions 
        bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
        void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
        inline int64_t getPackageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
        inline TaskInfo& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline TaskInfo& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


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


        // qrcodeUrl Field Functions 
        bool hasQrcodeUrl() const { return this->qrcodeUrl_ != nullptr;};
        void deleteQrcodeUrl() { this->qrcodeUrl_ = nullptr;};
        inline string getQrcodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrcodeUrl_, "") };
        inline TaskInfo& setQrcodeUrl(string qrcodeUrl) { DARABONBA_PTR_SET_VALUE(qrcodeUrl_, qrcodeUrl) };


        // ruleJsonList Field Functions 
        bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
        void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
        inline const vector<TaskInfo::RuleJsonList> & getRuleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<TaskInfo::RuleJsonList>) };
        inline vector<TaskInfo::RuleJsonList> getRuleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<TaskInfo::RuleJsonList>) };
        inline TaskInfo& setRuleJsonList(const vector<TaskInfo::RuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
        inline TaskInfo& setRuleJsonList(vector<TaskInfo::RuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


        // silentType Field Functions 
        bool hasSilentType() const { return this->silentType_ != nullptr;};
        void deleteSilentType() { this->silentType_ = nullptr;};
        inline int32_t getSilentType() const { DARABONBA_PTR_GET_DEFAULT(silentType_, 0) };
        inline TaskInfo& setSilentType(int32_t silentType) { DARABONBA_PTR_SET_VALUE(silentType_, silentType) };


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


        // upgradeValidTime Field Functions 
        bool hasUpgradeValidTime() const { return this->upgradeValidTime_ != nullptr;};
        void deleteUpgradeValidTime() { this->upgradeValidTime_ = nullptr;};
        inline int32_t getUpgradeValidTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeValidTime_, 0) };
        inline TaskInfo& setUpgradeValidTime(int32_t upgradeValidTime) { DARABONBA_PTR_SET_VALUE(upgradeValidTime_, upgradeValidTime) };


        // whitelist Field Functions 
        bool hasWhitelist() const { return this->whitelist_ != nullptr;};
        void deleteWhitelist() { this->whitelist_ = nullptr;};
        inline const vector<TaskInfo::Whitelist> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<TaskInfo::Whitelist>) };
        inline vector<TaskInfo::Whitelist> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<TaskInfo::Whitelist>) };
        inline TaskInfo& setWhitelist(const vector<TaskInfo::Whitelist> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
        inline TaskInfo& setWhitelist(vector<TaskInfo::Whitelist> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


        // whitelistIds Field Functions 
        bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
        void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
        inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
        inline TaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline TaskInfo& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<string> appstoreUrl_ {};
        shared_ptr<string> creater_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> greyConfigInfo_ {};
        shared_ptr<string> greyEndtimeData_ {};
        shared_ptr<int32_t> greyNum_ {};
        shared_ptr<int32_t> historyForce_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> isEnterprise_ {};
        shared_ptr<int32_t> isOfficial_ {};
        shared_ptr<int32_t> isRc_ {};
        shared_ptr<int32_t> isRelease_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> netType_ {};
        shared_ptr<string> osVersion_ {};
        shared_ptr<int64_t> packageInfoId_ {};
        shared_ptr<string> packageType_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<int32_t> publishMode_ {};
        shared_ptr<int32_t> publishType_ {};
        shared_ptr<string> pushContent_ {};
        shared_ptr<string> qrcodeUrl_ {};
        shared_ptr<vector<TaskInfo::RuleJsonList>> ruleJsonList_ {};
        shared_ptr<int32_t> silentType_ {};
        shared_ptr<int32_t> taskStatus_ {};
        shared_ptr<string> upgradeContent_ {};
        shared_ptr<int32_t> upgradeType_ {};
        shared_ptr<int32_t> upgradeValidTime_ {};
        shared_ptr<vector<TaskInfo::Whitelist>> whitelist_ {};
        shared_ptr<string> whitelistIds_ {};
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr && this->taskInfo_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline GetTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline GetTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline GetTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline GetTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskInfo Field Functions 
      bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
      void deleteTaskInfo() { this->taskInfo_ = nullptr;};
      inline const GetTaskResult::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, GetTaskResult::TaskInfo) };
      inline GetTaskResult::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, GetTaskResult::TaskInfo) };
      inline GetTaskResult& setTaskInfo(const GetTaskResult::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
      inline GetTaskResult& setTaskInfo(GetTaskResult::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<GetTaskResult::TaskInfo> taskInfo_ {};
    };

    virtual bool empty() const override { return this->getTaskResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // getTaskResult Field Functions 
    bool hasGetTaskResult() const { return this->getTaskResult_ != nullptr;};
    void deleteGetTaskResult() { this->getTaskResult_ = nullptr;};
    inline const GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult & getGetTaskResult() const { DARABONBA_PTR_GET_CONST(getTaskResult_, GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult) };
    inline GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult getGetTaskResult() { DARABONBA_PTR_GET(getTaskResult_, GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult) };
    inline GetMcubeUpgradeTaskInfoResponseBody& setGetTaskResult(const GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult & getTaskResult) { DARABONBA_PTR_SET_VALUE(getTaskResult_, getTaskResult) };
    inline GetMcubeUpgradeTaskInfoResponseBody& setGetTaskResult(GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult && getTaskResult) { DARABONBA_PTR_SET_RVALUE(getTaskResult_, getTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<GetMcubeUpgradeTaskInfoResponseBody::GetTaskResult> getTaskResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
