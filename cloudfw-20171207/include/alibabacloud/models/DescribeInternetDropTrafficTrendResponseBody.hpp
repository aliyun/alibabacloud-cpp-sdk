// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDROPTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDROPTRAFFICTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetDropTrafficTrendResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetDropTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_TO_JSON(RatioAverage, ratioAverage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RingRatioAverage, ringRatioAverage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_FROM_JSON(RatioAverage, ratioAverage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RingRatioAverage, ringRatioAverage_);
    };
    DescribeInternetDropTrafficTrendResponseBody() = default ;
    DescribeInternetDropTrafficTrendResponseBody(const DescribeInternetDropTrafficTrendResponseBody &) = default ;
    DescribeInternetDropTrafficTrendResponseBody(DescribeInternetDropTrafficTrendResponseBody &&) = default ;
    DescribeInternetDropTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDropTrafficTrendResponseBody() = default ;
    DescribeInternetDropTrafficTrendResponseBody& operator=(const DescribeInternetDropTrafficTrendResponseBody &) = default ;
    DescribeInternetDropTrafficTrendResponseBody& operator=(DescribeInternetDropTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->dropSessionMax_ == nullptr && return this->ratioAverage_ == nullptr && return this->requestId_ == nullptr && return this->ringRatioAverage_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetDropTrafficTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetDropTrafficTrendResponseBodyDataList>) };
    inline vector<DescribeInternetDropTrafficTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetDropTrafficTrendResponseBodyDataList>) };
    inline DescribeInternetDropTrafficTrendResponseBody& setDataList(const vector<DescribeInternetDropTrafficTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetDropTrafficTrendResponseBody& setDataList(vector<DescribeInternetDropTrafficTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dropSessionMax Field Functions 
    bool hasDropSessionMax() const { return this->dropSessionMax_ != nullptr;};
    void deleteDropSessionMax() { this->dropSessionMax_ = nullptr;};
    inline int64_t dropSessionMax() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMax_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBody& setDropSessionMax(int64_t dropSessionMax) { DARABONBA_PTR_SET_VALUE(dropSessionMax_, dropSessionMax) };


    // ratioAverage Field Functions 
    bool hasRatioAverage() const { return this->ratioAverage_ != nullptr;};
    void deleteRatioAverage() { this->ratioAverage_ = nullptr;};
    inline string ratioAverage() const { DARABONBA_PTR_GET_DEFAULT(ratioAverage_, "") };
    inline DescribeInternetDropTrafficTrendResponseBody& setRatioAverage(string ratioAverage) { DARABONBA_PTR_SET_VALUE(ratioAverage_, ratioAverage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetDropTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ringRatioAverage Field Functions 
    bool hasRingRatioAverage() const { return this->ringRatioAverage_ != nullptr;};
    void deleteRingRatioAverage() { this->ringRatioAverage_ = nullptr;};
    inline string ringRatioAverage() const { DARABONBA_PTR_GET_DEFAULT(ringRatioAverage_, "") };
    inline DescribeInternetDropTrafficTrendResponseBody& setRingRatioAverage(string ringRatioAverage) { DARABONBA_PTR_SET_VALUE(ringRatioAverage_, ringRatioAverage) };


  protected:
    std::shared_ptr<vector<DescribeInternetDropTrafficTrendResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> dropSessionMax_ = nullptr;
    std::shared_ptr<string> ratioAverage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> ringRatioAverage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
