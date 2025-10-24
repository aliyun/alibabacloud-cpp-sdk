// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPEAKTRENDRESPONSEBODYFLOWCHART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPEAKTRENDRESPONSEBODYFLOWCHART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePeakTrendResponseBodyFlowChart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePeakTrendResponseBodyFlowChart& obj) { 
      DARABONBA_PTR_TO_JSON(AclSum, aclSum_);
      DARABONBA_PTR_TO_JSON(AntiScanSum, antiScanSum_);
      DARABONBA_PTR_TO_JSON(CcSum, ccSum_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(WafSum, wafSum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePeakTrendResponseBodyFlowChart& obj) { 
      DARABONBA_PTR_FROM_JSON(AclSum, aclSum_);
      DARABONBA_PTR_FROM_JSON(AntiScanSum, antiScanSum_);
      DARABONBA_PTR_FROM_JSON(CcSum, ccSum_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(WafSum, wafSum_);
    };
    DescribePeakTrendResponseBodyFlowChart() = default ;
    DescribePeakTrendResponseBodyFlowChart(const DescribePeakTrendResponseBodyFlowChart &) = default ;
    DescribePeakTrendResponseBodyFlowChart(DescribePeakTrendResponseBodyFlowChart &&) = default ;
    DescribePeakTrendResponseBodyFlowChart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePeakTrendResponseBodyFlowChart() = default ;
    DescribePeakTrendResponseBodyFlowChart& operator=(const DescribePeakTrendResponseBodyFlowChart &) = default ;
    DescribePeakTrendResponseBodyFlowChart& operator=(DescribePeakTrendResponseBodyFlowChart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclSum_ == nullptr
        && return this->antiScanSum_ == nullptr && return this->ccSum_ == nullptr && return this->count_ == nullptr && return this->index_ == nullptr && return this->wafSum_ == nullptr; };
    // aclSum Field Functions 
    bool hasAclSum() const { return this->aclSum_ != nullptr;};
    void deleteAclSum() { this->aclSum_ = nullptr;};
    inline int64_t aclSum() const { DARABONBA_PTR_GET_DEFAULT(aclSum_, 0L) };
    inline DescribePeakTrendResponseBodyFlowChart& setAclSum(int64_t aclSum) { DARABONBA_PTR_SET_VALUE(aclSum_, aclSum) };


    // antiScanSum Field Functions 
    bool hasAntiScanSum() const { return this->antiScanSum_ != nullptr;};
    void deleteAntiScanSum() { this->antiScanSum_ = nullptr;};
    inline int64_t antiScanSum() const { DARABONBA_PTR_GET_DEFAULT(antiScanSum_, 0L) };
    inline DescribePeakTrendResponseBodyFlowChart& setAntiScanSum(int64_t antiScanSum) { DARABONBA_PTR_SET_VALUE(antiScanSum_, antiScanSum) };


    // ccSum Field Functions 
    bool hasCcSum() const { return this->ccSum_ != nullptr;};
    void deleteCcSum() { this->ccSum_ = nullptr;};
    inline int64_t ccSum() const { DARABONBA_PTR_GET_DEFAULT(ccSum_, 0L) };
    inline DescribePeakTrendResponseBodyFlowChart& setCcSum(int64_t ccSum) { DARABONBA_PTR_SET_VALUE(ccSum_, ccSum) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribePeakTrendResponseBodyFlowChart& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribePeakTrendResponseBodyFlowChart& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // wafSum Field Functions 
    bool hasWafSum() const { return this->wafSum_ != nullptr;};
    void deleteWafSum() { this->wafSum_ = nullptr;};
    inline int64_t wafSum() const { DARABONBA_PTR_GET_DEFAULT(wafSum_, 0L) };
    inline DescribePeakTrendResponseBodyFlowChart& setWafSum(int64_t wafSum) { DARABONBA_PTR_SET_VALUE(wafSum_, wafSum) };


  protected:
    // The number of requests that are monitored or blocked by the custom rule (access control) module.
    std::shared_ptr<int64_t> aclSum_ = nullptr;
    // The number of requests that are monitored or blocked by the scan protection module.
    std::shared_ptr<int64_t> antiScanSum_ = nullptr;
    // The number of requests that are monitored or blocked by the HTTP flood protection module.
    std::shared_ptr<int64_t> ccSum_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The serial number of the time interval. The serial numbers are arranged in chronological order.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The number of requests that are monitored or blocked by the regular expression protection engine.
    std::shared_ptr<int64_t> wafSum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
