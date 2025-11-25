// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTimeTopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTimeTopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IPType, IPType_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NatIP, natIP_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
      DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTimeTopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IPType, IPType_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NatIP, natIP_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
      DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
    };
    DescribeInternetTimeTopRequest() = default ;
    DescribeInternetTimeTopRequest(const DescribeInternetTimeTopRequest &) = default ;
    DescribeInternetTimeTopRequest(DescribeInternetTimeTopRequest &&) = default ;
    DescribeInternetTimeTopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTimeTopRequest() = default ;
    DescribeInternetTimeTopRequest& operator=(const DescribeInternetTimeTopRequest &) = default ;
    DescribeInternetTimeTopRequest& operator=(DescribeInternetTimeTopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->endTime_ == nullptr && return this->IPType_ == nullptr && return this->interval_ == nullptr && return this->lang_ == nullptr && return this->limit_ == nullptr
        && return this->natIP_ == nullptr && return this->order_ == nullptr && return this->sort_ == nullptr && return this->sourceCode_ == nullptr && return this->sourceIp_ == nullptr
        && return this->srcIP_ == nullptr && return this->startTime_ == nullptr && return this->trafficTime_ == nullptr && return this->trafficType_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeInternetTimeTopRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInternetTimeTopRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string IPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline DescribeInternetTimeTopRequest& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeInternetTimeTopRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetTimeTopRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeInternetTimeTopRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // natIP Field Functions 
    bool hasNatIP() const { return this->natIP_ != nullptr;};
    void deleteNatIP() { this->natIP_ = nullptr;};
    inline string natIP() const { DARABONBA_PTR_GET_DEFAULT(natIP_, "") };
    inline DescribeInternetTimeTopRequest& setNatIP(string natIP) { DARABONBA_PTR_SET_VALUE(natIP_, natIP) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeInternetTimeTopRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeInternetTimeTopRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string sourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeInternetTimeTopRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInternetTimeTopRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeInternetTimeTopRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInternetTimeTopRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline string trafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, "") };
    inline DescribeInternetTimeTopRequest& setTrafficTime(string trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline string trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
    inline DescribeInternetTimeTopRequest& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> IPType_ = nullptr;
    std::shared_ptr<int64_t> interval_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> limit_ = nullptr;
    std::shared_ptr<string> natIP_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceCode_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> srcIP_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> trafficTime_ = nullptr;
    std::shared_ptr<string> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
