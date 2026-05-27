// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMSTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMSTIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateMmsTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmsTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(stopped, stopped_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmsTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(stopped, stopped_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    UpdateMmsTimerRequest() = default ;
    UpdateMmsTimerRequest(const UpdateMmsTimerRequest &) = default ;
    UpdateMmsTimerRequest(UpdateMmsTimerRequest &&) = default ;
    UpdateMmsTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmsTimerRequest() = default ;
    UpdateMmsTimerRequest& operator=(const UpdateMmsTimerRequest &) = default ;
    UpdateMmsTimerRequest& operator=(UpdateMmsTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scheduleType_ == nullptr
        && this->stopped_ == nullptr && this->value_ == nullptr; };
    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline UpdateMmsTimerRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // stopped Field Functions 
    bool hasStopped() const { return this->stopped_ != nullptr;};
    void deleteStopped() { this->stopped_ = nullptr;};
    inline bool getStopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
    inline UpdateMmsTimerRequest& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateMmsTimerRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> scheduleType_ {};
    shared_ptr<bool> stopped_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
