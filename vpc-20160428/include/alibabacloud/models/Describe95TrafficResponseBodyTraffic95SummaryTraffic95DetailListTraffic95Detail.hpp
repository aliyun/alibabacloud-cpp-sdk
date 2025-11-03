// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODYTRAFFIC95SUMMARYTRAFFIC95DETAILLISTTRAFFIC95DETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODYTRAFFIC95SUMMARYTRAFFIC95DETAILLISTTRAFFIC95DETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& obj) { 
      DARABONBA_PTR_TO_JSON(BillBandwidth, billBandwidth_);
      DARABONBA_PTR_TO_JSON(InBandwidth, inBandwidth_);
      DARABONBA_PTR_TO_JSON(OutBandwidth, outBandwidth_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& obj) { 
      DARABONBA_PTR_FROM_JSON(BillBandwidth, billBandwidth_);
      DARABONBA_PTR_FROM_JSON(InBandwidth, inBandwidth_);
      DARABONBA_PTR_FROM_JSON(OutBandwidth, outBandwidth_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail() = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail(const Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail &) = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail(Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail &&) = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail() = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& operator=(const Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail &) = default ;
    Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& operator=(Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billBandwidth_ == nullptr
        && return this->inBandwidth_ == nullptr && return this->outBandwidth_ == nullptr && return this->time_ == nullptr; };
    // billBandwidth Field Functions 
    bool hasBillBandwidth() const { return this->billBandwidth_ != nullptr;};
    void deleteBillBandwidth() { this->billBandwidth_ = nullptr;};
    inline string billBandwidth() const { DARABONBA_PTR_GET_DEFAULT(billBandwidth_, "") };
    inline Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& setBillBandwidth(string billBandwidth) { DARABONBA_PTR_SET_VALUE(billBandwidth_, billBandwidth) };


    // inBandwidth Field Functions 
    bool hasInBandwidth() const { return this->inBandwidth_ != nullptr;};
    void deleteInBandwidth() { this->inBandwidth_ = nullptr;};
    inline string inBandwidth() const { DARABONBA_PTR_GET_DEFAULT(inBandwidth_, "") };
    inline Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& setInBandwidth(string inBandwidth) { DARABONBA_PTR_SET_VALUE(inBandwidth_, inBandwidth) };


    // outBandwidth Field Functions 
    bool hasOutBandwidth() const { return this->outBandwidth_ != nullptr;};
    void deleteOutBandwidth() { this->outBandwidth_ = nullptr;};
    inline string outBandwidth() const { DARABONBA_PTR_GET_DEFAULT(outBandwidth_, "") };
    inline Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& setOutBandwidth(string outBandwidth) { DARABONBA_PTR_SET_VALUE(outBandwidth_, outBandwidth) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline Describe95TrafficResponseBodyTraffic95SummaryTraffic95DetailListTraffic95Detail& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The sampled bandwidth value, which is the larger bandwidth value in the inbound and outbound directions within a sampling interval. Unit: Mbit/s.
    std::shared_ptr<string> billBandwidth_ = nullptr;
    // The inbound bandwidth. Unit: Mbit/s.
    std::shared_ptr<string> inBandwidth_ = nullptr;
    // The outbound bandwidth. Unit: Mbit/s.
    std::shared_ptr<string> outBandwidth_ = nullptr;
    // The statistical time. The value is a string.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
