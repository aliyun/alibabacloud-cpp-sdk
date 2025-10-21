// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEODETECTSHOTRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEODETECTSHOTRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoDetectShotResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoDetectShotResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(videoSplitResult, videoSplitResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoDetectShotResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(videoSplitResult, videoSplitResult_);
    };
    RunVideoDetectShotResponseBodyPayloadOutput() = default ;
    RunVideoDetectShotResponseBodyPayloadOutput(const RunVideoDetectShotResponseBodyPayloadOutput &) = default ;
    RunVideoDetectShotResponseBodyPayloadOutput(RunVideoDetectShotResponseBodyPayloadOutput &&) = default ;
    RunVideoDetectShotResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoDetectShotResponseBodyPayloadOutput() = default ;
    RunVideoDetectShotResponseBodyPayloadOutput& operator=(const RunVideoDetectShotResponseBodyPayloadOutput &) = default ;
    RunVideoDetectShotResponseBodyPayloadOutput& operator=(RunVideoDetectShotResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoSplitResult_ == nullptr; };
    // videoSplitResult Field Functions 
    bool hasVideoSplitResult() const { return this->videoSplitResult_ != nullptr;};
    void deleteVideoSplitResult() { this->videoSplitResult_ = nullptr;};
    inline const Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult & videoSplitResult() const { DARABONBA_PTR_GET_CONST(videoSplitResult_, Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult) };
    inline Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult videoSplitResult() { DARABONBA_PTR_GET(videoSplitResult_, Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult) };
    inline RunVideoDetectShotResponseBodyPayloadOutput& setVideoSplitResult(const Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult & videoSplitResult) { DARABONBA_PTR_SET_VALUE(videoSplitResult_, videoSplitResult) };
    inline RunVideoDetectShotResponseBodyPayloadOutput& setVideoSplitResult(Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult && videoSplitResult) { DARABONBA_PTR_SET_RVALUE(videoSplitResult_, videoSplitResult) };


  protected:
    std::shared_ptr<Models::RunVideoDetectShotResponseBodyPayloadOutputVideoSplitResult> videoSplitResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
