// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnRouteEntriesResponseBodyVpnRouteCounts.hpp>
#include <alibabacloud/models/DescribeVpnRouteEntriesResponseBodyVpnRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnRouteCounts, vpnRouteCounts_);
      DARABONBA_PTR_TO_JSON(VpnRouteEntries, vpnRouteEntries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnRouteCounts, vpnRouteCounts_);
      DARABONBA_PTR_FROM_JSON(VpnRouteEntries, vpnRouteEntries_);
    };
    DescribeVpnRouteEntriesResponseBody() = default ;
    DescribeVpnRouteEntriesResponseBody(const DescribeVpnRouteEntriesResponseBody &) = default ;
    DescribeVpnRouteEntriesResponseBody(DescribeVpnRouteEntriesResponseBody &&) = default ;
    DescribeVpnRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnRouteEntriesResponseBody() = default ;
    DescribeVpnRouteEntriesResponseBody& operator=(const DescribeVpnRouteEntriesResponseBody &) = default ;
    DescribeVpnRouteEntriesResponseBody& operator=(DescribeVpnRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vpnRouteCounts_ == nullptr && return this->vpnRouteEntries_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnRouteCounts Field Functions 
    bool hasVpnRouteCounts() const { return this->vpnRouteCounts_ != nullptr;};
    void deleteVpnRouteCounts() { this->vpnRouteCounts_ = nullptr;};
    inline const DescribeVpnRouteEntriesResponseBodyVpnRouteCounts & vpnRouteCounts() const { DARABONBA_PTR_GET_CONST(vpnRouteCounts_, DescribeVpnRouteEntriesResponseBodyVpnRouteCounts) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteCounts vpnRouteCounts() { DARABONBA_PTR_GET(vpnRouteCounts_, DescribeVpnRouteEntriesResponseBodyVpnRouteCounts) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteCounts(const DescribeVpnRouteEntriesResponseBodyVpnRouteCounts & vpnRouteCounts) { DARABONBA_PTR_SET_VALUE(vpnRouteCounts_, vpnRouteCounts) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteCounts(DescribeVpnRouteEntriesResponseBodyVpnRouteCounts && vpnRouteCounts) { DARABONBA_PTR_SET_RVALUE(vpnRouteCounts_, vpnRouteCounts) };


    // vpnRouteEntries Field Functions 
    bool hasVpnRouteEntries() const { return this->vpnRouteEntries_ != nullptr;};
    void deleteVpnRouteEntries() { this->vpnRouteEntries_ = nullptr;};
    inline const DescribeVpnRouteEntriesResponseBodyVpnRouteEntries & vpnRouteEntries() const { DARABONBA_PTR_GET_CONST(vpnRouteEntries_, DescribeVpnRouteEntriesResponseBodyVpnRouteEntries) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntries vpnRouteEntries() { DARABONBA_PTR_GET(vpnRouteEntries_, DescribeVpnRouteEntriesResponseBodyVpnRouteEntries) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteEntries(const DescribeVpnRouteEntriesResponseBodyVpnRouteEntries & vpnRouteEntries) { DARABONBA_PTR_SET_VALUE(vpnRouteEntries_, vpnRouteEntries) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteEntries(DescribeVpnRouteEntriesResponseBodyVpnRouteEntries && vpnRouteEntries) { DARABONBA_PTR_SET_RVALUE(vpnRouteEntries_, vpnRouteEntries) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about route entries of the VPN gateway in dual-tunnel mode.
    // 
    // > This parameter is returned only if the VPN gateway supports IPsec-VPN connections in dual-tunnel mode.
    std::shared_ptr<DescribeVpnRouteEntriesResponseBodyVpnRouteCounts> vpnRouteCounts_ = nullptr;
    // The route entry list.
    std::shared_ptr<DescribeVpnRouteEntriesResponseBodyVpnRouteEntries> vpnRouteEntries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
