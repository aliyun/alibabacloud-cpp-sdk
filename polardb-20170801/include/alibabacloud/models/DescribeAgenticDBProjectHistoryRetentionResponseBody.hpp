// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPROJECTHISTORYRETENTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPROJECTHISTORYRETENTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBProjectHistoryRetentionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBProjectHistoryRetentionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(HistoryRetentionSeconds, historyRetentionSeconds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(QueriedAt, queriedAt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBProjectHistoryRetentionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(HistoryRetentionSeconds, historyRetentionSeconds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(QueriedAt, queriedAt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeAgenticDBProjectHistoryRetentionResponseBody() = default ;
    DescribeAgenticDBProjectHistoryRetentionResponseBody(const DescribeAgenticDBProjectHistoryRetentionResponseBody &) = default ;
    DescribeAgenticDBProjectHistoryRetentionResponseBody(DescribeAgenticDBProjectHistoryRetentionResponseBody &&) = default ;
    DescribeAgenticDBProjectHistoryRetentionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBProjectHistoryRetentionResponseBody() = default ;
    DescribeAgenticDBProjectHistoryRetentionResponseBody& operator=(const DescribeAgenticDBProjectHistoryRetentionResponseBody &) = default ;
    DescribeAgenticDBProjectHistoryRetentionResponseBody& operator=(DescribeAgenticDBProjectHistoryRetentionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->historyRetentionSeconds_ == nullptr && this->projectId_ == nullptr && this->queriedAt_ == nullptr && this->requestId_ == nullptr && this->tenantId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAgenticDBProjectHistoryRetentionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // historyRetentionSeconds Field Functions 
    bool hasHistoryRetentionSeconds() const { return this->historyRetentionSeconds_ != nullptr;};
    void deleteHistoryRetentionSeconds() { this->historyRetentionSeconds_ = nullptr;};
    inline int64_t getHistoryRetentionSeconds() const { DARABONBA_PTR_GET_DEFAULT(historyRetentionSeconds_, 0L) };
    inline DescribeAgenticDBProjectHistoryRetentionResponseBody& setHistoryRetentionSeconds(int64_t historyRetentionSeconds) { DARABONBA_PTR_SET_VALUE(historyRetentionSeconds_, historyRetentionSeconds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeAgenticDBProjectHistoryRetentionResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // queriedAt Field Functions 
    bool hasQueriedAt() const { return this->queriedAt_ != nullptr;};
    void deleteQueriedAt() { this->queriedAt_ = nullptr;};
    inline string getQueriedAt() const { DARABONBA_PTR_GET_DEFAULT(queriedAt_, "") };
    inline DescribeAgenticDBProjectHistoryRetentionResponseBody& setQueriedAt(string queriedAt) { DARABONBA_PTR_SET_VALUE(queriedAt_, queriedAt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBProjectHistoryRetentionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeAgenticDBProjectHistoryRetentionResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // DBClusterId
    shared_ptr<string> DBClusterId_ {};
    // The effective history data retention period for the project. For the actual recoverable range, query the branch recovery window.
    shared_ptr<int64_t> historyRetentionSeconds_ {};
    // ProjectId
    shared_ptr<string> projectId_ {};
    // The time when the query was completed, in UTC RFC3339 format. This does not represent the latest recoverable time.
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
