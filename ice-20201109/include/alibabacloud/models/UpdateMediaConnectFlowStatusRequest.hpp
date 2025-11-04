// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIACONNECTFLOWSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIACONNECTFLOWSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaConnectFlowStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaConnectFlowStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaConnectFlowStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateMediaConnectFlowStatusRequest() = default ;
    UpdateMediaConnectFlowStatusRequest(const UpdateMediaConnectFlowStatusRequest &) = default ;
    UpdateMediaConnectFlowStatusRequest(UpdateMediaConnectFlowStatusRequest &&) = default ;
    UpdateMediaConnectFlowStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaConnectFlowStatusRequest() = default ;
    UpdateMediaConnectFlowStatusRequest& operator=(const UpdateMediaConnectFlowStatusRequest &) = default ;
    UpdateMediaConnectFlowStatusRequest& operator=(UpdateMediaConnectFlowStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && return this->status_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline UpdateMediaConnectFlowStatusRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateMediaConnectFlowStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
    // The flow state. Valid values:
    // 
    // *   online: starts the flow.
    // *   offline: stops the flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
