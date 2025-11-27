// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQBPSDATARESPONSEBODYREQBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQBPSDATARESPONSEBODYREQBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(ReqBpsValue, reqBpsValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqBpsValue, reqBpsValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule() = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule(const DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule &) = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule(DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule &&) = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule() = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule& operator=(const DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule &) = default ;
    DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule& operator=(DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reqBpsValue_ == nullptr
        && return this->timeStamp_ == nullptr; };
    // reqBpsValue Field Functions 
    bool hasReqBpsValue() const { return this->reqBpsValue_ != nullptr;};
    void deleteReqBpsValue() { this->reqBpsValue_ = nullptr;};
    inline string reqBpsValue() const { DARABONBA_PTR_GET_DEFAULT(reqBpsValue_, "") };
    inline DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule& setReqBpsValue(string reqBpsValue) { DARABONBA_PTR_SET_VALUE(reqBpsValue_, reqBpsValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDomainReqBpsDataResponseBodyReqBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> reqBpsValue_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
