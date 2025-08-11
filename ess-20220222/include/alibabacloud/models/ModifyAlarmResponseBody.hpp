// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmTaskId, alarmTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmTaskId, alarmTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyAlarmResponseBody() = default ;
    ModifyAlarmResponseBody(const ModifyAlarmResponseBody &) = default ;
    ModifyAlarmResponseBody(ModifyAlarmResponseBody &&) = default ;
    ModifyAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAlarmResponseBody() = default ;
    ModifyAlarmResponseBody& operator=(const ModifyAlarmResponseBody &) = default ;
    ModifyAlarmResponseBody& operator=(ModifyAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmTaskId_ != nullptr
        && this->requestId_ != nullptr; };
    // alarmTaskId Field Functions 
    bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
    void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
    inline string alarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
    inline ModifyAlarmResponseBody& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the event-triggered task.
    std::shared_ptr<string> alarmTaskId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
