// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudSiemEventDetailResponseBodyDataAttckStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemEventDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemEventDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(AssetNum, assetNum_);
      DARABONBA_PTR_TO_JSON(AttCkLabels, attCkLabels_);
      DARABONBA_PTR_TO_JSON(AttckStages, attckStages_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
      DARABONBA_PTR_TO_JSON(ExtContent, extContent_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_TO_JSON(IncidentNameEn, incidentNameEn_);
      DARABONBA_PTR_TO_JSON(IncidentType, incidentType_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(ReferAccount, referAccount_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatScore, threatScore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemEventDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(AssetNum, assetNum_);
      DARABONBA_PTR_FROM_JSON(AttCkLabels, attCkLabels_);
      DARABONBA_PTR_FROM_JSON(AttckStages, attckStages_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
      DARABONBA_PTR_FROM_JSON(ExtContent, extContent_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_FROM_JSON(IncidentNameEn, incidentNameEn_);
      DARABONBA_PTR_FROM_JSON(IncidentType, incidentType_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(ReferAccount, referAccount_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatScore, threatScore_);
    };
    DescribeCloudSiemEventDetailResponseBodyData() = default ;
    DescribeCloudSiemEventDetailResponseBodyData(const DescribeCloudSiemEventDetailResponseBodyData &) = default ;
    DescribeCloudSiemEventDetailResponseBodyData(DescribeCloudSiemEventDetailResponseBodyData &&) = default ;
    DescribeCloudSiemEventDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemEventDetailResponseBodyData() = default ;
    DescribeCloudSiemEventDetailResponseBodyData& operator=(const DescribeCloudSiemEventDetailResponseBodyData &) = default ;
    DescribeCloudSiemEventDetailResponseBodyData& operator=(DescribeCloudSiemEventDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertNum_ != nullptr
        && this->aliuid_ != nullptr && this->assetNum_ != nullptr && this->attCkLabels_ != nullptr && this->attckStages_ != nullptr && this->dataSources_ != nullptr
        && this->description_ != nullptr && this->descriptionEn_ != nullptr && this->extContent_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->incidentName_ != nullptr && this->incidentNameEn_ != nullptr && this->incidentType_ != nullptr && this->incidentUuid_ != nullptr && this->referAccount_ != nullptr
        && this->remark_ != nullptr && this->ruleId_ != nullptr && this->status_ != nullptr && this->threatLevel_ != nullptr && this->threatScore_ != nullptr; };
    // alertNum Field Functions 
    bool hasAlertNum() const { return this->alertNum_ != nullptr;};
    void deleteAlertNum() { this->alertNum_ = nullptr;};
    inline int32_t alertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // assetNum Field Functions 
    bool hasAssetNum() const { return this->assetNum_ != nullptr;};
    void deleteAssetNum() { this->assetNum_ = nullptr;};
    inline int32_t assetNum() const { DARABONBA_PTR_GET_DEFAULT(assetNum_, 0) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAssetNum(int32_t assetNum) { DARABONBA_PTR_SET_VALUE(assetNum_, assetNum) };


    // attCkLabels Field Functions 
    bool hasAttCkLabels() const { return this->attCkLabels_ != nullptr;};
    void deleteAttCkLabels() { this->attCkLabels_ = nullptr;};
    inline const vector<string> & attCkLabels() const { DARABONBA_PTR_GET_CONST(attCkLabels_, vector<string>) };
    inline vector<string> attCkLabels() { DARABONBA_PTR_GET(attCkLabels_, vector<string>) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAttCkLabels(const vector<string> & attCkLabels) { DARABONBA_PTR_SET_VALUE(attCkLabels_, attCkLabels) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAttCkLabels(vector<string> && attCkLabels) { DARABONBA_PTR_SET_RVALUE(attCkLabels_, attCkLabels) };


    // attckStages Field Functions 
    bool hasAttckStages() const { return this->attckStages_ != nullptr;};
    void deleteAttckStages() { this->attckStages_ = nullptr;};
    inline const vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages> & attckStages() const { DARABONBA_PTR_GET_CONST(attckStages_, vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages>) };
    inline vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages> attckStages() { DARABONBA_PTR_GET(attckStages_, vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages>) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAttckStages(const vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages> & attckStages) { DARABONBA_PTR_SET_VALUE(attckStages_, attckStages) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setAttckStages(vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages> && attckStages) { DARABONBA_PTR_SET_RVALUE(attckStages_, attckStages) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<string> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<string>) };
    inline vector<string> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<string>) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setDataSources(const vector<string> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setDataSources(vector<string> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionEn Field Functions 
    bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
    void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
    inline string descriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


    // extContent Field Functions 
    bool hasExtContent() const { return this->extContent_ != nullptr;};
    void deleteExtContent() { this->extContent_ = nullptr;};
    inline string extContent() const { DARABONBA_PTR_GET_DEFAULT(extContent_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setExtContent(string extContent) { DARABONBA_PTR_SET_VALUE(extContent_, extContent) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // incidentName Field Functions 
    bool hasIncidentName() const { return this->incidentName_ != nullptr;};
    void deleteIncidentName() { this->incidentName_ = nullptr;};
    inline string incidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


    // incidentNameEn Field Functions 
    bool hasIncidentNameEn() const { return this->incidentNameEn_ != nullptr;};
    void deleteIncidentNameEn() { this->incidentNameEn_ = nullptr;};
    inline string incidentNameEn() const { DARABONBA_PTR_GET_DEFAULT(incidentNameEn_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setIncidentNameEn(string incidentNameEn) { DARABONBA_PTR_SET_VALUE(incidentNameEn_, incidentNameEn) };


    // incidentType Field Functions 
    bool hasIncidentType() const { return this->incidentType_ != nullptr;};
    void deleteIncidentType() { this->incidentType_ = nullptr;};
    inline string incidentType() const { DARABONBA_PTR_GET_DEFAULT(incidentType_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setIncidentType(string incidentType) { DARABONBA_PTR_SET_VALUE(incidentType_, incidentType) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // referAccount Field Functions 
    bool hasReferAccount() const { return this->referAccount_ != nullptr;};
    void deleteReferAccount() { this->referAccount_ = nullptr;};
    inline string referAccount() const { DARABONBA_PTR_GET_DEFAULT(referAccount_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setReferAccount(string referAccount) { DARABONBA_PTR_SET_VALUE(referAccount_, referAccount) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyData& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatScore Field Functions 
    bool hasThreatScore() const { return this->threatScore_ != nullptr;};
    void deleteThreatScore() { this->threatScore_ = nullptr;};
    inline float threatScore() const { DARABONBA_PTR_GET_DEFAULT(threatScore_, 0.0) };
    inline DescribeCloudSiemEventDetailResponseBodyData& setThreatScore(float threatScore) { DARABONBA_PTR_SET_VALUE(threatScore_, threatScore) };


  protected:
    // The number of alerts that are associated with the event.
    std::shared_ptr<int32_t> alertNum_ = nullptr;
    // The ID of the Alibaba Cloud account to which the event belongs.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The number of assets that are associated with the event.
    std::shared_ptr<int32_t> assetNum_ = nullptr;
    // The tags of the ATT\\&CK attacks.
    std::shared_ptr<vector<string>> attCkLabels_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCloudSiemEventDetailResponseBodyDataAttckStages>> attckStages_ = nullptr;
    // The source of the alert.
    std::shared_ptr<vector<string>> dataSources_ = nullptr;
    // The description of the event.
    std::shared_ptr<string> description_ = nullptr;
    // The description of the event in English.
    std::shared_ptr<string> descriptionEn_ = nullptr;
    // The extended information of the event in the JSON format.
    std::shared_ptr<string> extContent_ = nullptr;
    // The time when the event occurred.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the event was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> incidentName_ = nullptr;
    // The name of the event in English.
    std::shared_ptr<string> incidentNameEn_ = nullptr;
    std::shared_ptr<string> incidentType_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // Users associated with the event.
    std::shared_ptr<string> referAccount_ = nullptr;
    // The remarks of the event.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   0: not handled
    // *   1: handing
    // *   5: handling failed
    // *   10: handled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   serious: high
    // *   suspicious: medium
    // *   remind: low
    std::shared_ptr<string> threatLevel_ = nullptr;
    // The risk score of the event. The score ranges from 0 to 100. A higher score indicates a higher risk level.
    std::shared_ptr<float> threatScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
