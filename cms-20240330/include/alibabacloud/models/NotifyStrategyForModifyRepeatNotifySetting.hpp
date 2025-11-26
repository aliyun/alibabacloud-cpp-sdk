// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYREPEATNOTIFYSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYREPEATNOTIFYSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForModifyRepeatNotifySetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForModifyRepeatNotifySetting& obj) { 
      DARABONBA_PTR_TO_JSON(endIncidentState, endIncidentState_);
      DARABONBA_PTR_TO_JSON(repeatInterval, repeatInterval_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModifyRepeatNotifySetting& obj) { 
      DARABONBA_PTR_FROM_JSON(endIncidentState, endIncidentState_);
      DARABONBA_PTR_FROM_JSON(repeatInterval, repeatInterval_);
    };
    NotifyStrategyForModifyRepeatNotifySetting() = default ;
    NotifyStrategyForModifyRepeatNotifySetting(const NotifyStrategyForModifyRepeatNotifySetting &) = default ;
    NotifyStrategyForModifyRepeatNotifySetting(NotifyStrategyForModifyRepeatNotifySetting &&) = default ;
    NotifyStrategyForModifyRepeatNotifySetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForModifyRepeatNotifySetting() = default ;
    NotifyStrategyForModifyRepeatNotifySetting& operator=(const NotifyStrategyForModifyRepeatNotifySetting &) = default ;
    NotifyStrategyForModifyRepeatNotifySetting& operator=(NotifyStrategyForModifyRepeatNotifySetting &&) = default ;
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
    inline NotifyStrategyForModifyRepeatNotifySetting& setEndIncidentState(string endIncidentState) { DARABONBA_PTR_SET_VALUE(endIncidentState_, endIncidentState) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int32_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
    inline NotifyStrategyForModifyRepeatNotifySetting& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


  protected:
    std::shared_ptr<string> endIncidentState_ = nullptr;
    std::shared_ptr<int32_t> repeatInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
