// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMPSAIUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMPSAIUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMpsAiUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMpsAiUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMpsAiUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeMeterImsMpsAiUsageResponseBodyData() = default ;
    DescribeMeterImsMpsAiUsageResponseBodyData(const DescribeMeterImsMpsAiUsageResponseBodyData &) = default ;
    DescribeMeterImsMpsAiUsageResponseBodyData(DescribeMeterImsMpsAiUsageResponseBodyData &&) = default ;
    DescribeMeterImsMpsAiUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMpsAiUsageResponseBodyData() = default ;
    DescribeMeterImsMpsAiUsageResponseBodyData& operator=(const DescribeMeterImsMpsAiUsageResponseBodyData &) = default ;
    DescribeMeterImsMpsAiUsageResponseBodyData& operator=(DescribeMeterImsMpsAiUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->time_ == nullptr && return this->type_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeMeterImsMpsAiUsageResponseBodyData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeMeterImsMpsAiUsageResponseBodyData& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeMeterImsMpsAiUsageResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The usage duration, in minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The beginning time of usage. The value is a 10-digit timestamp.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The AI type. Valid values:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
