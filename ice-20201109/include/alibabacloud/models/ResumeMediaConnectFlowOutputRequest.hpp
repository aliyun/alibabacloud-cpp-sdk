// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEMEDIACONNECTFLOWOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ResumeMediaConnectFlowOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeMediaConnectFlowOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
    };
    ResumeMediaConnectFlowOutputRequest() = default ;
    ResumeMediaConnectFlowOutputRequest(const ResumeMediaConnectFlowOutputRequest &) = default ;
    ResumeMediaConnectFlowOutputRequest(ResumeMediaConnectFlowOutputRequest &&) = default ;
    ResumeMediaConnectFlowOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeMediaConnectFlowOutputRequest() = default ;
    ResumeMediaConnectFlowOutputRequest& operator=(const ResumeMediaConnectFlowOutputRequest &) = default ;
    ResumeMediaConnectFlowOutputRequest& operator=(ResumeMediaConnectFlowOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && return this->outputName_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ResumeMediaConnectFlowOutputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string outputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline ResumeMediaConnectFlowOutputRequest& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


  protected:
    // The ID of the MediaConnect flow.
    std::shared_ptr<string> flowId_ = nullptr;
    // The name of the output.
    std::shared_ptr<string> outputName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
