// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATAALARMLISTNOTIFYRULE_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATAALARMLISTNOTIFYRULE_HPP_
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
  class GetDISyncTaskResponseBodyDataAlarmListNotifyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncTaskResponseBodyDataAlarmListNotifyRule& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Warning, warning_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncTaskResponseBodyDataAlarmListNotifyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Warning, warning_);
    };
    GetDISyncTaskResponseBodyDataAlarmListNotifyRule() = default ;
    GetDISyncTaskResponseBodyDataAlarmListNotifyRule(const GetDISyncTaskResponseBodyDataAlarmListNotifyRule &) = default ;
    GetDISyncTaskResponseBodyDataAlarmListNotifyRule(GetDISyncTaskResponseBodyDataAlarmListNotifyRule &&) = default ;
    GetDISyncTaskResponseBodyDataAlarmListNotifyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncTaskResponseBodyDataAlarmListNotifyRule() = default ;
    GetDISyncTaskResponseBodyDataAlarmListNotifyRule& operator=(const GetDISyncTaskResponseBodyDataAlarmListNotifyRule &) = default ;
    GetDISyncTaskResponseBodyDataAlarmListNotifyRule& operator=(GetDISyncTaskResponseBodyDataAlarmListNotifyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->interval_ != nullptr && this->warning_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const vector<string> & critical() const { DARABONBA_PTR_GET_CONST(critical_, vector<string>) };
    inline vector<string> critical() { DARABONBA_PTR_GET(critical_, vector<string>) };
    inline GetDISyncTaskResponseBodyDataAlarmListNotifyRule& setCritical(const vector<string> & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline GetDISyncTaskResponseBodyDataAlarmListNotifyRule& setCritical(vector<string> && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline GetDISyncTaskResponseBodyDataAlarmListNotifyRule& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // warning Field Functions 
    bool hasWarning() const { return this->warning_ != nullptr;};
    void deleteWarning() { this->warning_ = nullptr;};
    inline const vector<string> & warning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
    inline vector<string> warning() { DARABONBA_PTR_GET(warning_, vector<string>) };
    inline GetDISyncTaskResponseBodyDataAlarmListNotifyRule& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
    inline GetDISyncTaskResponseBodyDataAlarmListNotifyRule& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


  protected:
    // The settings for Critical-level alert notifications.
    std::shared_ptr<vector<string>> critical_ = nullptr;
    // The alert interval. Unit: minutes.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The settings for Warning-level alert notifications.
    std::shared_ptr<vector<string>> warning_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
