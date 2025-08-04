// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATASUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATASUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataDataSummarySummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyDataDataSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyDataDataSummary& obj) { 
      DARABONBA_PTR_TO_JSON(InputToken, inputToken_);
      DARABONBA_PTR_TO_JSON(OutputToken, outputToken_);
      DARABONBA_PTR_TO_JSON(Summaries, summaries_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyDataDataSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(InputToken, inputToken_);
      DARABONBA_PTR_FROM_JSON(OutputToken, outputToken_);
      DARABONBA_PTR_FROM_JSON(Summaries, summaries_);
    };
    GetHotTopicBroadcastResponseBodyDataDataSummary() = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummary(const GetHotTopicBroadcastResponseBodyDataDataSummary &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummary(GetHotTopicBroadcastResponseBodyDataDataSummary &&) = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyDataDataSummary() = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummary& operator=(const GetHotTopicBroadcastResponseBodyDataDataSummary &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummary& operator=(GetHotTopicBroadcastResponseBodyDataDataSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputToken_ != nullptr
        && this->outputToken_ != nullptr && this->summaries_ != nullptr; };
    // inputToken Field Functions 
    bool hasInputToken() const { return this->inputToken_ != nullptr;};
    void deleteInputToken() { this->inputToken_ = nullptr;};
    inline int32_t inputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataDataSummary& setInputToken(int32_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


    // outputToken Field Functions 
    bool hasOutputToken() const { return this->outputToken_ != nullptr;};
    void deleteOutputToken() { this->outputToken_ = nullptr;};
    inline int32_t outputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataDataSummary& setOutputToken(int32_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries>) };
    inline vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries> summaries() { DARABONBA_PTR_GET(summaries_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries>) };
    inline GetHotTopicBroadcastResponseBodyDataDataSummary& setSummaries(const vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline GetHotTopicBroadcastResponseBodyDataDataSummary& setSummaries(vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


  protected:
    std::shared_ptr<int32_t> inputToken_ = nullptr;
    std::shared_ptr<int32_t> outputToken_ = nullptr;
    std::shared_ptr<vector<Models::GetHotTopicBroadcastResponseBodyDataDataSummarySummaries>> summaries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
