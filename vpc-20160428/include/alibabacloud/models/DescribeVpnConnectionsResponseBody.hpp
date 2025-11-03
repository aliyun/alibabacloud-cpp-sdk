// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnConnections, vpnConnections_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnConnections, vpnConnections_);
    };
    DescribeVpnConnectionsResponseBody() = default ;
    DescribeVpnConnectionsResponseBody(const DescribeVpnConnectionsResponseBody &) = default ;
    DescribeVpnConnectionsResponseBody(DescribeVpnConnectionsResponseBody &&) = default ;
    DescribeVpnConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBody() = default ;
    DescribeVpnConnectionsResponseBody& operator=(const DescribeVpnConnectionsResponseBody &) = default ;
    DescribeVpnConnectionsResponseBody& operator=(DescribeVpnConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vpnConnections_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnConnectionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnConnectionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnConnections Field Functions 
    bool hasVpnConnections() const { return this->vpnConnections_ != nullptr;};
    void deleteVpnConnections() { this->vpnConnections_ = nullptr;};
    inline const DescribeVpnConnectionsResponseBodyVpnConnections & vpnConnections() const { DARABONBA_PTR_GET_CONST(vpnConnections_, DescribeVpnConnectionsResponseBodyVpnConnections) };
    inline DescribeVpnConnectionsResponseBodyVpnConnections vpnConnections() { DARABONBA_PTR_GET(vpnConnections_, DescribeVpnConnectionsResponseBodyVpnConnections) };
    inline DescribeVpnConnectionsResponseBody& setVpnConnections(const DescribeVpnConnectionsResponseBodyVpnConnections & vpnConnections) { DARABONBA_PTR_SET_VALUE(vpnConnections_, vpnConnections) };
    inline DescribeVpnConnectionsResponseBody& setVpnConnections(DescribeVpnConnectionsResponseBodyVpnConnections && vpnConnections) { DARABONBA_PTR_SET_RVALUE(vpnConnections_, vpnConnections) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the IPsec-VPN connections.
    std::shared_ptr<DescribeVpnConnectionsResponseBodyVpnConnections> vpnConnections_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
