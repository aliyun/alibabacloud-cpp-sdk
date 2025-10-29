// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParamsBackground.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParamsEncodeParams.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParamsLayout.hpp>
#include <vector>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParamsUserInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequestTranscodeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequestTranscodeParams& obj) { 
      DARABONBA_PTR_TO_JSON(Background, background_);
      DARABONBA_PTR_TO_JSON(EncodeParams, encodeParams_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
      DARABONBA_PTR_TO_JSON(UserInfos, userInfos_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequestTranscodeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Background, background_);
      DARABONBA_PTR_FROM_JSON(EncodeParams, encodeParams_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
      DARABONBA_PTR_FROM_JSON(UserInfos, userInfos_);
    };
    StartLiveMPUTaskRequestTranscodeParams() = default ;
    StartLiveMPUTaskRequestTranscodeParams(const StartLiveMPUTaskRequestTranscodeParams &) = default ;
    StartLiveMPUTaskRequestTranscodeParams(StartLiveMPUTaskRequestTranscodeParams &&) = default ;
    StartLiveMPUTaskRequestTranscodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequestTranscodeParams() = default ;
    StartLiveMPUTaskRequestTranscodeParams& operator=(const StartLiveMPUTaskRequestTranscodeParams &) = default ;
    StartLiveMPUTaskRequestTranscodeParams& operator=(StartLiveMPUTaskRequestTranscodeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->background_ == nullptr
        && return this->encodeParams_ == nullptr && return this->layout_ == nullptr && return this->userInfos_ == nullptr; };
    // background Field Functions 
    bool hasBackground() const { return this->background_ != nullptr;};
    void deleteBackground() { this->background_ = nullptr;};
    inline const Models::StartLiveMPUTaskRequestTranscodeParamsBackground & background() const { DARABONBA_PTR_GET_CONST(background_, Models::StartLiveMPUTaskRequestTranscodeParamsBackground) };
    inline Models::StartLiveMPUTaskRequestTranscodeParamsBackground background() { DARABONBA_PTR_GET(background_, Models::StartLiveMPUTaskRequestTranscodeParamsBackground) };
    inline StartLiveMPUTaskRequestTranscodeParams& setBackground(const Models::StartLiveMPUTaskRequestTranscodeParamsBackground & background) { DARABONBA_PTR_SET_VALUE(background_, background) };
    inline StartLiveMPUTaskRequestTranscodeParams& setBackground(Models::StartLiveMPUTaskRequestTranscodeParamsBackground && background) { DARABONBA_PTR_SET_RVALUE(background_, background) };


    // encodeParams Field Functions 
    bool hasEncodeParams() const { return this->encodeParams_ != nullptr;};
    void deleteEncodeParams() { this->encodeParams_ = nullptr;};
    inline const Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams & encodeParams() const { DARABONBA_PTR_GET_CONST(encodeParams_, Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams) };
    inline Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams encodeParams() { DARABONBA_PTR_GET(encodeParams_, Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams) };
    inline StartLiveMPUTaskRequestTranscodeParams& setEncodeParams(const Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams & encodeParams) { DARABONBA_PTR_SET_VALUE(encodeParams_, encodeParams) };
    inline StartLiveMPUTaskRequestTranscodeParams& setEncodeParams(Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams && encodeParams) { DARABONBA_PTR_SET_RVALUE(encodeParams_, encodeParams) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const Models::StartLiveMPUTaskRequestTranscodeParamsLayout & layout() const { DARABONBA_PTR_GET_CONST(layout_, Models::StartLiveMPUTaskRequestTranscodeParamsLayout) };
    inline Models::StartLiveMPUTaskRequestTranscodeParamsLayout layout() { DARABONBA_PTR_GET(layout_, Models::StartLiveMPUTaskRequestTranscodeParamsLayout) };
    inline StartLiveMPUTaskRequestTranscodeParams& setLayout(const Models::StartLiveMPUTaskRequestTranscodeParamsLayout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline StartLiveMPUTaskRequestTranscodeParams& setLayout(Models::StartLiveMPUTaskRequestTranscodeParamsLayout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


    // userInfos Field Functions 
    bool hasUserInfos() const { return this->userInfos_ != nullptr;};
    void deleteUserInfos() { this->userInfos_ = nullptr;};
    inline const vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos> & userInfos() const { DARABONBA_PTR_GET_CONST(userInfos_, vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos>) };
    inline vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos> userInfos() { DARABONBA_PTR_GET(userInfos_, vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos>) };
    inline StartLiveMPUTaskRequestTranscodeParams& setUserInfos(const vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos> & userInfos) { DARABONBA_PTR_SET_VALUE(userInfos_, userInfos) };
    inline StartLiveMPUTaskRequestTranscodeParams& setUserInfos(vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos> && userInfos) { DARABONBA_PTR_SET_RVALUE(userInfos_, userInfos) };


  protected:
    // The global background image.
    std::shared_ptr<Models::StartLiveMPUTaskRequestTranscodeParamsBackground> background_ = nullptr;
    // The encoding parameters for the output stream.
    std::shared_ptr<Models::StartLiveMPUTaskRequestTranscodeParamsEncodeParams> encodeParams_ = nullptr;
    // The video layout information.
    // 
    // >  If video transcoding is required, you must specify the video layout information, including the x-coordinate and y-coordinate, the width and height, and the layer. For audio-only transcoding, leave the video layout information empty.
    std::shared_ptr<Models::StartLiveMPUTaskRequestTranscodeParamsLayout> layout_ = nullptr;
    // The information about the users whose streams are subscribed to. If you leave this parameter empty, streams from all users are mixed.
    std::shared_ptr<vector<Models::StartLiveMPUTaskRequestTranscodeParamsUserInfos>> userInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
