// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobsResponseBodySynchronizationInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynchronizationInstances, synchronizationInstances_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationInstances, synchronizationInstances_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSynchronizationJobsResponseBody() = default ;
    DescribeSynchronizationJobsResponseBody(const DescribeSynchronizationJobsResponseBody &) = default ;
    DescribeSynchronizationJobsResponseBody(DescribeSynchronizationJobsResponseBody &&) = default ;
    DescribeSynchronizationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBody() = default ;
    DescribeSynchronizationJobsResponseBody& operator=(const DescribeSynchronizationJobsResponseBody &) = default ;
    DescribeSynchronizationJobsResponseBody& operator=(DescribeSynchronizationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageRecordCount_ != nullptr && this->requestId_ != nullptr && this->synchronizationInstances_ != nullptr && this->totalRecordCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSynchronizationJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSynchronizationJobsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synchronizationInstances Field Functions 
    bool hasSynchronizationInstances() const { return this->synchronizationInstances_ != nullptr;};
    void deleteSynchronizationInstances() { this->synchronizationInstances_ = nullptr;};
    inline const vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances> & synchronizationInstances() const { DARABONBA_PTR_GET_CONST(synchronizationInstances_, vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances>) };
    inline vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances> synchronizationInstances() { DARABONBA_PTR_GET(synchronizationInstances_, vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances>) };
    inline DescribeSynchronizationJobsResponseBody& setSynchronizationInstances(const vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances> & synchronizationInstances) { DARABONBA_PTR_SET_VALUE(synchronizationInstances_, synchronizationInstances) };
    inline DescribeSynchronizationJobsResponseBody& setSynchronizationInstances(vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances> && synchronizationInstances) { DARABONBA_PTR_SET_RVALUE(synchronizationInstances_, synchronizationInstances) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeSynchronizationJobsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The maximum number of entries that can be displayed on the current page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of data synchronization instances and the details of each instance.
    std::shared_ptr<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances>> synchronizationInstances_ = nullptr;
    // The total number of data synchronization instances that belong to your Alibaba Cloud account.
    std::shared_ptr<int64_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
