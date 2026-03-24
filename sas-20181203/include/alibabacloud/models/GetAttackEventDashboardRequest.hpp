// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKEVENTDASHBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKEVENTDASHBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackEventDashboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackEventDashboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackEventDashboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetAttackEventDashboardRequest() = default ;
    GetAttackEventDashboardRequest(const GetAttackEventDashboardRequest &) = default ;
    GetAttackEventDashboardRequest(GetAttackEventDashboardRequest &&) = default ;
    GetAttackEventDashboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackEventDashboardRequest() = default ;
    GetAttackEventDashboardRequest& operator=(const GetAttackEventDashboardRequest &) = default ;
    GetAttackEventDashboardRequest& operator=(GetAttackEventDashboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->lang_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetAttackEventDashboardRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAttackEventDashboardRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetAttackEventDashboardRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Timestamp of the end time.
    shared_ptr<int64_t> endTime_ {};
    // Language type for request and response messages. Default value is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Timestamp of the start time.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
