// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCSMARTCARDRESPONSEBODYPAYLOADUSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCSMARTCARDRESPONSEBODYPAYLOADUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocSmartCardResponseBodyPayloadUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocSmartCardResponseBodyPayloadUsage& obj) { 
      DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocSmartCardResponseBodyPayloadUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    RunDocSmartCardResponseBodyPayloadUsage() = default ;
    RunDocSmartCardResponseBodyPayloadUsage(const RunDocSmartCardResponseBodyPayloadUsage &) = default ;
    RunDocSmartCardResponseBodyPayloadUsage(RunDocSmartCardResponseBodyPayloadUsage &&) = default ;
    RunDocSmartCardResponseBodyPayloadUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocSmartCardResponseBodyPayloadUsage() = default ;
    RunDocSmartCardResponseBodyPayloadUsage& operator=(const RunDocSmartCardResponseBodyPayloadUsage &) = default ;
    RunDocSmartCardResponseBodyPayloadUsage& operator=(RunDocSmartCardResponseBodyPayloadUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputTokens_ == nullptr
        && return this->outputTokens_ == nullptr && return this->totalTokens_ == nullptr; };
    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int64_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
    inline RunDocSmartCardResponseBodyPayloadUsage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int64_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
    inline RunDocSmartCardResponseBodyPayloadUsage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline RunDocSmartCardResponseBodyPayloadUsage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int64_t> inputTokens_ = nullptr;
    std::shared_ptr<int64_t> outputTokens_ = nullptr;
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
