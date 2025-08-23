// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOANALYSISRESULTVIDEOSHOTANALYSISRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOANALYSISRESULTVIDEOSHOTANALYSISRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults(const RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults(RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr && this->text_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
