// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary.hpp>
#include <alibabacloud/models/DescribeImageBaselineCheckSummaryResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineResultSummary, baselineResultSummary_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineResultSummary, baselineResultSummary_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineCheckSummaryResponseBody() = default ;
    DescribeImageBaselineCheckSummaryResponseBody(const DescribeImageBaselineCheckSummaryResponseBody &) = default ;
    DescribeImageBaselineCheckSummaryResponseBody(DescribeImageBaselineCheckSummaryResponseBody &&) = default ;
    DescribeImageBaselineCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckSummaryResponseBody() = default ;
    DescribeImageBaselineCheckSummaryResponseBody& operator=(const DescribeImageBaselineCheckSummaryResponseBody &) = default ;
    DescribeImageBaselineCheckSummaryResponseBody& operator=(DescribeImageBaselineCheckSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineResultSummary_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // baselineResultSummary Field Functions 
    bool hasBaselineResultSummary() const { return this->baselineResultSummary_ != nullptr;};
    void deleteBaselineResultSummary() { this->baselineResultSummary_ = nullptr;};
    inline const vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary> & baselineResultSummary() const { DARABONBA_PTR_GET_CONST(baselineResultSummary_, vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary>) };
    inline vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary> baselineResultSummary() { DARABONBA_PTR_GET(baselineResultSummary_, vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary>) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setBaselineResultSummary(const vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary> & baselineResultSummary) { DARABONBA_PTR_SET_VALUE(baselineResultSummary_, baselineResultSummary) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setBaselineResultSummary(vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary> && baselineResultSummary) { DARABONBA_PTR_SET_RVALUE(baselineResultSummary_, baselineResultSummary) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageBaselineCheckSummaryResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageBaselineCheckSummaryResponseBodyPageInfo) };
    inline DescribeImageBaselineCheckSummaryResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageBaselineCheckSummaryResponseBodyPageInfo) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setPageInfo(const DescribeImageBaselineCheckSummaryResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBaselineCheckSummaryResponseBody& setPageInfo(DescribeImageBaselineCheckSummaryResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the check results of image baselines.
    std::shared_ptr<vector<DescribeImageBaselineCheckSummaryResponseBodyBaselineResultSummary>> baselineResultSummary_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageBaselineCheckSummaryResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
