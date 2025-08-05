// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DedicatedIpListResponseBodyIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    DedicatedIpListResponseBody() = default ;
    DedicatedIpListResponseBody(const DedicatedIpListResponseBody &) = default ;
    DedicatedIpListResponseBody(DedicatedIpListResponseBody &&) = default ;
    DedicatedIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpListResponseBody() = default ;
    DedicatedIpListResponseBody& operator=(const DedicatedIpListResponseBody &) = default ;
    DedicatedIpListResponseBody& operator=(DedicatedIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->hasMore_ != nullptr && this->ips_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCounts_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DedicatedIpListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline DedicatedIpListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<DedicatedIpListResponseBodyIps> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<DedicatedIpListResponseBodyIps>) };
    inline vector<DedicatedIpListResponseBodyIps> ips() { DARABONBA_PTR_GET(ips_, vector<DedicatedIpListResponseBodyIps>) };
    inline DedicatedIpListResponseBody& setIps(const vector<DedicatedIpListResponseBodyIps> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DedicatedIpListResponseBody& setIps(vector<DedicatedIpListResponseBodyIps> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DedicatedIpListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DedicatedIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t totalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline DedicatedIpListResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // Current page
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Whether there is a next page
    std::shared_ptr<bool> hasMore_ = nullptr;
    // IP list
    std::shared_ptr<vector<DedicatedIpListResponseBodyIps>> ips_ = nullptr;
    // Page size
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total amount of purchased IP data
    std::shared_ptr<int32_t> totalCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
