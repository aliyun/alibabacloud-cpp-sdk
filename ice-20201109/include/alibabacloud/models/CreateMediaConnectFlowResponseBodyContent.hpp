// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONNECTFLOWRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONNECTFLOWRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaConnectFlowResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConnectFlowResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConnectFlowResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
    };
    CreateMediaConnectFlowResponseBodyContent() = default ;
    CreateMediaConnectFlowResponseBodyContent(const CreateMediaConnectFlowResponseBodyContent &) = default ;
    CreateMediaConnectFlowResponseBodyContent(CreateMediaConnectFlowResponseBodyContent &&) = default ;
    CreateMediaConnectFlowResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConnectFlowResponseBodyContent() = default ;
    CreateMediaConnectFlowResponseBodyContent& operator=(const CreateMediaConnectFlowResponseBodyContent &) = default ;
    CreateMediaConnectFlowResponseBodyContent& operator=(CreateMediaConnectFlowResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowId_ != nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline CreateMediaConnectFlowResponseBodyContent& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


  protected:
    // The flow ID.
    std::shared_ptr<string> flowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
