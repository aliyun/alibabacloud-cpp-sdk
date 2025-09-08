// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageModerationResultResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Frame, frame_);
      DARABONBA_PTR_TO_JSON(FrameNum, frameNum_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Frame, frame_);
      DARABONBA_PTR_FROM_JSON(FrameNum, frameNum_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeImageModerationResultResponseBodyData() = default ;
    DescribeImageModerationResultResponseBodyData(const DescribeImageModerationResultResponseBodyData &) = default ;
    DescribeImageModerationResultResponseBodyData(DescribeImageModerationResultResponseBodyData &&) = default ;
    DescribeImageModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageModerationResultResponseBodyData() = default ;
    DescribeImageModerationResultResponseBodyData& operator=(const DescribeImageModerationResultResponseBodyData &) = default ;
    DescribeImageModerationResultResponseBodyData& operator=(DescribeImageModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->frame_ != nullptr && this->frameNum_ != nullptr && this->manualTaskId_ != nullptr && this->reqId_ != nullptr && this->result_ != nullptr
        && this->riskLevel_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline DescribeImageModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // frame Field Functions 
    bool hasFrame() const { return this->frame_ != nullptr;};
    void deleteFrame() { this->frame_ = nullptr;};
    inline string frame() const { DARABONBA_PTR_GET_DEFAULT(frame_, "") };
    inline DescribeImageModerationResultResponseBodyData& setFrame(string frame) { DARABONBA_PTR_SET_VALUE(frame_, frame) };


    // frameNum Field Functions 
    bool hasFrameNum() const { return this->frameNum_ != nullptr;};
    void deleteFrameNum() { this->frameNum_ = nullptr;};
    inline int32_t frameNum() const { DARABONBA_PTR_GET_DEFAULT(frameNum_, 0) };
    inline DescribeImageModerationResultResponseBodyData& setFrameNum(int32_t frameNum) { DARABONBA_PTR_SET_VALUE(frameNum_, frameNum) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline DescribeImageModerationResultResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeImageModerationResultResponseBodyData& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DescribeImageModerationResultResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DescribeImageModerationResultResponseBodyDataResult>) };
    inline vector<Models::DescribeImageModerationResultResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DescribeImageModerationResultResponseBodyDataResult>) };
    inline DescribeImageModerationResultResponseBodyData& setResult(const vector<Models::DescribeImageModerationResultResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeImageModerationResultResponseBodyData& setResult(vector<Models::DescribeImageModerationResultResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageModerationResultResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The value of dataId that is specified in the API request. If this parameter is not specified in the API request, this field is not available in the response.
    std::shared_ptr<string> dataId_ = nullptr;
    // The information about the captured frames.
    std::shared_ptr<string> frame_ = nullptr;
    // The number of frames.
    std::shared_ptr<int32_t> frameNum_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // The reqId field returned by the Image Async Moderation API.
    std::shared_ptr<string> reqId_ = nullptr;
    // The results of image moderation parameters such as the label parameter and the confidence parameter.
    std::shared_ptr<vector<Models::DescribeImageModerationResultResponseBodyDataResult>> result_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
