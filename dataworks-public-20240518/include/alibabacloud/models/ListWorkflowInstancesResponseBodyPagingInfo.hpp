// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowInstancesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkflowInstances, workflowInstances_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstances, workflowInstances_);
    };
    ListWorkflowInstancesResponseBodyPagingInfo() = default ;
    ListWorkflowInstancesResponseBodyPagingInfo(const ListWorkflowInstancesResponseBodyPagingInfo &) = default ;
    ListWorkflowInstancesResponseBodyPagingInfo(ListWorkflowInstancesResponseBodyPagingInfo &&) = default ;
    ListWorkflowInstancesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstancesResponseBodyPagingInfo() = default ;
    ListWorkflowInstancesResponseBodyPagingInfo& operator=(const ListWorkflowInstancesResponseBodyPagingInfo &) = default ;
    ListWorkflowInstancesResponseBodyPagingInfo& operator=(ListWorkflowInstancesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr && return this->workflowInstances_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkflowInstancesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkflowInstancesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkflowInstancesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workflowInstances Field Functions 
    bool hasWorkflowInstances() const { return this->workflowInstances_ != nullptr;};
    void deleteWorkflowInstances() { this->workflowInstances_ = nullptr;};
    inline const vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances> & workflowInstances() const { DARABONBA_PTR_GET_CONST(workflowInstances_, vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances>) };
    inline vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances> workflowInstances() { DARABONBA_PTR_GET(workflowInstances_, vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances>) };
    inline ListWorkflowInstancesResponseBodyPagingInfo& setWorkflowInstances(const vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances> & workflowInstances) { DARABONBA_PTR_SET_VALUE(workflowInstances_, workflowInstances) };
    inline ListWorkflowInstancesResponseBodyPagingInfo& setWorkflowInstances(vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances> && workflowInstances) { DARABONBA_PTR_SET_RVALUE(workflowInstances_, workflowInstances) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The workflow instances.
    std::shared_ptr<vector<Models::ListWorkflowInstancesResponseBodyPagingInfoWorkflowInstances>> workflowInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
