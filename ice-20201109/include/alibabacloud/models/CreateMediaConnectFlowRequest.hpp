// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONNECTFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONNECTFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaConnectFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConnectFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowRegion, flowRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConnectFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowRegion, flowRegion_);
    };
    CreateMediaConnectFlowRequest() = default ;
    CreateMediaConnectFlowRequest(const CreateMediaConnectFlowRequest &) = default ;
    CreateMediaConnectFlowRequest(CreateMediaConnectFlowRequest &&) = default ;
    CreateMediaConnectFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConnectFlowRequest() = default ;
    CreateMediaConnectFlowRequest& operator=(const CreateMediaConnectFlowRequest &) = default ;
    CreateMediaConnectFlowRequest& operator=(CreateMediaConnectFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowName_ != nullptr
        && this->flowRegion_ != nullptr; };
    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateMediaConnectFlowRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowRegion Field Functions 
    bool hasFlowRegion() const { return this->flowRegion_ != nullptr;};
    void deleteFlowRegion() { this->flowRegion_ = nullptr;};
    inline string flowRegion() const { DARABONBA_PTR_GET_DEFAULT(flowRegion_, "") };
    inline CreateMediaConnectFlowRequest& setFlowRegion(string flowRegion) { DARABONBA_PTR_SET_VALUE(flowRegion_, flowRegion) };


  protected:
    // The flow name.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // The region in which the flow resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
