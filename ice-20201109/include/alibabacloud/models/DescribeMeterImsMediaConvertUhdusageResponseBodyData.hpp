// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUHDUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUHDUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMediaConvertUHDUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMediaConvertUHDUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMediaConvertUHDUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeMeterImsMediaConvertUHDUsageResponseBodyData() = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBodyData(const DescribeMeterImsMediaConvertUHDUsageResponseBodyData &) = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBodyData(DescribeMeterImsMediaConvertUHDUsageResponseBodyData &&) = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMediaConvertUHDUsageResponseBodyData() = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBodyData& operator=(const DescribeMeterImsMediaConvertUHDUsageResponseBodyData &) = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBodyData& operator=(DescribeMeterImsMediaConvertUHDUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->specification_ != nullptr && this->time_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeMeterImsMediaConvertUHDUsageResponseBodyData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline DescribeMeterImsMediaConvertUHDUsageResponseBodyData& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeMeterImsMediaConvertUHDUsageResponseBodyData& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The usage duration, in minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The transcoding specifications.
    std::shared_ptr<string> specification_ = nullptr;
    // The beginning time of usage. The value is a 10-digit timestamp.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
