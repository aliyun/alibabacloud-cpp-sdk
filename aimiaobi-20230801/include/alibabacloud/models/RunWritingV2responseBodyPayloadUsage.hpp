// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADUSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2ResponseBodyPayloadUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2ResponseBodyPayloadUsage& obj) { 
      DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(TokenMap, tokenMap_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2ResponseBodyPayloadUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(TokenMap, tokenMap_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    RunWritingV2ResponseBodyPayloadUsage() = default ;
    RunWritingV2ResponseBodyPayloadUsage(const RunWritingV2ResponseBodyPayloadUsage &) = default ;
    RunWritingV2ResponseBodyPayloadUsage(RunWritingV2ResponseBodyPayloadUsage &&) = default ;
    RunWritingV2ResponseBodyPayloadUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2ResponseBodyPayloadUsage() = default ;
    RunWritingV2ResponseBodyPayloadUsage& operator=(const RunWritingV2ResponseBodyPayloadUsage &) = default ;
    RunWritingV2ResponseBodyPayloadUsage& operator=(RunWritingV2ResponseBodyPayloadUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputTokens_ != nullptr
        && this->outputTokens_ != nullptr && this->tokenMap_ != nullptr && this->totalTokens_ != nullptr; };
    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int64_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
    inline RunWritingV2ResponseBodyPayloadUsage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int64_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
    inline RunWritingV2ResponseBodyPayloadUsage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // tokenMap Field Functions 
    bool hasTokenMap() const { return this->tokenMap_ != nullptr;};
    void deleteTokenMap() { this->tokenMap_ = nullptr;};
    inline const map<string, int64_t> & tokenMap() const { DARABONBA_PTR_GET_CONST(tokenMap_, map<string, int64_t>) };
    inline map<string, int64_t> tokenMap() { DARABONBA_PTR_GET(tokenMap_, map<string, int64_t>) };
    inline RunWritingV2ResponseBodyPayloadUsage& setTokenMap(const map<string, int64_t> & tokenMap) { DARABONBA_PTR_SET_VALUE(tokenMap_, tokenMap) };
    inline RunWritingV2ResponseBodyPayloadUsage& setTokenMap(map<string, int64_t> && tokenMap) { DARABONBA_PTR_SET_RVALUE(tokenMap_, tokenMap) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline RunWritingV2ResponseBodyPayloadUsage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int64_t> inputTokens_ = nullptr;
    std::shared_ptr<int64_t> outputTokens_ = nullptr;
    std::shared_ptr<map<string, int64_t>> tokenMap_ = nullptr;
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
