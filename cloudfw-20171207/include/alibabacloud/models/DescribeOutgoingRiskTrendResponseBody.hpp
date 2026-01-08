// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGRISKTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(RiskDomain, riskDomain_);
        DARABONBA_PTR_TO_JSON(RiskIp, riskIp_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(RiskDomain, riskDomain_);
        DARABONBA_PTR_FROM_JSON(RiskIp, riskIp_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->riskDomain_ == nullptr
        && this->riskIp_ == nullptr && this->time_ == nullptr; };
      // riskDomain Field Functions 
      bool hasRiskDomain() const { return this->riskDomain_ != nullptr;};
      void deleteRiskDomain() { this->riskDomain_ = nullptr;};
      inline int32_t getRiskDomain() const { DARABONBA_PTR_GET_DEFAULT(riskDomain_, 0) };
      inline DataList& setRiskDomain(int32_t riskDomain) { DARABONBA_PTR_SET_VALUE(riskDomain_, riskDomain) };


      // riskIp Field Functions 
      bool hasRiskIp() const { return this->riskIp_ != nullptr;};
      void deleteRiskIp() { this->riskIp_ = nullptr;};
      inline int32_t getRiskIp() const { DARABONBA_PTR_GET_DEFAULT(riskIp_, 0) };
      inline DataList& setRiskIp(int32_t riskIp) { DARABONBA_PTR_SET_VALUE(riskIp_, riskIp) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      shared_ptr<int32_t> riskDomain_ {};
      shared_ptr<int32_t> riskIp_ {};
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->interval_ == nullptr && this->requestId_ == nullptr && this->totalRiskDomain_ == nullptr && this->totalRiskIp_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeOutgoingRiskTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeOutgoingRiskTrendResponseBody::DataList>) };
    inline vector<DescribeOutgoingRiskTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeOutgoingRiskTrendResponseBody::DataList>) };
    inline DescribeOutgoingRiskTrendResponseBody& setDataList(const vector<DescribeOutgoingRiskTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeOutgoingRiskTrendResponseBody& setDataList(vector<DescribeOutgoingRiskTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeOutgoingRiskTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingRiskTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRiskDomain Field Functions 
    bool hasTotalRiskDomain() const { return this->totalRiskDomain_ != nullptr;};
    void deleteTotalRiskDomain() { this->totalRiskDomain_ = nullptr;};
    inline int32_t getTotalRiskDomain() const { DARABONBA_PTR_GET_DEFAULT(totalRiskDomain_, 0) };
    inline DescribeOutgoingRiskTrendResponseBody& setTotalRiskDomain(int32_t totalRiskDomain) { DARABONBA_PTR_SET_VALUE(totalRiskDomain_, totalRiskDomain) };


    // totalRiskIp Field Functions 
    bool hasTotalRiskIp() const { return this->totalRiskIp_ != nullptr;};
    void deleteTotalRiskIp() { this->totalRiskIp_ = nullptr;};
    inline int32_t getTotalRiskIp() const { DARABONBA_PTR_GET_DEFAULT(totalRiskIp_, 0) };
    inline DescribeOutgoingRiskTrendResponseBody& setTotalRiskIp(int32_t totalRiskIp) { DARABONBA_PTR_SET_VALUE(totalRiskIp_, totalRiskIp) };


  protected:
    shared_ptr<vector<DescribeOutgoingRiskTrendResponseBody::DataList>> dataList_ {};
    shared_ptr<int32_t> interval_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRiskDomain_ {};
    shared_ptr<int32_t> totalRiskIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
