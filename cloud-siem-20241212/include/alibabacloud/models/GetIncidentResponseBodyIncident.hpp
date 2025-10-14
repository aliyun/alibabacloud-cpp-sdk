// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINCIDENTRESPONSEBODYINCIDENT_HPP_
#define ALIBABACLOUD_MODELS_GETINCIDENTRESPONSEBODYINCIDENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetIncidentResponseBodyIncident : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIncidentResponseBodyIncident& obj) { 
      DARABONBA_ANY_TO_JSON(AttckTactics, attckTactics_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_TO_JSON(IncidentAggregationType, incidentAggregationType_);
      DARABONBA_PTR_TO_JSON(IncidentDescription, incidentDescription_);
      DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_TO_JSON(IncidentRemark, incidentRemark_);
      DARABONBA_PTR_TO_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_TO_JSON(IncidentTags, incidentTags_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(RelateAlertCount, relateAlertCount_);
      DARABONBA_PTR_TO_JSON(RelateAssetCount, relateAssetCount_);
      DARABONBA_ANY_TO_JSON(RelateDataSourceIds, relateDataSourceIds_);
      DARABONBA_ANY_TO_JSON(RelateUserIds, relateUserIds_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatScore, threatScore_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetIncidentResponseBodyIncident& obj) { 
      DARABONBA_ANY_FROM_JSON(AttckTactics, attckTactics_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_FROM_JSON(IncidentAggregationType, incidentAggregationType_);
      DARABONBA_PTR_FROM_JSON(IncidentDescription, incidentDescription_);
      DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_FROM_JSON(IncidentRemark, incidentRemark_);
      DARABONBA_PTR_FROM_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_FROM_JSON(IncidentTags, incidentTags_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(RelateAlertCount, relateAlertCount_);
      DARABONBA_PTR_FROM_JSON(RelateAssetCount, relateAssetCount_);
      DARABONBA_ANY_FROM_JSON(RelateDataSourceIds, relateDataSourceIds_);
      DARABONBA_ANY_FROM_JSON(RelateUserIds, relateUserIds_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatScore, threatScore_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetIncidentResponseBodyIncident() = default ;
    GetIncidentResponseBodyIncident(const GetIncidentResponseBodyIncident &) = default ;
    GetIncidentResponseBodyIncident(GetIncidentResponseBodyIncident &&) = default ;
    GetIncidentResponseBodyIncident(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIncidentResponseBodyIncident() = default ;
    GetIncidentResponseBodyIncident& operator=(const GetIncidentResponseBodyIncident &) = default ;
    GetIncidentResponseBodyIncident& operator=(GetIncidentResponseBodyIncident &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attckTactics_ == nullptr
        && return this->createTime_ == nullptr && return this->detectionRuleId_ == nullptr && return this->incidentAggregationType_ == nullptr && return this->incidentDescription_ == nullptr && return this->incidentName_ == nullptr
        && return this->incidentRemark_ == nullptr && return this->incidentStatus_ == nullptr && return this->incidentTags_ == nullptr && return this->incidentUuid_ == nullptr && return this->relateAlertCount_ == nullptr
        && return this->relateAssetCount_ == nullptr && return this->relateDataSourceIds_ == nullptr && return this->relateUserIds_ == nullptr && return this->threatLevel_ == nullptr && return this->threatScore_ == nullptr
        && return this->updateTime_ == nullptr; };
    // attckTactics Field Functions 
    bool hasAttckTactics() const { return this->attckTactics_ != nullptr;};
    void deleteAttckTactics() { this->attckTactics_ = nullptr;};
    inline     const Darabonba::Json & attckTactics() const { DARABONBA_GET(attckTactics_) };
    Darabonba::Json & attckTactics() { DARABONBA_GET(attckTactics_) };
    inline GetIncidentResponseBodyIncident& setAttckTactics(const Darabonba::Json & attckTactics) { DARABONBA_SET_VALUE(attckTactics_, attckTactics) };
    inline GetIncidentResponseBodyIncident& setAttckTactics(Darabonba::Json & attckTactics) { DARABONBA_SET_RVALUE(attckTactics_, attckTactics) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetIncidentResponseBodyIncident& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detectionRuleId Field Functions 
    bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
    void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
    inline string detectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
    inline GetIncidentResponseBodyIncident& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


    // incidentAggregationType Field Functions 
    bool hasIncidentAggregationType() const { return this->incidentAggregationType_ != nullptr;};
    void deleteIncidentAggregationType() { this->incidentAggregationType_ = nullptr;};
    inline string incidentAggregationType() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationType_, "") };
    inline GetIncidentResponseBodyIncident& setIncidentAggregationType(string incidentAggregationType) { DARABONBA_PTR_SET_VALUE(incidentAggregationType_, incidentAggregationType) };


    // incidentDescription Field Functions 
    bool hasIncidentDescription() const { return this->incidentDescription_ != nullptr;};
    void deleteIncidentDescription() { this->incidentDescription_ = nullptr;};
    inline string incidentDescription() const { DARABONBA_PTR_GET_DEFAULT(incidentDescription_, "") };
    inline GetIncidentResponseBodyIncident& setIncidentDescription(string incidentDescription) { DARABONBA_PTR_SET_VALUE(incidentDescription_, incidentDescription) };


    // incidentName Field Functions 
    bool hasIncidentName() const { return this->incidentName_ != nullptr;};
    void deleteIncidentName() { this->incidentName_ = nullptr;};
    inline string incidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
    inline GetIncidentResponseBodyIncident& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


    // incidentRemark Field Functions 
    bool hasIncidentRemark() const { return this->incidentRemark_ != nullptr;};
    void deleteIncidentRemark() { this->incidentRemark_ = nullptr;};
    inline string incidentRemark() const { DARABONBA_PTR_GET_DEFAULT(incidentRemark_, "") };
    inline GetIncidentResponseBodyIncident& setIncidentRemark(string incidentRemark) { DARABONBA_PTR_SET_VALUE(incidentRemark_, incidentRemark) };


    // incidentStatus Field Functions 
    bool hasIncidentStatus() const { return this->incidentStatus_ != nullptr;};
    void deleteIncidentStatus() { this->incidentStatus_ = nullptr;};
    inline int32_t incidentStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentStatus_, 0) };
    inline GetIncidentResponseBodyIncident& setIncidentStatus(int32_t incidentStatus) { DARABONBA_PTR_SET_VALUE(incidentStatus_, incidentStatus) };


    // incidentTags Field Functions 
    bool hasIncidentTags() const { return this->incidentTags_ != nullptr;};
    void deleteIncidentTags() { this->incidentTags_ = nullptr;};
    inline string incidentTags() const { DARABONBA_PTR_GET_DEFAULT(incidentTags_, "") };
    inline GetIncidentResponseBodyIncident& setIncidentTags(string incidentTags) { DARABONBA_PTR_SET_VALUE(incidentTags_, incidentTags) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline GetIncidentResponseBodyIncident& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // relateAlertCount Field Functions 
    bool hasRelateAlertCount() const { return this->relateAlertCount_ != nullptr;};
    void deleteRelateAlertCount() { this->relateAlertCount_ = nullptr;};
    inline int32_t relateAlertCount() const { DARABONBA_PTR_GET_DEFAULT(relateAlertCount_, 0) };
    inline GetIncidentResponseBodyIncident& setRelateAlertCount(int32_t relateAlertCount) { DARABONBA_PTR_SET_VALUE(relateAlertCount_, relateAlertCount) };


    // relateAssetCount Field Functions 
    bool hasRelateAssetCount() const { return this->relateAssetCount_ != nullptr;};
    void deleteRelateAssetCount() { this->relateAssetCount_ = nullptr;};
    inline int32_t relateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(relateAssetCount_, 0) };
    inline GetIncidentResponseBodyIncident& setRelateAssetCount(int32_t relateAssetCount) { DARABONBA_PTR_SET_VALUE(relateAssetCount_, relateAssetCount) };


    // relateDataSourceIds Field Functions 
    bool hasRelateDataSourceIds() const { return this->relateDataSourceIds_ != nullptr;};
    void deleteRelateDataSourceIds() { this->relateDataSourceIds_ = nullptr;};
    inline     const Darabonba::Json & relateDataSourceIds() const { DARABONBA_GET(relateDataSourceIds_) };
    Darabonba::Json & relateDataSourceIds() { DARABONBA_GET(relateDataSourceIds_) };
    inline GetIncidentResponseBodyIncident& setRelateDataSourceIds(const Darabonba::Json & relateDataSourceIds) { DARABONBA_SET_VALUE(relateDataSourceIds_, relateDataSourceIds) };
    inline GetIncidentResponseBodyIncident& setRelateDataSourceIds(Darabonba::Json & relateDataSourceIds) { DARABONBA_SET_RVALUE(relateDataSourceIds_, relateDataSourceIds) };


    // relateUserIds Field Functions 
    bool hasRelateUserIds() const { return this->relateUserIds_ != nullptr;};
    void deleteRelateUserIds() { this->relateUserIds_ = nullptr;};
    inline     const Darabonba::Json & relateUserIds() const { DARABONBA_GET(relateUserIds_) };
    Darabonba::Json & relateUserIds() { DARABONBA_GET(relateUserIds_) };
    inline GetIncidentResponseBodyIncident& setRelateUserIds(const Darabonba::Json & relateUserIds) { DARABONBA_SET_VALUE(relateUserIds_, relateUserIds) };
    inline GetIncidentResponseBodyIncident& setRelateUserIds(Darabonba::Json & relateUserIds) { DARABONBA_SET_RVALUE(relateUserIds_, relateUserIds) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline GetIncidentResponseBodyIncident& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatScore Field Functions 
    bool hasThreatScore() const { return this->threatScore_ != nullptr;};
    void deleteThreatScore() { this->threatScore_ = nullptr;};
    inline string threatScore() const { DARABONBA_PTR_GET_DEFAULT(threatScore_, "") };
    inline GetIncidentResponseBodyIncident& setThreatScore(string threatScore) { DARABONBA_PTR_SET_VALUE(threatScore_, threatScore) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetIncidentResponseBodyIncident& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    Darabonba::Json attckTactics_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> detectionRuleId_ = nullptr;
    std::shared_ptr<string> incidentAggregationType_ = nullptr;
    std::shared_ptr<string> incidentDescription_ = nullptr;
    std::shared_ptr<string> incidentName_ = nullptr;
    std::shared_ptr<string> incidentRemark_ = nullptr;
    std::shared_ptr<int32_t> incidentStatus_ = nullptr;
    std::shared_ptr<string> incidentTags_ = nullptr;
    std::shared_ptr<string> incidentUuid_ = nullptr;
    std::shared_ptr<int32_t> relateAlertCount_ = nullptr;
    std::shared_ptr<int32_t> relateAssetCount_ = nullptr;
    Darabonba::Json relateDataSourceIds_ = nullptr;
    Darabonba::Json relateUserIds_ = nullptr;
    std::shared_ptr<string> threatLevel_ = nullptr;
    std::shared_ptr<string> threatScore_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
