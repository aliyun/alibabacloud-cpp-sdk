// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENEREQUESTFLOWS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENEREQUESTFLOWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateSceneRequestFlows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSceneRequestFlows& obj) { 
      DARABONBA_PTR_TO_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSceneRequestFlows& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
    };
    CreateSceneRequestFlows() = default ;
    CreateSceneRequestFlows(const CreateSceneRequestFlows &) = default ;
    CreateSceneRequestFlows(CreateSceneRequestFlows &&) = default ;
    CreateSceneRequestFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSceneRequestFlows() = default ;
    CreateSceneRequestFlows& operator=(const CreateSceneRequestFlows &) = default ;
    CreateSceneRequestFlows& operator=(CreateSceneRequestFlows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowCode_ != nullptr
        && this->flowName_ != nullptr; };
    // flowCode Field Functions 
    bool hasFlowCode() const { return this->flowCode_ != nullptr;};
    void deleteFlowCode() { this->flowCode_ = nullptr;};
    inline string flowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
    inline CreateSceneRequestFlows& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateSceneRequestFlows& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


  protected:
    std::shared_ptr<string> flowCode_ = nullptr;
    std::shared_ptr<string> flowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
