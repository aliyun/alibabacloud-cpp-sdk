// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUESTAGENTCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationRequestAgentContextBizContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequestAgentContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequestAgentContext& obj) { 
      DARABONBA_PTR_TO_JSON(BizContext, bizContext_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequestAgentContext& obj) { 
      DARABONBA_PTR_FROM_JSON(BizContext, bizContext_);
    };
    RunSearchGenerationRequestAgentContext() = default ;
    RunSearchGenerationRequestAgentContext(const RunSearchGenerationRequestAgentContext &) = default ;
    RunSearchGenerationRequestAgentContext(RunSearchGenerationRequestAgentContext &&) = default ;
    RunSearchGenerationRequestAgentContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequestAgentContext() = default ;
    RunSearchGenerationRequestAgentContext& operator=(const RunSearchGenerationRequestAgentContext &) = default ;
    RunSearchGenerationRequestAgentContext& operator=(RunSearchGenerationRequestAgentContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizContext_ == nullptr; };
    // bizContext Field Functions 
    bool hasBizContext() const { return this->bizContext_ != nullptr;};
    void deleteBizContext() { this->bizContext_ = nullptr;};
    inline const Models::RunSearchGenerationRequestAgentContextBizContext & bizContext() const { DARABONBA_PTR_GET_CONST(bizContext_, Models::RunSearchGenerationRequestAgentContextBizContext) };
    inline Models::RunSearchGenerationRequestAgentContextBizContext bizContext() { DARABONBA_PTR_GET(bizContext_, Models::RunSearchGenerationRequestAgentContextBizContext) };
    inline RunSearchGenerationRequestAgentContext& setBizContext(const Models::RunSearchGenerationRequestAgentContextBizContext & bizContext) { DARABONBA_PTR_SET_VALUE(bizContext_, bizContext) };
    inline RunSearchGenerationRequestAgentContext& setBizContext(Models::RunSearchGenerationRequestAgentContextBizContext && bizContext) { DARABONBA_PTR_SET_RVALUE(bizContext_, bizContext) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationRequestAgentContextBizContext> bizContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
