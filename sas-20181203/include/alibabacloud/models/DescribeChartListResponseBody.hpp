// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChartListResponseBodyChartList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChartList, chartList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChartList, chartList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChartListResponseBody() = default ;
    DescribeChartListResponseBody(const DescribeChartListResponseBody &) = default ;
    DescribeChartListResponseBody(DescribeChartListResponseBody &&) = default ;
    DescribeChartListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartListResponseBody() = default ;
    DescribeChartListResponseBody& operator=(const DescribeChartListResponseBody &) = default ;
    DescribeChartListResponseBody& operator=(DescribeChartListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chartList_ != nullptr
        && this->requestId_ != nullptr; };
    // chartList Field Functions 
    bool hasChartList() const { return this->chartList_ != nullptr;};
    void deleteChartList() { this->chartList_ = nullptr;};
    inline const vector<DescribeChartListResponseBodyChartList> & chartList() const { DARABONBA_PTR_GET_CONST(chartList_, vector<DescribeChartListResponseBodyChartList>) };
    inline vector<DescribeChartListResponseBodyChartList> chartList() { DARABONBA_PTR_GET(chartList_, vector<DescribeChartListResponseBodyChartList>) };
    inline DescribeChartListResponseBody& setChartList(const vector<DescribeChartListResponseBodyChartList> & chartList) { DARABONBA_PTR_SET_VALUE(chartList_, chartList) };
    inline DescribeChartListResponseBody& setChartList(vector<DescribeChartListResponseBodyChartList> && chartList) { DARABONBA_PTR_SET_RVALUE(chartList_, chartList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChartListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The charts.
    std::shared_ptr<vector<DescribeChartListResponseBodyChartList>> chartList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
