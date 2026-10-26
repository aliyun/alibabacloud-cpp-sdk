// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHRESTOREWINDOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHRESTOREWINDOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBBranchRestoreWindowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBBranchRestoreWindowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EarliestRestorableTime, earliestRestorableTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(QueriedAt, queriedAt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBBranchRestoreWindowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EarliestRestorableTime, earliestRestorableTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(QueriedAt, queriedAt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeAgenticDBBranchRestoreWindowResponseBody() = default ;
    DescribeAgenticDBBranchRestoreWindowResponseBody(const DescribeAgenticDBBranchRestoreWindowResponseBody &) = default ;
    DescribeAgenticDBBranchRestoreWindowResponseBody(DescribeAgenticDBBranchRestoreWindowResponseBody &&) = default ;
    DescribeAgenticDBBranchRestoreWindowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBBranchRestoreWindowResponseBody() = default ;
    DescribeAgenticDBBranchRestoreWindowResponseBody& operator=(const DescribeAgenticDBBranchRestoreWindowResponseBody &) = default ;
    DescribeAgenticDBBranchRestoreWindowResponseBody& operator=(DescribeAgenticDBBranchRestoreWindowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchId_ == nullptr
        && this->DBClusterId_ == nullptr && this->earliestRestorableTime_ == nullptr && this->projectId_ == nullptr && this->queriedAt_ == nullptr && this->requestId_ == nullptr
        && this->tenantId_ == nullptr; };
    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // earliestRestorableTime Field Functions 
    bool hasEarliestRestorableTime() const { return this->earliestRestorableTime_ != nullptr;};
    void deleteEarliestRestorableTime() { this->earliestRestorableTime_ = nullptr;};
    inline string getEarliestRestorableTime() const { DARABONBA_PTR_GET_DEFAULT(earliestRestorableTime_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setEarliestRestorableTime(string earliestRestorableTime) { DARABONBA_PTR_SET_VALUE(earliestRestorableTime_, earliestRestorableTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // queriedAt Field Functions 
    bool hasQueriedAt() const { return this->queriedAt_ != nullptr;};
    void deleteQueriedAt() { this->queriedAt_ = nullptr;};
    inline string getQueriedAt() const { DARABONBA_PTR_GET_DEFAULT(queriedAt_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setQueriedAt(string queriedAt) { DARABONBA_PTR_SET_VALUE(queriedAt_, queriedAt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeAgenticDBBranchRestoreWindowResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the source branch.
    shared_ptr<string> branchId_ {};
    // DBClusterId
    shared_ptr<string> DBClusterId_ {};
    // The earliest time available for creating a historical branch, in UTC RFC3339 format. This time point can be selected. The available range changes over time and is revalidated during creation.
    shared_ptr<string> earliestRestorableTime_ {};
    // ProjectId
    shared_ptr<string> projectId_ {};
    // The time when the query was completed, in UTC RFC3339 format. This does not represent the latest restorable time.
    shared_ptr<string> queriedAt_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // TenantId
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
