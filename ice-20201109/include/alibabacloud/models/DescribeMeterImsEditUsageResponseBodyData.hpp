// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSEDITUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSEDITUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsEditUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsEditUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsEditUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeMeterImsEditUsageResponseBodyData() = default ;
    DescribeMeterImsEditUsageResponseBodyData(const DescribeMeterImsEditUsageResponseBodyData &) = default ;
    DescribeMeterImsEditUsageResponseBodyData(DescribeMeterImsEditUsageResponseBodyData &&) = default ;
    DescribeMeterImsEditUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsEditUsageResponseBodyData() = default ;
    DescribeMeterImsEditUsageResponseBodyData& operator=(const DescribeMeterImsEditUsageResponseBodyData &) = default ;
    DescribeMeterImsEditUsageResponseBodyData& operator=(DescribeMeterImsEditUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->profile_ != nullptr && this->time_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeMeterImsEditUsageResponseBodyData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeMeterImsEditUsageResponseBodyData& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeMeterImsEditUsageResponseBodyData& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The usage duration, in minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The video profile.
    std::shared_ptr<string> profile_ = nullptr;
    // The beginning time of usage. The value is a 10-digit timestamp.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
