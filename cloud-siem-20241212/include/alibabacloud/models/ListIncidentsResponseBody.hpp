// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINCIDENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINCIDENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListIncidentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIncidentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Incidents, incidents_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIncidentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Incidents, incidents_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIncidentsResponseBody() = default ;
    ListIncidentsResponseBody(const ListIncidentsResponseBody &) = default ;
    ListIncidentsResponseBody(ListIncidentsResponseBody &&) = default ;
    ListIncidentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIncidentsResponseBody() = default ;
    ListIncidentsResponseBody& operator=(const ListIncidentsResponseBody &) = default ;
    ListIncidentsResponseBody& operator=(ListIncidentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Incidents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Incidents& obj) { 
        DARABONBA_PTR_TO_JSON(AlertInfos, alertInfos_);
        DARABONBA_PTR_TO_JSON(AttckTactics, attckTactics_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DetectionRuleId, detectionRuleId_);
        DARABONBA_PTR_TO_JSON(EntityInfos, entityInfos_);
        DARABONBA_PTR_TO_JSON(IncidentDescription, incidentDescription_);
        DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
        DARABONBA_PTR_TO_JSON(IncidentRemark, incidentRemark_);
        DARABONBA_PTR_TO_JSON(IncidentStatus, incidentStatus_);
        DARABONBA_PTR_TO_JSON(IncidentTags, incidentTags_);
        DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RelateAlertCount, relateAlertCount_);
        DARABONBA_PTR_TO_JSON(RelateAssetCount, relateAssetCount_);
        DARABONBA_PTR_TO_JSON(ResponseTime, responseTime_);
        DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Incidents& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertInfos, alertInfos_);
        DARABONBA_PTR_FROM_JSON(AttckTactics, attckTactics_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DetectionRuleId, detectionRuleId_);
        DARABONBA_PTR_FROM_JSON(EntityInfos, entityInfos_);
        DARABONBA_PTR_FROM_JSON(IncidentDescription, incidentDescription_);
        DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
        DARABONBA_PTR_FROM_JSON(IncidentRemark, incidentRemark_);
        DARABONBA_PTR_FROM_JSON(IncidentStatus, incidentStatus_);
        DARABONBA_PTR_FROM_JSON(IncidentTags, incidentTags_);
        DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RelateAlertCount, relateAlertCount_);
        DARABONBA_PTR_FROM_JSON(RelateAssetCount, relateAssetCount_);
        DARABONBA_PTR_FROM_JSON(ResponseTime, responseTime_);
        DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Incidents() = default ;
      Incidents(const Incidents &) = default ;
      Incidents(Incidents &&) = default ;
      Incidents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Incidents() = default ;
      Incidents& operator=(const Incidents &) = default ;
      Incidents& operator=(Incidents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertInfos_ == nullptr
        && this->attckTactics_ == nullptr && this->createTime_ == nullptr && this->detectionRuleId_ == nullptr && this->entityInfos_ == nullptr && this->incidentDescription_ == nullptr
        && this->incidentName_ == nullptr && this->incidentRemark_ == nullptr && this->incidentStatus_ == nullptr && this->incidentTags_ == nullptr && this->incidentUuid_ == nullptr
        && this->owner_ == nullptr && this->relateAlertCount_ == nullptr && this->relateAssetCount_ == nullptr && this->responseTime_ == nullptr && this->threatLevel_ == nullptr
        && this->updateTime_ == nullptr; };
      // alertInfos Field Functions 
      bool hasAlertInfos() const { return this->alertInfos_ != nullptr;};
      void deleteAlertInfos() { this->alertInfos_ = nullptr;};
      inline string getAlertInfos() const { DARABONBA_PTR_GET_DEFAULT(alertInfos_, "") };
      inline Incidents& setAlertInfos(string alertInfos) { DARABONBA_PTR_SET_VALUE(alertInfos_, alertInfos) };


      // attckTactics Field Functions 
      bool hasAttckTactics() const { return this->attckTactics_ != nullptr;};
      void deleteAttckTactics() { this->attckTactics_ = nullptr;};
      inline string getAttckTactics() const { DARABONBA_PTR_GET_DEFAULT(attckTactics_, "") };
      inline Incidents& setAttckTactics(string attckTactics) { DARABONBA_PTR_SET_VALUE(attckTactics_, attckTactics) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Incidents& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detectionRuleId Field Functions 
      bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
      void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
      inline string getDetectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
      inline Incidents& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


      // entityInfos Field Functions 
      bool hasEntityInfos() const { return this->entityInfos_ != nullptr;};
      void deleteEntityInfos() { this->entityInfos_ = nullptr;};
      inline string getEntityInfos() const { DARABONBA_PTR_GET_DEFAULT(entityInfos_, "") };
      inline Incidents& setEntityInfos(string entityInfos) { DARABONBA_PTR_SET_VALUE(entityInfos_, entityInfos) };


      // incidentDescription Field Functions 
      bool hasIncidentDescription() const { return this->incidentDescription_ != nullptr;};
      void deleteIncidentDescription() { this->incidentDescription_ = nullptr;};
      inline string getIncidentDescription() const { DARABONBA_PTR_GET_DEFAULT(incidentDescription_, "") };
      inline Incidents& setIncidentDescription(string incidentDescription) { DARABONBA_PTR_SET_VALUE(incidentDescription_, incidentDescription) };


      // incidentName Field Functions 
      bool hasIncidentName() const { return this->incidentName_ != nullptr;};
      void deleteIncidentName() { this->incidentName_ = nullptr;};
      inline string getIncidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
      inline Incidents& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


      // incidentRemark Field Functions 
      bool hasIncidentRemark() const { return this->incidentRemark_ != nullptr;};
      void deleteIncidentRemark() { this->incidentRemark_ = nullptr;};
      inline string getIncidentRemark() const { DARABONBA_PTR_GET_DEFAULT(incidentRemark_, "") };
      inline Incidents& setIncidentRemark(string incidentRemark) { DARABONBA_PTR_SET_VALUE(incidentRemark_, incidentRemark) };


      // incidentStatus Field Functions 
      bool hasIncidentStatus() const { return this->incidentStatus_ != nullptr;};
      void deleteIncidentStatus() { this->incidentStatus_ = nullptr;};
      inline int32_t getIncidentStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentStatus_, 0) };
      inline Incidents& setIncidentStatus(int32_t incidentStatus) { DARABONBA_PTR_SET_VALUE(incidentStatus_, incidentStatus) };


      // incidentTags Field Functions 
      bool hasIncidentTags() const { return this->incidentTags_ != nullptr;};
      void deleteIncidentTags() { this->incidentTags_ = nullptr;};
      inline string getIncidentTags() const { DARABONBA_PTR_GET_DEFAULT(incidentTags_, "") };
      inline Incidents& setIncidentTags(string incidentTags) { DARABONBA_PTR_SET_VALUE(incidentTags_, incidentTags) };


      // incidentUuid Field Functions 
      bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
      void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
      inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
      inline Incidents& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Incidents& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // relateAlertCount Field Functions 
      bool hasRelateAlertCount() const { return this->relateAlertCount_ != nullptr;};
      void deleteRelateAlertCount() { this->relateAlertCount_ = nullptr;};
      inline int32_t getRelateAlertCount() const { DARABONBA_PTR_GET_DEFAULT(relateAlertCount_, 0) };
      inline Incidents& setRelateAlertCount(int32_t relateAlertCount) { DARABONBA_PTR_SET_VALUE(relateAlertCount_, relateAlertCount) };


      // relateAssetCount Field Functions 
      bool hasRelateAssetCount() const { return this->relateAssetCount_ != nullptr;};
      void deleteRelateAssetCount() { this->relateAssetCount_ = nullptr;};
      inline int32_t getRelateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(relateAssetCount_, 0) };
      inline Incidents& setRelateAssetCount(int32_t relateAssetCount) { DARABONBA_PTR_SET_VALUE(relateAssetCount_, relateAssetCount) };


      // responseTime Field Functions 
      bool hasResponseTime() const { return this->responseTime_ != nullptr;};
      void deleteResponseTime() { this->responseTime_ = nullptr;};
      inline int64_t getResponseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
      inline Incidents& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Incidents& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Incidents& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> alertInfos_ {};
      shared_ptr<string> attckTactics_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The detection rule ID.
      shared_ptr<string> detectionRuleId_ {};
      shared_ptr<string> entityInfos_ {};
      shared_ptr<string> incidentDescription_ {};
      // The event name.
      shared_ptr<string> incidentName_ {};
      // The event remark.
      shared_ptr<string> incidentRemark_ {};
      // The event status. Valid values:
      // - 0: Unhandled.
      // - 1: Handling.
      // - 5: Handling failed.
      // - 10: Handled.
      shared_ptr<int32_t> incidentStatus_ {};
      // The event tags.
      shared_ptr<string> incidentTags_ {};
      // The event UUID.
      shared_ptr<string> incidentUuid_ {};
      // The UID of the account responsible for the event.
      shared_ptr<string> owner_ {};
      // The number of alerts associated with the event.
      shared_ptr<int32_t> relateAlertCount_ {};
      // The number of assets associated with the event.
      shared_ptr<int32_t> relateAssetCount_ {};
      // The response time, in milliseconds (ms).
      shared_ptr<int64_t> responseTime_ {};
      // The threat level. Valid values:
      // - 5: Critical.
      // - 4: High.
      // - 3: Medium.
      // - 2: Low.
      // - 1: Informational.
      shared_ptr<string> threatLevel_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->incidents_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // incidents Field Functions 
    bool hasIncidents() const { return this->incidents_ != nullptr;};
    void deleteIncidents() { this->incidents_ = nullptr;};
    inline const vector<ListIncidentsResponseBody::Incidents> & getIncidents() const { DARABONBA_PTR_GET_CONST(incidents_, vector<ListIncidentsResponseBody::Incidents>) };
    inline vector<ListIncidentsResponseBody::Incidents> getIncidents() { DARABONBA_PTR_GET(incidents_, vector<ListIncidentsResponseBody::Incidents>) };
    inline ListIncidentsResponseBody& setIncidents(const vector<ListIncidentsResponseBody::Incidents> & incidents) { DARABONBA_PTR_SET_VALUE(incidents_, incidents) };
    inline ListIncidentsResponseBody& setIncidents(vector<ListIncidentsResponseBody::Incidents> && incidents) { DARABONBA_PTR_SET_RVALUE(incidents_, incidents) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIncidentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIncidentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIncidentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIncidentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIncidentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIncidentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of events.
    shared_ptr<vector<ListIncidentsResponseBody::Incidents>> incidents_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. Leave this parameter empty for the first query or if no more results exist. If a next page exists, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
