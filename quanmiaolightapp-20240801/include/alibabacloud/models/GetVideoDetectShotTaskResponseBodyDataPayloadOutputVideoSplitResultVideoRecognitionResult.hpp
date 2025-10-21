// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOSPLITRESULTVIDEORECOGNITIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOSPLITRESULTVIDEORECOGNITIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& obj) { 
      DARABONBA_PTR_TO_JSON(asr, asr_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(ocr, ocr_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(vl, vl_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(asr, asr_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ocr, ocr_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(vl, vl_);
    };
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult(const GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult(GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult &&) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& operator=(const GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& operator=(GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asr_ == nullptr
        && return this->endTime_ == nullptr && return this->ocr_ == nullptr && return this->startTime_ == nullptr && return this->vl_ == nullptr; };
    // asr Field Functions 
    bool hasAsr() const { return this->asr_ != nullptr;};
    void deleteAsr() { this->asr_ = nullptr;};
    inline string asr() const { DARABONBA_PTR_GET_DEFAULT(asr_, "") };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& setAsr(string asr) { DARABONBA_PTR_SET_VALUE(asr_, asr) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string ocr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vl Field Functions 
    bool hasVl() const { return this->vl_ != nullptr;};
    void deleteVl() { this->vl_ = nullptr;};
    inline string vl() const { DARABONBA_PTR_GET_DEFAULT(vl_, "") };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult& setVl(string vl) { DARABONBA_PTR_SET_VALUE(vl_, vl) };


  protected:
    std::shared_ptr<string> asr_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> ocr_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> vl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
