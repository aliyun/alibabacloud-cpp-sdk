// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOGENERATERESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOGENERATERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(reasonText, reasonText_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(reasonText, reasonText_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generateFinished_ != nullptr
        && this->index_ != nullptr && this->modelId_ != nullptr && this->reasonText_ != nullptr && this->text_ != nullptr && this->usage_ != nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // reasonText Field Functions 
    bool hasReasonText() const { return this->reasonText_ != nullptr;};
    void deleteReasonText() { this->reasonText_ = nullptr;};
    inline string reasonText() const { DARABONBA_PTR_GET_DEFAULT(reasonText_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setReasonText(string reasonText) { DARABONBA_PTR_SET_VALUE(reasonText_, reasonText) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setUsage(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults& setUsage(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> reasonText_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
