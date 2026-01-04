// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCROSSACCOUNTAUTHORIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCROSSACCOUNTAUTHORIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnCrossAccountAuthorizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnCrossAccountAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccountAuthorizations, crossAccountAuthorizations_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnCrossAccountAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccountAuthorizations, crossAccountAuthorizations_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpnCrossAccountAuthorizationsResponseBody() = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBody(const DescribeVpnCrossAccountAuthorizationsResponseBody &) = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBody(DescribeVpnCrossAccountAuthorizationsResponseBody &&) = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnCrossAccountAuthorizationsResponseBody() = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBody& operator=(const DescribeVpnCrossAccountAuthorizationsResponseBody &) = default ;
    DescribeVpnCrossAccountAuthorizationsResponseBody& operator=(DescribeVpnCrossAccountAuthorizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CrossAccountAuthorizations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrossAccountAuthorizations& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(BindInstance, bindInstance_);
        DARABONBA_PTR_TO_JSON(BindProduct, bindProduct_);
        DARABONBA_PTR_TO_JSON(BindUid, bindUid_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      };
      friend void from_json(const Darabonba::Json& j, CrossAccountAuthorizations& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(BindInstance, bindInstance_);
        DARABONBA_PTR_FROM_JSON(BindProduct, bindProduct_);
        DARABONBA_PTR_FROM_JSON(BindUid, bindUid_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      };
      CrossAccountAuthorizations() = default ;
      CrossAccountAuthorizations(const CrossAccountAuthorizations &) = default ;
      CrossAccountAuthorizations(CrossAccountAuthorizations &&) = default ;
      CrossAccountAuthorizations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrossAccountAuthorizations() = default ;
      CrossAccountAuthorizations& operator=(const CrossAccountAuthorizations &) = default ;
      CrossAccountAuthorizations& operator=(CrossAccountAuthorizations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bindInstance_ == nullptr && this->bindProduct_ == nullptr && this->bindUid_ == nullptr && this->creationTime_ == nullptr && this->vpnConnectionId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline CrossAccountAuthorizations& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bindInstance Field Functions 
      bool hasBindInstance() const { return this->bindInstance_ != nullptr;};
      void deleteBindInstance() { this->bindInstance_ = nullptr;};
      inline string getBindInstance() const { DARABONBA_PTR_GET_DEFAULT(bindInstance_, "") };
      inline CrossAccountAuthorizations& setBindInstance(string bindInstance) { DARABONBA_PTR_SET_VALUE(bindInstance_, bindInstance) };


      // bindProduct Field Functions 
      bool hasBindProduct() const { return this->bindProduct_ != nullptr;};
      void deleteBindProduct() { this->bindProduct_ = nullptr;};
      inline string getBindProduct() const { DARABONBA_PTR_GET_DEFAULT(bindProduct_, "") };
      inline CrossAccountAuthorizations& setBindProduct(string bindProduct) { DARABONBA_PTR_SET_VALUE(bindProduct_, bindProduct) };


      // bindUid Field Functions 
      bool hasBindUid() const { return this->bindUid_ != nullptr;};
      void deleteBindUid() { this->bindUid_ = nullptr;};
      inline int64_t getBindUid() const { DARABONBA_PTR_GET_DEFAULT(bindUid_, 0L) };
      inline CrossAccountAuthorizations& setBindUid(int64_t bindUid) { DARABONBA_PTR_SET_VALUE(bindUid_, bindUid) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline CrossAccountAuthorizations& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // vpnConnectionId Field Functions 
      bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
      void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
      inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
      inline CrossAccountAuthorizations& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    protected:
      // The ID of the Alibaba Cloud account to which the IPsec-VPN connection belongs.
      shared_ptr<int64_t> aliUid_ {};
      // The ID of the CEN instance.
      shared_ptr<string> bindInstance_ {};
      // The type of resource that can be associated with the IPsec-VPN connection.
      // 
      // Only **CEN** can be returned, which indicates that the IPsec-VPN connection is authorized to be associated with the transit router of a Cloud Enterprise Network (CEN) instance that belongs to another Alibaba Cloud account.
      shared_ptr<string> bindProduct_ {};
      // The ID of the Alibaba Cloud account whose resources the IPsec-VPN connection is authorized to be associated with.
      shared_ptr<int64_t> bindUid_ {};
      // The time when the authorization for the IPsec-VPN connection was created.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> creationTime_ {};
      // The ID of the IPsec-VPN connection.
      shared_ptr<string> vpnConnectionId_ {};
    };

    virtual bool empty() const override { return this->crossAccountAuthorizations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // crossAccountAuthorizations Field Functions 
    bool hasCrossAccountAuthorizations() const { return this->crossAccountAuthorizations_ != nullptr;};
    void deleteCrossAccountAuthorizations() { this->crossAccountAuthorizations_ = nullptr;};
    inline const vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations> & getCrossAccountAuthorizations() const { DARABONBA_PTR_GET_CONST(crossAccountAuthorizations_, vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations>) };
    inline vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations> getCrossAccountAuthorizations() { DARABONBA_PTR_GET(crossAccountAuthorizations_, vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations>) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setCrossAccountAuthorizations(const vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations> & crossAccountAuthorizations) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorizations_, crossAccountAuthorizations) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setCrossAccountAuthorizations(vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations> && crossAccountAuthorizations) { DARABONBA_PTR_SET_RVALUE(crossAccountAuthorizations_, crossAccountAuthorizations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cross-account authorization information about the IPsec-VPN connection.
    shared_ptr<vector<DescribeVpnCrossAccountAuthorizationsResponseBody::CrossAccountAuthorizations>> crossAccountAuthorizations_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
