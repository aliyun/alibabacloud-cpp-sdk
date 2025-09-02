// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATARECEIVERS_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATARECEIVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetRemindResponseBodyDataReceivers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemindResponseBodyDataReceivers& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemindResponseBodyDataReceivers& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
    };
    GetRemindResponseBodyDataReceivers() = default ;
    GetRemindResponseBodyDataReceivers(const GetRemindResponseBodyDataReceivers &) = default ;
    GetRemindResponseBodyDataReceivers(GetRemindResponseBodyDataReceivers &&) = default ;
    GetRemindResponseBodyDataReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemindResponseBodyDataReceivers() = default ;
    GetRemindResponseBodyDataReceivers& operator=(const GetRemindResponseBodyDataReceivers &) = default ;
    GetRemindResponseBodyDataReceivers& operator=(GetRemindResponseBodyDataReceivers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertTargets_ != nullptr
        && this->alertUnit_ != nullptr; };
    // alertTargets Field Functions 
    bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
    void deleteAlertTargets() { this->alertTargets_ = nullptr;};
    inline const vector<string> & alertTargets() const { DARABONBA_PTR_GET_CONST(alertTargets_, vector<string>) };
    inline vector<string> alertTargets() { DARABONBA_PTR_GET(alertTargets_, vector<string>) };
    inline GetRemindResponseBodyDataReceivers& setAlertTargets(const vector<string> & alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };
    inline GetRemindResponseBodyDataReceivers& setAlertTargets(vector<string> && alertTargets) { DARABONBA_PTR_SET_RVALUE(alertTargets_, alertTargets) };


    // alertUnit Field Functions 
    bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
    void deleteAlertUnit() { this->alertUnit_ = nullptr;};
    inline string alertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
    inline GetRemindResponseBodyDataReceivers& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


  protected:
    // The alert recipient.
    std::shared_ptr<vector<string>> alertTargets_ = nullptr;
    // The type of the alert recipient. For more information about alert recipients, see the Receivers parameter. Valid values:
    // 
    // *   OWNER: indicate the task owner.
    // *   OTHER: indicates specified personnel.
    // *   SHIFT_SCHEDULE: indicates personnel in a shift schedule.
    std::shared_ptr<string> alertUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
