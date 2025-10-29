// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestMixLayoutParamsMixBackground.hpp>
#include <vector>
#include <alibabacloud/models/StartRtcCloudRecordingRequestMixLayoutParamsUserPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestMixLayoutParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestMixLayoutParams& obj) { 
      DARABONBA_PTR_TO_JSON(MixBackground, mixBackground_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestMixLayoutParams& obj) { 
      DARABONBA_PTR_FROM_JSON(MixBackground, mixBackground_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    StartRtcCloudRecordingRequestMixLayoutParams() = default ;
    StartRtcCloudRecordingRequestMixLayoutParams(const StartRtcCloudRecordingRequestMixLayoutParams &) = default ;
    StartRtcCloudRecordingRequestMixLayoutParams(StartRtcCloudRecordingRequestMixLayoutParams &&) = default ;
    StartRtcCloudRecordingRequestMixLayoutParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestMixLayoutParams() = default ;
    StartRtcCloudRecordingRequestMixLayoutParams& operator=(const StartRtcCloudRecordingRequestMixLayoutParams &) = default ;
    StartRtcCloudRecordingRequestMixLayoutParams& operator=(StartRtcCloudRecordingRequestMixLayoutParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mixBackground_ == nullptr
        && return this->userPanes_ == nullptr; };
    // mixBackground Field Functions 
    bool hasMixBackground() const { return this->mixBackground_ != nullptr;};
    void deleteMixBackground() { this->mixBackground_ = nullptr;};
    inline const Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground & mixBackground() const { DARABONBA_PTR_GET_CONST(mixBackground_, Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground) };
    inline Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground mixBackground() { DARABONBA_PTR_GET(mixBackground_, Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground) };
    inline StartRtcCloudRecordingRequestMixLayoutParams& setMixBackground(const Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground & mixBackground) { DARABONBA_PTR_SET_VALUE(mixBackground_, mixBackground) };
    inline StartRtcCloudRecordingRequestMixLayoutParams& setMixBackground(Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground && mixBackground) { DARABONBA_PTR_SET_RVALUE(mixBackground_, mixBackground) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes>) };
    inline vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes>) };
    inline StartRtcCloudRecordingRequestMixLayoutParams& setUserPanes(const vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline StartRtcCloudRecordingRequestMixLayoutParams& setUserPanes(vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    std::shared_ptr<Models::StartRtcCloudRecordingRequestMixLayoutParamsMixBackground> mixBackground_ = nullptr;
    std::shared_ptr<vector<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanes>> userPanes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
