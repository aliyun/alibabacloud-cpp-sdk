// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPEAKTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPEAKTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePeakTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePeakTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePeakTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePeakTrendResponseBody() = default ;
    DescribePeakTrendResponseBody(const DescribePeakTrendResponseBody &) = default ;
    DescribePeakTrendResponseBody(DescribePeakTrendResponseBody &&) = default ;
    DescribePeakTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePeakTrendResponseBody() = default ;
    DescribePeakTrendResponseBody& operator=(const DescribePeakTrendResponseBody &) = default ;
    DescribePeakTrendResponseBody& operator=(DescribePeakTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowChart : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowChart& obj) { 
        DARABONBA_PTR_TO_JSON(AclSum, aclSum_);
        DARABONBA_PTR_TO_JSON(AntiScanSum, antiScanSum_);
        DARABONBA_PTR_TO_JSON(CcSum, ccSum_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(WafSum, wafSum_);
      };
      friend void from_json(const Darabonba::Json& j, FlowChart& obj) { 
        DARABONBA_PTR_FROM_JSON(AclSum, aclSum_);
        DARABONBA_PTR_FROM_JSON(AntiScanSum, antiScanSum_);
        DARABONBA_PTR_FROM_JSON(CcSum, ccSum_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(WafSum, wafSum_);
      };
      FlowChart() = default ;
      FlowChart(const FlowChart &) = default ;
      FlowChart(FlowChart &&) = default ;
      FlowChart(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowChart() = default ;
      FlowChart& operator=(const FlowChart &) = default ;
      FlowChart& operator=(FlowChart &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclSum_ == nullptr
        && this->antiScanSum_ == nullptr && this->ccSum_ == nullptr && this->count_ == nullptr && this->index_ == nullptr && this->wafSum_ == nullptr; };
      // aclSum Field Functions 
      bool hasAclSum() const { return this->aclSum_ != nullptr;};
      void deleteAclSum() { this->aclSum_ = nullptr;};
      inline int64_t getAclSum() const { DARABONBA_PTR_GET_DEFAULT(aclSum_, 0L) };
      inline FlowChart& setAclSum(int64_t aclSum) { DARABONBA_PTR_SET_VALUE(aclSum_, aclSum) };


      // antiScanSum Field Functions 
      bool hasAntiScanSum() const { return this->antiScanSum_ != nullptr;};
      void deleteAntiScanSum() { this->antiScanSum_ = nullptr;};
      inline int64_t getAntiScanSum() const { DARABONBA_PTR_GET_DEFAULT(antiScanSum_, 0L) };
      inline FlowChart& setAntiScanSum(int64_t antiScanSum) { DARABONBA_PTR_SET_VALUE(antiScanSum_, antiScanSum) };


      // ccSum Field Functions 
      bool hasCcSum() const { return this->ccSum_ != nullptr;};
      void deleteCcSum() { this->ccSum_ = nullptr;};
      inline int64_t getCcSum() const { DARABONBA_PTR_GET_DEFAULT(ccSum_, 0L) };
      inline FlowChart& setCcSum(int64_t ccSum) { DARABONBA_PTR_SET_VALUE(ccSum_, ccSum) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline FlowChart& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline FlowChart& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // wafSum Field Functions 
      bool hasWafSum() const { return this->wafSum_ != nullptr;};
      void deleteWafSum() { this->wafSum_ = nullptr;};
      inline int64_t getWafSum() const { DARABONBA_PTR_GET_DEFAULT(wafSum_, 0L) };
      inline FlowChart& setWafSum(int64_t wafSum) { DARABONBA_PTR_SET_VALUE(wafSum_, wafSum) };


    protected:
      // The number of requests that are monitored or blocked by the custom rule (access control) module.
      shared_ptr<int64_t> aclSum_ {};
      // The number of requests that are monitored or blocked by the scan protection module.
      shared_ptr<int64_t> antiScanSum_ {};
      // The number of requests that are monitored or blocked by the HTTP flood protection module.
      shared_ptr<int64_t> ccSum_ {};
      // The total number of requests.
      shared_ptr<int64_t> count_ {};
      // The serial number of the time interval. The serial numbers are arranged in chronological order.
      shared_ptr<int64_t> index_ {};
      // The number of requests that are monitored or blocked by the regular expression protection engine.
      shared_ptr<int64_t> wafSum_ {};
    };

    virtual bool empty() const override { return this->flowChart_ == nullptr
        && this->requestId_ == nullptr; };
    // flowChart Field Functions 
    bool hasFlowChart() const { return this->flowChart_ != nullptr;};
    void deleteFlowChart() { this->flowChart_ = nullptr;};
    inline const vector<DescribePeakTrendResponseBody::FlowChart> & getFlowChart() const { DARABONBA_PTR_GET_CONST(flowChart_, vector<DescribePeakTrendResponseBody::FlowChart>) };
    inline vector<DescribePeakTrendResponseBody::FlowChart> getFlowChart() { DARABONBA_PTR_GET(flowChart_, vector<DescribePeakTrendResponseBody::FlowChart>) };
    inline DescribePeakTrendResponseBody& setFlowChart(const vector<DescribePeakTrendResponseBody::FlowChart> & flowChart) { DARABONBA_PTR_SET_VALUE(flowChart_, flowChart) };
    inline DescribePeakTrendResponseBody& setFlowChart(vector<DescribePeakTrendResponseBody::FlowChart> && flowChart) { DARABONBA_PTR_SET_RVALUE(flowChart_, flowChart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePeakTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of the QPS statistics of the WAF instance.
    shared_ptr<vector<DescribePeakTrendResponseBody::FlowChart>> flowChart_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
