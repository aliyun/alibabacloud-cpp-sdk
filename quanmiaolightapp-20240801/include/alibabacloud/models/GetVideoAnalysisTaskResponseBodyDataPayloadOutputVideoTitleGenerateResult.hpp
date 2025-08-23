// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOTITLEGENERATERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOTITLEGENERATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& obj) { 
      DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generateFinished_ != nullptr
        && this->text_ != nullptr && this->usage_ != nullptr; };
    // generateFinished Field Functions 
    bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
    void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
    inline bool generateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& setUsage(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult& setUsage(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<bool> generateFinished_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
