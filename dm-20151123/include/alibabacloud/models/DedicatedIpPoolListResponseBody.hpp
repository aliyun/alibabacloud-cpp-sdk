// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DedicatedIpPoolListResponseBodyIpPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpPoolListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpPoolListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(IpPools, ipPools_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpPoolListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(IpPools, ipPools_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    DedicatedIpPoolListResponseBody() = default ;
    DedicatedIpPoolListResponseBody(const DedicatedIpPoolListResponseBody &) = default ;
    DedicatedIpPoolListResponseBody(DedicatedIpPoolListResponseBody &&) = default ;
    DedicatedIpPoolListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpPoolListResponseBody() = default ;
    DedicatedIpPoolListResponseBody& operator=(const DedicatedIpPoolListResponseBody &) = default ;
    DedicatedIpPoolListResponseBody& operator=(DedicatedIpPoolListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->hasMore_ == nullptr && return this->ipPools_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCounts_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DedicatedIpPoolListResponseBody& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline DedicatedIpPoolListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // ipPools Field Functions 
    bool hasIpPools() const { return this->ipPools_ != nullptr;};
    void deleteIpPools() { this->ipPools_ = nullptr;};
    inline const vector<DedicatedIpPoolListResponseBodyIpPools> & ipPools() const { DARABONBA_PTR_GET_CONST(ipPools_, vector<DedicatedIpPoolListResponseBodyIpPools>) };
    inline vector<DedicatedIpPoolListResponseBodyIpPools> ipPools() { DARABONBA_PTR_GET(ipPools_, vector<DedicatedIpPoolListResponseBodyIpPools>) };
    inline DedicatedIpPoolListResponseBody& setIpPools(const vector<DedicatedIpPoolListResponseBodyIpPools> & ipPools) { DARABONBA_PTR_SET_VALUE(ipPools_, ipPools) };
    inline DedicatedIpPoolListResponseBody& setIpPools(vector<DedicatedIpPoolListResponseBodyIpPools> && ipPools) { DARABONBA_PTR_SET_RVALUE(ipPools_, ipPools) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DedicatedIpPoolListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DedicatedIpPoolListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t totalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline DedicatedIpPoolListResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // Current page
    std::shared_ptr<string> currentPage_ = nullptr;
    // Whether there is a next page
    std::shared_ptr<bool> hasMore_ = nullptr;
    // List of IP pools
    std::shared_ptr<vector<DedicatedIpPoolListResponseBodyIpPools>> ipPools_ = nullptr;
    // Page size
    std::shared_ptr<string> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of data under the current request conditions
    std::shared_ptr<int32_t> totalCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
