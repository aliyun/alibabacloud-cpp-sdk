// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQTRAFFICDATARESPONSEBODYREQTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQTRAFFICDATARESPONSEBODYREQTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(ReqTrafficValue, reqTrafficValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqTrafficValue, reqTrafficValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule() = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule(const DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule &) = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule(DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule &&) = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule() = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule& operator=(const DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule &) = default ;
    DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule& operator=(DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reqTrafficValue_ != nullptr
        && this->timeStamp_ != nullptr; };
    // reqTrafficValue Field Functions 
    bool hasReqTrafficValue() const { return this->reqTrafficValue_ != nullptr;};
    void deleteReqTrafficValue() { this->reqTrafficValue_ = nullptr;};
    inline string reqTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(reqTrafficValue_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule& setReqTrafficValue(string reqTrafficValue) { DARABONBA_PTR_SET_VALUE(reqTrafficValue_, reqTrafficValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBodyReqTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> reqTrafficValue_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
