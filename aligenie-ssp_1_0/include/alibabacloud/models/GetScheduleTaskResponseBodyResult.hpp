// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULETASKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULETASKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScheduleTaskResponseBodyResultActionTopicList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetScheduleTaskResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleTaskResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ActionTopicList, actionTopicList_);
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(ScheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_TO_JSON(ScheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleTaskResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionTopicList, actionTopicList_);
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(ScheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_FROM_JSON(ScheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
    };
    GetScheduleTaskResponseBodyResult() = default ;
    GetScheduleTaskResponseBodyResult(const GetScheduleTaskResponseBodyResult &) = default ;
    GetScheduleTaskResponseBodyResult(GetScheduleTaskResponseBodyResult &&) = default ;
    GetScheduleTaskResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleTaskResponseBodyResult() = default ;
    GetScheduleTaskResponseBodyResult& operator=(const GetScheduleTaskResponseBodyResult &) = default ;
    GetScheduleTaskResponseBodyResult& operator=(GetScheduleTaskResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionTopicList_ != nullptr
        && this->cron_ != nullptr && this->scheduleEndTime_ != nullptr && this->scheduleId_ != nullptr && this->scheduleStartTime_ != nullptr && this->scheduleType_ != nullptr; };
    // actionTopicList Field Functions 
    bool hasActionTopicList() const { return this->actionTopicList_ != nullptr;};
    void deleteActionTopicList() { this->actionTopicList_ = nullptr;};
    inline const vector<Models::GetScheduleTaskResponseBodyResultActionTopicList> & actionTopicList() const { DARABONBA_PTR_GET_CONST(actionTopicList_, vector<Models::GetScheduleTaskResponseBodyResultActionTopicList>) };
    inline vector<Models::GetScheduleTaskResponseBodyResultActionTopicList> actionTopicList() { DARABONBA_PTR_GET(actionTopicList_, vector<Models::GetScheduleTaskResponseBodyResultActionTopicList>) };
    inline GetScheduleTaskResponseBodyResult& setActionTopicList(const vector<Models::GetScheduleTaskResponseBodyResultActionTopicList> & actionTopicList) { DARABONBA_PTR_SET_VALUE(actionTopicList_, actionTopicList) };
    inline GetScheduleTaskResponseBodyResult& setActionTopicList(vector<Models::GetScheduleTaskResponseBodyResultActionTopicList> && actionTopicList) { DARABONBA_PTR_SET_RVALUE(actionTopicList_, actionTopicList) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline GetScheduleTaskResponseBodyResult& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // scheduleEndTime Field Functions 
    bool hasScheduleEndTime() const { return this->scheduleEndTime_ != nullptr;};
    void deleteScheduleEndTime() { this->scheduleEndTime_ = nullptr;};
    inline string scheduleEndTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleEndTime_, "") };
    inline GetScheduleTaskResponseBodyResult& setScheduleEndTime(string scheduleEndTime) { DARABONBA_PTR_SET_VALUE(scheduleEndTime_, scheduleEndTime) };


    // scheduleId Field Functions 
    bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
    void deleteScheduleId() { this->scheduleId_ = nullptr;};
    inline int64_t scheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
    inline GetScheduleTaskResponseBodyResult& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


    // scheduleStartTime Field Functions 
    bool hasScheduleStartTime() const { return this->scheduleStartTime_ != nullptr;};
    void deleteScheduleStartTime() { this->scheduleStartTime_ = nullptr;};
    inline string scheduleStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleStartTime_, "") };
    inline GetScheduleTaskResponseBodyResult& setScheduleStartTime(string scheduleStartTime) { DARABONBA_PTR_SET_VALUE(scheduleStartTime_, scheduleStartTime) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline GetScheduleTaskResponseBodyResult& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


  protected:
    std::shared_ptr<vector<Models::GetScheduleTaskResponseBodyResultActionTopicList>> actionTopicList_ = nullptr;
    std::shared_ptr<string> cron_ = nullptr;
    std::shared_ptr<string> scheduleEndTime_ = nullptr;
    std::shared_ptr<int64_t> scheduleId_ = nullptr;
    std::shared_ptr<string> scheduleStartTime_ = nullptr;
    std::shared_ptr<string> scheduleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
