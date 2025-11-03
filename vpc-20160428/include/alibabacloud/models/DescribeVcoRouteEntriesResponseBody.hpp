// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVCOROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVCOROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVcoRouteEntriesResponseBodyVcoRouteEntries.hpp>
#include <alibabacloud/models/DescribeVcoRouteEntriesResponseBodyVpnRouteCounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVcoRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVcoRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VcoRouteEntries, vcoRouteEntries_);
      DARABONBA_PTR_TO_JSON(VpnRouteCounts, vpnRouteCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVcoRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VcoRouteEntries, vcoRouteEntries_);
      DARABONBA_PTR_FROM_JSON(VpnRouteCounts, vpnRouteCounts_);
    };
    DescribeVcoRouteEntriesResponseBody() = default ;
    DescribeVcoRouteEntriesResponseBody(const DescribeVcoRouteEntriesResponseBody &) = default ;
    DescribeVcoRouteEntriesResponseBody(DescribeVcoRouteEntriesResponseBody &&) = default ;
    DescribeVcoRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVcoRouteEntriesResponseBody() = default ;
    DescribeVcoRouteEntriesResponseBody& operator=(const DescribeVcoRouteEntriesResponseBody &) = default ;
    DescribeVcoRouteEntriesResponseBody& operator=(DescribeVcoRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vcoRouteEntries_ == nullptr && return this->vpnRouteCounts_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVcoRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVcoRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVcoRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVcoRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vcoRouteEntries Field Functions 
    bool hasVcoRouteEntries() const { return this->vcoRouteEntries_ != nullptr;};
    void deleteVcoRouteEntries() { this->vcoRouteEntries_ = nullptr;};
    inline const vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries> & vcoRouteEntries() const { DARABONBA_PTR_GET_CONST(vcoRouteEntries_, vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries>) };
    inline vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries> vcoRouteEntries() { DARABONBA_PTR_GET(vcoRouteEntries_, vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries>) };
    inline DescribeVcoRouteEntriesResponseBody& setVcoRouteEntries(const vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries> & vcoRouteEntries) { DARABONBA_PTR_SET_VALUE(vcoRouteEntries_, vcoRouteEntries) };
    inline DescribeVcoRouteEntriesResponseBody& setVcoRouteEntries(vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries> && vcoRouteEntries) { DARABONBA_PTR_SET_RVALUE(vcoRouteEntries_, vcoRouteEntries) };


    // vpnRouteCounts Field Functions 
    bool hasVpnRouteCounts() const { return this->vpnRouteCounts_ != nullptr;};
    void deleteVpnRouteCounts() { this->vpnRouteCounts_ = nullptr;};
    inline const vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts> & vpnRouteCounts() const { DARABONBA_PTR_GET_CONST(vpnRouteCounts_, vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts>) };
    inline vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts> vpnRouteCounts() { DARABONBA_PTR_GET(vpnRouteCounts_, vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts>) };
    inline DescribeVcoRouteEntriesResponseBody& setVpnRouteCounts(const vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts> & vpnRouteCounts) { DARABONBA_PTR_SET_VALUE(vpnRouteCounts_, vpnRouteCounts) };
    inline DescribeVcoRouteEntriesResponseBody& setVpnRouteCounts(vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts> && vpnRouteCounts) { DARABONBA_PTR_SET_RVALUE(vpnRouteCounts_, vpnRouteCounts) };


  protected:
    // The number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of route entries.
    std::shared_ptr<vector<DescribeVcoRouteEntriesResponseBodyVcoRouteEntries>> vcoRouteEntries_ = nullptr;
    // The information on route entries of the dual-tunnel IPsec connection.
    // 
    // >  This parameter is returned only for IPsec connections in dual-tunnel mode.
    std::shared_ptr<vector<DescribeVcoRouteEntriesResponseBodyVpnRouteCounts>> vpnRouteCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
