// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTTIMERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTTIMERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestTimers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestTimers& obj) { 
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestTimers& obj) { 
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    ModifyBrowserInstanceGroupRequestTimers() = default ;
    ModifyBrowserInstanceGroupRequestTimers(const ModifyBrowserInstanceGroupRequestTimers &) = default ;
    ModifyBrowserInstanceGroupRequestTimers(ModifyBrowserInstanceGroupRequestTimers &&) = default ;
    ModifyBrowserInstanceGroupRequestTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestTimers() = default ;
    ModifyBrowserInstanceGroupRequestTimers& operator=(const ModifyBrowserInstanceGroupRequestTimers &) = default ;
    ModifyBrowserInstanceGroupRequestTimers& operator=(ModifyBrowserInstanceGroupRequestTimers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interval_ == nullptr
        && return this->timerType_ == nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ModifyBrowserInstanceGroupRequestTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline ModifyBrowserInstanceGroupRequestTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
