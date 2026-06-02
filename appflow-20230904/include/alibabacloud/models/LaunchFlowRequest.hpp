// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAUNCHFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LAUNCHFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class LaunchFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaunchFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowDesc, flowDesc_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowTemplate, flowTemplate_);
      DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
    };
    friend void from_json(const Darabonba::Json& j, LaunchFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowDesc, flowDesc_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowTemplate, flowTemplate_);
      DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
    };
    LaunchFlowRequest() = default ;
    LaunchFlowRequest(const LaunchFlowRequest &) = default ;
    LaunchFlowRequest(LaunchFlowRequest &&) = default ;
    LaunchFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaunchFlowRequest() = default ;
    LaunchFlowRequest& operator=(const LaunchFlowRequest &) = default ;
    LaunchFlowRequest& operator=(LaunchFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowDesc_ == nullptr
        && this->flowId_ == nullptr && this->flowName_ == nullptr && this->flowTemplate_ == nullptr && this->flowVersion_ == nullptr; };
    // flowDesc Field Functions 
    bool hasFlowDesc() const { return this->flowDesc_ != nullptr;};
    void deleteFlowDesc() { this->flowDesc_ = nullptr;};
    inline string getFlowDesc() const { DARABONBA_PTR_GET_DEFAULT(flowDesc_, "") };
    inline LaunchFlowRequest& setFlowDesc(string flowDesc) { DARABONBA_PTR_SET_VALUE(flowDesc_, flowDesc) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline LaunchFlowRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline LaunchFlowRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowTemplate Field Functions 
    bool hasFlowTemplate() const { return this->flowTemplate_ != nullptr;};
    void deleteFlowTemplate() { this->flowTemplate_ = nullptr;};
    inline string getFlowTemplate() const { DARABONBA_PTR_GET_DEFAULT(flowTemplate_, "") };
    inline LaunchFlowRequest& setFlowTemplate(string flowTemplate) { DARABONBA_PTR_SET_VALUE(flowTemplate_, flowTemplate) };


    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline int32_t getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, 0) };
    inline LaunchFlowRequest& setFlowVersion(int32_t flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


  protected:
    shared_ptr<string> flowDesc_ {};
    // This parameter is required.
    shared_ptr<string> flowId_ {};
    shared_ptr<string> flowName_ {};
    shared_ptr<string> flowTemplate_ {};
    shared_ptr<int32_t> flowVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
