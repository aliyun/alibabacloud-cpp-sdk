// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricDataResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
    };
    DescribeMetricDataResponseBody() = default ;
    DescribeMetricDataResponseBody(const DescribeMetricDataResponseBody &) = default ;
    DescribeMetricDataResponseBody(DescribeMetricDataResponseBody &&) = default ;
    DescribeMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricDataResponseBody() = default ;
    DescribeMetricDataResponseBody& operator=(const DescribeMetricDataResponseBody &) = default ;
    DescribeMetricDataResponseBody& operator=(DescribeMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->warnings_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeMetricDataResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeMetricDataResponseBodyDataList>) };
    inline vector<DescribeMetricDataResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeMetricDataResponseBodyDataList>) };
    inline DescribeMetricDataResponseBody& setDataList(const vector<DescribeMetricDataResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeMetricDataResponseBody& setDataList(vector<DescribeMetricDataResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMetricDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const vector<string> & warnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<string>) };
    inline vector<string> warnings() { DARABONBA_PTR_GET(warnings_, vector<string>) };
    inline DescribeMetricDataResponseBody& setWarnings(const vector<string> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline DescribeMetricDataResponseBody& setWarnings(vector<string> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


  protected:
    // Collection of monitoring data for the cloud disk.
    std::shared_ptr<vector<DescribeMetricDataResponseBodyDataList>> dataList_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of data points queried.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // List of warning messages.
    std::shared_ptr<vector<string>> warnings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
