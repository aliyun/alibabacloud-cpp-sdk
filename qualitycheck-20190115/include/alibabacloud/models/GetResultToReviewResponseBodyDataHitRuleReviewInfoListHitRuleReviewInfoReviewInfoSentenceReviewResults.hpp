// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOREVIEWINFOSENTENCEREVIEWRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOREVIEWINFOSENTENCEREVIEWRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults& obj) { 
      DARABONBA_PTR_TO_JSON(SentenceReviewResults, sentenceReviewResults_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults& obj) { 
      DARABONBA_PTR_FROM_JSON(SentenceReviewResults, sentenceReviewResults_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sentenceReviewResults_ == nullptr; };
    // sentenceReviewResults Field Functions 
    bool hasSentenceReviewResults() const { return this->sentenceReviewResults_ != nullptr;};
    void deleteSentenceReviewResults() { this->sentenceReviewResults_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults> & sentenceReviewResults() const { DARABONBA_PTR_GET_CONST(sentenceReviewResults_, vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults>) };
    inline vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults> sentenceReviewResults() { DARABONBA_PTR_GET(sentenceReviewResults_, vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults>) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults& setSentenceReviewResults(const vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults> & sentenceReviewResults) { DARABONBA_PTR_SET_VALUE(sentenceReviewResults_, sentenceReviewResults) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResults& setSentenceReviewResults(vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults> && sentenceReviewResults) { DARABONBA_PTR_SET_RVALUE(sentenceReviewResults_, sentenceReviewResults) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfoSentenceReviewResultsSentenceReviewResults>> sentenceReviewResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
