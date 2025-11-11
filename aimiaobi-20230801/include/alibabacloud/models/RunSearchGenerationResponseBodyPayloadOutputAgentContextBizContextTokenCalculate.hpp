// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTTOKENCALCULATE_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTTOKENCALCULATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& obj) { 
      DARABONBA_PTR_TO_JSON(FirstTokenTime, firstTokenTime_);
      DARABONBA_PTR_TO_JSON(OutputAvgTime, outputAvgTime_);
      DARABONBA_PTR_TO_JSON(SearchTime, searchTime_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstTokenTime, firstTokenTime_);
      DARABONBA_PTR_FROM_JSON(OutputAvgTime, outputAvgTime_);
      DARABONBA_PTR_FROM_JSON(SearchTime, searchTime_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstTokenTime_ == nullptr
        && return this->outputAvgTime_ == nullptr && return this->searchTime_ == nullptr && return this->time_ == nullptr && return this->totalTokens_ == nullptr; };
    // firstTokenTime Field Functions 
    bool hasFirstTokenTime() const { return this->firstTokenTime_ != nullptr;};
    void deleteFirstTokenTime() { this->firstTokenTime_ = nullptr;};
    inline float firstTokenTime() const { DARABONBA_PTR_GET_DEFAULT(firstTokenTime_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& setFirstTokenTime(float firstTokenTime) { DARABONBA_PTR_SET_VALUE(firstTokenTime_, firstTokenTime) };


    // outputAvgTime Field Functions 
    bool hasOutputAvgTime() const { return this->outputAvgTime_ != nullptr;};
    void deleteOutputAvgTime() { this->outputAvgTime_ = nullptr;};
    inline float outputAvgTime() const { DARABONBA_PTR_GET_DEFAULT(outputAvgTime_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& setOutputAvgTime(float outputAvgTime) { DARABONBA_PTR_SET_VALUE(outputAvgTime_, outputAvgTime) };


    // searchTime Field Functions 
    bool hasSearchTime() const { return this->searchTime_ != nullptr;};
    void deleteSearchTime() { this->searchTime_ = nullptr;};
    inline float searchTime() const { DARABONBA_PTR_GET_DEFAULT(searchTime_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& setSearchTime(float searchTime) { DARABONBA_PTR_SET_VALUE(searchTime_, searchTime) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline float time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0.0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& setTime(float time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextTokenCalculate& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<float> firstTokenTime_ = nullptr;
    std::shared_ptr<float> outputAvgTime_ = nullptr;
    std::shared_ptr<float> searchTime_ = nullptr;
    std::shared_ptr<float> time_ = nullptr;
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
