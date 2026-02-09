// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODY_HPP_
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
  class QueryMdsUpgradeTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMdsUpgradeTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMdsUpgradeTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMdsUpgradeTaskDetailResponseBody() = default ;
    QueryMdsUpgradeTaskDetailResponseBody(const QueryMdsUpgradeTaskDetailResponseBody &) = default ;
    QueryMdsUpgradeTaskDetailResponseBody(QueryMdsUpgradeTaskDetailResponseBody &&) = default ;
    QueryMdsUpgradeTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMdsUpgradeTaskDetailResponseBody() = default ;
    QueryMdsUpgradeTaskDetailResponseBody& operator=(const QueryMdsUpgradeTaskDetailResponseBody &) = default ;
    QueryMdsUpgradeTaskDetailResponseBody& operator=(QueryMdsUpgradeTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(AppCode, appCode_);
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(Appstoreurl, appstoreurl_);
            DARABONBA_PTR_TO_JSON(ChannelContains, channelContains_);
            DARABONBA_PTR_TO_JSON(ChannelExcludes, channelExcludes_);
            DARABONBA_PTR_TO_JSON(CityContains, cityContains_);
            DARABONBA_PTR_TO_JSON(CityExcludes, cityExcludes_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(DeviceGreyNum, deviceGreyNum_);
            DARABONBA_PTR_TO_JSON(DevicePercent, devicePercent_);
            DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
            DARABONBA_PTR_TO_JSON(ExecutionOrder, executionOrder_);
            DARABONBA_PTR_TO_JSON(GmtCreateStr, gmtCreateStr_);
            DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
            DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
            DARABONBA_PTR_TO_JSON(GreyNotice, greyNotice_);
            DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
            DARABONBA_PTR_TO_JSON(GreyUv, greyUv_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InnerVersion, innerVersion_);
            DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
            DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
            DARABONBA_PTR_TO_JSON(IsPush, isPush_);
            DARABONBA_PTR_TO_JSON(IsRc, isRc_);
            DARABONBA_PTR_TO_JSON(IsRelease, isRelease_);
            DARABONBA_PTR_TO_JSON(Memo, memo_);
            DARABONBA_PTR_TO_JSON(MobileModelContains, mobileModelContains_);
            DARABONBA_PTR_TO_JSON(MobileModelExcludes, mobileModelExcludes_);
            DARABONBA_PTR_TO_JSON(Modifier, modifier_);
            DARABONBA_PTR_TO_JSON(NetType, netType_);
            DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
            DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
            DARABONBA_PTR_TO_JSON(PackageType, packageType_);
            DARABONBA_PTR_TO_JSON(Platform, platform_);
            DARABONBA_PTR_TO_JSON(ProductId, productId_);
            DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
            DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
            DARABONBA_PTR_TO_JSON(PublishType, publishType_);
            DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
            DARABONBA_PTR_TO_JSON(QrcodeUrl, qrcodeUrl_);
            DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
            DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
            DARABONBA_PTR_TO_JSON(SilentType, silentType_);
            DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
            DARABONBA_PTR_TO_JSON(SyncResult, syncResult_);
            DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
            DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
            DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
            DARABONBA_PTR_TO_JSON(UpgradeValidTime, upgradeValidTime_);
            DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
            DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(Appstoreurl, appstoreurl_);
            DARABONBA_PTR_FROM_JSON(ChannelContains, channelContains_);
            DARABONBA_PTR_FROM_JSON(ChannelExcludes, channelExcludes_);
            DARABONBA_PTR_FROM_JSON(CityContains, cityContains_);
            DARABONBA_PTR_FROM_JSON(CityExcludes, cityExcludes_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(DeviceGreyNum, deviceGreyNum_);
            DARABONBA_PTR_FROM_JSON(DevicePercent, devicePercent_);
            DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
            DARABONBA_PTR_FROM_JSON(ExecutionOrder, executionOrder_);
            DARABONBA_PTR_FROM_JSON(GmtCreateStr, gmtCreateStr_);
            DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
            DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
            DARABONBA_PTR_FROM_JSON(GreyNotice, greyNotice_);
            DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
            DARABONBA_PTR_FROM_JSON(GreyUv, greyUv_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InnerVersion, innerVersion_);
            DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
            DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
            DARABONBA_PTR_FROM_JSON(IsPush, isPush_);
            DARABONBA_PTR_FROM_JSON(IsRc, isRc_);
            DARABONBA_PTR_FROM_JSON(IsRelease, isRelease_);
            DARABONBA_PTR_FROM_JSON(Memo, memo_);
            DARABONBA_PTR_FROM_JSON(MobileModelContains, mobileModelContains_);
            DARABONBA_PTR_FROM_JSON(MobileModelExcludes, mobileModelExcludes_);
            DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
            DARABONBA_PTR_FROM_JSON(NetType, netType_);
            DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
            DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
            DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
            DARABONBA_PTR_FROM_JSON(Platform, platform_);
            DARABONBA_PTR_FROM_JSON(ProductId, productId_);
            DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
            DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
            DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
            DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
            DARABONBA_PTR_FROM_JSON(QrcodeUrl, qrcodeUrl_);
            DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
            DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
            DARABONBA_PTR_FROM_JSON(SilentType, silentType_);
            DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
            DARABONBA_PTR_FROM_JSON(SyncResult, syncResult_);
            DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
            DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
            DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
            DARABONBA_PTR_FROM_JSON(UpgradeValidTime, upgradeValidTime_);
            DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
            DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Whitelist : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Whitelist& obj) { 
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(Business, business_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(IdType, idType_);
              DARABONBA_PTR_TO_JSON(Platform, platform_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
              DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
            };
            friend void from_json(const Darabonba::Json& j, Whitelist& obj) { 
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(Business, business_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(IdType, idType_);
              DARABONBA_PTR_FROM_JSON(Platform, platform_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
              DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
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
        && this->business_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->platform_ == nullptr
        && this->status_ == nullptr && this->whiteListCount_ == nullptr && this->whiteListName_ == nullptr; };
            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline Whitelist& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // business Field Functions 
            bool hasBusiness() const { return this->business_ != nullptr;};
            void deleteBusiness() { this->business_ = nullptr;};
            inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
            inline Whitelist& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline Whitelist& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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
            inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
            inline Whitelist& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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


          protected:
            shared_ptr<string> appCode_ {};
            shared_ptr<string> business_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> idType_ {};
            shared_ptr<string> platform_ {};
            shared_ptr<int64_t> status_ {};
            shared_ptr<int64_t> whiteListCount_ {};
            shared_ptr<string> whiteListName_ {};
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
        && this->appId_ == nullptr && this->appstoreurl_ == nullptr && this->channelContains_ == nullptr && this->channelExcludes_ == nullptr && this->cityContains_ == nullptr
        && this->cityExcludes_ == nullptr && this->creator_ == nullptr && this->deviceGreyNum_ == nullptr && this->devicePercent_ == nullptr && this->downloadUrl_ == nullptr
        && this->executionOrder_ == nullptr && this->gmtCreateStr_ == nullptr && this->greyConfigInfo_ == nullptr && this->greyEndtimeData_ == nullptr && this->greyNotice_ == nullptr
        && this->greyNum_ == nullptr && this->greyUv_ == nullptr && this->id_ == nullptr && this->innerVersion_ == nullptr && this->isEnterprise_ == nullptr
        && this->isOfficial_ == nullptr && this->isPush_ == nullptr && this->isRc_ == nullptr && this->isRelease_ == nullptr && this->memo_ == nullptr
        && this->mobileModelContains_ == nullptr && this->mobileModelExcludes_ == nullptr && this->modifier_ == nullptr && this->netType_ == nullptr && this->osVersion_ == nullptr
        && this->packageInfoId_ == nullptr && this->packageType_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr
        && this->publishMode_ == nullptr && this->publishType_ == nullptr && this->pushContent_ == nullptr && this->qrcodeUrl_ == nullptr && this->releaseType_ == nullptr
        && this->ruleJsonList_ == nullptr && this->silentType_ == nullptr && this->syncMode_ == nullptr && this->syncResult_ == nullptr && this->taskStatus_ == nullptr
        && this->upgradeContent_ == nullptr && this->upgradeType_ == nullptr && this->upgradeValidTime_ == nullptr && this->whitelist_ == nullptr && this->whitelistIds_ == nullptr; };
          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline Content& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Content& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appstoreurl Field Functions 
          bool hasAppstoreurl() const { return this->appstoreurl_ != nullptr;};
          void deleteAppstoreurl() { this->appstoreurl_ = nullptr;};
          inline string getAppstoreurl() const { DARABONBA_PTR_GET_DEFAULT(appstoreurl_, "") };
          inline Content& setAppstoreurl(string appstoreurl) { DARABONBA_PTR_SET_VALUE(appstoreurl_, appstoreurl) };


          // channelContains Field Functions 
          bool hasChannelContains() const { return this->channelContains_ != nullptr;};
          void deleteChannelContains() { this->channelContains_ = nullptr;};
          inline string getChannelContains() const { DARABONBA_PTR_GET_DEFAULT(channelContains_, "") };
          inline Content& setChannelContains(string channelContains) { DARABONBA_PTR_SET_VALUE(channelContains_, channelContains) };


          // channelExcludes Field Functions 
          bool hasChannelExcludes() const { return this->channelExcludes_ != nullptr;};
          void deleteChannelExcludes() { this->channelExcludes_ = nullptr;};
          inline string getChannelExcludes() const { DARABONBA_PTR_GET_DEFAULT(channelExcludes_, "") };
          inline Content& setChannelExcludes(string channelExcludes) { DARABONBA_PTR_SET_VALUE(channelExcludes_, channelExcludes) };


          // cityContains Field Functions 
          bool hasCityContains() const { return this->cityContains_ != nullptr;};
          void deleteCityContains() { this->cityContains_ = nullptr;};
          inline string getCityContains() const { DARABONBA_PTR_GET_DEFAULT(cityContains_, "") };
          inline Content& setCityContains(string cityContains) { DARABONBA_PTR_SET_VALUE(cityContains_, cityContains) };


          // cityExcludes Field Functions 
          bool hasCityExcludes() const { return this->cityExcludes_ != nullptr;};
          void deleteCityExcludes() { this->cityExcludes_ = nullptr;};
          inline string getCityExcludes() const { DARABONBA_PTR_GET_DEFAULT(cityExcludes_, "") };
          inline Content& setCityExcludes(string cityExcludes) { DARABONBA_PTR_SET_VALUE(cityExcludes_, cityExcludes) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
          inline Content& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // deviceGreyNum Field Functions 
          bool hasDeviceGreyNum() const { return this->deviceGreyNum_ != nullptr;};
          void deleteDeviceGreyNum() { this->deviceGreyNum_ = nullptr;};
          inline int64_t getDeviceGreyNum() const { DARABONBA_PTR_GET_DEFAULT(deviceGreyNum_, 0L) };
          inline Content& setDeviceGreyNum(int64_t deviceGreyNum) { DARABONBA_PTR_SET_VALUE(deviceGreyNum_, deviceGreyNum) };


          // devicePercent Field Functions 
          bool hasDevicePercent() const { return this->devicePercent_ != nullptr;};
          void deleteDevicePercent() { this->devicePercent_ = nullptr;};
          inline int64_t getDevicePercent() const { DARABONBA_PTR_GET_DEFAULT(devicePercent_, 0L) };
          inline Content& setDevicePercent(int64_t devicePercent) { DARABONBA_PTR_SET_VALUE(devicePercent_, devicePercent) };


          // downloadUrl Field Functions 
          bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
          void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
          inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
          inline Content& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


          // executionOrder Field Functions 
          bool hasExecutionOrder() const { return this->executionOrder_ != nullptr;};
          void deleteExecutionOrder() { this->executionOrder_ = nullptr;};
          inline int64_t getExecutionOrder() const { DARABONBA_PTR_GET_DEFAULT(executionOrder_, 0L) };
          inline Content& setExecutionOrder(int64_t executionOrder) { DARABONBA_PTR_SET_VALUE(executionOrder_, executionOrder) };


          // gmtCreateStr Field Functions 
          bool hasGmtCreateStr() const { return this->gmtCreateStr_ != nullptr;};
          void deleteGmtCreateStr() { this->gmtCreateStr_ = nullptr;};
          inline string getGmtCreateStr() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateStr_, "") };
          inline Content& setGmtCreateStr(string gmtCreateStr) { DARABONBA_PTR_SET_VALUE(gmtCreateStr_, gmtCreateStr) };


          // greyConfigInfo Field Functions 
          bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
          void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
          inline string getGreyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
          inline Content& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


          // greyEndtimeData Field Functions 
          bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
          void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
          inline string getGreyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
          inline Content& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


          // greyNotice Field Functions 
          bool hasGreyNotice() const { return this->greyNotice_ != nullptr;};
          void deleteGreyNotice() { this->greyNotice_ = nullptr;};
          inline int64_t getGreyNotice() const { DARABONBA_PTR_GET_DEFAULT(greyNotice_, 0L) };
          inline Content& setGreyNotice(int64_t greyNotice) { DARABONBA_PTR_SET_VALUE(greyNotice_, greyNotice) };


          // greyNum Field Functions 
          bool hasGreyNum() const { return this->greyNum_ != nullptr;};
          void deleteGreyNum() { this->greyNum_ = nullptr;};
          inline int64_t getGreyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0L) };
          inline Content& setGreyNum(int64_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


          // greyUv Field Functions 
          bool hasGreyUv() const { return this->greyUv_ != nullptr;};
          void deleteGreyUv() { this->greyUv_ = nullptr;};
          inline int64_t getGreyUv() const { DARABONBA_PTR_GET_DEFAULT(greyUv_, 0L) };
          inline Content& setGreyUv(int64_t greyUv) { DARABONBA_PTR_SET_VALUE(greyUv_, greyUv) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Content& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // innerVersion Field Functions 
          bool hasInnerVersion() const { return this->innerVersion_ != nullptr;};
          void deleteInnerVersion() { this->innerVersion_ = nullptr;};
          inline string getInnerVersion() const { DARABONBA_PTR_GET_DEFAULT(innerVersion_, "") };
          inline Content& setInnerVersion(string innerVersion) { DARABONBA_PTR_SET_VALUE(innerVersion_, innerVersion) };


          // isEnterprise Field Functions 
          bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
          void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
          inline int64_t getIsEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0L) };
          inline Content& setIsEnterprise(int64_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


          // isOfficial Field Functions 
          bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
          void deleteIsOfficial() { this->isOfficial_ = nullptr;};
          inline int64_t getIsOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, 0L) };
          inline Content& setIsOfficial(int64_t isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


          // isPush Field Functions 
          bool hasIsPush() const { return this->isPush_ != nullptr;};
          void deleteIsPush() { this->isPush_ = nullptr;};
          inline int64_t getIsPush() const { DARABONBA_PTR_GET_DEFAULT(isPush_, 0L) };
          inline Content& setIsPush(int64_t isPush) { DARABONBA_PTR_SET_VALUE(isPush_, isPush) };


          // isRc Field Functions 
          bool hasIsRc() const { return this->isRc_ != nullptr;};
          void deleteIsRc() { this->isRc_ = nullptr;};
          inline int64_t getIsRc() const { DARABONBA_PTR_GET_DEFAULT(isRc_, 0L) };
          inline Content& setIsRc(int64_t isRc) { DARABONBA_PTR_SET_VALUE(isRc_, isRc) };


          // isRelease Field Functions 
          bool hasIsRelease() const { return this->isRelease_ != nullptr;};
          void deleteIsRelease() { this->isRelease_ = nullptr;};
          inline int64_t getIsRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0L) };
          inline Content& setIsRelease(int64_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


          // memo Field Functions 
          bool hasMemo() const { return this->memo_ != nullptr;};
          void deleteMemo() { this->memo_ = nullptr;};
          inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
          inline Content& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


          // mobileModelContains Field Functions 
          bool hasMobileModelContains() const { return this->mobileModelContains_ != nullptr;};
          void deleteMobileModelContains() { this->mobileModelContains_ = nullptr;};
          inline string getMobileModelContains() const { DARABONBA_PTR_GET_DEFAULT(mobileModelContains_, "") };
          inline Content& setMobileModelContains(string mobileModelContains) { DARABONBA_PTR_SET_VALUE(mobileModelContains_, mobileModelContains) };


          // mobileModelExcludes Field Functions 
          bool hasMobileModelExcludes() const { return this->mobileModelExcludes_ != nullptr;};
          void deleteMobileModelExcludes() { this->mobileModelExcludes_ = nullptr;};
          inline string getMobileModelExcludes() const { DARABONBA_PTR_GET_DEFAULT(mobileModelExcludes_, "") };
          inline Content& setMobileModelExcludes(string mobileModelExcludes) { DARABONBA_PTR_SET_VALUE(mobileModelExcludes_, mobileModelExcludes) };


          // modifier Field Functions 
          bool hasModifier() const { return this->modifier_ != nullptr;};
          void deleteModifier() { this->modifier_ = nullptr;};
          inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
          inline Content& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


          // netType Field Functions 
          bool hasNetType() const { return this->netType_ != nullptr;};
          void deleteNetType() { this->netType_ = nullptr;};
          inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
          inline Content& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


          // osVersion Field Functions 
          bool hasOsVersion() const { return this->osVersion_ != nullptr;};
          void deleteOsVersion() { this->osVersion_ = nullptr;};
          inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
          inline Content& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


          // packageInfoId Field Functions 
          bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
          void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
          inline int64_t getPackageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
          inline Content& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


          // packageType Field Functions 
          bool hasPackageType() const { return this->packageType_ != nullptr;};
          void deletePackageType() { this->packageType_ = nullptr;};
          inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
          inline Content& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


          // platform Field Functions 
          bool hasPlatform() const { return this->platform_ != nullptr;};
          void deletePlatform() { this->platform_ = nullptr;};
          inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
          inline Content& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


          // productId Field Functions 
          bool hasProductId() const { return this->productId_ != nullptr;};
          void deleteProductId() { this->productId_ = nullptr;};
          inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
          inline Content& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


          // productVersion Field Functions 
          bool hasProductVersion() const { return this->productVersion_ != nullptr;};
          void deleteProductVersion() { this->productVersion_ = nullptr;};
          inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
          inline Content& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


          // publishMode Field Functions 
          bool hasPublishMode() const { return this->publishMode_ != nullptr;};
          void deletePublishMode() { this->publishMode_ = nullptr;};
          inline int64_t getPublishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0L) };
          inline Content& setPublishMode(int64_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


          // publishType Field Functions 
          bool hasPublishType() const { return this->publishType_ != nullptr;};
          void deletePublishType() { this->publishType_ = nullptr;};
          inline int64_t getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0L) };
          inline Content& setPublishType(int64_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


          // pushContent Field Functions 
          bool hasPushContent() const { return this->pushContent_ != nullptr;};
          void deletePushContent() { this->pushContent_ = nullptr;};
          inline string getPushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
          inline Content& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


          // qrcodeUrl Field Functions 
          bool hasQrcodeUrl() const { return this->qrcodeUrl_ != nullptr;};
          void deleteQrcodeUrl() { this->qrcodeUrl_ = nullptr;};
          inline string getQrcodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrcodeUrl_, "") };
          inline Content& setQrcodeUrl(string qrcodeUrl) { DARABONBA_PTR_SET_VALUE(qrcodeUrl_, qrcodeUrl) };


          // releaseType Field Functions 
          bool hasReleaseType() const { return this->releaseType_ != nullptr;};
          void deleteReleaseType() { this->releaseType_ = nullptr;};
          inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
          inline Content& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


          // ruleJsonList Field Functions 
          bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
          void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
          inline const vector<Content::RuleJsonList> & getRuleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<Content::RuleJsonList>) };
          inline vector<Content::RuleJsonList> getRuleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<Content::RuleJsonList>) };
          inline Content& setRuleJsonList(const vector<Content::RuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
          inline Content& setRuleJsonList(vector<Content::RuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


          // silentType Field Functions 
          bool hasSilentType() const { return this->silentType_ != nullptr;};
          void deleteSilentType() { this->silentType_ = nullptr;};
          inline int64_t getSilentType() const { DARABONBA_PTR_GET_DEFAULT(silentType_, 0L) };
          inline Content& setSilentType(int64_t silentType) { DARABONBA_PTR_SET_VALUE(silentType_, silentType) };


          // syncMode Field Functions 
          bool hasSyncMode() const { return this->syncMode_ != nullptr;};
          void deleteSyncMode() { this->syncMode_ = nullptr;};
          inline string getSyncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
          inline Content& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


          // syncResult Field Functions 
          bool hasSyncResult() const { return this->syncResult_ != nullptr;};
          void deleteSyncResult() { this->syncResult_ = nullptr;};
          inline string getSyncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
          inline Content& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


          // taskStatus Field Functions 
          bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
          void deleteTaskStatus() { this->taskStatus_ = nullptr;};
          inline int64_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0L) };
          inline Content& setTaskStatus(int64_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


          // upgradeContent Field Functions 
          bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
          void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
          inline string getUpgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
          inline Content& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


          // upgradeType Field Functions 
          bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
          void deleteUpgradeType() { this->upgradeType_ = nullptr;};
          inline int64_t getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0L) };
          inline Content& setUpgradeType(int64_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


          // upgradeValidTime Field Functions 
          bool hasUpgradeValidTime() const { return this->upgradeValidTime_ != nullptr;};
          void deleteUpgradeValidTime() { this->upgradeValidTime_ = nullptr;};
          inline int64_t getUpgradeValidTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeValidTime_, 0L) };
          inline Content& setUpgradeValidTime(int64_t upgradeValidTime) { DARABONBA_PTR_SET_VALUE(upgradeValidTime_, upgradeValidTime) };


          // whitelist Field Functions 
          bool hasWhitelist() const { return this->whitelist_ != nullptr;};
          void deleteWhitelist() { this->whitelist_ = nullptr;};
          inline const vector<Content::Whitelist> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<Content::Whitelist>) };
          inline vector<Content::Whitelist> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<Content::Whitelist>) };
          inline Content& setWhitelist(const vector<Content::Whitelist> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
          inline Content& setWhitelist(vector<Content::Whitelist> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


          // whitelistIds Field Functions 
          bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
          void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
          inline string getWhitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
          inline Content& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


        protected:
          shared_ptr<string> appCode_ {};
          shared_ptr<string> appId_ {};
          shared_ptr<string> appstoreurl_ {};
          shared_ptr<string> channelContains_ {};
          shared_ptr<string> channelExcludes_ {};
          shared_ptr<string> cityContains_ {};
          shared_ptr<string> cityExcludes_ {};
          shared_ptr<string> creator_ {};
          shared_ptr<int64_t> deviceGreyNum_ {};
          shared_ptr<int64_t> devicePercent_ {};
          shared_ptr<string> downloadUrl_ {};
          shared_ptr<int64_t> executionOrder_ {};
          shared_ptr<string> gmtCreateStr_ {};
          shared_ptr<string> greyConfigInfo_ {};
          shared_ptr<string> greyEndtimeData_ {};
          shared_ptr<int64_t> greyNotice_ {};
          shared_ptr<int64_t> greyNum_ {};
          shared_ptr<int64_t> greyUv_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> innerVersion_ {};
          shared_ptr<int64_t> isEnterprise_ {};
          shared_ptr<int64_t> isOfficial_ {};
          shared_ptr<int64_t> isPush_ {};
          shared_ptr<int64_t> isRc_ {};
          shared_ptr<int64_t> isRelease_ {};
          shared_ptr<string> memo_ {};
          shared_ptr<string> mobileModelContains_ {};
          shared_ptr<string> mobileModelExcludes_ {};
          shared_ptr<string> modifier_ {};
          shared_ptr<string> netType_ {};
          shared_ptr<string> osVersion_ {};
          shared_ptr<int64_t> packageInfoId_ {};
          shared_ptr<string> packageType_ {};
          shared_ptr<string> platform_ {};
          shared_ptr<string> productId_ {};
          shared_ptr<string> productVersion_ {};
          shared_ptr<int64_t> publishMode_ {};
          shared_ptr<int64_t> publishType_ {};
          shared_ptr<string> pushContent_ {};
          shared_ptr<string> qrcodeUrl_ {};
          shared_ptr<string> releaseType_ {};
          shared_ptr<vector<Content::RuleJsonList>> ruleJsonList_ {};
          shared_ptr<int64_t> silentType_ {};
          shared_ptr<string> syncMode_ {};
          shared_ptr<string> syncResult_ {};
          shared_ptr<int64_t> taskStatus_ {};
          shared_ptr<string> upgradeContent_ {};
          shared_ptr<int64_t> upgradeType_ {};
          shared_ptr<int64_t> upgradeValidTime_ {};
          shared_ptr<vector<Content::Whitelist>> whitelist_ {};
          shared_ptr<string> whitelistIds_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
        inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
        inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline Data& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<Data::Content> content_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<string> resultMsg_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const QueryMdsUpgradeTaskDetailResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, QueryMdsUpgradeTaskDetailResponseBody::ResultContent) };
    inline QueryMdsUpgradeTaskDetailResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, QueryMdsUpgradeTaskDetailResponseBody::ResultContent) };
    inline QueryMdsUpgradeTaskDetailResponseBody& setResultContent(const QueryMdsUpgradeTaskDetailResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline QueryMdsUpgradeTaskDetailResponseBody& setResultContent(QueryMdsUpgradeTaskDetailResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<QueryMdsUpgradeTaskDetailResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
