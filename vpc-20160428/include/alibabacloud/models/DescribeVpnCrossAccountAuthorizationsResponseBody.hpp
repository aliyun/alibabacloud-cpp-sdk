// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCROSSACCOUNTAUTHORIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCROSSACCOUNTAUTHORIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations.hpp>
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
    virtual bool empty() const override { this->crossAccountAuthorizations_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // crossAccountAuthorizations Field Functions 
    bool hasCrossAccountAuthorizations() const { return this->crossAccountAuthorizations_ != nullptr;};
    void deleteCrossAccountAuthorizations() { this->crossAccountAuthorizations_ = nullptr;};
    inline const vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations> & crossAccountAuthorizations() const { DARABONBA_PTR_GET_CONST(crossAccountAuthorizations_, vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations>) };
    inline vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations> crossAccountAuthorizations() { DARABONBA_PTR_GET(crossAccountAuthorizations_, vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations>) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setCrossAccountAuthorizations(const vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations> & crossAccountAuthorizations) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorizations_, crossAccountAuthorizations) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setCrossAccountAuthorizations(vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations> && crossAccountAuthorizations) { DARABONBA_PTR_SET_RVALUE(crossAccountAuthorizations_, crossAccountAuthorizations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnCrossAccountAuthorizationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cross-account authorization information about the IPsec-VPN connection.
    std::shared_ptr<vector<DescribeVpnCrossAccountAuthorizationsResponseBodyCrossAccountAuthorizations>> crossAccountAuthorizations_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
