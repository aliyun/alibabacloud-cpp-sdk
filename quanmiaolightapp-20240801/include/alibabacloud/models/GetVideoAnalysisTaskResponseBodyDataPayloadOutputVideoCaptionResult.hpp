// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOCAPTIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOCAPTIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(videoCaptions, videoCaptions_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(videoCaptions, videoCaptions_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generateFinished_ != nullptr
        && this->videoCaptions_ != nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // videoCaptions Field Functions 
    bool hasVideoCaptions() const { return this->videoCaptions_ != nullptr;};
    void deleteVideoCaptions() { this->videoCaptions_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions> & videoCaptions() const { DARABONBA_PTR_GET_CONST(videoCaptions_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions> videoCaptions() { DARABONBA_PTR_GET(videoCaptions_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& setVideoCaptions(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions> & videoCaptions) { DARABONBA_PTR_SET_VALUE(videoCaptions_, videoCaptions) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult& setVideoCaptions(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions> && videoCaptions) { DARABONBA_PTR_SET_RVALUE(videoCaptions_, videoCaptions) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions>> videoCaptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
