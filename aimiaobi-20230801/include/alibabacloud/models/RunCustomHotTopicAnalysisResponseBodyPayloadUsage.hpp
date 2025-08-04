// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODYPAYLOADUSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODYPAYLOADUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicAnalysisResponseBodyPayloadUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicAnalysisResponseBodyPayloadUsage& obj) { 
      DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicAnalysisResponseBodyPayloadUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    RunCustomHotTopicAnalysisResponseBodyPayloadUsage() = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadUsage(const RunCustomHotTopicAnalysisResponseBodyPayloadUsage &) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadUsage(RunCustomHotTopicAnalysisResponseBodyPayloadUsage &&) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicAnalysisResponseBodyPayloadUsage() = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadUsage& operator=(const RunCustomHotTopicAnalysisResponseBodyPayloadUsage &) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadUsage& operator=(RunCustomHotTopicAnalysisResponseBodyPayloadUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputTokens_ != nullptr
        && this->outputTokens_ != nullptr && this->totalTokens_ != nullptr; };
    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int64_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadUsage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int64_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadUsage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadUsage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int64_t> inputTokens_ = nullptr;
    std::shared_ptr<int64_t> outputTokens_ = nullptr;
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
