// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSANDBOXREBUILDOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSANDBOXREBUILDOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetSandboxRebuildOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSandboxRebuildOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSandboxRebuildOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
    };
    GetSandboxRebuildOperationRequest() = default ;
    GetSandboxRebuildOperationRequest(const GetSandboxRebuildOperationRequest &) = default ;
    GetSandboxRebuildOperationRequest(GetSandboxRebuildOperationRequest &&) = default ;
    GetSandboxRebuildOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSandboxRebuildOperationRequest() = default ;
    GetSandboxRebuildOperationRequest& operator=(const GetSandboxRebuildOperationRequest &) = default ;
    GetSandboxRebuildOperationRequest& operator=(GetSandboxRebuildOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceEndpointId_ == nullptr; };
    // serviceEndpointId Field Functions 
    bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
    void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
    inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
    inline GetSandboxRebuildOperationRequest& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


  protected:
    // The service registration endpoint ID. This parameter is optional. If specified, the operation targets the runtime instance corresponding to the endpoint under the agent. If omitted, the default latest runtime identity is used. Pass the endpoint ID instead of the endpoint name. Keep this parameter consistent when querying instances, committing rebuilds, and querying nodes.
    shared_ptr<string> serviceEndpointId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
