// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOSHOTSNAPSHOTRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOSHOTSNAPSHOTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult& obj) { 
      DARABONBA_PTR_TO_JSON(videoShots, videoShots_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult& obj) { 
      DARABONBA_PTR_FROM_JSON(videoShots, videoShots_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult(RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoShots_ != nullptr; };
    // videoShots Field Functions 
    bool hasVideoShots() const { return this->videoShots_ != nullptr;};
    void deleteVideoShots() { this->videoShots_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots> & videoShots() const { DARABONBA_PTR_GET_CONST(videoShots_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots> videoShots() { DARABONBA_PTR_GET(videoShots_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult& setVideoShots(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots> & videoShots) { DARABONBA_PTR_SET_VALUE(videoShots_, videoShots) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult& setVideoShots(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots> && videoShots) { DARABONBA_PTR_SET_RVALUE(videoShots_, videoShots) };


  protected:
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots>> videoShots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
