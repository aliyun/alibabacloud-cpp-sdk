// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout.hpp>
#include <vector>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& obj) { 
      DARABONBA_PTR_TO_JSON(Background, background_);
      DARABONBA_PTR_TO_JSON(EncodeParams, encodeParams_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
      DARABONBA_PTR_TO_JSON(UserInfos, userInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Background, background_);
      DARABONBA_PTR_FROM_JSON(EncodeParams, encodeParams_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
      DARABONBA_PTR_FROM_JSON(UserInfos, userInfos_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->background_ == nullptr
        && return this->encodeParams_ == nullptr && return this->layout_ == nullptr && return this->userInfos_ == nullptr; };
    // background Field Functions 
    bool hasBackground() const { return this->background_ != nullptr;};
    void deleteBackground() { this->background_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground & background() const { DARABONBA_PTR_GET_CONST(background_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground background() { DARABONBA_PTR_GET(background_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setBackground(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground & background) { DARABONBA_PTR_SET_VALUE(background_, background) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setBackground(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground && background) { DARABONBA_PTR_SET_RVALUE(background_, background) };


    // encodeParams Field Functions 
    bool hasEncodeParams() const { return this->encodeParams_ != nullptr;};
    void deleteEncodeParams() { this->encodeParams_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams & encodeParams() const { DARABONBA_PTR_GET_CONST(encodeParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams encodeParams() { DARABONBA_PTR_GET(encodeParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setEncodeParams(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams & encodeParams) { DARABONBA_PTR_SET_VALUE(encodeParams_, encodeParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setEncodeParams(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams && encodeParams) { DARABONBA_PTR_SET_RVALUE(encodeParams_, encodeParams) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout & layout() const { DARABONBA_PTR_GET_CONST(layout_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout layout() { DARABONBA_PTR_GET(layout_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setLayout(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setLayout(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


    // userInfos Field Functions 
    bool hasUserInfos() const { return this->userInfos_ != nullptr;};
    void deleteUserInfos() { this->userInfos_ = nullptr;};
    inline const vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos> & userInfos() const { DARABONBA_PTR_GET_CONST(userInfos_, vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos>) };
    inline vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos> userInfos() { DARABONBA_PTR_GET(userInfos_, vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos>) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setUserInfos(const vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos> & userInfos) { DARABONBA_PTR_SET_VALUE(userInfos_, userInfos) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams& setUserInfos(vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos> && userInfos) { DARABONBA_PTR_SET_RVALUE(userInfos_, userInfos) };


  protected:
    // The global background image.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground> background_ = nullptr;
    // The encoding parameters of the output stream.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams> encodeParams_ = nullptr;
    // The video layout information.
    // 
    // >  The video layout information includes the x-coordinate, y-coordinate, width, height, and layer of the pane. For audio-only transcoding, no video layout information is returned.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout> layout_ = nullptr;
    // The information about the user whose stream is mixed. If an empty value is returned, streams from all users are mixed.
    std::shared_ptr<vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos>> userInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
