// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContext& obj) { 
      DARABONBA_PTR_TO_JSON(BizContext, bizContext_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContext& obj) { 
      DARABONBA_PTR_FROM_JSON(BizContext, bizContext_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContext() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContext(const RunSearchGenerationResponseBodyPayloadOutputAgentContext &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContext(RunSearchGenerationResponseBodyPayloadOutputAgentContext &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContext() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContext& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContext &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContext& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizContext_ != nullptr; };
    // bizContext Field Functions 
    bool hasBizContext() const { return this->bizContext_ != nullptr;};
    void deleteBizContext() { this->bizContext_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext & bizContext() const { DARABONBA_PTR_GET_CONST(bizContext_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext bizContext() { DARABONBA_PTR_GET(bizContext_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContext& setBizContext(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext & bizContext) { DARABONBA_PTR_SET_VALUE(bizContext_, bizContext) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContext& setBizContext(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext && bizContext) { DARABONBA_PTR_SET_RVALUE(bizContext_, bizContext) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContext> bizContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
