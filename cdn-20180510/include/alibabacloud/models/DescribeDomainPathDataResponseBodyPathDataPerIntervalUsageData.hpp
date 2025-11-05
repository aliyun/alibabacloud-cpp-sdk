// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINPATHDATARESPONSEBODYPATHDATAPERINTERVALUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINPATHDATARESPONSEBODYPATHDATAPERINTERVALUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
    };
    DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData() = default ;
    DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData(const DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData &) = default ;
    DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData(DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData &&) = default ;
    DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData() = default ;
    DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& operator=(const DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData &) = default ;
    DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& operator=(DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acc_ == nullptr
        && return this->path_ == nullptr && return this->time_ == nullptr && return this->traffic_ == nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int32_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0) };
    inline DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& setAcc(int32_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int32_t traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0) };
    inline DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData& setTraffic(int32_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    // The number of visits to the URL.
    std::shared_ptr<int32_t> acc_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
    // The point in time.
    std::shared_ptr<string> time_ = nullptr;
    // The amount of network traffic. Unit: bytes.
    std::shared_ptr<int32_t> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
