// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATADEMORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERCOLLECTDATADEMORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodPlayerCollectDataDemoResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerCollectDataDemoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerCollectDataDemoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerCollectDataDemoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodPlayerCollectDataDemoResponseBody() = default ;
    DescribeVodPlayerCollectDataDemoResponseBody(const DescribeVodPlayerCollectDataDemoResponseBody &) = default ;
    DescribeVodPlayerCollectDataDemoResponseBody(DescribeVodPlayerCollectDataDemoResponseBody &&) = default ;
    DescribeVodPlayerCollectDataDemoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerCollectDataDemoResponseBody() = default ;
    DescribeVodPlayerCollectDataDemoResponseBody& operator=(const DescribeVodPlayerCollectDataDemoResponseBody &) = default ;
    DescribeVodPlayerCollectDataDemoResponseBody& operator=(DescribeVodPlayerCollectDataDemoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->requestId_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList>) };
    inline vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList>) };
    inline DescribeVodPlayerCollectDataDemoResponseBody& setDataList(const vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVodPlayerCollectDataDemoResponseBody& setDataList(vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodPlayerCollectDataDemoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeVodPlayerCollectDataDemoResponseBodyDataList>> dataList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
