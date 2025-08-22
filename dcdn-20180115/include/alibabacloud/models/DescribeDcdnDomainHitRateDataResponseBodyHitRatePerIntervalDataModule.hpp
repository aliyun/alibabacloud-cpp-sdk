// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHITRATEDATARESPONSEBODYHITRATEPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHITRATEDATARESPONSEBODYHITRATEPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(ByteHitRate, byteHitRate_);
      DARABONBA_PTR_TO_JSON(ReqHitRate, reqHitRate_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ByteHitRate, byteHitRate_);
      DARABONBA_PTR_FROM_JSON(ReqHitRate, reqHitRate_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule() = default ;
    DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule(const DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule &) = default ;
    DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule(DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule &&) = default ;
    DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule() = default ;
    DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& operator=(const DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule &) = default ;
    DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& operator=(DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byteHitRate_ != nullptr
        && this->reqHitRate_ != nullptr && this->timeStamp_ != nullptr; };
    // byteHitRate Field Functions 
    bool hasByteHitRate() const { return this->byteHitRate_ != nullptr;};
    void deleteByteHitRate() { this->byteHitRate_ = nullptr;};
    inline float byteHitRate() const { DARABONBA_PTR_GET_DEFAULT(byteHitRate_, 0.0) };
    inline DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& setByteHitRate(float byteHitRate) { DARABONBA_PTR_SET_VALUE(byteHitRate_, byteHitRate) };


    // reqHitRate Field Functions 
    bool hasReqHitRate() const { return this->reqHitRate_ != nullptr;};
    void deleteReqHitRate() { this->reqHitRate_ = nullptr;};
    inline float reqHitRate() const { DARABONBA_PTR_GET_DEFAULT(reqHitRate_, 0.0) };
    inline DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& setReqHitRate(float reqHitRate) { DARABONBA_PTR_SET_VALUE(reqHitRate_, reqHitRate) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The byte hit ratio.
    std::shared_ptr<float> byteHitRate_ = nullptr;
    // The request hit ratio.
    std::shared_ptr<float> reqHitRate_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
