// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIMEFLOWS_HPP_
#define ALIBABACLOUD_MODELS_RUNTIMEFLOWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class RuntimeFlows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuntimeFlows& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
    };
    friend void from_json(const Darabonba::Json& j, RuntimeFlows& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
    };
    RuntimeFlows() = default ;
    RuntimeFlows(const RuntimeFlows &) = default ;
    RuntimeFlows(RuntimeFlows &&) = default ;
    RuntimeFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuntimeFlows() = default ;
    RuntimeFlows& operator=(const RuntimeFlows &) = default ;
    RuntimeFlows& operator=(RuntimeFlows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && return this->flowName_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline RuntimeFlows& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline RuntimeFlows& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


  protected:
    // 应用流ID
    std::shared_ptr<string> flowId_ = nullptr;
    // 应用流名称
    std::shared_ptr<string> flowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
