// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaConnectFlowOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
    };
    DeleteMediaConnectFlowOutputRequest() = default ;
    DeleteMediaConnectFlowOutputRequest(const DeleteMediaConnectFlowOutputRequest &) = default ;
    DeleteMediaConnectFlowOutputRequest(DeleteMediaConnectFlowOutputRequest &&) = default ;
    DeleteMediaConnectFlowOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaConnectFlowOutputRequest() = default ;
    DeleteMediaConnectFlowOutputRequest& operator=(const DeleteMediaConnectFlowOutputRequest &) = default ;
    DeleteMediaConnectFlowOutputRequest& operator=(DeleteMediaConnectFlowOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && this->outputName_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline DeleteMediaConnectFlowOutputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string getOutputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline DeleteMediaConnectFlowOutputRequest& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


  protected:
    // The flow ID.
    // 
    // This parameter is required.
    shared_ptr<string> flowId_ {};
    // The name of the output that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> outputName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
