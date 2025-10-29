// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowDefinitionsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowDefinitionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkflowDefinitions, workflowDefinitions_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowDefinitionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkflowDefinitions, workflowDefinitions_);
    };
    ListWorkflowDefinitionsResponseBodyPagingInfo() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfo(const ListWorkflowDefinitionsResponseBodyPagingInfo &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfo(ListWorkflowDefinitionsResponseBodyPagingInfo &&) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowDefinitionsResponseBodyPagingInfo() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfo& operator=(const ListWorkflowDefinitionsResponseBodyPagingInfo &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfo& operator=(ListWorkflowDefinitionsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr && return this->workflowDefinitions_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workflowDefinitions Field Functions 
    bool hasWorkflowDefinitions() const { return this->workflowDefinitions_ != nullptr;};
    void deleteWorkflowDefinitions() { this->workflowDefinitions_ = nullptr;};
    inline const vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions> & workflowDefinitions() const { DARABONBA_PTR_GET_CONST(workflowDefinitions_, vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>) };
    inline vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions> workflowDefinitions() { DARABONBA_PTR_GET(workflowDefinitions_, vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfo& setWorkflowDefinitions(const vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions> & workflowDefinitions) { DARABONBA_PTR_SET_VALUE(workflowDefinitions_, workflowDefinitions) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfo& setWorkflowDefinitions(vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions> && workflowDefinitions) { DARABONBA_PTR_SET_RVALUE(workflowDefinitions_, workflowDefinitions) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The workflows.
    std::shared_ptr<vector<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>> workflowDefinitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
