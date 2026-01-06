// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDSUBTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDSUBTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeMvRecommendSubTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMvRecommendSubTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionInner, actionInner_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubtaskId, subtaskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMvRecommendSubTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionInner, actionInner_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubtaskId, subtaskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeMvRecommendSubTasksRequest() = default ;
    DescribeMvRecommendSubTasksRequest(const DescribeMvRecommendSubTasksRequest &) = default ;
    DescribeMvRecommendSubTasksRequest(DescribeMvRecommendSubTasksRequest &&) = default ;
    DescribeMvRecommendSubTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMvRecommendSubTasksRequest() = default ;
    DescribeMvRecommendSubTasksRequest& operator=(const DescribeMvRecommendSubTasksRequest &) = default ;
    DescribeMvRecommendSubTasksRequest& operator=(DescribeMvRecommendSubTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionInner_ == nullptr
        && this->DBClusterId_ == nullptr && this->from_ == nullptr && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->subtaskId_ == nullptr && this->taskName_ == nullptr; };
    // actionInner Field Functions 
    bool hasActionInner() const { return this->actionInner_ != nullptr;};
    void deleteActionInner() { this->actionInner_ = nullptr;};
    inline string getActionInner() const { DARABONBA_PTR_GET_DEFAULT(actionInner_, "") };
    inline DescribeMvRecommendSubTasksRequest& setActionInner(string actionInner) { DARABONBA_PTR_SET_VALUE(actionInner_, actionInner) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeMvRecommendSubTasksRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeMvRecommendSubTasksRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeMvRecommendSubTasksRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMvRecommendSubTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMvRecommendSubTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMvRecommendSubTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subtaskId Field Functions 
    bool hasSubtaskId() const { return this->subtaskId_ != nullptr;};
    void deleteSubtaskId() { this->subtaskId_ = nullptr;};
    inline int64_t getSubtaskId() const { DARABONBA_PTR_GET_DEFAULT(subtaskId_, 0L) };
    inline DescribeMvRecommendSubTasksRequest& setSubtaskId(int64_t subtaskId) { DARABONBA_PTR_SET_VALUE(subtaskId_, subtaskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeMvRecommendSubTasksRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Fixed system value (non-modifiable).
    shared_ptr<string> actionInner_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // Fixed system value (non-modifiable).
    shared_ptr<string> from_ {};
    // The sorting field. Valid values for Type:
    // 
    // *   Asc.
    // *   Desc.
    // 
    // Valid values for Field:
    // 
    // *   StartTime;
    // *   EndTime;
    shared_ptr<string> orderBy_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The subtask ID.
    shared_ptr<int64_t> subtaskId_ {};
    // The name of the recommendation task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
