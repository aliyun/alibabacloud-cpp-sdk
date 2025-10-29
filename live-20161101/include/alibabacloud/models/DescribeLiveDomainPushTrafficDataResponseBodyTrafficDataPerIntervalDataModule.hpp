// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
    };
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeStamp_ == nullptr
        && return this->trafficValue_ == nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline string trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
    inline DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


  protected:
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The traffic. Unit: bytes.
    std::shared_ptr<string> trafficValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
