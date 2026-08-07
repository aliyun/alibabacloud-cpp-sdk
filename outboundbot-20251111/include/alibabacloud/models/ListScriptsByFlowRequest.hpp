// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSBYFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSBYFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListScriptsByFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsByFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsByFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListScriptsByFlowRequest() = default ;
    ListScriptsByFlowRequest(const ListScriptsByFlowRequest &) = default ;
    ListScriptsByFlowRequest(ListScriptsByFlowRequest &&) = default ;
    ListScriptsByFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsByFlowRequest() = default ;
    ListScriptsByFlowRequest& operator=(const ListScriptsByFlowRequest &) = default ;
    ListScriptsByFlowRequest& operator=(ListScriptsByFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && this->instanceId_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ListScriptsByFlowRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptsByFlowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 流程ID
    shared_ptr<string> flowId_ {};
    // 实例ID
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
