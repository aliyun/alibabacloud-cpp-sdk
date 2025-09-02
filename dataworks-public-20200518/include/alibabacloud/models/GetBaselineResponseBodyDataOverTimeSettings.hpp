// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATAOVERTIMESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATAOVERTIMESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineResponseBodyDataOverTimeSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineResponseBodyDataOverTimeSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineResponseBodyDataOverTimeSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    GetBaselineResponseBodyDataOverTimeSettings() = default ;
    GetBaselineResponseBodyDataOverTimeSettings(const GetBaselineResponseBodyDataOverTimeSettings &) = default ;
    GetBaselineResponseBodyDataOverTimeSettings(GetBaselineResponseBodyDataOverTimeSettings &&) = default ;
    GetBaselineResponseBodyDataOverTimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineResponseBodyDataOverTimeSettings() = default ;
    GetBaselineResponseBodyDataOverTimeSettings& operator=(const GetBaselineResponseBodyDataOverTimeSettings &) = default ;
    GetBaselineResponseBodyDataOverTimeSettings& operator=(GetBaselineResponseBodyDataOverTimeSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycle_ != nullptr
        && this->time_ != nullptr; };
    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline int32_t cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, 0) };
    inline GetBaselineResponseBodyDataOverTimeSettings& setCycle(int32_t cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetBaselineResponseBodyDataOverTimeSettings& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The period corresponding to the commitment time. The space-based line is 1, and the hourly baseline can be configured for up to 24 cycles.
    std::shared_ptr<int32_t> cycle_ = nullptr;
    // Commitment time, hh:mm format, hh value range is [0,47],mm value range is [0,59].
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
