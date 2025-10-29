// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingRequestMixLayoutParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequestMixLayoutParams& obj) { 
      DARABONBA_PTR_TO_JSON(MixBackground, mixBackground_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequestMixLayoutParams& obj) { 
      DARABONBA_PTR_FROM_JSON(MixBackground, mixBackground_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    UpdateRtcCloudRecordingRequestMixLayoutParams() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParams(const UpdateRtcCloudRecordingRequestMixLayoutParams &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParams(UpdateRtcCloudRecordingRequestMixLayoutParams &&) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequestMixLayoutParams() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParams& operator=(const UpdateRtcCloudRecordingRequestMixLayoutParams &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParams& operator=(UpdateRtcCloudRecordingRequestMixLayoutParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mixBackground_ == nullptr
        && return this->userPanes_ == nullptr; };
    // mixBackground Field Functions 
    bool hasMixBackground() const { return this->mixBackground_ != nullptr;};
    void deleteMixBackground() { this->mixBackground_ = nullptr;};
    inline const Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground & mixBackground() const { DARABONBA_PTR_GET_CONST(mixBackground_, Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground) };
    inline Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground mixBackground() { DARABONBA_PTR_GET(mixBackground_, Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParams& setMixBackground(const Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground & mixBackground) { DARABONBA_PTR_SET_VALUE(mixBackground_, mixBackground) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParams& setMixBackground(Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground && mixBackground) { DARABONBA_PTR_SET_RVALUE(mixBackground_, mixBackground) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes>) };
    inline vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes>) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParams& setUserPanes(const vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParams& setUserPanes(vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    std::shared_ptr<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground> mixBackground_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes>> userPanes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
