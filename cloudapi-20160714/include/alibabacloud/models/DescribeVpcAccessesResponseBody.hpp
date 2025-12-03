// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcAccessesResponseBodyVpcAccessAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeVpcAccessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAccessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcAccessAttributes, vpcAccessAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAccessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcAccessAttributes, vpcAccessAttributes_);
    };
    DescribeVpcAccessesResponseBody() = default ;
    DescribeVpcAccessesResponseBody(const DescribeVpcAccessesResponseBody &) = default ;
    DescribeVpcAccessesResponseBody(DescribeVpcAccessesResponseBody &&) = default ;
    DescribeVpcAccessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAccessesResponseBody() = default ;
    DescribeVpcAccessesResponseBody& operator=(const DescribeVpcAccessesResponseBody &) = default ;
    DescribeVpcAccessesResponseBody& operator=(DescribeVpcAccessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vpcAccessAttributes_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpcAccessesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpcAccessesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcAccessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcAccessesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcAccessAttributes Field Functions 
    bool hasVpcAccessAttributes() const { return this->vpcAccessAttributes_ != nullptr;};
    void deleteVpcAccessAttributes() { this->vpcAccessAttributes_ = nullptr;};
    inline const DescribeVpcAccessesResponseBodyVpcAccessAttributes & vpcAccessAttributes() const { DARABONBA_PTR_GET_CONST(vpcAccessAttributes_, DescribeVpcAccessesResponseBodyVpcAccessAttributes) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributes vpcAccessAttributes() { DARABONBA_PTR_GET(vpcAccessAttributes_, DescribeVpcAccessesResponseBodyVpcAccessAttributes) };
    inline DescribeVpcAccessesResponseBody& setVpcAccessAttributes(const DescribeVpcAccessesResponseBodyVpcAccessAttributes & vpcAccessAttributes) { DARABONBA_PTR_SET_VALUE(vpcAccessAttributes_, vpcAccessAttributes) };
    inline DescribeVpcAccessesResponseBody& setVpcAccessAttributes(DescribeVpcAccessesResponseBodyVpcAccessAttributes && vpcAccessAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAccessAttributes_, vpcAccessAttributes) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the VPC access authorization. The information is an array consisting of VpcAccessAttribute data.
    std::shared_ptr<DescribeVpcAccessesResponseBodyVpcAccessAttributes> vpcAccessAttributes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
