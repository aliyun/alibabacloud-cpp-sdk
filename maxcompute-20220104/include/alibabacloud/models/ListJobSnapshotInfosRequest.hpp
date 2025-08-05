// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSREQUEST_HPP_
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
  class ListJobSnapshotInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSnapshotInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_TO_JSON(extNodeIdList, extNodeIdList_);
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(instanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_TO_JSON(priorityList, priorityList_);
      DARABONBA_PTR_TO_JSON(projectList, projectList_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_TO_JSON(signatureList, signatureList_);
      DARABONBA_PTR_TO_JSON(sortByList, sortByList_);
      DARABONBA_PTR_TO_JSON(sortOrderList, sortOrderList_);
      DARABONBA_PTR_TO_JSON(statusList, statusList_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(typeList, typeList_);
      DARABONBA_PTR_TO_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobSnapshotInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_FROM_JSON(extNodeIdList, extNodeIdList_);
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(instanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(jobOwnerList, jobOwnerList_);
      DARABONBA_PTR_FROM_JSON(priorityList, priorityList_);
      DARABONBA_PTR_FROM_JSON(projectList, projectList_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_FROM_JSON(signatureList, signatureList_);
      DARABONBA_PTR_FROM_JSON(sortByList, sortByList_);
      DARABONBA_PTR_FROM_JSON(sortOrderList, sortOrderList_);
      DARABONBA_PTR_FROM_JSON(statusList, statusList_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(typeList, typeList_);
      DARABONBA_PTR_FROM_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListJobSnapshotInfosRequest() = default ;
    ListJobSnapshotInfosRequest(const ListJobSnapshotInfosRequest &) = default ;
    ListJobSnapshotInfosRequest(ListJobSnapshotInfosRequest &&) = default ;
    ListJobSnapshotInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSnapshotInfosRequest() = default ;
    ListJobSnapshotInfosRequest& operator=(const ListJobSnapshotInfosRequest &) = default ;
    ListJobSnapshotInfosRequest& operator=(ListJobSnapshotInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ascOrder_ != nullptr
        && this->extNodeIdList_ != nullptr && this->from_ != nullptr && this->instanceIdList_ != nullptr && this->jobOwnerList_ != nullptr && this->priorityList_ != nullptr
        && this->projectList_ != nullptr && this->quotaNickname_ != nullptr && this->signatureList_ != nullptr && this->sortByList_ != nullptr && this->sortOrderList_ != nullptr
        && this->statusList_ != nullptr && this->to_ != nullptr && this->typeList_ != nullptr && this->orderColumn_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->region_ != nullptr && this->tenantId_ != nullptr; };
    // ascOrder Field Functions 
    bool hasAscOrder() const { return this->ascOrder_ != nullptr;};
    void deleteAscOrder() { this->ascOrder_ = nullptr;};
    inline bool ascOrder() const { DARABONBA_PTR_GET_DEFAULT(ascOrder_, false) };
    inline ListJobSnapshotInfosRequest& setAscOrder(bool ascOrder) { DARABONBA_PTR_SET_VALUE(ascOrder_, ascOrder) };


    // extNodeIdList Field Functions 
    bool hasExtNodeIdList() const { return this->extNodeIdList_ != nullptr;};
    void deleteExtNodeIdList() { this->extNodeIdList_ = nullptr;};
    inline const vector<string> & extNodeIdList() const { DARABONBA_PTR_GET_CONST(extNodeIdList_, vector<string>) };
    inline vector<string> extNodeIdList() { DARABONBA_PTR_GET(extNodeIdList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setExtNodeIdList(const vector<string> & extNodeIdList) { DARABONBA_PTR_SET_VALUE(extNodeIdList_, extNodeIdList) };
    inline ListJobSnapshotInfosRequest& setExtNodeIdList(vector<string> && extNodeIdList) { DARABONBA_PTR_SET_RVALUE(extNodeIdList_, extNodeIdList) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline ListJobSnapshotInfosRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline ListJobSnapshotInfosRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // jobOwnerList Field Functions 
    bool hasJobOwnerList() const { return this->jobOwnerList_ != nullptr;};
    void deleteJobOwnerList() { this->jobOwnerList_ = nullptr;};
    inline const vector<string> & jobOwnerList() const { DARABONBA_PTR_GET_CONST(jobOwnerList_, vector<string>) };
    inline vector<string> jobOwnerList() { DARABONBA_PTR_GET(jobOwnerList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setJobOwnerList(const vector<string> & jobOwnerList) { DARABONBA_PTR_SET_VALUE(jobOwnerList_, jobOwnerList) };
    inline ListJobSnapshotInfosRequest& setJobOwnerList(vector<string> && jobOwnerList) { DARABONBA_PTR_SET_RVALUE(jobOwnerList_, jobOwnerList) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline const vector<int64_t> & priorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<int64_t>) };
    inline vector<int64_t> priorityList() { DARABONBA_PTR_GET(priorityList_, vector<int64_t>) };
    inline ListJobSnapshotInfosRequest& setPriorityList(const vector<int64_t> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
    inline ListJobSnapshotInfosRequest& setPriorityList(vector<int64_t> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<string> & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<string>) };
    inline vector<string> projectList() { DARABONBA_PTR_GET(projectList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setProjectList(const vector<string> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline ListJobSnapshotInfosRequest& setProjectList(vector<string> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline ListJobSnapshotInfosRequest& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // signatureList Field Functions 
    bool hasSignatureList() const { return this->signatureList_ != nullptr;};
    void deleteSignatureList() { this->signatureList_ = nullptr;};
    inline const vector<string> & signatureList() const { DARABONBA_PTR_GET_CONST(signatureList_, vector<string>) };
    inline vector<string> signatureList() { DARABONBA_PTR_GET(signatureList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setSignatureList(const vector<string> & signatureList) { DARABONBA_PTR_SET_VALUE(signatureList_, signatureList) };
    inline ListJobSnapshotInfosRequest& setSignatureList(vector<string> && signatureList) { DARABONBA_PTR_SET_RVALUE(signatureList_, signatureList) };


    // sortByList Field Functions 
    bool hasSortByList() const { return this->sortByList_ != nullptr;};
    void deleteSortByList() { this->sortByList_ = nullptr;};
    inline const vector<string> & sortByList() const { DARABONBA_PTR_GET_CONST(sortByList_, vector<string>) };
    inline vector<string> sortByList() { DARABONBA_PTR_GET(sortByList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setSortByList(const vector<string> & sortByList) { DARABONBA_PTR_SET_VALUE(sortByList_, sortByList) };
    inline ListJobSnapshotInfosRequest& setSortByList(vector<string> && sortByList) { DARABONBA_PTR_SET_RVALUE(sortByList_, sortByList) };


    // sortOrderList Field Functions 
    bool hasSortOrderList() const { return this->sortOrderList_ != nullptr;};
    void deleteSortOrderList() { this->sortOrderList_ = nullptr;};
    inline const vector<string> & sortOrderList() const { DARABONBA_PTR_GET_CONST(sortOrderList_, vector<string>) };
    inline vector<string> sortOrderList() { DARABONBA_PTR_GET(sortOrderList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setSortOrderList(const vector<string> & sortOrderList) { DARABONBA_PTR_SET_VALUE(sortOrderList_, sortOrderList) };
    inline ListJobSnapshotInfosRequest& setSortOrderList(vector<string> && sortOrderList) { DARABONBA_PTR_SET_RVALUE(sortOrderList_, sortOrderList) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListJobSnapshotInfosRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline ListJobSnapshotInfosRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<string> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
    inline vector<string> typeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
    inline ListJobSnapshotInfosRequest& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline ListJobSnapshotInfosRequest& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListJobSnapshotInfosRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListJobSnapshotInfosRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListJobSnapshotInfosRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListJobSnapshotInfosRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListJobSnapshotInfosRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to sort data in ascending order.
    std::shared_ptr<bool> ascOrder_ = nullptr;
    // The ID of the upstream node.
    std::shared_ptr<vector<string>> extNodeIdList_ = nullptr;
    // Start timestamp.
    // > This parameter is invalid. The end timestamp should be the time point for the snapshot you want to view.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The instance ID.
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
    // The account that commits the job.
    std::shared_ptr<vector<string>> jobOwnerList_ = nullptr;
    // The priority of the job.
    std::shared_ptr<vector<int64_t>> priorityList_ = nullptr;
    // The name of project.
    std::shared_ptr<vector<string>> projectList_ = nullptr;
    // The nickname of the compute Quota used by the job.
    std::shared_ptr<string> quotaNickname_ = nullptr;
    // The signature of the SQL job.
    std::shared_ptr<vector<string>> signatureList_ = nullptr;
    // The sorting columns.
    std::shared_ptr<vector<string>> sortByList_ = nullptr;
    // The orders for the sorting columns.
    std::shared_ptr<vector<string>> sortOrderList_ = nullptr;
    // The status of jobs.
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    // End timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> to_ = nullptr;
    // The type of the job.
    std::shared_ptr<vector<string>> typeList_ = nullptr;
    // The sorting column.
    std::shared_ptr<string> orderColumn_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the tenant. You can log on to the MaxCompute console, and choose Tenants > Tenant Property from the left-side navigation pane to view the tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
