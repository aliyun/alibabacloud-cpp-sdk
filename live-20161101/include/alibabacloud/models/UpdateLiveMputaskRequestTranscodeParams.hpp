// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTTRANSCODEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTTRANSCODEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestTranscodeParamsBackground.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestTranscodeParamsLayout.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestTranscodeParamsUserInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestTranscodeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestTranscodeParams& obj) { 
      DARABONBA_PTR_TO_JSON(Background, background_);
      DARABONBA_PTR_TO_JSON(EncodeParams, encodeParams_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
      DARABONBA_PTR_TO_JSON(UserInfos, userInfos_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestTranscodeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Background, background_);
      DARABONBA_PTR_FROM_JSON(EncodeParams, encodeParams_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
      DARABONBA_PTR_FROM_JSON(UserInfos, userInfos_);
    };
    UpdateLiveMPUTaskRequestTranscodeParams() = default ;
    UpdateLiveMPUTaskRequestTranscodeParams(const UpdateLiveMPUTaskRequestTranscodeParams &) = default ;
    UpdateLiveMPUTaskRequestTranscodeParams(UpdateLiveMPUTaskRequestTranscodeParams &&) = default ;
    UpdateLiveMPUTaskRequestTranscodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestTranscodeParams() = default ;
    UpdateLiveMPUTaskRequestTranscodeParams& operator=(const UpdateLiveMPUTaskRequestTranscodeParams &) = default ;
    UpdateLiveMPUTaskRequestTranscodeParams& operator=(UpdateLiveMPUTaskRequestTranscodeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->background_ != nullptr
        && this->encodeParams_ != nullptr && this->layout_ != nullptr && this->userInfos_ != nullptr; };
    // background Field Functions 
    bool hasBackground() const { return this->background_ != nullptr;};
    void deleteBackground() { this->background_ = nullptr;};
    inline const Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground & background() const { DARABONBA_PTR_GET_CONST(background_, Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground) };
    inline Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground background() { DARABONBA_PTR_GET(background_, Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setBackground(const Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground & background) { DARABONBA_PTR_SET_VALUE(background_, background) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setBackground(Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground && background) { DARABONBA_PTR_SET_RVALUE(background_, background) };


    // encodeParams Field Functions 
    bool hasEncodeParams() const { return this->encodeParams_ != nullptr;};
    void deleteEncodeParams() { this->encodeParams_ = nullptr;};
    inline const Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams & encodeParams() const { DARABONBA_PTR_GET_CONST(encodeParams_, Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams) };
    inline Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams encodeParams() { DARABONBA_PTR_GET(encodeParams_, Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setEncodeParams(const Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams & encodeParams) { DARABONBA_PTR_SET_VALUE(encodeParams_, encodeParams) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setEncodeParams(Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams && encodeParams) { DARABONBA_PTR_SET_RVALUE(encodeParams_, encodeParams) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout & layout() const { DARABONBA_PTR_GET_CONST(layout_, Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout) };
    inline Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout layout() { DARABONBA_PTR_GET(layout_, Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setLayout(const Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setLayout(Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


    // userInfos Field Functions 
    bool hasUserInfos() const { return this->userInfos_ != nullptr;};
    void deleteUserInfos() { this->userInfos_ = nullptr;};
    inline const vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos> & userInfos() const { DARABONBA_PTR_GET_CONST(userInfos_, vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos>) };
    inline vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos> userInfos() { DARABONBA_PTR_GET(userInfos_, vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos>) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setUserInfos(const vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos> & userInfos) { DARABONBA_PTR_SET_VALUE(userInfos_, userInfos) };
    inline UpdateLiveMPUTaskRequestTranscodeParams& setUserInfos(vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos> && userInfos) { DARABONBA_PTR_SET_RVALUE(userInfos_, userInfos) };


  protected:
    // The global background image.
    std::shared_ptr<Models::UpdateLiveMPUTaskRequestTranscodeParamsBackground> background_ = nullptr;
    // The encoding parameters for the output stream.
    std::shared_ptr<Models::UpdateLiveMPUTaskRequestTranscodeParamsEncodeParams> encodeParams_ = nullptr;
    // The video layout information.
    // 
    // >  If video transcoding is required, you must specify the video layout information, including the x-coordinate and y-coordinate, the width and height, and the layer. For audio-only transcoding, leave the video layout information empty.
    std::shared_ptr<Models::UpdateLiveMPUTaskRequestTranscodeParamsLayout> layout_ = nullptr;
    // The information about the users whose streams are subscribed to. If you leave this parameter empty, streams from all users are mixed.
    std::shared_ptr<vector<Models::UpdateLiveMPUTaskRequestTranscodeParamsUserInfos>> userInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
