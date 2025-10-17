// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOCAPTIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOCAPTIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(videoCaptions, videoCaptions_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(videoCaptions, videoCaptions_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult(RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateFinished_ == nullptr
        && return this->videoCaptions_ == nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // videoCaptions Field Functions 
    bool hasVideoCaptions() const { return this->videoCaptions_ != nullptr;};
    void deleteVideoCaptions() { this->videoCaptions_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions> & videoCaptions() const { DARABONBA_PTR_GET_CONST(videoCaptions_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions> videoCaptions() { DARABONBA_PTR_GET(videoCaptions_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& setVideoCaptions(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions> & videoCaptions) { DARABONBA_PTR_SET_VALUE(videoCaptions_, videoCaptions) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult& setVideoCaptions(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions> && videoCaptions) { DARABONBA_PTR_SET_RVALUE(videoCaptions_, videoCaptions) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>> videoCaptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
