// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSyncJobListResponseBodySyncJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncJobs, syncJobs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncJobs, syncJobs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSyncJobListResponseBody() = default ;
    DescribeSyncJobListResponseBody(const DescribeSyncJobListResponseBody &) = default ;
    DescribeSyncJobListResponseBody(DescribeSyncJobListResponseBody &&) = default ;
    DescribeSyncJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncJobListResponseBody() = default ;
    DescribeSyncJobListResponseBody& operator=(const DescribeSyncJobListResponseBody &) = default ;
    DescribeSyncJobListResponseBody& operator=(DescribeSyncJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->syncJobs_ != nullptr && this->totalCount_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline int32_t DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, 0) };
    inline DescribeSyncJobListResponseBody& setDBClusterId(int32_t DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSyncJobListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSyncJobListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncJobs Field Functions 
    bool hasSyncJobs() const { return this->syncJobs_ != nullptr;};
    void deleteSyncJobs() { this->syncJobs_ = nullptr;};
    inline const vector<DescribeSyncJobListResponseBodySyncJobs> & syncJobs() const { DARABONBA_PTR_GET_CONST(syncJobs_, vector<DescribeSyncJobListResponseBodySyncJobs>) };
    inline vector<DescribeSyncJobListResponseBodySyncJobs> syncJobs() { DARABONBA_PTR_GET(syncJobs_, vector<DescribeSyncJobListResponseBodySyncJobs>) };
    inline DescribeSyncJobListResponseBody& setSyncJobs(const vector<DescribeSyncJobListResponseBodySyncJobs> & syncJobs) { DARABONBA_PTR_SET_VALUE(syncJobs_, syncJobs) };
    inline DescribeSyncJobListResponseBody& setSyncJobs(vector<DescribeSyncJobListResponseBodySyncJobs> && syncJobs) { DARABONBA_PTR_SET_RVALUE(syncJobs_, syncJobs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSyncJobListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    std::shared_ptr<int32_t> DBClusterId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried synchronization jobs.
    std::shared_ptr<vector<DescribeSyncJobListResponseBodySyncJobs>> syncJobs_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
