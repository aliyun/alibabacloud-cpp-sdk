// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALARMSREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_DELETEALARMSREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeleteAlarmsRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlarmsRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmIds, alarmIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlarmsRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmIds, alarmIds_);
    };
    DeleteAlarmsRequestPayload() = default ;
    DeleteAlarmsRequestPayload(const DeleteAlarmsRequestPayload &) = default ;
    DeleteAlarmsRequestPayload(DeleteAlarmsRequestPayload &&) = default ;
    DeleteAlarmsRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlarmsRequestPayload() = default ;
    DeleteAlarmsRequestPayload& operator=(const DeleteAlarmsRequestPayload &) = default ;
    DeleteAlarmsRequestPayload& operator=(DeleteAlarmsRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmIds_ != nullptr; };
    // alarmIds Field Functions 
    bool hasAlarmIds() const { return this->alarmIds_ != nullptr;};
    void deleteAlarmIds() { this->alarmIds_ = nullptr;};
    inline const vector<int64_t> & alarmIds() const { DARABONBA_PTR_GET_CONST(alarmIds_, vector<int64_t>) };
    inline vector<int64_t> alarmIds() { DARABONBA_PTR_GET(alarmIds_, vector<int64_t>) };
    inline DeleteAlarmsRequestPayload& setAlarmIds(const vector<int64_t> & alarmIds) { DARABONBA_PTR_SET_VALUE(alarmIds_, alarmIds) };
    inline DeleteAlarmsRequestPayload& setAlarmIds(vector<int64_t> && alarmIds) { DARABONBA_PTR_SET_RVALUE(alarmIds_, alarmIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> alarmIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
