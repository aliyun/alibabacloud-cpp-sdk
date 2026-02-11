// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsWithEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsWithEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsWithEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertsWithEntityResponseBody() = default ;
    DescribeAlertsWithEntityResponseBody(const DescribeAlertsWithEntityResponseBody &) = default ;
    DescribeAlertsWithEntityResponseBody(DescribeAlertsWithEntityResponseBody &&) = default ;
    DescribeAlertsWithEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsWithEntityResponseBody() = default ;
    DescribeAlertsWithEntityResponseBody& operator=(const DescribeAlertsWithEntityResponseBody &) = default ;
    DescribeAlertsWithEntityResponseBody& operator=(DescribeAlertsWithEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
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
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertDesc, alertDesc_);
          DARABONBA_PTR_TO_JSON(AlertDescCode, alertDescCode_);
          DARABONBA_PTR_TO_JSON(AlertDescEn, alertDescEn_);
          DARABONBA_PTR_TO_JSON(AlertDetail, alertDetail_);
          DARABONBA_PTR_TO_JSON(AlertInfoList, alertInfoList_);
          DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
          DARABONBA_PTR_TO_JSON(AlertNameCode, alertNameCode_);
          DARABONBA_PTR_TO_JSON(AlertNameEn, alertNameEn_);
          DARABONBA_PTR_TO_JSON(AlertSrcProd, alertSrcProd_);
          DARABONBA_PTR_TO_JSON(AlertSrcProdModule, alertSrcProdModule_);
          DARABONBA_PTR_TO_JSON(AlertTitle, alertTitle_);
          DARABONBA_PTR_TO_JSON(AlertTitleEn, alertTitleEn_);
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(AlertTypeCode, alertTypeCode_);
          DARABONBA_PTR_TO_JSON(AlertTypeEn, alertTypeEn_);
          DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_TO_JSON(AssetList, assetList_);
          DARABONBA_PTR_TO_JSON(AttCk, attCk_);
          DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_TO_JSON(DetectionRuleId, detectionRuleId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EntityList, entityList_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_TO_JSON(IsDefend, isDefend_);
          DARABONBA_PTR_TO_JSON(LogTime, logTime_);
          DARABONBA_PTR_TO_JSON(LogUuid, logUuid_);
          DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
          DARABONBA_PTR_TO_JSON(OccurTime, occurTime_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
          DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertDesc, alertDesc_);
          DARABONBA_PTR_FROM_JSON(AlertDescCode, alertDescCode_);
          DARABONBA_PTR_FROM_JSON(AlertDescEn, alertDescEn_);
          DARABONBA_PTR_FROM_JSON(AlertDetail, alertDetail_);
          DARABONBA_PTR_FROM_JSON(AlertInfoList, alertInfoList_);
          DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
          DARABONBA_PTR_FROM_JSON(AlertNameCode, alertNameCode_);
          DARABONBA_PTR_FROM_JSON(AlertNameEn, alertNameEn_);
          DARABONBA_PTR_FROM_JSON(AlertSrcProd, alertSrcProd_);
          DARABONBA_PTR_FROM_JSON(AlertSrcProdModule, alertSrcProdModule_);
          DARABONBA_PTR_FROM_JSON(AlertTitle, alertTitle_);
          DARABONBA_PTR_FROM_JSON(AlertTitleEn, alertTitleEn_);
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(AlertTypeCode, alertTypeCode_);
          DARABONBA_PTR_FROM_JSON(AlertTypeEn, alertTypeEn_);
          DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
          DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
          DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_FROM_JSON(DetectionRuleId, detectionRuleId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_FROM_JSON(IsDefend, isDefend_);
          DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
          DARABONBA_PTR_FROM_JSON(LogUuid, logUuid_);
          DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
          DARABONBA_PTR_FROM_JSON(OccurTime, occurTime_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
          DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AlertInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(KeyName, keyName_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, AlertInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          AlertInfoList() = default ;
          AlertInfoList(const AlertInfoList &) = default ;
          AlertInfoList(AlertInfoList &&) = default ;
          AlertInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertInfoList() = default ;
          AlertInfoList& operator=(const AlertInfoList &) = default ;
          AlertInfoList& operator=(AlertInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->keyName_ == nullptr && this->values_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline AlertInfoList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // keyName Field Functions 
          bool hasKeyName() const { return this->keyName_ != nullptr;};
          void deleteKeyName() { this->keyName_ = nullptr;};
          inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
          inline AlertInfoList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
          inline AlertInfoList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


        protected:
          // The attribute key.
          shared_ptr<string> key_ {};
          // The name of the key.
          shared_ptr<string> keyName_ {};
          // The value of the key.
          shared_ptr<string> values_ {};
        };

        virtual bool empty() const override { return this->alertDesc_ == nullptr
        && this->alertDescCode_ == nullptr && this->alertDescEn_ == nullptr && this->alertDetail_ == nullptr && this->alertInfoList_ == nullptr && this->alertLevel_ == nullptr
        && this->alertName_ == nullptr && this->alertNameCode_ == nullptr && this->alertNameEn_ == nullptr && this->alertSrcProd_ == nullptr && this->alertSrcProdModule_ == nullptr
        && this->alertTitle_ == nullptr && this->alertTitleEn_ == nullptr && this->alertType_ == nullptr && this->alertTypeCode_ == nullptr && this->alertTypeEn_ == nullptr
        && this->alertUuid_ == nullptr && this->assetList_ == nullptr && this->attCk_ == nullptr && this->cloudCode_ == nullptr && this->detectionRuleId_ == nullptr
        && this->endTime_ == nullptr && this->entityList_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->incidentUuid_ == nullptr && this->isDefend_ == nullptr && this->logTime_ == nullptr && this->logUuid_ == nullptr && this->mainUserId_ == nullptr
        && this->occurTime_ == nullptr && this->productId_ == nullptr && this->startTime_ == nullptr && this->subUserId_ == nullptr && this->subUserName_ == nullptr
        && this->vendorId_ == nullptr; };
        // alertDesc Field Functions 
        bool hasAlertDesc() const { return this->alertDesc_ != nullptr;};
        void deleteAlertDesc() { this->alertDesc_ = nullptr;};
        inline string getAlertDesc() const { DARABONBA_PTR_GET_DEFAULT(alertDesc_, "") };
        inline ResponseData& setAlertDesc(string alertDesc) { DARABONBA_PTR_SET_VALUE(alertDesc_, alertDesc) };


        // alertDescCode Field Functions 
        bool hasAlertDescCode() const { return this->alertDescCode_ != nullptr;};
        void deleteAlertDescCode() { this->alertDescCode_ = nullptr;};
        inline string getAlertDescCode() const { DARABONBA_PTR_GET_DEFAULT(alertDescCode_, "") };
        inline ResponseData& setAlertDescCode(string alertDescCode) { DARABONBA_PTR_SET_VALUE(alertDescCode_, alertDescCode) };


        // alertDescEn Field Functions 
        bool hasAlertDescEn() const { return this->alertDescEn_ != nullptr;};
        void deleteAlertDescEn() { this->alertDescEn_ = nullptr;};
        inline string getAlertDescEn() const { DARABONBA_PTR_GET_DEFAULT(alertDescEn_, "") };
        inline ResponseData& setAlertDescEn(string alertDescEn) { DARABONBA_PTR_SET_VALUE(alertDescEn_, alertDescEn) };


        // alertDetail Field Functions 
        bool hasAlertDetail() const { return this->alertDetail_ != nullptr;};
        void deleteAlertDetail() { this->alertDetail_ = nullptr;};
        inline string getAlertDetail() const { DARABONBA_PTR_GET_DEFAULT(alertDetail_, "") };
        inline ResponseData& setAlertDetail(string alertDetail) { DARABONBA_PTR_SET_VALUE(alertDetail_, alertDetail) };


        // alertInfoList Field Functions 
        bool hasAlertInfoList() const { return this->alertInfoList_ != nullptr;};
        void deleteAlertInfoList() { this->alertInfoList_ = nullptr;};
        inline const vector<ResponseData::AlertInfoList> & getAlertInfoList() const { DARABONBA_PTR_GET_CONST(alertInfoList_, vector<ResponseData::AlertInfoList>) };
        inline vector<ResponseData::AlertInfoList> getAlertInfoList() { DARABONBA_PTR_GET(alertInfoList_, vector<ResponseData::AlertInfoList>) };
        inline ResponseData& setAlertInfoList(const vector<ResponseData::AlertInfoList> & alertInfoList) { DARABONBA_PTR_SET_VALUE(alertInfoList_, alertInfoList) };
        inline ResponseData& setAlertInfoList(vector<ResponseData::AlertInfoList> && alertInfoList) { DARABONBA_PTR_SET_RVALUE(alertInfoList_, alertInfoList) };


        // alertLevel Field Functions 
        bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
        void deleteAlertLevel() { this->alertLevel_ = nullptr;};
        inline string getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
        inline ResponseData& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline ResponseData& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // alertNameCode Field Functions 
        bool hasAlertNameCode() const { return this->alertNameCode_ != nullptr;};
        void deleteAlertNameCode() { this->alertNameCode_ = nullptr;};
        inline string getAlertNameCode() const { DARABONBA_PTR_GET_DEFAULT(alertNameCode_, "") };
        inline ResponseData& setAlertNameCode(string alertNameCode) { DARABONBA_PTR_SET_VALUE(alertNameCode_, alertNameCode) };


        // alertNameEn Field Functions 
        bool hasAlertNameEn() const { return this->alertNameEn_ != nullptr;};
        void deleteAlertNameEn() { this->alertNameEn_ = nullptr;};
        inline string getAlertNameEn() const { DARABONBA_PTR_GET_DEFAULT(alertNameEn_, "") };
        inline ResponseData& setAlertNameEn(string alertNameEn) { DARABONBA_PTR_SET_VALUE(alertNameEn_, alertNameEn) };


        // alertSrcProd Field Functions 
        bool hasAlertSrcProd() const { return this->alertSrcProd_ != nullptr;};
        void deleteAlertSrcProd() { this->alertSrcProd_ = nullptr;};
        inline string getAlertSrcProd() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProd_, "") };
        inline ResponseData& setAlertSrcProd(string alertSrcProd) { DARABONBA_PTR_SET_VALUE(alertSrcProd_, alertSrcProd) };


        // alertSrcProdModule Field Functions 
        bool hasAlertSrcProdModule() const { return this->alertSrcProdModule_ != nullptr;};
        void deleteAlertSrcProdModule() { this->alertSrcProdModule_ = nullptr;};
        inline string getAlertSrcProdModule() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProdModule_, "") };
        inline ResponseData& setAlertSrcProdModule(string alertSrcProdModule) { DARABONBA_PTR_SET_VALUE(alertSrcProdModule_, alertSrcProdModule) };


        // alertTitle Field Functions 
        bool hasAlertTitle() const { return this->alertTitle_ != nullptr;};
        void deleteAlertTitle() { this->alertTitle_ = nullptr;};
        inline string getAlertTitle() const { DARABONBA_PTR_GET_DEFAULT(alertTitle_, "") };
        inline ResponseData& setAlertTitle(string alertTitle) { DARABONBA_PTR_SET_VALUE(alertTitle_, alertTitle) };


        // alertTitleEn Field Functions 
        bool hasAlertTitleEn() const { return this->alertTitleEn_ != nullptr;};
        void deleteAlertTitleEn() { this->alertTitleEn_ = nullptr;};
        inline string getAlertTitleEn() const { DARABONBA_PTR_GET_DEFAULT(alertTitleEn_, "") };
        inline ResponseData& setAlertTitleEn(string alertTitleEn) { DARABONBA_PTR_SET_VALUE(alertTitleEn_, alertTitleEn) };


        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
        inline ResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // alertTypeCode Field Functions 
        bool hasAlertTypeCode() const { return this->alertTypeCode_ != nullptr;};
        void deleteAlertTypeCode() { this->alertTypeCode_ = nullptr;};
        inline string getAlertTypeCode() const { DARABONBA_PTR_GET_DEFAULT(alertTypeCode_, "") };
        inline ResponseData& setAlertTypeCode(string alertTypeCode) { DARABONBA_PTR_SET_VALUE(alertTypeCode_, alertTypeCode) };


        // alertTypeEn Field Functions 
        bool hasAlertTypeEn() const { return this->alertTypeEn_ != nullptr;};
        void deleteAlertTypeEn() { this->alertTypeEn_ = nullptr;};
        inline string getAlertTypeEn() const { DARABONBA_PTR_GET_DEFAULT(alertTypeEn_, "") };
        inline ResponseData& setAlertTypeEn(string alertTypeEn) { DARABONBA_PTR_SET_VALUE(alertTypeEn_, alertTypeEn) };


        // alertUuid Field Functions 
        bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
        void deleteAlertUuid() { this->alertUuid_ = nullptr;};
        inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
        inline ResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


        // assetList Field Functions 
        bool hasAssetList() const { return this->assetList_ != nullptr;};
        void deleteAssetList() { this->assetList_ = nullptr;};
        inline string getAssetList() const { DARABONBA_PTR_GET_DEFAULT(assetList_, "") };
        inline ResponseData& setAssetList(string assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };


        // attCk Field Functions 
        bool hasAttCk() const { return this->attCk_ != nullptr;};
        void deleteAttCk() { this->attCk_ = nullptr;};
        inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
        inline ResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


        // cloudCode Field Functions 
        bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
        void deleteCloudCode() { this->cloudCode_ = nullptr;};
        inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
        inline ResponseData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


        // detectionRuleId Field Functions 
        bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
        void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
        inline string getDetectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
        inline ResponseData& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline ResponseData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // entityList Field Functions 
        bool hasEntityList() const { return this->entityList_ != nullptr;};
        void deleteEntityList() { this->entityList_ = nullptr;};
        inline string getEntityList() const { DARABONBA_PTR_GET_DEFAULT(entityList_, "") };
        inline ResponseData& setEntityList(string entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // isDefend Field Functions 
        bool hasIsDefend() const { return this->isDefend_ != nullptr;};
        void deleteIsDefend() { this->isDefend_ = nullptr;};
        inline string getIsDefend() const { DARABONBA_PTR_GET_DEFAULT(isDefend_, "") };
        inline ResponseData& setIsDefend(string isDefend) { DARABONBA_PTR_SET_VALUE(isDefend_, isDefend) };


        // logTime Field Functions 
        bool hasLogTime() const { return this->logTime_ != nullptr;};
        void deleteLogTime() { this->logTime_ = nullptr;};
        inline string getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
        inline ResponseData& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


        // logUuid Field Functions 
        bool hasLogUuid() const { return this->logUuid_ != nullptr;};
        void deleteLogUuid() { this->logUuid_ = nullptr;};
        inline string getLogUuid() const { DARABONBA_PTR_GET_DEFAULT(logUuid_, "") };
        inline ResponseData& setLogUuid(string logUuid) { DARABONBA_PTR_SET_VALUE(logUuid_, logUuid) };


        // mainUserId Field Functions 
        bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
        void deleteMainUserId() { this->mainUserId_ = nullptr;};
        inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
        inline ResponseData& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


        // occurTime Field Functions 
        bool hasOccurTime() const { return this->occurTime_ != nullptr;};
        void deleteOccurTime() { this->occurTime_ = nullptr;};
        inline string getOccurTime() const { DARABONBA_PTR_GET_DEFAULT(occurTime_, "") };
        inline ResponseData& setOccurTime(string occurTime) { DARABONBA_PTR_SET_VALUE(occurTime_, occurTime) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline ResponseData& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ResponseData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // subUserId Field Functions 
        bool hasSubUserId() const { return this->subUserId_ != nullptr;};
        void deleteSubUserId() { this->subUserId_ = nullptr;};
        inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
        inline ResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


        // subUserName Field Functions 
        bool hasSubUserName() const { return this->subUserName_ != nullptr;};
        void deleteSubUserName() { this->subUserName_ = nullptr;};
        inline string getSubUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
        inline ResponseData& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


        // vendorId Field Functions 
        bool hasVendorId() const { return this->vendorId_ != nullptr;};
        void deleteVendorId() { this->vendorId_ = nullptr;};
        inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
        inline ResponseData& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


      protected:
        // The description of the alert.
        shared_ptr<string> alertDesc_ {};
        // The internal code of the alert description.
        shared_ptr<string> alertDescCode_ {};
        // The alert description in English.
        shared_ptr<string> alertDescEn_ {};
        // The details of the alert.
        shared_ptr<string> alertDetail_ {};
        // The displayed details of the alert.
        shared_ptr<vector<ResponseData::AlertInfoList>> alertInfoList_ {};
        // The risk level. Valid values:
        // 
        // *   serious: high
        // *   suspicious: medium
        // *   remind: low
        shared_ptr<string> alertLevel_ {};
        // The name of the alert.
        shared_ptr<string> alertName_ {};
        // The internal code of the alert name.
        shared_ptr<string> alertNameCode_ {};
        // The name of the alert.
        shared_ptr<string> alertNameEn_ {};
        // The source of the alert.
        shared_ptr<string> alertSrcProd_ {};
        // The sub-module of the alert source.
        shared_ptr<string> alertSrcProdModule_ {};
        // The title of the alert.
        shared_ptr<string> alertTitle_ {};
        // The alert title in English.
        shared_ptr<string> alertTitleEn_ {};
        // The type of the alert.
        shared_ptr<string> alertType_ {};
        // The internal code of the alert type.
        shared_ptr<string> alertTypeCode_ {};
        // The alert type in English.
        shared_ptr<string> alertTypeEn_ {};
        // The UUID of the alert.
        shared_ptr<string> alertUuid_ {};
        // The details of the asset.
        shared_ptr<string> assetList_ {};
        // The tag of the ATT\\&CK attack.
        shared_ptr<string> attCk_ {};
        // The cloud code. Valid values:
        // 
        // *   aliyun: Alibaba Cloud
        // *   qcloud: Tencent Cloud
        // *   hcloud: Huawei Cloud
        shared_ptr<string> cloudCode_ {};
        shared_ptr<string> detectionRuleId_ {};
        // The time when the alert was closed.
        shared_ptr<string> endTime_ {};
        shared_ptr<string> entityList_ {};
        // The time when the alert was received.
        shared_ptr<string> gmtCreate_ {};
        // The time when the alert was last updated.
        shared_ptr<string> gmtModified_ {};
        // The unique ID of the alert.
        shared_ptr<int64_t> id_ {};
        // The UUID of the event.
        shared_ptr<string> incidentUuid_ {};
        // Specifies whether an attack is defended. Valid values:
        // 
        // *   0: detected
        // *   1: blocked
        shared_ptr<string> isDefend_ {};
        // The time when the alert was recorded.
        shared_ptr<string> logTime_ {};
        // The UUID of the alert log.
        shared_ptr<string> logUuid_ {};
        // The ID of the Alibaba Cloud account that is associated with the alert in SIEM.
        shared_ptr<int64_t> mainUserId_ {};
        // The time when the alert was triggered.
        shared_ptr<string> occurTime_ {};
        shared_ptr<string> productId_ {};
        // The time at which the alert was first generated.
        shared_ptr<string> startTime_ {};
        // The ID of the Alibaba Cloud account within which the alert is generated.
        shared_ptr<int64_t> subUserId_ {};
        shared_ptr<string> subUserName_ {};
        shared_ptr<string> vendorId_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAlertsWithEntityResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAlertsWithEntityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAlertsWithEntityResponseBody::Data) };
    inline DescribeAlertsWithEntityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAlertsWithEntityResponseBody::Data) };
    inline DescribeAlertsWithEntityResponseBody& setData(const DescribeAlertsWithEntityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAlertsWithEntityResponseBody& setData(DescribeAlertsWithEntityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertsWithEntityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertsWithEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertsWithEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeAlertsWithEntityResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
