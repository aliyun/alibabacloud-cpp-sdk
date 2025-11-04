// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIACONNECTFLOWINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIACONNECTFLOWINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaConnectFlowInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaConnectFlowInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(InputName, inputName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaConnectFlowInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(InputName, inputName_);
    };
    DeleteMediaConnectFlowInputRequest() = default ;
    DeleteMediaConnectFlowInputRequest(const DeleteMediaConnectFlowInputRequest &) = default ;
    DeleteMediaConnectFlowInputRequest(DeleteMediaConnectFlowInputRequest &&) = default ;
    DeleteMediaConnectFlowInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaConnectFlowInputRequest() = default ;
    DeleteMediaConnectFlowInputRequest& operator=(const DeleteMediaConnectFlowInputRequest &) = default ;
    DeleteMediaConnectFlowInputRequest& operator=(DeleteMediaConnectFlowInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && return this->inputName_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline DeleteMediaConnectFlowInputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // inputName Field Functions 
    bool hasInputName() const { return this->inputName_ != nullptr;};
    void deleteInputName() { this->inputName_ = nullptr;};
    inline string inputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
    inline DeleteMediaConnectFlowInputRequest& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


  protected:
    // The flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<string> inputName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
