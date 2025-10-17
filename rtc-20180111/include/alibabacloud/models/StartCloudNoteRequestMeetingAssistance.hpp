// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTMEETINGASSISTANCE_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTMEETINGASSISTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestMeetingAssistance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestMeetingAssistance& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MeetingAssistanceType, meetingAssistanceType_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestMeetingAssistance& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MeetingAssistanceType, meetingAssistanceType_);
    };
    StartCloudNoteRequestMeetingAssistance() = default ;
    StartCloudNoteRequestMeetingAssistance(const StartCloudNoteRequestMeetingAssistance &) = default ;
    StartCloudNoteRequestMeetingAssistance(StartCloudNoteRequestMeetingAssistance &&) = default ;
    StartCloudNoteRequestMeetingAssistance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestMeetingAssistance() = default ;
    StartCloudNoteRequestMeetingAssistance& operator=(const StartCloudNoteRequestMeetingAssistance &) = default ;
    StartCloudNoteRequestMeetingAssistance& operator=(StartCloudNoteRequestMeetingAssistance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->meetingAssistanceType_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestMeetingAssistance& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // meetingAssistanceType Field Functions 
    bool hasMeetingAssistanceType() const { return this->meetingAssistanceType_ != nullptr;};
    void deleteMeetingAssistanceType() { this->meetingAssistanceType_ = nullptr;};
    inline const vector<string> & meetingAssistanceType() const { DARABONBA_PTR_GET_CONST(meetingAssistanceType_, vector<string>) };
    inline vector<string> meetingAssistanceType() { DARABONBA_PTR_GET(meetingAssistanceType_, vector<string>) };
    inline StartCloudNoteRequestMeetingAssistance& setMeetingAssistanceType(const vector<string> & meetingAssistanceType) { DARABONBA_PTR_SET_VALUE(meetingAssistanceType_, meetingAssistanceType) };
    inline StartCloudNoteRequestMeetingAssistance& setMeetingAssistanceType(vector<string> && meetingAssistanceType) { DARABONBA_PTR_SET_RVALUE(meetingAssistanceType_, meetingAssistanceType) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> meetingAssistanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
