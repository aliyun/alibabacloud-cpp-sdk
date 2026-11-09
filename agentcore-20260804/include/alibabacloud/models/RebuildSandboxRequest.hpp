// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBUILDSANDBOXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBUILDSANDBOXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class RebuildSandboxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebuildSandboxRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
    };
    friend void from_json(const Darabonba::Json& j, RebuildSandboxRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
    };
    RebuildSandboxRequest() = default ;
    RebuildSandboxRequest(const RebuildSandboxRequest &) = default ;
    RebuildSandboxRequest(RebuildSandboxRequest &&) = default ;
    RebuildSandboxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebuildSandboxRequest() = default ;
    RebuildSandboxRequest& operator=(const RebuildSandboxRequest &) = default ;
    RebuildSandboxRequest& operator=(RebuildSandboxRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceEndpointId_ == nullptr; };
    // serviceEndpointId Field Functions 
    bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
    void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
    inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
    inline RebuildSandboxRequest& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


  protected:
    // The ID of the service registration endpoint. This parameter is optional. If you specify this parameter, the operation targets the runtime instance that corresponds to the service registration endpoint under the agent. If you omit this parameter, the default latest runtime identity is used. Pass the service registration endpoint ID instead of the service registration endpoint name. You must keep this parameter consistent when you query instances, commit rebuilds, and query nodes.
    shared_ptr<string> serviceEndpointId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
