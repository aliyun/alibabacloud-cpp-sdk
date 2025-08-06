// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULERESPONSEBODYSCHEDULEINFORMATION_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULERESPONSEBODYSCHEDULEINFORMATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScheduleResponseBodyScheduleInformationScheduleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScheduleResponseBodyScheduleInformation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleResponseBodyScheduleInformation& obj) { 
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(ScheduleItems, scheduleItems_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleResponseBodyScheduleInformation& obj) { 
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(ScheduleItems, scheduleItems_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetScheduleResponseBodyScheduleInformation() = default ;
    GetScheduleResponseBodyScheduleInformation(const GetScheduleResponseBodyScheduleInformation &) = default ;
    GetScheduleResponseBodyScheduleInformation(GetScheduleResponseBodyScheduleInformation &&) = default ;
    GetScheduleResponseBodyScheduleInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleResponseBodyScheduleInformation() = default ;
    GetScheduleResponseBodyScheduleInformation& operator=(const GetScheduleResponseBodyScheduleInformation &) = default ;
    GetScheduleResponseBodyScheduleInformation& operator=(GetScheduleResponseBodyScheduleInformation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->error_ != nullptr
        && this->scheduleItems_ != nullptr && this->userId_ != nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetScheduleResponseBodyScheduleInformation& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // scheduleItems Field Functions 
    bool hasScheduleItems() const { return this->scheduleItems_ != nullptr;};
    void deleteScheduleItems() { this->scheduleItems_ = nullptr;};
    inline const vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems> & scheduleItems() const { DARABONBA_PTR_GET_CONST(scheduleItems_, vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems>) };
    inline vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems> scheduleItems() { DARABONBA_PTR_GET(scheduleItems_, vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems>) };
    inline GetScheduleResponseBodyScheduleInformation& setScheduleItems(const vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems> & scheduleItems) { DARABONBA_PTR_SET_VALUE(scheduleItems_, scheduleItems) };
    inline GetScheduleResponseBodyScheduleInformation& setScheduleItems(vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems> && scheduleItems) { DARABONBA_PTR_SET_RVALUE(scheduleItems_, scheduleItems) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetScheduleResponseBodyScheduleInformation& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<vector<Models::GetScheduleResponseBodyScheduleInformationScheduleItems>> scheduleItems_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
