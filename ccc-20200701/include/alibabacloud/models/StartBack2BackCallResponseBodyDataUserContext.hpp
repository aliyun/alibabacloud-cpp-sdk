// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBACK2BACKCALLRESPONSEBODYDATAUSERCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_STARTBACK2BACKCALLRESPONSEBODYDATAUSERCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartBack2BackCallResponseBodyDataUserContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBack2BackCallResponseBodyDataUserContext& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceState, deviceState_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Heartbeat, heartbeat_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserState, userState_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, StartBack2BackCallResponseBodyDataUserContext& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceState, deviceState_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Heartbeat, heartbeat_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(SignedSkillGroupIdList, signedSkillGroupIdList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserState, userState_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    StartBack2BackCallResponseBodyDataUserContext() = default ;
    StartBack2BackCallResponseBodyDataUserContext(const StartBack2BackCallResponseBodyDataUserContext &) = default ;
    StartBack2BackCallResponseBodyDataUserContext(StartBack2BackCallResponseBodyDataUserContext &&) = default ;
    StartBack2BackCallResponseBodyDataUserContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBack2BackCallResponseBodyDataUserContext() = default ;
    StartBack2BackCallResponseBodyDataUserContext& operator=(const StartBack2BackCallResponseBodyDataUserContext &) = default ;
    StartBack2BackCallResponseBodyDataUserContext& operator=(StartBack2BackCallResponseBodyDataUserContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->breakCode_ == nullptr
        && return this->deviceId_ == nullptr && return this->deviceState_ == nullptr && return this->extension_ == nullptr && return this->heartbeat_ == nullptr && return this->instanceId_ == nullptr
        && return this->jobId_ == nullptr && return this->mobile_ == nullptr && return this->outboundScenario_ == nullptr && return this->reserved_ == nullptr && return this->signedSkillGroupIdList_ == nullptr
        && return this->userId_ == nullptr && return this->userState_ == nullptr && return this->workMode_ == nullptr; };
    // breakCode Field Functions 
    bool hasBreakCode() const { return this->breakCode_ != nullptr;};
    void deleteBreakCode() { this->breakCode_ = nullptr;};
    inline string breakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceState Field Functions 
    bool hasDeviceState() const { return this->deviceState_ != nullptr;};
    void deleteDeviceState() { this->deviceState_ = nullptr;};
    inline string deviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // heartbeat Field Functions 
    bool hasHeartbeat() const { return this->heartbeat_ != nullptr;};
    void deleteHeartbeat() { this->heartbeat_ = nullptr;};
    inline int64_t heartbeat() const { DARABONBA_PTR_GET_DEFAULT(heartbeat_, 0L) };
    inline StartBack2BackCallResponseBodyDataUserContext& setHeartbeat(int64_t heartbeat) { DARABONBA_PTR_SET_VALUE(heartbeat_, heartbeat) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool outboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline StartBack2BackCallResponseBodyDataUserContext& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline int64_t reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
    inline StartBack2BackCallResponseBodyDataUserContext& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // signedSkillGroupIdList Field Functions 
    bool hasSignedSkillGroupIdList() const { return this->signedSkillGroupIdList_ != nullptr;};
    void deleteSignedSkillGroupIdList() { this->signedSkillGroupIdList_ = nullptr;};
    inline const vector<string> & signedSkillGroupIdList() const { DARABONBA_PTR_GET_CONST(signedSkillGroupIdList_, vector<string>) };
    inline vector<string> signedSkillGroupIdList() { DARABONBA_PTR_GET(signedSkillGroupIdList_, vector<string>) };
    inline StartBack2BackCallResponseBodyDataUserContext& setSignedSkillGroupIdList(const vector<string> & signedSkillGroupIdList) { DARABONBA_PTR_SET_VALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };
    inline StartBack2BackCallResponseBodyDataUserContext& setSignedSkillGroupIdList(vector<string> && signedSkillGroupIdList) { DARABONBA_PTR_SET_RVALUE(signedSkillGroupIdList_, signedSkillGroupIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userState Field Functions 
    bool hasUserState() const { return this->userState_ != nullptr;};
    void deleteUserState() { this->userState_ = nullptr;};
    inline string userState() const { DARABONBA_PTR_GET_DEFAULT(userState_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setUserState(string userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline StartBack2BackCallResponseBodyDataUserContext& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> breakCode_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceState_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<int64_t> heartbeat_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<bool> outboundScenario_ = nullptr;
    std::shared_ptr<int64_t> reserved_ = nullptr;
    std::shared_ptr<vector<string>> signedSkillGroupIdList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userState_ = nullptr;
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
