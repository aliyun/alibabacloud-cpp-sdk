// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
    };
    GetMediaConnectFlowInputRequest() = default ;
    GetMediaConnectFlowInputRequest(const GetMediaConnectFlowInputRequest &) = default ;
    GetMediaConnectFlowInputRequest(GetMediaConnectFlowInputRequest &&) = default ;
    GetMediaConnectFlowInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowInputRequest() = default ;
    GetMediaConnectFlowInputRequest& operator=(const GetMediaConnectFlowInputRequest &) = default ;
    GetMediaConnectFlowInputRequest& operator=(GetMediaConnectFlowInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetMediaConnectFlowInputRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


  protected:
    // The flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
