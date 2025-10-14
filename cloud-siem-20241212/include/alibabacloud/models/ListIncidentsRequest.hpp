// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINCIDENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINCIDENTSREQUEST_HPP_
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
  class ListIncidentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIncidentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_TO_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_TO_JSON(IncidentTags, incidentTags_);
      DARABONBA_PTR_TO_JSON(IncidentUuids, incidentUuids_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(OrderFieldName, orderFieldName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelateAssetId, relateAssetId_);
      DARABONBA_PTR_TO_JSON(RelateEntityId, relateEntityId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListIncidentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_FROM_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_FROM_JSON(IncidentTags, incidentTags_);
      DARABONBA_PTR_FROM_JSON(IncidentUuids, incidentUuids_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(OrderFieldName, orderFieldName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelateAssetId, relateAssetId_);
      DARABONBA_PTR_FROM_JSON(RelateEntityId, relateEntityId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
    };
    ListIncidentsRequest() = default ;
    ListIncidentsRequest(const ListIncidentsRequest &) = default ;
    ListIncidentsRequest(ListIncidentsRequest &&) = default ;
    ListIncidentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIncidentsRequest() = default ;
    ListIncidentsRequest& operator=(const ListIncidentsRequest &) = default ;
    ListIncidentsRequest& operator=(ListIncidentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertUuid_ == nullptr
        && return this->endTime_ == nullptr && return this->incidentName_ == nullptr && return this->incidentStatus_ == nullptr && return this->incidentTags_ == nullptr && return this->incidentUuids_ == nullptr
        && return this->lang_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->orderDirection_ == nullptr && return this->orderFieldName_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->relateAssetId_ == nullptr && return this->relateEntityId_ == nullptr
        && return this->roleFor_ == nullptr && return this->roleType_ == nullptr && return this->startTime_ == nullptr && return this->threatLevel_ == nullptr; };
    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string alertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline ListIncidentsRequest& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListIncidentsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // incidentName Field Functions 
    bool hasIncidentName() const { return this->incidentName_ != nullptr;};
    void deleteIncidentName() { this->incidentName_ = nullptr;};
    inline string incidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
    inline ListIncidentsRequest& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


    // incidentStatus Field Functions 
    bool hasIncidentStatus() const { return this->incidentStatus_ != nullptr;};
    void deleteIncidentStatus() { this->incidentStatus_ = nullptr;};
    inline int32_t incidentStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentStatus_, 0) };
    inline ListIncidentsRequest& setIncidentStatus(int32_t incidentStatus) { DARABONBA_PTR_SET_VALUE(incidentStatus_, incidentStatus) };


    // incidentTags Field Functions 
    bool hasIncidentTags() const { return this->incidentTags_ != nullptr;};
    void deleteIncidentTags() { this->incidentTags_ = nullptr;};
    inline string incidentTags() const { DARABONBA_PTR_GET_DEFAULT(incidentTags_, "") };
    inline ListIncidentsRequest& setIncidentTags(string incidentTags) { DARABONBA_PTR_SET_VALUE(incidentTags_, incidentTags) };


    // incidentUuids Field Functions 
    bool hasIncidentUuids() const { return this->incidentUuids_ != nullptr;};
    void deleteIncidentUuids() { this->incidentUuids_ = nullptr;};
    inline const vector<string> & incidentUuids() const { DARABONBA_PTR_GET_CONST(incidentUuids_, vector<string>) };
    inline vector<string> incidentUuids() { DARABONBA_PTR_GET(incidentUuids_, vector<string>) };
    inline ListIncidentsRequest& setIncidentUuids(const vector<string> & incidentUuids) { DARABONBA_PTR_SET_VALUE(incidentUuids_, incidentUuids) };
    inline ListIncidentsRequest& setIncidentUuids(vector<string> && incidentUuids) { DARABONBA_PTR_SET_RVALUE(incidentUuids_, incidentUuids) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListIncidentsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIncidentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIncidentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string orderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListIncidentsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // orderFieldName Field Functions 
    bool hasOrderFieldName() const { return this->orderFieldName_ != nullptr;};
    void deleteOrderFieldName() { this->orderFieldName_ = nullptr;};
    inline string orderFieldName() const { DARABONBA_PTR_GET_DEFAULT(orderFieldName_, "") };
    inline ListIncidentsRequest& setOrderFieldName(string orderFieldName) { DARABONBA_PTR_SET_VALUE(orderFieldName_, orderFieldName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIncidentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIncidentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIncidentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relateAssetId Field Functions 
    bool hasRelateAssetId() const { return this->relateAssetId_ != nullptr;};
    void deleteRelateAssetId() { this->relateAssetId_ = nullptr;};
    inline string relateAssetId() const { DARABONBA_PTR_GET_DEFAULT(relateAssetId_, "") };
    inline ListIncidentsRequest& setRelateAssetId(string relateAssetId) { DARABONBA_PTR_SET_VALUE(relateAssetId_, relateAssetId) };


    // relateEntityId Field Functions 
    bool hasRelateEntityId() const { return this->relateEntityId_ != nullptr;};
    void deleteRelateEntityId() { this->relateEntityId_ = nullptr;};
    inline string relateEntityId() const { DARABONBA_PTR_GET_DEFAULT(relateEntityId_, "") };
    inline ListIncidentsRequest& setRelateEntityId(string relateEntityId) { DARABONBA_PTR_SET_VALUE(relateEntityId_, relateEntityId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListIncidentsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListIncidentsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListIncidentsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline const vector<string> & threatLevel() const { DARABONBA_PTR_GET_CONST(threatLevel_, vector<string>) };
    inline vector<string> threatLevel() { DARABONBA_PTR_GET(threatLevel_, vector<string>) };
    inline ListIncidentsRequest& setThreatLevel(const vector<string> & threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };
    inline ListIncidentsRequest& setThreatLevel(vector<string> && threatLevel) { DARABONBA_PTR_SET_RVALUE(threatLevel_, threatLevel) };


  protected:
    std::shared_ptr<string> alertUuid_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> incidentName_ = nullptr;
    std::shared_ptr<int32_t> incidentStatus_ = nullptr;
    std::shared_ptr<string> incidentTags_ = nullptr;
    std::shared_ptr<vector<string>> incidentUuids_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> orderDirection_ = nullptr;
    std::shared_ptr<string> orderFieldName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> relateAssetId_ = nullptr;
    std::shared_ptr<string> relateEntityId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<int32_t> roleType_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<vector<string>> threatLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
