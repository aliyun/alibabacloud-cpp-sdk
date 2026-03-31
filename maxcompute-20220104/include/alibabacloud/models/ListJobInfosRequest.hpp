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
        && this->extNodeIdList_ == nullptr && this->extNodeNameList_ == nullptr && this->from_ == nullptr && this->instanceIdList_ == nullptr && this->jobOwnerList_ == nullptr
        && this->priorityList_ == nullptr && this->projectList_ == nullptr && this->quotaNickname_ == nullptr && this->sceneTagList_ == nullptr && this->signatureList_ == nullptr
        && this->sortByList_ == nullptr && this->sortOrderList_ == nullptr && this->statusList_ == nullptr && this->taskNameList_ == nullptr && this->to_ == nullptr
        && this->typeList_ == nullptr && this->orderColumn_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr
        && this->tenantId_ == nullptr; };
    // ascOrder Field Functions 
    bool hasAscOrder() const { return this->ascOrder_ != nullptr;};
    void deleteAscOrder() { this->ascOrder_ = nullptr;};
    inline bool getAscOrder() const { DARABONBA_PTR_GET_DEFAULT(ascOrder_, false) };
    inline ListJobInfosRequest& setAscOrder(bool ascOrder) { DARABONBA_PTR_SET_VALUE(ascOrder_, ascOrder) };


    // extNodeIdList Field Functions 
    bool hasExtNodeIdList() const { return this->extNodeIdList_ != nullptr;};
    void deleteExtNodeIdList() { this->extNodeIdList_ = nullptr;};
    inline const vector<string> & getExtNodeIdList() const { DARABONBA_PTR_GET_CONST(extNodeIdList_, vector<string>) };
    inline vector<string> getExtNodeIdList() { DARABONBA_PTR_GET(extNodeIdList_, vector<string>) };
    inline ListJobInfosRequest& setExtNodeIdList(const vector<string> & extNodeIdList) { DARABONBA_PTR_SET_VALUE(extNodeIdList_, extNodeIdList) };
    inline ListJobInfosRequest& setExtNodeIdList(vector<string> && extNodeIdList) { DARABONBA_PTR_SET_RVALUE(extNodeIdList_, extNodeIdList) };


    // extNodeNameList Field Functions 
    bool hasExtNodeNameList() const { return this->extNodeNameList_ != nullptr;};
    void deleteExtNodeNameList() { this->extNodeNameList_ = nullptr;};
    inline const vector<string> & getExtNodeNameList() const { DARABONBA_PTR_GET_CONST(extNodeNameList_, vector<string>) };
    inline vector<string> getExtNodeNameList() { DARABONBA_PTR_GET(extNodeNameList_, vector<string>) };
    inline ListJobInfosRequest& setExtNodeNameList(const vector<string> & extNodeNameList) { DARABONBA_PTR_SET_VALUE(extNodeNameList_, extNodeNameList) };
    inline ListJobInfosRequest& setExtNodeNameList(vector<string> && extNodeNameList) { DARABONBA_PTR_SET_RVALUE(extNodeNameList_, extNodeNameList) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline ListJobInfosRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & getInstanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> getInstanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline ListJobInfosRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline ListJobInfosRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // jobOwnerList Field Functions 
    bool hasJobOwnerList() const { return this->jobOwnerList_ != nullptr;};
    void deleteJobOwnerList() { this->jobOwnerList_ = nullptr;};
    inline const vector<string> & getJobOwnerList() const { DARABONBA_PTR_GET_CONST(jobOwnerList_, vector<string>) };
    inline vector<string> getJobOwnerList() { DARABONBA_PTR_GET(jobOwnerList_, vector<string>) };
    inline ListJobInfosRequest& setJobOwnerList(const vector<string> & jobOwnerList) { DARABONBA_PTR_SET_VALUE(jobOwnerList_, jobOwnerList) };
    inline ListJobInfosRequest& setJobOwnerList(vector<string> && jobOwnerList) { DARABONBA_PTR_SET_RVALUE(jobOwnerList_, jobOwnerList) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline const vector<int64_t> & getPriorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<int64_t>) };
    inline vector<int64_t> getPriorityList() { DARABONBA_PTR_GET(priorityList_, vector<int64_t>) };
    inline ListJobInfosRequest& setPriorityList(const vector<int64_t> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
    inline ListJobInfosRequest& setPriorityList(vector<int64_t> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<string> & getProjectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<string>) };
    inline vector<string> getProjectList() { DARABONBA_PTR_GET(projectList_, vector<string>) };
    inline ListJobInfosRequest& setProjectList(const vector<string> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline ListJobInfosRequest& setProjectList(vector<string> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string getQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline ListJobInfosRequest& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // sceneTagList Field Functions 
    bool hasSceneTagList() const { return this->sceneTagList_ != nullptr;};
    void deleteSceneTagList() { this->sceneTagList_ = nullptr;};
    inline const vector<string> & getSceneTagList() const { DARABONBA_PTR_GET_CONST(sceneTagList_, vector<string>) };
    inline vector<string> getSceneTagList() { DARABONBA_PTR_GET(sceneTagList_, vector<string>) };
    inline ListJobInfosRequest& setSceneTagList(const vector<string> & sceneTagList) { DARABONBA_PTR_SET_VALUE(sceneTagList_, sceneTagList) };
    inline ListJobInfosRequest& setSceneTagList(vector<string> && sceneTagList) { DARABONBA_PTR_SET_RVALUE(sceneTagList_, sceneTagList) };


    // signatureList Field Functions 
    bool hasSignatureList() const { return this->signatureList_ != nullptr;};
    void deleteSignatureList() { this->signatureList_ = nullptr;};
    inline const vector<string> & getSignatureList() const { DARABONBA_PTR_GET_CONST(signatureList_, vector<string>) };
    inline vector<string> getSignatureList() { DARABONBA_PTR_GET(signatureList_, vector<string>) };
    inline ListJobInfosRequest& setSignatureList(const vector<string> & signatureList) { DARABONBA_PTR_SET_VALUE(signatureList_, signatureList) };
    inline ListJobInfosRequest& setSignatureList(vector<string> && signatureList) { DARABONBA_PTR_SET_RVALUE(signatureList_, signatureList) };


    // sortByList Field Functions 
    bool hasSortByList() const { return this->sortByList_ != nullptr;};
    void deleteSortByList() { this->sortByList_ = nullptr;};
    inline const vector<string> & getSortByList() const { DARABONBA_PTR_GET_CONST(sortByList_, vector<string>) };
    inline vector<string> getSortByList() { DARABONBA_PTR_GET(sortByList_, vector<string>) };
    inline ListJobInfosRequest& setSortByList(const vector<string> & sortByList) { DARABONBA_PTR_SET_VALUE(sortByList_, sortByList) };
    inline ListJobInfosRequest& setSortByList(vector<string> && sortByList) { DARABONBA_PTR_SET_RVALUE(sortByList_, sortByList) };


    // sortOrderList Field Functions 
    bool hasSortOrderList() const { return this->sortOrderList_ != nullptr;};
    void deleteSortOrderList() { this->sortOrderList_ = nullptr;};
    inline const vector<string> & getSortOrderList() const { DARABONBA_PTR_GET_CONST(sortOrderList_, vector<string>) };
    inline vector<string> getSortOrderList() { DARABONBA_PTR_GET(sortOrderList_, vector<string>) };
    inline ListJobInfosRequest& setSortOrderList(const vector<string> & sortOrderList) { DARABONBA_PTR_SET_VALUE(sortOrderList_, sortOrderList) };
    inline ListJobInfosRequest& setSortOrderList(vector<string> && sortOrderList) { DARABONBA_PTR_SET_RVALUE(sortOrderList_, sortOrderList) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListJobInfosRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListJobInfosRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // taskNameList Field Functions 
    bool hasTaskNameList() const { return this->taskNameList_ != nullptr;};
    void deleteTaskNameList() { this->taskNameList_ = nullptr;};
    inline const vector<string> & getTaskNameList() const { DARABONBA_PTR_GET_CONST(taskNameList_, vector<string>) };
    inline vector<string> getTaskNameList() { DARABONBA_PTR_GET(taskNameList_, vector<string>) };
    inline ListJobInfosRequest& setTaskNameList(const vector<string> & taskNameList) { DARABONBA_PTR_SET_VALUE(taskNameList_, taskNameList) };
    inline ListJobInfosRequest& setTaskNameList(vector<string> && taskNameList) { DARABONBA_PTR_SET_RVALUE(taskNameList_, taskNameList) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline ListJobInfosRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<string> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
    inline vector<string> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
    inline ListJobInfosRequest& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline ListJobInfosRequest& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListJobInfosRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListJobInfosRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListJobInfosRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListJobInfosRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListJobInfosRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to sort query results in ascending or descending order.
    shared_ptr<bool> ascOrder_ {};
    // The ancestor node IDs.
    shared_ptr<vector<string>> extNodeIdList_ {};
    shared_ptr<vector<string>> extNodeNameList_ {};
    // The start timestamp.
    // 
    // This parameter is required.
    shared_ptr<int64_t> from_ {};
    // The job instance IDs.
    shared_ptr<vector<string>> instanceIdList_ {};
    // The job owners.
    shared_ptr<vector<string>> jobOwnerList_ {};
    // The job priorities.
    shared_ptr<vector<int64_t>> priorityList_ {};
    // The project names.
    shared_ptr<vector<string>> projectList_ {};
    // The quota nickname.
    shared_ptr<string> quotaNickname_ {};
    // The intelligent diagnostics tags.
    shared_ptr<vector<string>> sceneTagList_ {};
    // The job signatures.
    shared_ptr<vector<string>> signatureList_ {};
    // The sorting columns.
    shared_ptr<vector<string>> sortByList_ {};
    // The orders for the sorting columns.
    shared_ptr<vector<string>> sortOrderList_ {};
    // The job states.
    shared_ptr<vector<string>> statusList_ {};
    shared_ptr<vector<string>> taskNameList_ {};
    // The end timestamp.
    // 
    // This parameter is required.
    shared_ptr<int64_t> to_ {};
    // The job types.
    shared_ptr<vector<string>> typeList_ {};
    // The column based on which you want to sort query results.
    shared_ptr<string> orderColumn_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
