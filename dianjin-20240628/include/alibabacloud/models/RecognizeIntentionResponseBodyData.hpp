// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecognizeIntentionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIntentionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_TO_JSON(intentionName, intentionName_);
      DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
      DARABONBA_PTR_TO_JSON(recommendIntention, recommendIntention_);
      DARABONBA_PTR_TO_JSON(recommendScript, recommendScript_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIntentionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_FROM_JSON(intentionName, intentionName_);
      DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
      DARABONBA_PTR_FROM_JSON(recommendIntention, recommendIntention_);
      DARABONBA_PTR_FROM_JSON(recommendScript, recommendScript_);
    };
    RecognizeIntentionResponseBodyData() = default ;
    RecognizeIntentionResponseBodyData(const RecognizeIntentionResponseBodyData &) = default ;
    RecognizeIntentionResponseBodyData(RecognizeIntentionResponseBodyData &&) = default ;
    RecognizeIntentionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIntentionResponseBodyData() = default ;
    RecognizeIntentionResponseBodyData& operator=(const RecognizeIntentionResponseBodyData &) = default ;
    RecognizeIntentionResponseBodyData& operator=(RecognizeIntentionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisProcess_ != nullptr
        && this->intentionCode_ != nullptr && this->intentionName_ != nullptr && this->intentionScript_ != nullptr && this->recommendIntention_ != nullptr && this->recommendScript_ != nullptr; };
    // analysisProcess Field Functions 
    bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
    void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
    inline string analysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
    inline RecognizeIntentionResponseBodyData& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


    // intentionCode Field Functions 
    bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
    void deleteIntentionCode() { this->intentionCode_ = nullptr;};
    inline string intentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
    inline RecognizeIntentionResponseBodyData& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


    // intentionName Field Functions 
    bool hasIntentionName() const { return this->intentionName_ != nullptr;};
    void deleteIntentionName() { this->intentionName_ = nullptr;};
    inline string intentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
    inline RecognizeIntentionResponseBodyData& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


    // intentionScript Field Functions 
    bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
    void deleteIntentionScript() { this->intentionScript_ = nullptr;};
    inline string intentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
    inline RecognizeIntentionResponseBodyData& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


    // recommendIntention Field Functions 
    bool hasRecommendIntention() const { return this->recommendIntention_ != nullptr;};
    void deleteRecommendIntention() { this->recommendIntention_ = nullptr;};
    inline string recommendIntention() const { DARABONBA_PTR_GET_DEFAULT(recommendIntention_, "") };
    inline RecognizeIntentionResponseBodyData& setRecommendIntention(string recommendIntention) { DARABONBA_PTR_SET_VALUE(recommendIntention_, recommendIntention) };


    // recommendScript Field Functions 
    bool hasRecommendScript() const { return this->recommendScript_ != nullptr;};
    void deleteRecommendScript() { this->recommendScript_ = nullptr;};
    inline string recommendScript() const { DARABONBA_PTR_GET_DEFAULT(recommendScript_, "") };
    inline RecognizeIntentionResponseBodyData& setRecommendScript(string recommendScript) { DARABONBA_PTR_SET_VALUE(recommendScript_, recommendScript) };


  protected:
    std::shared_ptr<string> analysisProcess_ = nullptr;
    std::shared_ptr<string> intentionCode_ = nullptr;
    std::shared_ptr<string> intentionName_ = nullptr;
    std::shared_ptr<string> intentionScript_ = nullptr;
    std::shared_ptr<string> recommendIntention_ = nullptr;
    std::shared_ptr<string> recommendScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
