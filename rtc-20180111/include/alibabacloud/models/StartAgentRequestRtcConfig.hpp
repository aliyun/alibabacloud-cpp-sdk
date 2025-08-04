// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTRTCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTRTCCONFIG_HPP_
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
  class StartAgentRequestRtcConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestRtcConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TargetUserIds, targetUserIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserInactivityTimeout, userInactivityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestRtcConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetUserIds, targetUserIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserInactivityTimeout, userInactivityTimeout_);
    };
    StartAgentRequestRtcConfig() = default ;
    StartAgentRequestRtcConfig(const StartAgentRequestRtcConfig &) = default ;
    StartAgentRequestRtcConfig(StartAgentRequestRtcConfig &&) = default ;
    StartAgentRequestRtcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestRtcConfig() = default ;
    StartAgentRequestRtcConfig& operator=(const StartAgentRequestRtcConfig &) = default ;
    StartAgentRequestRtcConfig& operator=(StartAgentRequestRtcConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetUserIds_ != nullptr
        && this->userId_ != nullptr && this->userInactivityTimeout_ != nullptr; };
    // targetUserIds Field Functions 
    bool hasTargetUserIds() const { return this->targetUserIds_ != nullptr;};
    void deleteTargetUserIds() { this->targetUserIds_ = nullptr;};
    inline const vector<string> & targetUserIds() const { DARABONBA_PTR_GET_CONST(targetUserIds_, vector<string>) };
    inline vector<string> targetUserIds() { DARABONBA_PTR_GET(targetUserIds_, vector<string>) };
    inline StartAgentRequestRtcConfig& setTargetUserIds(const vector<string> & targetUserIds) { DARABONBA_PTR_SET_VALUE(targetUserIds_, targetUserIds) };
    inline StartAgentRequestRtcConfig& setTargetUserIds(vector<string> && targetUserIds) { DARABONBA_PTR_SET_RVALUE(targetUserIds_, targetUserIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartAgentRequestRtcConfig& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userInactivityTimeout Field Functions 
    bool hasUserInactivityTimeout() const { return this->userInactivityTimeout_ != nullptr;};
    void deleteUserInactivityTimeout() { this->userInactivityTimeout_ = nullptr;};
    inline int32_t userInactivityTimeout() const { DARABONBA_PTR_GET_DEFAULT(userInactivityTimeout_, 0) };
    inline StartAgentRequestRtcConfig& setUserInactivityTimeout(int32_t userInactivityTimeout) { DARABONBA_PTR_SET_VALUE(userInactivityTimeout_, userInactivityTimeout) };


  protected:
    std::shared_ptr<vector<string>> targetUserIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int32_t> userInactivityTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
