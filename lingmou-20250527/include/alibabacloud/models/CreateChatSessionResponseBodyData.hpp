// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateChatSessionResponseBodyDataAvatarAssets.hpp>
#include <alibabacloud/models/CreateChatSessionResponseBodyDataRtcParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(avatarAssets, avatarAssets_);
      DARABONBA_PTR_TO_JSON(rtcParams, rtcParams_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarAssets, avatarAssets_);
      DARABONBA_PTR_FROM_JSON(rtcParams, rtcParams_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    CreateChatSessionResponseBodyData() = default ;
    CreateChatSessionResponseBodyData(const CreateChatSessionResponseBodyData &) = default ;
    CreateChatSessionResponseBodyData(CreateChatSessionResponseBodyData &&) = default ;
    CreateChatSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionResponseBodyData() = default ;
    CreateChatSessionResponseBodyData& operator=(const CreateChatSessionResponseBodyData &) = default ;
    CreateChatSessionResponseBodyData& operator=(CreateChatSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarAssets_ == nullptr
        && return this->rtcParams_ == nullptr && return this->sessionId_ == nullptr; };
    // avatarAssets Field Functions 
    bool hasAvatarAssets() const { return this->avatarAssets_ != nullptr;};
    void deleteAvatarAssets() { this->avatarAssets_ = nullptr;};
    inline const Models::CreateChatSessionResponseBodyDataAvatarAssets & avatarAssets() const { DARABONBA_PTR_GET_CONST(avatarAssets_, Models::CreateChatSessionResponseBodyDataAvatarAssets) };
    inline Models::CreateChatSessionResponseBodyDataAvatarAssets avatarAssets() { DARABONBA_PTR_GET(avatarAssets_, Models::CreateChatSessionResponseBodyDataAvatarAssets) };
    inline CreateChatSessionResponseBodyData& setAvatarAssets(const Models::CreateChatSessionResponseBodyDataAvatarAssets & avatarAssets) { DARABONBA_PTR_SET_VALUE(avatarAssets_, avatarAssets) };
    inline CreateChatSessionResponseBodyData& setAvatarAssets(Models::CreateChatSessionResponseBodyDataAvatarAssets && avatarAssets) { DARABONBA_PTR_SET_RVALUE(avatarAssets_, avatarAssets) };


    // rtcParams Field Functions 
    bool hasRtcParams() const { return this->rtcParams_ != nullptr;};
    void deleteRtcParams() { this->rtcParams_ = nullptr;};
    inline const Models::CreateChatSessionResponseBodyDataRtcParams & rtcParams() const { DARABONBA_PTR_GET_CONST(rtcParams_, Models::CreateChatSessionResponseBodyDataRtcParams) };
    inline Models::CreateChatSessionResponseBodyDataRtcParams rtcParams() { DARABONBA_PTR_GET(rtcParams_, Models::CreateChatSessionResponseBodyDataRtcParams) };
    inline CreateChatSessionResponseBodyData& setRtcParams(const Models::CreateChatSessionResponseBodyDataRtcParams & rtcParams) { DARABONBA_PTR_SET_VALUE(rtcParams_, rtcParams) };
    inline CreateChatSessionResponseBodyData& setRtcParams(Models::CreateChatSessionResponseBodyDataRtcParams && rtcParams) { DARABONBA_PTR_SET_RVALUE(rtcParams_, rtcParams) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateChatSessionResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<Models::CreateChatSessionResponseBodyDataAvatarAssets> avatarAssets_ = nullptr;
    std::shared_ptr<Models::CreateChatSessionResponseBodyDataRtcParams> rtcParams_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
