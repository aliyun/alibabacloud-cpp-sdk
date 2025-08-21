// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
    };
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeStamp_ != nullptr
        && this->trafficValue_ != nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline string trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
    inline DescribeVsDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


  protected:
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> trafficValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
