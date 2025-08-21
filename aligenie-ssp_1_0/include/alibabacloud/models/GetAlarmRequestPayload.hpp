// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETALARMREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlarmRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
    };
    GetAlarmRequestPayload() = default ;
    GetAlarmRequestPayload(const GetAlarmRequestPayload &) = default ;
    GetAlarmRequestPayload(GetAlarmRequestPayload &&) = default ;
    GetAlarmRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmRequestPayload() = default ;
    GetAlarmRequestPayload& operator=(const GetAlarmRequestPayload &) = default ;
    GetAlarmRequestPayload& operator=(GetAlarmRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmId_ != nullptr; };
    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline GetAlarmRequestPayload& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> alarmId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
