// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult& obj) { 
      DARABONBA_PTR_TO_JSON(videoRoles, videoRoles_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(videoRoles, videoRoles_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoRoles_ != nullptr; };
    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles> & videoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles> videoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult& setVideoRoles(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult& setVideoRoles(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


  protected:
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRoles>> videoRoles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
