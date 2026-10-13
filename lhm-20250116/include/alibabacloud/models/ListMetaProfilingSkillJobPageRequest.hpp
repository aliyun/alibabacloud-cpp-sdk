// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGSKILLJOBPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGSKILLJOBPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingSkillJobPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingSkillJobPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentIds, componentIds_);
      DARABONBA_PTR_TO_JSON(dsId, dsId_);
      DARABONBA_PTR_TO_JSON(dsName, dsName_);
      DARABONBA_PTR_TO_JSON(dsType, dsType_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(isDisplaySystemTask, isDisplaySystemTask_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingSkillJobPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentIds, componentIds_);
      DARABONBA_PTR_FROM_JSON(dsId, dsId_);
      DARABONBA_PTR_FROM_JSON(dsName, dsName_);
      DARABONBA_PTR_FROM_JSON(dsType, dsType_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(isDisplaySystemTask, isDisplaySystemTask_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListMetaProfilingSkillJobPageRequest() = default ;
    ListMetaProfilingSkillJobPageRequest(const ListMetaProfilingSkillJobPageRequest &) = default ;
    ListMetaProfilingSkillJobPageRequest(ListMetaProfilingSkillJobPageRequest &&) = default ;
    ListMetaProfilingSkillJobPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingSkillJobPageRequest() = default ;
    ListMetaProfilingSkillJobPageRequest& operator=(const ListMetaProfilingSkillJobPageRequest &) = default ;
    ListMetaProfilingSkillJobPageRequest& operator=(ListMetaProfilingSkillJobPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentIds_ == nullptr
        && this->dsId_ == nullptr && this->dsName_ == nullptr && this->dsType_ == nullptr && this->groupBy_ == nullptr && this->isDisplaySystemTask_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->needTotalCount_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline const vector<int64_t> & getComponentIds() const { DARABONBA_PTR_GET_CONST(componentIds_, vector<int64_t>) };
    inline vector<int64_t> getComponentIds() { DARABONBA_PTR_GET(componentIds_, vector<int64_t>) };
    inline ListMetaProfilingSkillJobPageRequest& setComponentIds(const vector<int64_t> & componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };
    inline ListMetaProfilingSkillJobPageRequest& setComponentIds(vector<int64_t> && componentIds) { DARABONBA_PTR_SET_RVALUE(componentIds_, componentIds) };


    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline int64_t getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, 0L) };
    inline ListMetaProfilingSkillJobPageRequest& setDsId(int64_t dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline ListMetaProfilingSkillJobPageRequest& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ListMetaProfilingSkillJobPageRequest& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ListMetaProfilingSkillJobPageRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // isDisplaySystemTask Field Functions 
    bool hasIsDisplaySystemTask() const { return this->isDisplaySystemTask_ != nullptr;};
    void deleteIsDisplaySystemTask() { this->isDisplaySystemTask_ = nullptr;};
    inline bool getIsDisplaySystemTask() const { DARABONBA_PTR_GET_DEFAULT(isDisplaySystemTask_, false) };
    inline ListMetaProfilingSkillJobPageRequest& setIsDisplaySystemTask(bool isDisplaySystemTask) { DARABONBA_PTR_SET_VALUE(isDisplaySystemTask_, isDisplaySystemTask) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListMetaProfilingSkillJobPageRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListMetaProfilingSkillJobPageRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline ListMetaProfilingSkillJobPageRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMetaProfilingSkillJobPageRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListMetaProfilingSkillJobPageRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingSkillJobPageRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingSkillJobPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The list of component IDs used to filter profiling tasks by multiple data source components.
    shared_ptr<vector<int64_t>> componentIds_ {};
    // The data source ID.
    shared_ptr<int64_t> dsId_ {};
    // The data source name.
    shared_ptr<string> dsName_ {};
    // The data source type identifier.
    shared_ptr<string> dsType_ {};
    // The name of the grouping field used for aggregation.
    shared_ptr<string> groupBy_ {};
    // Specifies whether to display system built-in tasks.
    shared_ptr<bool> isDisplaySystemTask_ {};
    // The profiling task ID.
    shared_ptr<int64_t> jobId_ {};
    // The profiling task name.
    shared_ptr<string> jobName_ {};
    // Specifies whether to return the total number of records.
    shared_ptr<bool> needTotalCount_ {};
    // The name of the sort field.
    shared_ptr<string> orderBy_ {};
    // The sort direction, such as ascending (ASC) or descending (DESC).
    shared_ptr<string> orderDirection_ {};
    // The current page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of records to return per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
