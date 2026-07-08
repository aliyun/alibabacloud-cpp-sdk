// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGEWORKERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGEWORKERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListEdgeWorkersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HiveIds, hiveIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanIds, planIdsShrink_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeWorkersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HiveIds, hiveIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanIds, planIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
    };
    ListEdgeWorkersShrinkRequest() = default ;
    ListEdgeWorkersShrinkRequest(const ListEdgeWorkersShrinkRequest &) = default ;
    ListEdgeWorkersShrinkRequest(ListEdgeWorkersShrinkRequest &&) = default ;
    ListEdgeWorkersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeWorkersShrinkRequest() = default ;
    ListEdgeWorkersShrinkRequest& operator=(const ListEdgeWorkersShrinkRequest &) = default ;
    ListEdgeWorkersShrinkRequest& operator=(ListEdgeWorkersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->hiveIdsShrink_ == nullptr && this->instanceIdsShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->planIdsShrink_ == nullptr
        && this->spec_ == nullptr && this->startTime_ == nullptr && this->statusesShrink_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListEdgeWorkersShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hiveIdsShrink Field Functions 
    bool hasHiveIdsShrink() const { return this->hiveIdsShrink_ != nullptr;};
    void deleteHiveIdsShrink() { this->hiveIdsShrink_ = nullptr;};
    inline string getHiveIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(hiveIdsShrink_, "") };
    inline ListEdgeWorkersShrinkRequest& setHiveIdsShrink(string hiveIdsShrink) { DARABONBA_PTR_SET_VALUE(hiveIdsShrink_, hiveIdsShrink) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline ListEdgeWorkersShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeWorkersShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeWorkersShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planIdsShrink Field Functions 
    bool hasPlanIdsShrink() const { return this->planIdsShrink_ != nullptr;};
    void deletePlanIdsShrink() { this->planIdsShrink_ = nullptr;};
    inline string getPlanIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(planIdsShrink_, "") };
    inline ListEdgeWorkersShrinkRequest& setPlanIdsShrink(string planIdsShrink) { DARABONBA_PTR_SET_VALUE(planIdsShrink_, planIdsShrink) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListEdgeWorkersShrinkRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListEdgeWorkersShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListEdgeWorkersShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


  protected:
    // This parameter is required for renewal scenarios.
    shared_ptr<string> endTime_ {};
    // The list of cluster IDs.
    shared_ptr<string> hiveIdsShrink_ {};
    // The list of payload IDs.
    shared_ptr<string> instanceIdsShrink_ {};
    // The page number of the query. The value starts from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page for a paged query. The maximum value is 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The list of package IDs.
    shared_ptr<string> planIdsShrink_ {};
    // Specification
    shared_ptr<string> spec_ {};
    // The parameter for filtering by time range. The time must be in ISO 8601 format and use UTC. The format is yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> startTime_ {};
    // The list of statuses.
    shared_ptr<string> statusesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
