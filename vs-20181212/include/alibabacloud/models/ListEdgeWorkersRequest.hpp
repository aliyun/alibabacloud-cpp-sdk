// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGEWORKERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGEWORKERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListEdgeWorkersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeWorkersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HiveIds, hiveIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanIds, planIds_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeWorkersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HiveIds, hiveIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanIds, planIds_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListEdgeWorkersRequest() = default ;
    ListEdgeWorkersRequest(const ListEdgeWorkersRequest &) = default ;
    ListEdgeWorkersRequest(ListEdgeWorkersRequest &&) = default ;
    ListEdgeWorkersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeWorkersRequest() = default ;
    ListEdgeWorkersRequest& operator=(const ListEdgeWorkersRequest &) = default ;
    ListEdgeWorkersRequest& operator=(ListEdgeWorkersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->hiveIds_ == nullptr && this->instanceIds_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->planIds_ == nullptr
        && this->spec_ == nullptr && this->startTime_ == nullptr && this->statuses_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListEdgeWorkersRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hiveIds Field Functions 
    bool hasHiveIds() const { return this->hiveIds_ != nullptr;};
    void deleteHiveIds() { this->hiveIds_ = nullptr;};
    inline const vector<string> & getHiveIds() const { DARABONBA_PTR_GET_CONST(hiveIds_, vector<string>) };
    inline vector<string> getHiveIds() { DARABONBA_PTR_GET(hiveIds_, vector<string>) };
    inline ListEdgeWorkersRequest& setHiveIds(const vector<string> & hiveIds) { DARABONBA_PTR_SET_VALUE(hiveIds_, hiveIds) };
    inline ListEdgeWorkersRequest& setHiveIds(vector<string> && hiveIds) { DARABONBA_PTR_SET_RVALUE(hiveIds_, hiveIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListEdgeWorkersRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListEdgeWorkersRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeWorkersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeWorkersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planIds Field Functions 
    bool hasPlanIds() const { return this->planIds_ != nullptr;};
    void deletePlanIds() { this->planIds_ = nullptr;};
    inline const vector<string> & getPlanIds() const { DARABONBA_PTR_GET_CONST(planIds_, vector<string>) };
    inline vector<string> getPlanIds() { DARABONBA_PTR_GET(planIds_, vector<string>) };
    inline ListEdgeWorkersRequest& setPlanIds(const vector<string> & planIds) { DARABONBA_PTR_SET_VALUE(planIds_, planIds) };
    inline ListEdgeWorkersRequest& setPlanIds(vector<string> && planIds) { DARABONBA_PTR_SET_RVALUE(planIds_, planIds) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListEdgeWorkersRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListEdgeWorkersRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListEdgeWorkersRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListEdgeWorkersRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // This parameter is required for renewal scenarios.
    shared_ptr<string> endTime_ {};
    // The list of cluster IDs.
    shared_ptr<vector<string>> hiveIds_ {};
    // The list of payload IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The page number of the query. The value starts from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page for a paged query. The maximum value is 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The list of package IDs.
    shared_ptr<vector<string>> planIds_ {};
    // Specification
    shared_ptr<string> spec_ {};
    // The parameter for filtering by time range. The time must be in ISO 8601 format and use UTC. The format is yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> startTime_ {};
    // The list of statuses.
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
