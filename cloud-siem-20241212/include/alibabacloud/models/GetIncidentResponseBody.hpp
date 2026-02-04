// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINCIDENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINCIDENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetIncidentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIncidentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Incident, incident_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIncidentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Incident, incident_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIncidentResponseBody() = default ;
    GetIncidentResponseBody(const GetIncidentResponseBody &) = default ;
    GetIncidentResponseBody(GetIncidentResponseBody &&) = default ;
    GetIncidentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIncidentResponseBody() = default ;
    GetIncidentResponseBody& operator=(const GetIncidentResponseBody &) = default ;
    GetIncidentResponseBody& operator=(GetIncidentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Incident : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Incident& obj) { 
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
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RelateAlertCount, relateAlertCount_);
        DARABONBA_PTR_TO_JSON(RelateAssetCount, relateAssetCount_);
        DARABONBA_ANY_TO_JSON(RelateDataSourceIds, relateDataSourceIds_);
        DARABONBA_ANY_TO_JSON(RelateUserIds, relateUserIds_);
        DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_TO_JSON(ThreatScore, threatScore_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Incident& obj) { 
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
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RelateAlertCount, relateAlertCount_);
        DARABONBA_PTR_FROM_JSON(RelateAssetCount, relateAssetCount_);
        DARABONBA_ANY_FROM_JSON(RelateDataSourceIds, relateDataSourceIds_);
        DARABONBA_ANY_FROM_JSON(RelateUserIds, relateUserIds_);
        DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_FROM_JSON(ThreatScore, threatScore_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Incident() = default ;
      Incident(const Incident &) = default ;
      Incident(Incident &&) = default ;
      Incident(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Incident() = default ;
      Incident& operator=(const Incident &) = default ;
      Incident& operator=(Incident &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attckTactics_ == nullptr
        && this->createTime_ == nullptr && this->detectionRuleId_ == nullptr && this->incidentAggregationType_ == nullptr && this->incidentDescription_ == nullptr && this->incidentName_ == nullptr
        && this->incidentRemark_ == nullptr && this->incidentStatus_ == nullptr && this->incidentTags_ == nullptr && this->incidentUuid_ == nullptr && this->owner_ == nullptr
        && this->relateAlertCount_ == nullptr && this->relateAssetCount_ == nullptr && this->relateDataSourceIds_ == nullptr && this->relateUserIds_ == nullptr && this->threatLevel_ == nullptr
        && this->threatScore_ == nullptr && this->updateTime_ == nullptr; };
      // attckTactics Field Functions 
      bool hasAttckTactics() const { return this->attckTactics_ != nullptr;};
      void deleteAttckTactics() { this->attckTactics_ = nullptr;};
      inline       const Darabonba::Json & getAttckTactics() const { DARABONBA_GET(attckTactics_) };
      Darabonba::Json & getAttckTactics() { DARABONBA_GET(attckTactics_) };
      inline Incident& setAttckTactics(const Darabonba::Json & attckTactics) { DARABONBA_SET_VALUE(attckTactics_, attckTactics) };
      inline Incident& setAttckTactics(Darabonba::Json && attckTactics) { DARABONBA_SET_RVALUE(attckTactics_, attckTactics) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Incident& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detectionRuleId Field Functions 
      bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
      void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
      inline string getDetectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
      inline Incident& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


      // incidentAggregationType Field Functions 
      bool hasIncidentAggregationType() const { return this->incidentAggregationType_ != nullptr;};
      void deleteIncidentAggregationType() { this->incidentAggregationType_ = nullptr;};
      inline string getIncidentAggregationType() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationType_, "") };
      inline Incident& setIncidentAggregationType(string incidentAggregationType) { DARABONBA_PTR_SET_VALUE(incidentAggregationType_, incidentAggregationType) };


      // incidentDescription Field Functions 
      bool hasIncidentDescription() const { return this->incidentDescription_ != nullptr;};
      void deleteIncidentDescription() { this->incidentDescription_ = nullptr;};
      inline string getIncidentDescription() const { DARABONBA_PTR_GET_DEFAULT(incidentDescription_, "") };
      inline Incident& setIncidentDescription(string incidentDescription) { DARABONBA_PTR_SET_VALUE(incidentDescription_, incidentDescription) };


      // incidentName Field Functions 
      bool hasIncidentName() const { return this->incidentName_ != nullptr;};
      void deleteIncidentName() { this->incidentName_ = nullptr;};
      inline string getIncidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
      inline Incident& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


      // incidentRemark Field Functions 
      bool hasIncidentRemark() const { return this->incidentRemark_ != nullptr;};
      void deleteIncidentRemark() { this->incidentRemark_ = nullptr;};
      inline string getIncidentRemark() const { DARABONBA_PTR_GET_DEFAULT(incidentRemark_, "") };
      inline Incident& setIncidentRemark(string incidentRemark) { DARABONBA_PTR_SET_VALUE(incidentRemark_, incidentRemark) };


      // incidentStatus Field Functions 
      bool hasIncidentStatus() const { return this->incidentStatus_ != nullptr;};
      void deleteIncidentStatus() { this->incidentStatus_ = nullptr;};
      inline int32_t getIncidentStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentStatus_, 0) };
      inline Incident& setIncidentStatus(int32_t incidentStatus) { DARABONBA_PTR_SET_VALUE(incidentStatus_, incidentStatus) };


      // incidentTags Field Functions 
      bool hasIncidentTags() const { return this->incidentTags_ != nullptr;};
      void deleteIncidentTags() { this->incidentTags_ = nullptr;};
      inline string getIncidentTags() const { DARABONBA_PTR_GET_DEFAULT(incidentTags_, "") };
      inline Incident& setIncidentTags(string incidentTags) { DARABONBA_PTR_SET_VALUE(incidentTags_, incidentTags) };


      // incidentUuid Field Functions 
      bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
      void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
      inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
      inline Incident& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Incident& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // relateAlertCount Field Functions 
      bool hasRelateAlertCount() const { return this->relateAlertCount_ != nullptr;};
      void deleteRelateAlertCount() { this->relateAlertCount_ = nullptr;};
      inline int32_t getRelateAlertCount() const { DARABONBA_PTR_GET_DEFAULT(relateAlertCount_, 0) };
      inline Incident& setRelateAlertCount(int32_t relateAlertCount) { DARABONBA_PTR_SET_VALUE(relateAlertCount_, relateAlertCount) };


      // relateAssetCount Field Functions 
      bool hasRelateAssetCount() const { return this->relateAssetCount_ != nullptr;};
      void deleteRelateAssetCount() { this->relateAssetCount_ = nullptr;};
      inline int32_t getRelateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(relateAssetCount_, 0) };
      inline Incident& setRelateAssetCount(int32_t relateAssetCount) { DARABONBA_PTR_SET_VALUE(relateAssetCount_, relateAssetCount) };


      // relateDataSourceIds Field Functions 
      bool hasRelateDataSourceIds() const { return this->relateDataSourceIds_ != nullptr;};
      void deleteRelateDataSourceIds() { this->relateDataSourceIds_ = nullptr;};
      inline       const Darabonba::Json & getRelateDataSourceIds() const { DARABONBA_GET(relateDataSourceIds_) };
      Darabonba::Json & getRelateDataSourceIds() { DARABONBA_GET(relateDataSourceIds_) };
      inline Incident& setRelateDataSourceIds(const Darabonba::Json & relateDataSourceIds) { DARABONBA_SET_VALUE(relateDataSourceIds_, relateDataSourceIds) };
      inline Incident& setRelateDataSourceIds(Darabonba::Json && relateDataSourceIds) { DARABONBA_SET_RVALUE(relateDataSourceIds_, relateDataSourceIds) };


      // relateUserIds Field Functions 
      bool hasRelateUserIds() const { return this->relateUserIds_ != nullptr;};
      void deleteRelateUserIds() { this->relateUserIds_ = nullptr;};
      inline       const Darabonba::Json & getRelateUserIds() const { DARABONBA_GET(relateUserIds_) };
      Darabonba::Json & getRelateUserIds() { DARABONBA_GET(relateUserIds_) };
      inline Incident& setRelateUserIds(const Darabonba::Json & relateUserIds) { DARABONBA_SET_VALUE(relateUserIds_, relateUserIds) };
      inline Incident& setRelateUserIds(Darabonba::Json && relateUserIds) { DARABONBA_SET_RVALUE(relateUserIds_, relateUserIds) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Incident& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // threatScore Field Functions 
      bool hasThreatScore() const { return this->threatScore_ != nullptr;};
      void deleteThreatScore() { this->threatScore_ = nullptr;};
      inline string getThreatScore() const { DARABONBA_PTR_GET_DEFAULT(threatScore_, "") };
      inline Incident& setThreatScore(string threatScore) { DARABONBA_PTR_SET_VALUE(threatScore_, threatScore) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Incident& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      Darabonba::Json attckTactics_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> detectionRuleId_ {};
      shared_ptr<string> incidentAggregationType_ {};
      shared_ptr<string> incidentDescription_ {};
      shared_ptr<string> incidentName_ {};
      shared_ptr<string> incidentRemark_ {};
      shared_ptr<int32_t> incidentStatus_ {};
      shared_ptr<string> incidentTags_ {};
      shared_ptr<string> incidentUuid_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<int32_t> relateAlertCount_ {};
      shared_ptr<int32_t> relateAssetCount_ {};
      Darabonba::Json relateDataSourceIds_ {};
      Darabonba::Json relateUserIds_ {};
      shared_ptr<string> threatLevel_ {};
      shared_ptr<string> threatScore_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->incident_ == nullptr
        && this->requestId_ == nullptr; };
    // incident Field Functions 
    bool hasIncident() const { return this->incident_ != nullptr;};
    void deleteIncident() { this->incident_ = nullptr;};
    inline const GetIncidentResponseBody::Incident & getIncident() const { DARABONBA_PTR_GET_CONST(incident_, GetIncidentResponseBody::Incident) };
    inline GetIncidentResponseBody::Incident getIncident() { DARABONBA_PTR_GET(incident_, GetIncidentResponseBody::Incident) };
    inline GetIncidentResponseBody& setIncident(const GetIncidentResponseBody::Incident & incident) { DARABONBA_PTR_SET_VALUE(incident_, incident) };
    inline GetIncidentResponseBody& setIncident(GetIncidentResponseBody::Incident && incident) { DARABONBA_PTR_SET_RVALUE(incident_, incident) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIncidentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetIncidentResponseBody::Incident> incident_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
