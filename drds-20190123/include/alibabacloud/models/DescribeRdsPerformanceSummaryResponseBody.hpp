// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRdsPerformanceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsPerformanceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RdsPerformanceInfos, rdsPerformanceInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsPerformanceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RdsPerformanceInfos, rdsPerformanceInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeRdsPerformanceSummaryResponseBody() = default ;
    DescribeRdsPerformanceSummaryResponseBody(const DescribeRdsPerformanceSummaryResponseBody &) = default ;
    DescribeRdsPerformanceSummaryResponseBody(DescribeRdsPerformanceSummaryResponseBody &&) = default ;
    DescribeRdsPerformanceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsPerformanceSummaryResponseBody() = default ;
    DescribeRdsPerformanceSummaryResponseBody& operator=(const DescribeRdsPerformanceSummaryResponseBody &) = default ;
    DescribeRdsPerformanceSummaryResponseBody& operator=(DescribeRdsPerformanceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rdsPerformanceInfos_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // rdsPerformanceInfos Field Functions 
    bool hasRdsPerformanceInfos() const { return this->rdsPerformanceInfos_ != nullptr;};
    void deleteRdsPerformanceInfos() { this->rdsPerformanceInfos_ = nullptr;};
    inline const vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos> & rdsPerformanceInfos() const { DARABONBA_PTR_GET_CONST(rdsPerformanceInfos_, vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos>) };
    inline vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos> rdsPerformanceInfos() { DARABONBA_PTR_GET(rdsPerformanceInfos_, vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos>) };
    inline DescribeRdsPerformanceSummaryResponseBody& setRdsPerformanceInfos(const vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos> & rdsPerformanceInfos) { DARABONBA_PTR_SET_VALUE(rdsPerformanceInfos_, rdsPerformanceInfos) };
    inline DescribeRdsPerformanceSummaryResponseBody& setRdsPerformanceInfos(vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos> && rdsPerformanceInfos) { DARABONBA_PTR_SET_RVALUE(rdsPerformanceInfos_, rdsPerformanceInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsPerformanceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRdsPerformanceSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // A collection of objects.
    std::shared_ptr<vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos>> rdsPerformanceInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the API request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
