// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATARESPONSEBODYQPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATARESPONSEBODYQPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(DynamicHttpAcc, dynamicHttpAcc_);
      DARABONBA_PTR_TO_JSON(DynamicHttpQps, dynamicHttpQps_);
      DARABONBA_PTR_TO_JSON(DynamicHttpsAcc, dynamicHttpsAcc_);
      DARABONBA_PTR_TO_JSON(DynamicHttpsQps, dynamicHttpsQps_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(StaticHttpAcc, staticHttpAcc_);
      DARABONBA_PTR_TO_JSON(StaticHttpQps, staticHttpQps_);
      DARABONBA_PTR_TO_JSON(StaticHttpsAcc, staticHttpsAcc_);
      DARABONBA_PTR_TO_JSON(StaticHttpsQps, staticHttpsQps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpAcc, dynamicHttpAcc_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpQps, dynamicHttpQps_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpsAcc, dynamicHttpsAcc_);
      DARABONBA_PTR_FROM_JSON(DynamicHttpsQps, dynamicHttpsQps_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(StaticHttpAcc, staticHttpAcc_);
      DARABONBA_PTR_FROM_JSON(StaticHttpQps, staticHttpQps_);
      DARABONBA_PTR_FROM_JSON(StaticHttpsAcc, staticHttpsAcc_);
      DARABONBA_PTR_FROM_JSON(StaticHttpsQps, staticHttpsQps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule(const DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule(DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& operator=(const DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& operator=(DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acc_ != nullptr
        && this->dynamicHttpAcc_ != nullptr && this->dynamicHttpQps_ != nullptr && this->dynamicHttpsAcc_ != nullptr && this->dynamicHttpsQps_ != nullptr && this->qps_ != nullptr
        && this->staticHttpAcc_ != nullptr && this->staticHttpQps_ != nullptr && this->staticHttpsAcc_ != nullptr && this->staticHttpsQps_ != nullptr && this->timeStamp_ != nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline float acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setAcc(float acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // dynamicHttpAcc Field Functions 
    bool hasDynamicHttpAcc() const { return this->dynamicHttpAcc_ != nullptr;};
    void deleteDynamicHttpAcc() { this->dynamicHttpAcc_ = nullptr;};
    inline float dynamicHttpAcc() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpAcc_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setDynamicHttpAcc(float dynamicHttpAcc) { DARABONBA_PTR_SET_VALUE(dynamicHttpAcc_, dynamicHttpAcc) };


    // dynamicHttpQps Field Functions 
    bool hasDynamicHttpQps() const { return this->dynamicHttpQps_ != nullptr;};
    void deleteDynamicHttpQps() { this->dynamicHttpQps_ = nullptr;};
    inline float dynamicHttpQps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpQps_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setDynamicHttpQps(float dynamicHttpQps) { DARABONBA_PTR_SET_VALUE(dynamicHttpQps_, dynamicHttpQps) };


    // dynamicHttpsAcc Field Functions 
    bool hasDynamicHttpsAcc() const { return this->dynamicHttpsAcc_ != nullptr;};
    void deleteDynamicHttpsAcc() { this->dynamicHttpsAcc_ = nullptr;};
    inline float dynamicHttpsAcc() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsAcc_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setDynamicHttpsAcc(float dynamicHttpsAcc) { DARABONBA_PTR_SET_VALUE(dynamicHttpsAcc_, dynamicHttpsAcc) };


    // dynamicHttpsQps Field Functions 
    bool hasDynamicHttpsQps() const { return this->dynamicHttpsQps_ != nullptr;};
    void deleteDynamicHttpsQps() { this->dynamicHttpsQps_ = nullptr;};
    inline float dynamicHttpsQps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsQps_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setDynamicHttpsQps(float dynamicHttpsQps) { DARABONBA_PTR_SET_VALUE(dynamicHttpsQps_, dynamicHttpsQps) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline float qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // staticHttpAcc Field Functions 
    bool hasStaticHttpAcc() const { return this->staticHttpAcc_ != nullptr;};
    void deleteStaticHttpAcc() { this->staticHttpAcc_ = nullptr;};
    inline float staticHttpAcc() const { DARABONBA_PTR_GET_DEFAULT(staticHttpAcc_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setStaticHttpAcc(float staticHttpAcc) { DARABONBA_PTR_SET_VALUE(staticHttpAcc_, staticHttpAcc) };


    // staticHttpQps Field Functions 
    bool hasStaticHttpQps() const { return this->staticHttpQps_ != nullptr;};
    void deleteStaticHttpQps() { this->staticHttpQps_ = nullptr;};
    inline float staticHttpQps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpQps_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setStaticHttpQps(float staticHttpQps) { DARABONBA_PTR_SET_VALUE(staticHttpQps_, staticHttpQps) };


    // staticHttpsAcc Field Functions 
    bool hasStaticHttpsAcc() const { return this->staticHttpsAcc_ != nullptr;};
    void deleteStaticHttpsAcc() { this->staticHttpsAcc_ = nullptr;};
    inline float staticHttpsAcc() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsAcc_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setStaticHttpsAcc(float staticHttpsAcc) { DARABONBA_PTR_SET_VALUE(staticHttpsAcc_, staticHttpsAcc) };


    // staticHttpsQps Field Functions 
    bool hasStaticHttpsQps() const { return this->staticHttpsQps_ != nullptr;};
    void deleteStaticHttpsQps() { this->staticHttpsQps_ = nullptr;};
    inline float staticHttpsQps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsQps_, 0.0) };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setStaticHttpsQps(float staticHttpsQps) { DARABONBA_PTR_SET_VALUE(staticHttpsQps_, staticHttpsQps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The total number of requests.
    std::shared_ptr<float> acc_ = nullptr;
    // The number of requests for dynamic content delivery over HTTP.
    std::shared_ptr<float> dynamicHttpAcc_ = nullptr;
    // The QPS for dynamic content delivery over HTTP.
    std::shared_ptr<float> dynamicHttpQps_ = nullptr;
    // The number of requests for dynamic content delivery over HTTPS.
    std::shared_ptr<float> dynamicHttpsAcc_ = nullptr;
    // The QPS for dynamic content delivery over HTTPS.
    std::shared_ptr<float> dynamicHttpsQps_ = nullptr;
    // The total QPS.
    std::shared_ptr<float> qps_ = nullptr;
    // The number of requests for static content delivery over HTTP.
    std::shared_ptr<float> staticHttpAcc_ = nullptr;
    // The QPS for static content delivery over HTTP.
    std::shared_ptr<float> staticHttpQps_ = nullptr;
    // The number of requests for static content delivery over HTTPS.
    std::shared_ptr<float> staticHttpsAcc_ = nullptr;
    // The QPS for static content delivery over HTTPS.
    std::shared_ptr<float> staticHttpsQps_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
