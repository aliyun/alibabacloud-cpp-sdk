// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBodyDataPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBodyDataPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(videoSplitResult, videoSplitResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBodyDataPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(videoSplitResult, videoSplitResult_);
    };
    GetVideoDetectShotTaskResponseBodyDataPayloadOutput() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutput(const GetVideoDetectShotTaskResponseBodyDataPayloadOutput &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutput(GetVideoDetectShotTaskResponseBodyDataPayloadOutput &&) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBodyDataPayloadOutput() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutput& operator=(const GetVideoDetectShotTaskResponseBodyDataPayloadOutput &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutput& operator=(GetVideoDetectShotTaskResponseBodyDataPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoSplitResult_ == nullptr; };
    // videoSplitResult Field Functions 
    bool hasVideoSplitResult() const { return this->videoSplitResult_ != nullptr;};
    void deleteVideoSplitResult() { this->videoSplitResult_ = nullptr;};
    inline const Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult & videoSplitResult() const { DARABONBA_PTR_GET_CONST(videoSplitResult_, Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult) };
    inline Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult videoSplitResult() { DARABONBA_PTR_GET(videoSplitResult_, Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutput& setVideoSplitResult(const Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult & videoSplitResult) { DARABONBA_PTR_SET_VALUE(videoSplitResult_, videoSplitResult) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutput& setVideoSplitResult(Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult && videoSplitResult) { DARABONBA_PTR_SET_RVALUE(videoSplitResult_, videoSplitResult) };


  protected:
    std::shared_ptr<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult> videoSplitResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
