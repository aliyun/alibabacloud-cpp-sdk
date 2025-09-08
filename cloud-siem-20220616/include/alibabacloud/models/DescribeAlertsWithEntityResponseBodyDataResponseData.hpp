// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsWithEntityResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsWithEntityResponseBodyDataResponseData& obj) { 
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
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsWithEntityResponseBodyDataResponseData& obj) { 
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
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
    };
    DescribeAlertsWithEntityResponseBodyDataResponseData() = default ;
    DescribeAlertsWithEntityResponseBodyDataResponseData(const DescribeAlertsWithEntityResponseBodyDataResponseData &) = default ;
    DescribeAlertsWithEntityResponseBodyDataResponseData(DescribeAlertsWithEntityResponseBodyDataResponseData &&) = default ;
    DescribeAlertsWithEntityResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsWithEntityResponseBodyDataResponseData() = default ;
    DescribeAlertsWithEntityResponseBodyDataResponseData& operator=(const DescribeAlertsWithEntityResponseBodyDataResponseData &) = default ;
    DescribeAlertsWithEntityResponseBodyDataResponseData& operator=(DescribeAlertsWithEntityResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertDesc_ != nullptr
        && this->alertDescCode_ != nullptr && this->alertDescEn_ != nullptr && this->alertDetail_ != nullptr && this->alertInfoList_ != nullptr && this->alertLevel_ != nullptr
        && this->alertName_ != nullptr && this->alertNameCode_ != nullptr && this->alertNameEn_ != nullptr && this->alertSrcProd_ != nullptr && this->alertSrcProdModule_ != nullptr
        && this->alertTitle_ != nullptr && this->alertTitleEn_ != nullptr && this->alertType_ != nullptr && this->alertTypeCode_ != nullptr && this->alertTypeEn_ != nullptr
        && this->alertUuid_ != nullptr && this->assetList_ != nullptr && this->attCk_ != nullptr && this->cloudCode_ != nullptr && this->endTime_ != nullptr
        && this->entityList_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->incidentUuid_ != nullptr
        && this->isDefend_ != nullptr && this->logTime_ != nullptr && this->logUuid_ != nullptr && this->mainUserId_ != nullptr && this->occurTime_ != nullptr
        && this->startTime_ != nullptr && this->subUserId_ != nullptr && this->subUserName_ != nullptr; };
    // alertDesc Field Functions 
    bool hasAlertDesc() const { return this->alertDesc_ != nullptr;};
    void deleteAlertDesc() { this->alertDesc_ = nullptr;};
    inline string alertDesc() const { DARABONBA_PTR_GET_DEFAULT(alertDesc_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertDesc(string alertDesc) { DARABONBA_PTR_SET_VALUE(alertDesc_, alertDesc) };


    // alertDescCode Field Functions 
    bool hasAlertDescCode() const { return this->alertDescCode_ != nullptr;};
    void deleteAlertDescCode() { this->alertDescCode_ = nullptr;};
    inline string alertDescCode() const { DARABONBA_PTR_GET_DEFAULT(alertDescCode_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertDescCode(string alertDescCode) { DARABONBA_PTR_SET_VALUE(alertDescCode_, alertDescCode) };


    // alertDescEn Field Functions 
    bool hasAlertDescEn() const { return this->alertDescEn_ != nullptr;};
    void deleteAlertDescEn() { this->alertDescEn_ = nullptr;};
    inline string alertDescEn() const { DARABONBA_PTR_GET_DEFAULT(alertDescEn_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertDescEn(string alertDescEn) { DARABONBA_PTR_SET_VALUE(alertDescEn_, alertDescEn) };


    // alertDetail Field Functions 
    bool hasAlertDetail() const { return this->alertDetail_ != nullptr;};
    void deleteAlertDetail() { this->alertDetail_ = nullptr;};
    inline string alertDetail() const { DARABONBA_PTR_GET_DEFAULT(alertDetail_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertDetail(string alertDetail) { DARABONBA_PTR_SET_VALUE(alertDetail_, alertDetail) };


    // alertInfoList Field Functions 
    bool hasAlertInfoList() const { return this->alertInfoList_ != nullptr;};
    void deleteAlertInfoList() { this->alertInfoList_ = nullptr;};
    inline const vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList> & alertInfoList() const { DARABONBA_PTR_GET_CONST(alertInfoList_, vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList>) };
    inline vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList> alertInfoList() { DARABONBA_PTR_GET(alertInfoList_, vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList>) };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertInfoList(const vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList> & alertInfoList) { DARABONBA_PTR_SET_VALUE(alertInfoList_, alertInfoList) };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertInfoList(vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList> && alertInfoList) { DARABONBA_PTR_SET_RVALUE(alertInfoList_, alertInfoList) };


    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline string alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertNameCode Field Functions 
    bool hasAlertNameCode() const { return this->alertNameCode_ != nullptr;};
    void deleteAlertNameCode() { this->alertNameCode_ = nullptr;};
    inline string alertNameCode() const { DARABONBA_PTR_GET_DEFAULT(alertNameCode_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertNameCode(string alertNameCode) { DARABONBA_PTR_SET_VALUE(alertNameCode_, alertNameCode) };


    // alertNameEn Field Functions 
    bool hasAlertNameEn() const { return this->alertNameEn_ != nullptr;};
    void deleteAlertNameEn() { this->alertNameEn_ = nullptr;};
    inline string alertNameEn() const { DARABONBA_PTR_GET_DEFAULT(alertNameEn_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertNameEn(string alertNameEn) { DARABONBA_PTR_SET_VALUE(alertNameEn_, alertNameEn) };


    // alertSrcProd Field Functions 
    bool hasAlertSrcProd() const { return this->alertSrcProd_ != nullptr;};
    void deleteAlertSrcProd() { this->alertSrcProd_ = nullptr;};
    inline string alertSrcProd() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProd_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertSrcProd(string alertSrcProd) { DARABONBA_PTR_SET_VALUE(alertSrcProd_, alertSrcProd) };


    // alertSrcProdModule Field Functions 
    bool hasAlertSrcProdModule() const { return this->alertSrcProdModule_ != nullptr;};
    void deleteAlertSrcProdModule() { this->alertSrcProdModule_ = nullptr;};
    inline string alertSrcProdModule() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProdModule_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertSrcProdModule(string alertSrcProdModule) { DARABONBA_PTR_SET_VALUE(alertSrcProdModule_, alertSrcProdModule) };


    // alertTitle Field Functions 
    bool hasAlertTitle() const { return this->alertTitle_ != nullptr;};
    void deleteAlertTitle() { this->alertTitle_ = nullptr;};
    inline string alertTitle() const { DARABONBA_PTR_GET_DEFAULT(alertTitle_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertTitle(string alertTitle) { DARABONBA_PTR_SET_VALUE(alertTitle_, alertTitle) };


    // alertTitleEn Field Functions 
    bool hasAlertTitleEn() const { return this->alertTitleEn_ != nullptr;};
    void deleteAlertTitleEn() { this->alertTitleEn_ = nullptr;};
    inline string alertTitleEn() const { DARABONBA_PTR_GET_DEFAULT(alertTitleEn_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertTitleEn(string alertTitleEn) { DARABONBA_PTR_SET_VALUE(alertTitleEn_, alertTitleEn) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertTypeCode Field Functions 
    bool hasAlertTypeCode() const { return this->alertTypeCode_ != nullptr;};
    void deleteAlertTypeCode() { this->alertTypeCode_ = nullptr;};
    inline string alertTypeCode() const { DARABONBA_PTR_GET_DEFAULT(alertTypeCode_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertTypeCode(string alertTypeCode) { DARABONBA_PTR_SET_VALUE(alertTypeCode_, alertTypeCode) };


    // alertTypeEn Field Functions 
    bool hasAlertTypeEn() const { return this->alertTypeEn_ != nullptr;};
    void deleteAlertTypeEn() { this->alertTypeEn_ = nullptr;};
    inline string alertTypeEn() const { DARABONBA_PTR_GET_DEFAULT(alertTypeEn_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertTypeEn(string alertTypeEn) { DARABONBA_PTR_SET_VALUE(alertTypeEn_, alertTypeEn) };


    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string alertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline string assetList() const { DARABONBA_PTR_GET_DEFAULT(assetList_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAssetList(string assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };


    // attCk Field Functions 
    bool hasAttCk() const { return this->attCk_ != nullptr;};
    void deleteAttCk() { this->attCk_ = nullptr;};
    inline string attCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityList Field Functions 
    bool hasEntityList() const { return this->entityList_ != nullptr;};
    void deleteEntityList() { this->entityList_ = nullptr;};
    inline string entityList() const { DARABONBA_PTR_GET_DEFAULT(entityList_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setEntityList(string entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // isDefend Field Functions 
    bool hasIsDefend() const { return this->isDefend_ != nullptr;};
    void deleteIsDefend() { this->isDefend_ = nullptr;};
    inline string isDefend() const { DARABONBA_PTR_GET_DEFAULT(isDefend_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setIsDefend(string isDefend) { DARABONBA_PTR_SET_VALUE(isDefend_, isDefend) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline string logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // logUuid Field Functions 
    bool hasLogUuid() const { return this->logUuid_ != nullptr;};
    void deleteLogUuid() { this->logUuid_ = nullptr;};
    inline string logUuid() const { DARABONBA_PTR_GET_DEFAULT(logUuid_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setLogUuid(string logUuid) { DARABONBA_PTR_SET_VALUE(logUuid_, logUuid) };


    // mainUserId Field Functions 
    bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
    void deleteMainUserId() { this->mainUserId_ = nullptr;};
    inline int64_t mainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


    // occurTime Field Functions 
    bool hasOccurTime() const { return this->occurTime_ != nullptr;};
    void deleteOccurTime() { this->occurTime_ = nullptr;};
    inline string occurTime() const { DARABONBA_PTR_GET_DEFAULT(occurTime_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setOccurTime(string occurTime) { DARABONBA_PTR_SET_VALUE(occurTime_, occurTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // subUserName Field Functions 
    bool hasSubUserName() const { return this->subUserName_ != nullptr;};
    void deleteSubUserName() { this->subUserName_ = nullptr;};
    inline string subUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
    inline DescribeAlertsWithEntityResponseBodyDataResponseData& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


  protected:
    // The description of the alert.
    std::shared_ptr<string> alertDesc_ = nullptr;
    // The internal code of the alert description.
    std::shared_ptr<string> alertDescCode_ = nullptr;
    // The alert description in English.
    std::shared_ptr<string> alertDescEn_ = nullptr;
    // The details of the alert.
    std::shared_ptr<string> alertDetail_ = nullptr;
    // The displayed details of the alert.
    std::shared_ptr<vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseDataAlertInfoList>> alertInfoList_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   serious: high
    // *   suspicious: medium
    // *   remind: low
    std::shared_ptr<string> alertLevel_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> alertName_ = nullptr;
    // The internal code of the alert name.
    std::shared_ptr<string> alertNameCode_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> alertNameEn_ = nullptr;
    // The source of the alert.
    std::shared_ptr<string> alertSrcProd_ = nullptr;
    // The sub-module of the alert source.
    std::shared_ptr<string> alertSrcProdModule_ = nullptr;
    // The title of the alert.
    std::shared_ptr<string> alertTitle_ = nullptr;
    // The alert title in English.
    std::shared_ptr<string> alertTitleEn_ = nullptr;
    // The type of the alert.
    std::shared_ptr<string> alertType_ = nullptr;
    // The internal code of the alert type.
    std::shared_ptr<string> alertTypeCode_ = nullptr;
    // The alert type in English.
    std::shared_ptr<string> alertTypeEn_ = nullptr;
    // The UUID of the alert.
    std::shared_ptr<string> alertUuid_ = nullptr;
    // The details of the asset.
    std::shared_ptr<string> assetList_ = nullptr;
    // The tag of the ATT\\&CK attack.
    std::shared_ptr<string> attCk_ = nullptr;
    // The cloud code. Valid values:
    // 
    // *   aliyun: Alibaba Cloud
    // *   qcloud: Tencent Cloud
    // *   hcloud: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The time when the alert was closed.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> entityList_ = nullptr;
    // The time when the alert was received.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the alert was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The unique ID of the alert.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // Specifies whether an attack is defended. Valid values:
    // 
    // *   0: detected
    // *   1: blocked
    std::shared_ptr<string> isDefend_ = nullptr;
    // The time when the alert was recorded.
    std::shared_ptr<string> logTime_ = nullptr;
    // The UUID of the alert log.
    std::shared_ptr<string> logUuid_ = nullptr;
    // The ID of the Alibaba Cloud account that is associated with the alert in SIEM.
    std::shared_ptr<int64_t> mainUserId_ = nullptr;
    // The time when the alert was triggered.
    std::shared_ptr<string> occurTime_ = nullptr;
    // The time at which the alert was first generated.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the Alibaba Cloud account within which the alert is generated.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
    std::shared_ptr<string> subUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
