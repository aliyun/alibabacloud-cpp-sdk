// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEWREPEATNOTIFYSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEWREPEATNOTIFYSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForViewRepeatNotifySetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForViewRepeatNotifySetting& obj) { 
      DARABONBA_PTR_TO_JSON(endIncidentState, endIncidentState_);
      DARABONBA_PTR_TO_JSON(repeatInterval, repeatInterval_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForViewRepeatNotifySetting& obj) { 
      DARABONBA_PTR_FROM_JSON(endIncidentState, endIncidentState_);
      DARABONBA_PTR_FROM_JSON(repeatInterval, repeatInterval_);
    };
    NotifyStrategyForViewRepeatNotifySetting() = default ;
    NotifyStrategyForViewRepeatNotifySetting(const NotifyStrategyForViewRepeatNotifySetting &) = default ;
    NotifyStrategyForViewRepeatNotifySetting(NotifyStrategyForViewRepeatNotifySetting &&) = default ;
    NotifyStrategyForViewRepeatNotifySetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForViewRepeatNotifySetting() = default ;
    NotifyStrategyForViewRepeatNotifySetting& operator=(const NotifyStrategyForViewRepeatNotifySetting &) = default ;
    NotifyStrategyForViewRepeatNotifySetting& operator=(NotifyStrategyForViewRepeatNotifySetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endIncidentState_ == nullptr
        && return this->repeatInterval_ == nullptr; };
    // endIncidentState Field Functions 
    bool hasEndIncidentState() const { return this->endIncidentState_ != nullptr;};
    void deleteEndIncidentState() { this->endIncidentState_ = nullptr;};
    inline string endIncidentState() const { DARABONBA_PTR_GET_DEFAULT(endIncidentState_, "") };
    inline NotifyStrategyForViewRepeatNotifySetting& setEndIncidentState(string endIncidentState) { DARABONBA_PTR_SET_VALUE(endIncidentState_, endIncidentState) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int32_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
    inline NotifyStrategyForViewRepeatNotifySetting& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


  protected:
    std::shared_ptr<string> endIncidentState_ = nullptr;
    std::shared_ptr<int32_t> repeatInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
