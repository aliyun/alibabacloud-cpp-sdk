// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebReportTopIpResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebReportTopIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebReportTopIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebReportTopIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebReportTopIpResponseBody() = default ;
    DescribeWebReportTopIpResponseBody(const DescribeWebReportTopIpResponseBody &) = default ;
    DescribeWebReportTopIpResponseBody(DescribeWebReportTopIpResponseBody &&) = default ;
    DescribeWebReportTopIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebReportTopIpResponseBody() = default ;
    DescribeWebReportTopIpResponseBody& operator=(const DescribeWebReportTopIpResponseBody &) = default ;
    DescribeWebReportTopIpResponseBody& operator=(DescribeWebReportTopIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeWebReportTopIpResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeWebReportTopIpResponseBodyDataList>) };
    inline vector<DescribeWebReportTopIpResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeWebReportTopIpResponseBodyDataList>) };
    inline DescribeWebReportTopIpResponseBody& setDataList(const vector<DescribeWebReportTopIpResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeWebReportTopIpResponseBody& setDataList(vector<DescribeWebReportTopIpResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebReportTopIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the IP addresses.
    std::shared_ptr<vector<DescribeWebReportTopIpResponseBodyDataList>> dataList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
