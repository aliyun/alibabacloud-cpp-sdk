// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSENDPOINTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePrivateDnsEndpointListResponseBodyAccessInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrivateDnsEndpointListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsEndpointListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceList, accessInstanceList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsEndpointListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceList, accessInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePrivateDnsEndpointListResponseBody() = default ;
    DescribePrivateDnsEndpointListResponseBody(const DescribePrivateDnsEndpointListResponseBody &) = default ;
    DescribePrivateDnsEndpointListResponseBody(DescribePrivateDnsEndpointListResponseBody &&) = default ;
    DescribePrivateDnsEndpointListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsEndpointListResponseBody() = default ;
    DescribePrivateDnsEndpointListResponseBody& operator=(const DescribePrivateDnsEndpointListResponseBody &) = default ;
    DescribePrivateDnsEndpointListResponseBody& operator=(DescribePrivateDnsEndpointListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessInstanceList_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // accessInstanceList Field Functions 
    bool hasAccessInstanceList() const { return this->accessInstanceList_ != nullptr;};
    void deleteAccessInstanceList() { this->accessInstanceList_ = nullptr;};
    inline const vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList> & accessInstanceList() const { DARABONBA_PTR_GET_CONST(accessInstanceList_, vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList>) };
    inline vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList> accessInstanceList() { DARABONBA_PTR_GET(accessInstanceList_, vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList>) };
    inline DescribePrivateDnsEndpointListResponseBody& setAccessInstanceList(const vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList> & accessInstanceList) { DARABONBA_PTR_SET_VALUE(accessInstanceList_, accessInstanceList) };
    inline DescribePrivateDnsEndpointListResponseBody& setAccessInstanceList(vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList> && accessInstanceList) { DARABONBA_PTR_SET_RVALUE(accessInstanceList_, accessInstanceList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribePrivateDnsEndpointListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePrivateDnsEndpointListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrivateDnsEndpointListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePrivateDnsEndpointListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribePrivateDnsEndpointListResponseBodyAccessInstanceList>> accessInstanceList_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
