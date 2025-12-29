// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPEATNOTIFYSETTING_HPP_
#define ALIBABACLOUD_MODELS_REPEATNOTIFYSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class RepeatNotifySetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepeatNotifySetting& obj) { 
      DARABONBA_PTR_TO_JSON(endIncidentState, endIncidentState_);
      DARABONBA_PTR_TO_JSON(repeatInterval, repeatInterval_);
    };
    friend void from_json(const Darabonba::Json& j, RepeatNotifySetting& obj) { 
      DARABONBA_PTR_FROM_JSON(endIncidentState, endIncidentState_);
      DARABONBA_PTR_FROM_JSON(repeatInterval, repeatInterval_);
    };
    RepeatNotifySetting() = default ;
    RepeatNotifySetting(const RepeatNotifySetting &) = default ;
    RepeatNotifySetting(RepeatNotifySetting &&) = default ;
    RepeatNotifySetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepeatNotifySetting() = default ;
    RepeatNotifySetting& operator=(const RepeatNotifySetting &) = default ;
    RepeatNotifySetting& operator=(RepeatNotifySetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endIncidentState_ == nullptr
        && this->repeatInterval_ == nullptr; };
    // endIncidentState Field Functions 
    bool hasEndIncidentState() const { return this->endIncidentState_ != nullptr;};
    void deleteEndIncidentState() { this->endIncidentState_ = nullptr;};
    inline string getEndIncidentState() const { DARABONBA_PTR_GET_DEFAULT(endIncidentState_, "") };
    inline RepeatNotifySetting& setEndIncidentState(string endIncidentState) { DARABONBA_PTR_SET_VALUE(endIncidentState_, endIncidentState) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline string getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, "") };
    inline RepeatNotifySetting& setRepeatInterval(string repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


  protected:
    shared_ptr<string> endIncidentState_ {};
    shared_ptr<string> repeatInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
