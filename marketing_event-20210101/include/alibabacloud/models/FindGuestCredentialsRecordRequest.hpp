// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDGUESTCREDENTIALSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDGUESTCREDENTIALSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class FindGuestCredentialsRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindGuestCredentialsRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(DateTimeString, dateTimeString_);
      DARABONBA_PTR_TO_JSON(EndDateTime, endDateTime_);
      DARABONBA_PTR_TO_JSON(StartDateTime, startDateTime_);
    };
    friend void from_json(const Darabonba::Json& j, FindGuestCredentialsRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(DateTimeString, dateTimeString_);
      DARABONBA_PTR_FROM_JSON(EndDateTime, endDateTime_);
      DARABONBA_PTR_FROM_JSON(StartDateTime, startDateTime_);
    };
    FindGuestCredentialsRecordRequest() = default ;
    FindGuestCredentialsRecordRequest(const FindGuestCredentialsRecordRequest &) = default ;
    FindGuestCredentialsRecordRequest(FindGuestCredentialsRecordRequest &&) = default ;
    FindGuestCredentialsRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindGuestCredentialsRecordRequest() = default ;
    FindGuestCredentialsRecordRequest& operator=(const FindGuestCredentialsRecordRequest &) = default ;
    FindGuestCredentialsRecordRequest& operator=(FindGuestCredentialsRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->dateTimeString_ != nullptr && this->endDateTime_ != nullptr && this->startDateTime_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline FindGuestCredentialsRecordRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // dateTimeString Field Functions 
    bool hasDateTimeString() const { return this->dateTimeString_ != nullptr;};
    void deleteDateTimeString() { this->dateTimeString_ = nullptr;};
    inline string dateTimeString() const { DARABONBA_PTR_GET_DEFAULT(dateTimeString_, "") };
    inline FindGuestCredentialsRecordRequest& setDateTimeString(string dateTimeString) { DARABONBA_PTR_SET_VALUE(dateTimeString_, dateTimeString) };


    // endDateTime Field Functions 
    bool hasEndDateTime() const { return this->endDateTime_ != nullptr;};
    void deleteEndDateTime() { this->endDateTime_ = nullptr;};
    inline string endDateTime() const { DARABONBA_PTR_GET_DEFAULT(endDateTime_, "") };
    inline FindGuestCredentialsRecordRequest& setEndDateTime(string endDateTime) { DARABONBA_PTR_SET_VALUE(endDateTime_, endDateTime) };


    // startDateTime Field Functions 
    bool hasStartDateTime() const { return this->startDateTime_ != nullptr;};
    void deleteStartDateTime() { this->startDateTime_ = nullptr;};
    inline string startDateTime() const { DARABONBA_PTR_GET_DEFAULT(startDateTime_, "") };
    inline FindGuestCredentialsRecordRequest& setStartDateTime(string startDateTime) { DARABONBA_PTR_SET_VALUE(startDateTime_, startDateTime) };


  protected:
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> dateTimeString_ = nullptr;
    std::shared_ptr<string> endDateTime_ = nullptr;
    std::shared_ptr<string> startDateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
