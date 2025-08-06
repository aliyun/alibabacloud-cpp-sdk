// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodPlayerMetricDataDemoResponseBodyDataList.hpp>
#include <alibabacloud/models/DescribeVodPlayerMetricDataDemoResponseBodyExtend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerMetricDataDemoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerMetricDataDemoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerMetricDataDemoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeVodPlayerMetricDataDemoResponseBody() = default ;
    DescribeVodPlayerMetricDataDemoResponseBody(const DescribeVodPlayerMetricDataDemoResponseBody &) = default ;
    DescribeVodPlayerMetricDataDemoResponseBody(DescribeVodPlayerMetricDataDemoResponseBody &&) = default ;
    DescribeVodPlayerMetricDataDemoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerMetricDataDemoResponseBody() = default ;
    DescribeVodPlayerMetricDataDemoResponseBody& operator=(const DescribeVodPlayerMetricDataDemoResponseBody &) = default ;
    DescribeVodPlayerMetricDataDemoResponseBody& operator=(DescribeVodPlayerMetricDataDemoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->extend_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCnt_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList>) };
    inline vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList>) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setDataList(const vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setDataList(vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const DescribeVodPlayerMetricDataDemoResponseBodyExtend & extend() const { DARABONBA_PTR_GET_CONST(extend_, DescribeVodPlayerMetricDataDemoResponseBodyExtend) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyExtend extend() { DARABONBA_PTR_GET(extend_, DescribeVodPlayerMetricDataDemoResponseBodyExtend) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setExtend(const DescribeVodPlayerMetricDataDemoResponseBodyExtend & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setExtend(DescribeVodPlayerMetricDataDemoResponseBodyExtend && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int64_t totalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0L) };
    inline DescribeVodPlayerMetricDataDemoResponseBody& setTotalCnt(int64_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    std::shared_ptr<vector<DescribeVodPlayerMetricDataDemoResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<DescribeVodPlayerMetricDataDemoResponseBodyExtend> extend_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
