// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETORCREDENTIALSSIGNINPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETORCREDENTIALSSIGNINPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class TicketOrCredentialsSignInPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketOrCredentialsSignInPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConferenceName, conferenceName_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(EntryName, entryName_);
      DARABONBA_PTR_TO_JSON(Idcard, idcard_);
      DARABONBA_PTR_TO_JSON(SignTime, signTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TicketOrCredentialsSignInPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConferenceName, conferenceName_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(EntryName, entryName_);
      DARABONBA_PTR_FROM_JSON(Idcard, idcard_);
      DARABONBA_PTR_FROM_JSON(SignTime, signTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    TicketOrCredentialsSignInPopRequest() = default ;
    TicketOrCredentialsSignInPopRequest(const TicketOrCredentialsSignInPopRequest &) = default ;
    TicketOrCredentialsSignInPopRequest(TicketOrCredentialsSignInPopRequest &&) = default ;
    TicketOrCredentialsSignInPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketOrCredentialsSignInPopRequest() = default ;
    TicketOrCredentialsSignInPopRequest& operator=(const TicketOrCredentialsSignInPopRequest &) = default ;
    TicketOrCredentialsSignInPopRequest& operator=(TicketOrCredentialsSignInPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->code_ != nullptr && this->conferenceName_ != nullptr && this->deviceId_ != nullptr && this->entryName_ != nullptr && this->idcard_ != nullptr
        && this->signTime_ != nullptr && this->type_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline TicketOrCredentialsSignInPopRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TicketOrCredentialsSignInPopRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // conferenceName Field Functions 
    bool hasConferenceName() const { return this->conferenceName_ != nullptr;};
    void deleteConferenceName() { this->conferenceName_ = nullptr;};
    inline string conferenceName() const { DARABONBA_PTR_GET_DEFAULT(conferenceName_, "") };
    inline TicketOrCredentialsSignInPopRequest& setConferenceName(string conferenceName) { DARABONBA_PTR_SET_VALUE(conferenceName_, conferenceName) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline TicketOrCredentialsSignInPopRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // entryName Field Functions 
    bool hasEntryName() const { return this->entryName_ != nullptr;};
    void deleteEntryName() { this->entryName_ = nullptr;};
    inline string entryName() const { DARABONBA_PTR_GET_DEFAULT(entryName_, "") };
    inline TicketOrCredentialsSignInPopRequest& setEntryName(string entryName) { DARABONBA_PTR_SET_VALUE(entryName_, entryName) };


    // idcard Field Functions 
    bool hasIdcard() const { return this->idcard_ != nullptr;};
    void deleteIdcard() { this->idcard_ = nullptr;};
    inline string idcard() const { DARABONBA_PTR_GET_DEFAULT(idcard_, "") };
    inline TicketOrCredentialsSignInPopRequest& setIdcard(string idcard) { DARABONBA_PTR_SET_VALUE(idcard_, idcard) };


    // signTime Field Functions 
    bool hasSignTime() const { return this->signTime_ != nullptr;};
    void deleteSignTime() { this->signTime_ = nullptr;};
    inline string signTime() const { DARABONBA_PTR_GET_DEFAULT(signTime_, "") };
    inline TicketOrCredentialsSignInPopRequest& setSignTime(string signTime) { DARABONBA_PTR_SET_VALUE(signTime_, signTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline TicketOrCredentialsSignInPopRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entryName_ = nullptr;
    std::shared_ptr<string> idcard_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> signTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
