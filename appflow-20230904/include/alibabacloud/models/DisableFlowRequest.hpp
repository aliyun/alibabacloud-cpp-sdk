// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class DisableFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowVersion, flowVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DisableFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowVersion, flowVersion_);
    };
    DisableFlowRequest() = default ;
    DisableFlowRequest(const DisableFlowRequest &) = default ;
    DisableFlowRequest(DisableFlowRequest &&) = default ;
    DisableFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableFlowRequest() = default ;
    DisableFlowRequest& operator=(const DisableFlowRequest &) = default ;
    DisableFlowRequest& operator=(DisableFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && this->flowVersion_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline DisableFlowRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline int32_t getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, 0) };
    inline DisableFlowRequest& setFlowVersion(int32_t flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> flowId_ {};
    shared_ptr<int32_t> flowVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
