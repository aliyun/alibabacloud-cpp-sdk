// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnAttachmentsResponseBodyVpnAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnAttachments, vpnAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnAttachments, vpnAttachments_);
    };
    DescribeVpnAttachmentsResponseBody() = default ;
    DescribeVpnAttachmentsResponseBody(const DescribeVpnAttachmentsResponseBody &) = default ;
    DescribeVpnAttachmentsResponseBody(DescribeVpnAttachmentsResponseBody &&) = default ;
    DescribeVpnAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnAttachmentsResponseBody() = default ;
    DescribeVpnAttachmentsResponseBody& operator=(const DescribeVpnAttachmentsResponseBody &) = default ;
    DescribeVpnAttachmentsResponseBody& operator=(DescribeVpnAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vpnAttachments_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnAttachmentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnAttachmentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnAttachments Field Functions 
    bool hasVpnAttachments() const { return this->vpnAttachments_ != nullptr;};
    void deleteVpnAttachments() { this->vpnAttachments_ = nullptr;};
    inline const vector<DescribeVpnAttachmentsResponseBodyVpnAttachments> & vpnAttachments() const { DARABONBA_PTR_GET_CONST(vpnAttachments_, vector<DescribeVpnAttachmentsResponseBodyVpnAttachments>) };
    inline vector<DescribeVpnAttachmentsResponseBodyVpnAttachments> vpnAttachments() { DARABONBA_PTR_GET(vpnAttachments_, vector<DescribeVpnAttachmentsResponseBodyVpnAttachments>) };
    inline DescribeVpnAttachmentsResponseBody& setVpnAttachments(const vector<DescribeVpnAttachmentsResponseBodyVpnAttachments> & vpnAttachments) { DARABONBA_PTR_SET_VALUE(vpnAttachments_, vpnAttachments) };
    inline DescribeVpnAttachmentsResponseBody& setVpnAttachments(vector<DescribeVpnAttachmentsResponseBodyVpnAttachments> && vpnAttachments) { DARABONBA_PTR_SET_RVALUE(vpnAttachments_, vpnAttachments) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of IPsec-VPN connections associated with the transit router.
    std::shared_ptr<vector<DescribeVpnAttachmentsResponseBodyVpnAttachments>> vpnAttachments_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
