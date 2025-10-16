// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskSecurityGroupDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskSecurityGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskSgDetail, riskSgDetail_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskSecurityGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskSgDetail, riskSgDetail_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRiskSecurityGroupDetailResponseBody() = default ;
    DescribeRiskSecurityGroupDetailResponseBody(const DescribeRiskSecurityGroupDetailResponseBody &) = default ;
    DescribeRiskSecurityGroupDetailResponseBody(DescribeRiskSecurityGroupDetailResponseBody &&) = default ;
    DescribeRiskSecurityGroupDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskSecurityGroupDetailResponseBody() = default ;
    DescribeRiskSecurityGroupDetailResponseBody& operator=(const DescribeRiskSecurityGroupDetailResponseBody &) = default ;
    DescribeRiskSecurityGroupDetailResponseBody& operator=(DescribeRiskSecurityGroupDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->riskSgDetail_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskSgDetail Field Functions 
    bool hasRiskSgDetail() const { return this->riskSgDetail_ != nullptr;};
    void deleteRiskSgDetail() { this->riskSgDetail_ = nullptr;};
    inline const vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail> & riskSgDetail() const { DARABONBA_PTR_GET_CONST(riskSgDetail_, vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail>) };
    inline vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail> riskSgDetail() { DARABONBA_PTR_GET(riskSgDetail_, vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail>) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setRiskSgDetail(const vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail> & riskSgDetail) { DARABONBA_PTR_SET_VALUE(riskSgDetail_, riskSgDetail) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setRiskSgDetail(vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail> && riskSgDetail) { DARABONBA_PTR_SET_RVALUE(riskSgDetail_, riskSgDetail) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail>> riskSgDetail_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
