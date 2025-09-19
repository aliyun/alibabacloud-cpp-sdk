// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINECHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageBaselineCheckResultResponseBodyBaselineResult.hpp>
#include <alibabacloud/models/DescribeImageBaselineCheckResultResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineResult, baselineResult_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineResult, baselineResult_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineCheckResultResponseBody() = default ;
    DescribeImageBaselineCheckResultResponseBody(const DescribeImageBaselineCheckResultResponseBody &) = default ;
    DescribeImageBaselineCheckResultResponseBody(DescribeImageBaselineCheckResultResponseBody &&) = default ;
    DescribeImageBaselineCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineCheckResultResponseBody() = default ;
    DescribeImageBaselineCheckResultResponseBody& operator=(const DescribeImageBaselineCheckResultResponseBody &) = default ;
    DescribeImageBaselineCheckResultResponseBody& operator=(DescribeImageBaselineCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineResult_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // baselineResult Field Functions 
    bool hasBaselineResult() const { return this->baselineResult_ != nullptr;};
    void deleteBaselineResult() { this->baselineResult_ = nullptr;};
    inline const vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult> & baselineResult() const { DARABONBA_PTR_GET_CONST(baselineResult_, vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult>) };
    inline vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult> baselineResult() { DARABONBA_PTR_GET(baselineResult_, vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult>) };
    inline DescribeImageBaselineCheckResultResponseBody& setBaselineResult(const vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult> & baselineResult) { DARABONBA_PTR_SET_VALUE(baselineResult_, baselineResult) };
    inline DescribeImageBaselineCheckResultResponseBody& setBaselineResult(vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult> && baselineResult) { DARABONBA_PTR_SET_RVALUE(baselineResult_, baselineResult) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageBaselineCheckResultResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageBaselineCheckResultResponseBodyPageInfo) };
    inline DescribeImageBaselineCheckResultResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageBaselineCheckResultResponseBodyPageInfo) };
    inline DescribeImageBaselineCheckResultResponseBody& setPageInfo(const DescribeImageBaselineCheckResultResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageBaselineCheckResultResponseBody& setPageInfo(DescribeImageBaselineCheckResultResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the check results of image baselines.
    std::shared_ptr<vector<DescribeImageBaselineCheckResultResponseBodyBaselineResult>> baselineResult_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageBaselineCheckResultResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
