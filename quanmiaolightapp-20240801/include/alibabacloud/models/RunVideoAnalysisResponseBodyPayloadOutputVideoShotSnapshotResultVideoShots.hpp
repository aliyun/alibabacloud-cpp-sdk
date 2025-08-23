// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOSHOTSNAPSHOTRESULTVIDEOSHOTS_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOSHOTSNAPSHOTRESULTVIDEOSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(endTimeFormat, endTimeFormat_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(startTimeFormat, startTimeFormat_);
      DARABONBA_PTR_TO_JSON(videoSnapshots, videoSnapshots_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(endTimeFormat, endTimeFormat_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(startTimeFormat, startTimeFormat_);
      DARABONBA_PTR_FROM_JSON(videoSnapshots, videoSnapshots_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots(const RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots(RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->endTimeFormat_ != nullptr && this->startTime_ != nullptr && this->startTimeFormat_ != nullptr && this->videoSnapshots_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeFormat Field Functions 
    bool hasEndTimeFormat() const { return this->endTimeFormat_ != nullptr;};
    void deleteEndTimeFormat() { this->endTimeFormat_ = nullptr;};
    inline string endTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(endTimeFormat_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& setEndTimeFormat(string endTimeFormat) { DARABONBA_PTR_SET_VALUE(endTimeFormat_, endTimeFormat) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeFormat Field Functions 
    bool hasStartTimeFormat() const { return this->startTimeFormat_ != nullptr;};
    void deleteStartTimeFormat() { this->startTimeFormat_ = nullptr;};
    inline string startTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(startTimeFormat_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& setStartTimeFormat(string startTimeFormat) { DARABONBA_PTR_SET_VALUE(startTimeFormat_, startTimeFormat) };


    // videoSnapshots Field Functions 
    bool hasVideoSnapshots() const { return this->videoSnapshots_ != nullptr;};
    void deleteVideoSnapshots() { this->videoSnapshots_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots> & videoSnapshots() const { DARABONBA_PTR_GET_CONST(videoSnapshots_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots> videoSnapshots() { DARABONBA_PTR_GET(videoSnapshots_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& setVideoSnapshots(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots> & videoSnapshots) { DARABONBA_PTR_SET_VALUE(videoSnapshots_, videoSnapshots) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots& setVideoSnapshots(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots> && videoSnapshots) { DARABONBA_PTR_SET_RVALUE(videoSnapshots_, videoSnapshots) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> endTimeFormat_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> startTimeFormat_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots>> videoSnapshots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
