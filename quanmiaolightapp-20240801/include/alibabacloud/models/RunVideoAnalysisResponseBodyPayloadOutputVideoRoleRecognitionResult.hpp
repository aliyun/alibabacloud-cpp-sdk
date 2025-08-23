// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult& obj) { 
      DARABONBA_PTR_TO_JSON(videoRoles, videoRoles_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(videoRoles, videoRoles_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult(RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoRoles_ != nullptr; };
    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles> & videoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles> videoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult& setVideoRoles(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult& setVideoRoles(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


  protected:
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResultVideoRoles>> videoRoles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
