// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_TO_JSON(extNodeIdList, extNodeIdList_);
      DARABONBA_PTR_TO_JSON(extNodeNameList, extNodeNameList_);
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(instanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_TO_JSON(priorityList, priorityList_);
      DARABONBA_PTR_TO_JSON(projectList, projectList_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_TO_JSON(sceneTagList, sceneTagList_);
      DARABONBA_PTR_TO_JSON(signatureList, signatureList_);
      DARABONBA_PTR_TO_JSON(sortByList, sortByList_);
      DARABONBA_PTR_TO_JSON(sortOrderList, sortOrderList_);
      DARABONBA_PTR_TO_JSON(statusList, statusList_);
      DARABONBA_PTR_TO_JSON(taskNameList, taskNameList_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(typeList, typeList_);
      DARABONBA_PTR_TO_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_FROM_JSON(extNodeIdList, extNodeIdList_);
      DARABONBA_PTR_FROM_JSON(extNodeNameList, extNodeNameList_);
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(instanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_FROM_JSON(priorityList, priorityList_);
      DARABONBA_PTR_FROM_JSON(projectList, projectList_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_FROM_JSON(sceneTagList, sceneTagList_);
      DARABONBA_PTR_FROM_JSON(signatureList, signatureList_);
      DARABONBA_PTR_FROM_JSON(sortByList, sortByList_);
      DARABONBA_PTR_FROM_JSON(sortOrderList, sortOrderList_);
      DARABONBA_PTR_FROM_JSON(statusList, statusList_);
      DARABONBA_PTR_FROM_JSON(taskNameList, taskNameList_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(typeList, typeList_);
      DARABONBA_PTR_FROM_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListJobInfosRequest() = default ;
    ListJobInfosRequest(const ListJobInfosRequest &) = default ;
    ListJobInfosRequest(ListJobInfosRequest &&) = default ;
    ListJobInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfosRequest() = default ;
    ListJobInfosRequest& operator=(const ListJobInfosRequest &) = default ;
    ListJobInfosRequest& operator=(ListJobInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ascOrder_ == nullptr
        && return this->extNodeIdList_ == nullptr && return this->extNodeNameList_ == nullptr && return this->from_ == nullptr && return this->instanceIdList_ == nullptr && return this->jobOwnerList_ == nullptr
        && return this->priorityList_ == nullptr && return this->projectList_ == nullptr && return this->quotaNickname_ == nullptr && return this->sceneTagList_ == nullptr && return this->signatureList_ == nullptr
        && return this->sortByList_ == nullptr && return this->sortOrderList_ == nullptr && return this->statusList_ == nullptr && return this->taskNameList_ == nullptr && return this->to_ == nullptr
        && return this->typeList_ == nullptr && return this->orderColumn_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->region_ == nullptr
        && return this->tenantId_ == nullptr; };
    // ascOrder Field Functions 
    bool hasAscOrder() const { return this->ascOrder_ != nullptr;};
    void deleteAscOrder() { this->ascOrder_ = nullptr;};
    inline bool ascOrder() const { DARABONBA_PTR_GET_DEFAULT(ascOrder_, false) };
    inline ListJobInfosRequest& setAscOrder(bool ascOrder) { DARABONBA_PTR_SET_VALUE(ascOrder_, ascOrder) };


    // extNodeIdList Field Functions 
    bool hasExtNodeIdList() const { return this->extNodeIdList_ != nullptr;};
    void deleteExtNodeIdList() { this->extNodeIdList_ = nullptr;};
    inline const vector<string> & extNodeIdList() const { DARABONBA_PTR_GET_CONST(extNodeIdList_, vector<string>) };
    inline vector<string> extNodeIdList() { DARABONBA_PTR_GET(extNodeIdList_, vector<string>) };
    inline ListJobInfosRequest& setExtNodeIdList(const vector<string> & extNodeIdList) { DARABONBA_PTR_SET_VALUE(extNodeIdList_, extNodeIdList) };
    inline ListJobInfosRequest& setExtNodeIdList(vector<string> && extNodeIdList) { DARABONBA_PTR_SET_RVALUE(extNodeIdList_, extNodeIdList) };


    // extNodeNameList Field Functions 
    bool hasExtNodeNameList() const { return this->extNodeNameList_ != nullptr;};
    void deleteExtNodeNameList() { this->extNodeNameList_ = nullptr;};
    inline const vector<string> & extNodeNameList() const { DARABONBA_PTR_GET_CONST(extNodeNameList_, vector<string>) };
    inline vector<string> extNodeNameList() { DARABONBA_PTR_GET(extNodeNameList_, vector<string>) };
    inline ListJobInfosRequest& setExtNodeNameList(const vector<string> & extNodeNameList) { DARABONBA_PTR_SET_VALUE(extNodeNameList_, extNodeNameList) };
    inline ListJobInfosRequest& setExtNodeNameList(vector<string> && extNodeNameList) { DARABONBA_PTR_SET_RVALUE(extNodeNameList_, extNodeNameList) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline ListJobInfosRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline ListJobInfosRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline ListJobInfosRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // jobOwnerList Field Functions 
    bool hasJobOwnerList() const { return this->jobOwnerList_ != nullptr;};
    void deleteJobOwnerList() { this->jobOwnerList_ = nullptr;};
    inline const vector<string> & jobOwnerList() const { DARABONBA_PTR_GET_CONST(jobOwnerList_, vector<string>) };
    inline vector<string> jobOwnerList() { DARABONBA_PTR_GET(jobOwnerList_, vector<string>) };
    inline ListJobInfosRequest& setJobOwnerList(const vector<string> & jobOwnerList) { DARABONBA_PTR_SET_VALUE(jobOwnerList_, jobOwnerList) };
    inline ListJobInfosRequest& setJobOwnerList(vector<string> && jobOwnerList) { DARABONBA_PTR_SET_RVALUE(jobOwnerList_, jobOwnerList) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline const vector<int64_t> & priorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<int64_t>) };
    inline vector<int64_t> priorityList() { DARABONBA_PTR_GET(priorityList_, vector<int64_t>) };
    inline ListJobInfosRequest& setPriorityList(const vector<int64_t> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
    inline ListJobInfosRequest& setPriorityList(vector<int64_t> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<string> & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<string>) };
    inline vector<string> projectList() { DARABONBA_PTR_GET(projectList_, vector<string>) };
    inline ListJobInfosRequest& setProjectList(const vector<string> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline ListJobInfosRequest& setProjectList(vector<string> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline ListJobInfosRequest& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // sceneTagList Field Functions 
    bool hasSceneTagList() const { return this->sceneTagList_ != nullptr;};
    void deleteSceneTagList() { this->sceneTagList_ = nullptr;};
    inline const vector<string> & sceneTagList() const { DARABONBA_PTR_GET_CONST(sceneTagList_, vector<string>) };
    inline vector<string> sceneTagList() { DARABONBA_PTR_GET(sceneTagList_, vector<string>) };
    inline ListJobInfosRequest& setSceneTagList(const vector<string> & sceneTagList) { DARABONBA_PTR_SET_VALUE(sceneTagList_, sceneTagList) };
    inline ListJobInfosRequest& setSceneTagList(vector<string> && sceneTagList) { DARABONBA_PTR_SET_RVALUE(sceneTagList_, sceneTagList) };


    // signatureList Field Functions 
    bool hasSignatureList() const { return this->signatureList_ != nullptr;};
    void deleteSignatureList() { this->signatureList_ = nullptr;};
    inline const vector<string> & signatureList() const { DARABONBA_PTR_GET_CONST(signatureList_, vector<string>) };
    inline vector<string> signatureList() { DARABONBA_PTR_GET(signatureList_, vector<string>) };
    inline ListJobInfosRequest& setSignatureList(const vector<string> & signatureList) { DARABONBA_PTR_SET_VALUE(signatureList_, signatureList) };
    inline ListJobInfosRequest& setSignatureList(vector<string> && signatureList) { DARABONBA_PTR_SET_RVALUE(signatureList_, signatureList) };


    // sortByList Field Functions 
    bool hasSortByList() const { return this->sortByList_ != nullptr;};
    void deleteSortByList() { this->sortByList_ = nullptr;};
    inline const vector<string> & sortByList() const { DARABONBA_PTR_GET_CONST(sortByList_, vector<string>) };
    inline vector<string> sortByList() { DARABONBA_PTR_GET(sortByList_, vector<string>) };
    inline ListJobInfosRequest& setSortByList(const vector<string> & sortByList) { DARABONBA_PTR_SET_VALUE(sortByList_, sortByList) };
    inline ListJobInfosRequest& setSortByList(vector<string> && sortByList) { DARABONBA_PTR_SET_RVALUE(sortByList_, sortByList) };


    // sortOrderList Field Functions 
    bool hasSortOrderList() const { return this->sortOrderList_ != nullptr;};
    void deleteSortOrderList() { this->sortOrderList_ = nullptr;};
    inline const vector<string> & sortOrderList() const { DARABONBA_PTR_GET_CONST(sortOrderList_, vector<string>) };
    inline vector<string> sortOrderList() { DARABONBA_PTR_GET(sortOrderList_, vector<string>) };
    inline ListJobInfosRequest& setSortOrderList(const vector<string> & sortOrderList) { DARABONBA_PTR_SET_VALUE(sortOrderList_, sortOrderList) };
    inline ListJobInfosRequest& setSortOrderList(vector<string> && sortOrderList) { DARABONBA_PTR_SET_RVALUE(sortOrderList_, sortOrderList) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListJobInfosRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListJobInfosRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // taskNameList Field Functions 
    bool hasTaskNameList() const { return this->taskNameList_ != nullptr;};
    void deleteTaskNameList() { this->taskNameList_ = nullptr;};
    inline const vector<string> & taskNameList() const { DARABONBA_PTR_GET_CONST(taskNameList_, vector<string>) };
    inline vector<string> taskNameList() { DARABONBA_PTR_GET(taskNameList_, vector<string>) };
    inline ListJobInfosRequest& setTaskNameList(const vector<string> & taskNameList) { DARABONBA_PTR_SET_VALUE(taskNameList_, taskNameList) };
    inline ListJobInfosRequest& setTaskNameList(vector<string> && taskNameList) { DARABONBA_PTR_SET_RVALUE(taskNameList_, taskNameList) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline ListJobInfosRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<string> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
    inline vector<string> typeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
    inline ListJobInfosRequest& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline ListJobInfosRequest& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListJobInfosRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListJobInfosRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListJobInfosRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListJobInfosRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListJobInfosRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to sort query results in ascending or descending order.
    std::shared_ptr<bool> ascOrder_ = nullptr;
    // The ancestor node IDs.
    std::shared_ptr<vector<string>> extNodeIdList_ = nullptr;
    std::shared_ptr<vector<string>> extNodeNameList_ = nullptr;
    // The start timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The job instance IDs.
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
    // The job owners.
    std::shared_ptr<vector<string>> jobOwnerList_ = nullptr;
    // The job priorities.
    std::shared_ptr<vector<int64_t>> priorityList_ = nullptr;
    // The project names.
    std::shared_ptr<vector<string>> projectList_ = nullptr;
    // The quota nickname.
    std::shared_ptr<string> quotaNickname_ = nullptr;
    // The intelligent diagnostics tags.
    std::shared_ptr<vector<string>> sceneTagList_ = nullptr;
    // The job signatures.
    std::shared_ptr<vector<string>> signatureList_ = nullptr;
    // The sorting columns.
    std::shared_ptr<vector<string>> sortByList_ = nullptr;
    // The orders for the sorting columns.
    std::shared_ptr<vector<string>> sortOrderList_ = nullptr;
    // The job states.
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    std::shared_ptr<vector<string>> taskNameList_ = nullptr;
    // The end timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> to_ = nullptr;
    // The job types.
    std::shared_ptr<vector<string>> typeList_ = nullptr;
    // The column based on which you want to sort query results.
    std::shared_ptr<string> orderColumn_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
