// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATARESPONSEPAYLOADUSAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATARESPONSEPAYLOADUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAuditTaskResponseBodyDataResponsePayloadUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditTaskResponseBodyDataResponsePayloadUsage& obj) { 
      DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditTaskResponseBodyDataResponsePayloadUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    QueryAuditTaskResponseBodyDataResponsePayloadUsage() = default ;
    QueryAuditTaskResponseBodyDataResponsePayloadUsage(const QueryAuditTaskResponseBodyDataResponsePayloadUsage &) = default ;
    QueryAuditTaskResponseBodyDataResponsePayloadUsage(QueryAuditTaskResponseBodyDataResponsePayloadUsage &&) = default ;
    QueryAuditTaskResponseBodyDataResponsePayloadUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditTaskResponseBodyDataResponsePayloadUsage() = default ;
    QueryAuditTaskResponseBodyDataResponsePayloadUsage& operator=(const QueryAuditTaskResponseBodyDataResponsePayloadUsage &) = default ;
    QueryAuditTaskResponseBodyDataResponsePayloadUsage& operator=(QueryAuditTaskResponseBodyDataResponsePayloadUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputTokens_ == nullptr
        && return this->outputTokens_ == nullptr && return this->totalTokens_ == nullptr; };
    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline QueryAuditTaskResponseBodyDataResponsePayloadUsage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline QueryAuditTaskResponseBodyDataResponsePayloadUsage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline QueryAuditTaskResponseBodyDataResponsePayloadUsage& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
    std::shared_ptr<int32_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
