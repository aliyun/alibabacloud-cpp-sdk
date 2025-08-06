// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERDIMENSIONDATADEMORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERDIMENSIONDATADEMORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerDimensionDataDemoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerDimensionDataDemoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerDimensionDataDemoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodPlayerDimensionDataDemoResponseBody() = default ;
    DescribeVodPlayerDimensionDataDemoResponseBody(const DescribeVodPlayerDimensionDataDemoResponseBody &) = default ;
    DescribeVodPlayerDimensionDataDemoResponseBody(DescribeVodPlayerDimensionDataDemoResponseBody &&) = default ;
    DescribeVodPlayerDimensionDataDemoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerDimensionDataDemoResponseBody() = default ;
    DescribeVodPlayerDimensionDataDemoResponseBody& operator=(const DescribeVodPlayerDimensionDataDemoResponseBody &) = default ;
    DescribeVodPlayerDimensionDataDemoResponseBody& operator=(DescribeVodPlayerDimensionDataDemoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->requestId_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<string> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<string>) };
    inline vector<string> dataList() { DARABONBA_PTR_GET(dataList_, vector<string>) };
    inline DescribeVodPlayerDimensionDataDemoResponseBody& setDataList(const vector<string> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVodPlayerDimensionDataDemoResponseBody& setDataList(vector<string> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodPlayerDimensionDataDemoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> dataList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
