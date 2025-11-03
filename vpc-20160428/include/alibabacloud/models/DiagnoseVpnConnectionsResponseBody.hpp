// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DiagnoseVpnConnectionsResponseBodyVpnConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DiagnoseVpnConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnConnections, vpnConnections_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnConnections, vpnConnections_);
    };
    DiagnoseVpnConnectionsResponseBody() = default ;
    DiagnoseVpnConnectionsResponseBody(const DiagnoseVpnConnectionsResponseBody &) = default ;
    DiagnoseVpnConnectionsResponseBody(DiagnoseVpnConnectionsResponseBody &&) = default ;
    DiagnoseVpnConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseVpnConnectionsResponseBody() = default ;
    DiagnoseVpnConnectionsResponseBody& operator=(const DiagnoseVpnConnectionsResponseBody &) = default ;
    DiagnoseVpnConnectionsResponseBody& operator=(DiagnoseVpnConnectionsResponseBody &&) = default ;
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
    inline DiagnoseVpnConnectionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DiagnoseVpnConnectionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiagnoseVpnConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DiagnoseVpnConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnConnections Field Functions 
    bool hasVpnConnections() const { return this->vpnConnections_ != nullptr;};
    void deleteVpnConnections() { this->vpnConnections_ = nullptr;};
    inline const vector<DiagnoseVpnConnectionsResponseBodyVpnConnections> & vpnConnections() const { DARABONBA_PTR_GET_CONST(vpnConnections_, vector<DiagnoseVpnConnectionsResponseBodyVpnConnections>) };
    inline vector<DiagnoseVpnConnectionsResponseBodyVpnConnections> vpnConnections() { DARABONBA_PTR_GET(vpnConnections_, vector<DiagnoseVpnConnectionsResponseBodyVpnConnections>) };
    inline DiagnoseVpnConnectionsResponseBody& setVpnConnections(const vector<DiagnoseVpnConnectionsResponseBodyVpnConnections> & vpnConnections) { DARABONBA_PTR_SET_VALUE(vpnConnections_, vpnConnections) };
    inline DiagnoseVpnConnectionsResponseBody& setVpnConnections(vector<DiagnoseVpnConnectionsResponseBodyVpnConnections> && vpnConnections) { DARABONBA_PTR_SET_RVALUE(vpnConnections_, vpnConnections) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The diagnostic information.
    std::shared_ptr<vector<DiagnoseVpnConnectionsResponseBodyVpnConnections>> vpnConnections_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
