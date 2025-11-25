// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingRiskTrendResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingRiskTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingRiskTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRiskDomain, totalRiskDomain_);
      DARABONBA_PTR_TO_JSON(TotalRiskIp, totalRiskIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingRiskTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRiskDomain, totalRiskDomain_);
      DARABONBA_PTR_FROM_JSON(TotalRiskIp, totalRiskIp_);
    };
    DescribeOutgoingRiskTrendResponseBody() = default ;
    DescribeOutgoingRiskTrendResponseBody(const DescribeOutgoingRiskTrendResponseBody &) = default ;
    DescribeOutgoingRiskTrendResponseBody(DescribeOutgoingRiskTrendResponseBody &&) = default ;
    DescribeOutgoingRiskTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingRiskTrendResponseBody() = default ;
    DescribeOutgoingRiskTrendResponseBody& operator=(const DescribeOutgoingRiskTrendResponseBody &) = default ;
    DescribeOutgoingRiskTrendResponseBody& operator=(DescribeOutgoingRiskTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->interval_ == nullptr && return this->requestId_ == nullptr && return this->totalRiskDomain_ == nullptr && return this->totalRiskIp_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeOutgoingRiskTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeOutgoingRiskTrendResponseBodyDataList>) };
    inline vector<DescribeOutgoingRiskTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeOutgoingRiskTrendResponseBodyDataList>) };
    inline DescribeOutgoingRiskTrendResponseBody& setDataList(const vector<DescribeOutgoingRiskTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeOutgoingRiskTrendResponseBody& setDataList(vector<DescribeOutgoingRiskTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeOutgoingRiskTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingRiskTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRiskDomain Field Functions 
    bool hasTotalRiskDomain() const { return this->totalRiskDomain_ != nullptr;};
    void deleteTotalRiskDomain() { this->totalRiskDomain_ = nullptr;};
    inline int32_t totalRiskDomain() const { DARABONBA_PTR_GET_DEFAULT(totalRiskDomain_, 0) };
    inline DescribeOutgoingRiskTrendResponseBody& setTotalRiskDomain(int32_t totalRiskDomain) { DARABONBA_PTR_SET_VALUE(totalRiskDomain_, totalRiskDomain) };


    // totalRiskIp Field Functions 
    bool hasTotalRiskIp() const { return this->totalRiskIp_ != nullptr;};
    void deleteTotalRiskIp() { this->totalRiskIp_ = nullptr;};
    inline int32_t totalRiskIp() const { DARABONBA_PTR_GET_DEFAULT(totalRiskIp_, 0) };
    inline DescribeOutgoingRiskTrendResponseBody& setTotalRiskIp(int32_t totalRiskIp) { DARABONBA_PTR_SET_VALUE(totalRiskIp_, totalRiskIp) };


  protected:
    std::shared_ptr<vector<DescribeOutgoingRiskTrendResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalRiskDomain_ = nullptr;
    std::shared_ptr<int32_t> totalRiskIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
