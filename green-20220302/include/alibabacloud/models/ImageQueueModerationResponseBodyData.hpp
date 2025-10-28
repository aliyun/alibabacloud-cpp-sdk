// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Frame, frame_);
      DARABONBA_PTR_TO_JSON(FrameNum, frameNum_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Frame, frame_);
      DARABONBA_PTR_FROM_JSON(FrameNum, frameNum_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ImageQueueModerationResponseBodyData() = default ;
    ImageQueueModerationResponseBodyData(const ImageQueueModerationResponseBodyData &) = default ;
    ImageQueueModerationResponseBodyData(ImageQueueModerationResponseBodyData &&) = default ;
    ImageQueueModerationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyData() = default ;
    ImageQueueModerationResponseBodyData& operator=(const ImageQueueModerationResponseBodyData &) = default ;
    ImageQueueModerationResponseBodyData& operator=(ImageQueueModerationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && return this->frame_ == nullptr && return this->frameNum_ == nullptr && return this->result_ == nullptr && return this->riskLevel_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ImageQueueModerationResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // frame Field Functions 
    bool hasFrame() const { return this->frame_ != nullptr;};
    void deleteFrame() { this->frame_ = nullptr;};
    inline string frame() const { DARABONBA_PTR_GET_DEFAULT(frame_, "") };
    inline ImageQueueModerationResponseBodyData& setFrame(string frame) { DARABONBA_PTR_SET_VALUE(frame_, frame) };


    // frameNum Field Functions 
    bool hasFrameNum() const { return this->frameNum_ != nullptr;};
    void deleteFrameNum() { this->frameNum_ = nullptr;};
    inline int32_t frameNum() const { DARABONBA_PTR_GET_DEFAULT(frameNum_, 0) };
    inline ImageQueueModerationResponseBodyData& setFrameNum(int32_t frameNum) { DARABONBA_PTR_SET_VALUE(frameNum_, frameNum) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImageQueueModerationResponseBodyDataResult>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImageQueueModerationResponseBodyDataResult>) };
    inline ImageQueueModerationResponseBodyData& setResult(const vector<Models::ImageQueueModerationResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImageQueueModerationResponseBodyData& setResult(vector<Models::ImageQueueModerationResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ImageQueueModerationResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<string> frame_ = nullptr;
    std::shared_ptr<int32_t> frameNum_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataResult>> result_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
