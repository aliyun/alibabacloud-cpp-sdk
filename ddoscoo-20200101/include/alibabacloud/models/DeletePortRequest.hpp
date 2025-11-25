// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeletePortRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePortRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(FrontendProtocol, frontendProtocol_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RealServers, realServers_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePortRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(FrontendProtocol, frontendProtocol_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RealServers, realServers_);
    };
    DeletePortRequest() = default ;
    DeletePortRequest(const DeletePortRequest &) = default ;
    DeletePortRequest(DeletePortRequest &&) = default ;
    DeletePortRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePortRequest() = default ;
    DeletePortRequest& operator=(const DeletePortRequest &) = default ;
    DeletePortRequest& operator=(DeletePortRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendPort_ == nullptr
        && return this->frontendPort_ == nullptr && return this->frontendProtocol_ == nullptr && return this->instanceId_ == nullptr && return this->realServers_ == nullptr; };
    // backendPort Field Functions 
    bool hasBackendPort() const { return this->backendPort_ != nullptr;};
    void deleteBackendPort() { this->backendPort_ = nullptr;};
    inline string backendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, "") };
    inline DeletePortRequest& setBackendPort(string backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline string frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, "") };
    inline DeletePortRequest& setFrontendPort(string frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // frontendProtocol Field Functions 
    bool hasFrontendProtocol() const { return this->frontendProtocol_ != nullptr;};
    void deleteFrontendProtocol() { this->frontendProtocol_ = nullptr;};
    inline string frontendProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontendProtocol_, "") };
    inline DeletePortRequest& setFrontendProtocol(string frontendProtocol) { DARABONBA_PTR_SET_VALUE(frontendProtocol_, frontendProtocol) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeletePortRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // realServers Field Functions 
    bool hasRealServers() const { return this->realServers_ != nullptr;};
    void deleteRealServers() { this->realServers_ = nullptr;};
    inline const vector<string> & realServers() const { DARABONBA_PTR_GET_CONST(realServers_, vector<string>) };
    inline vector<string> realServers() { DARABONBA_PTR_GET(realServers_, vector<string>) };
    inline DeletePortRequest& setRealServers(const vector<string> & realServers) { DARABONBA_PTR_SET_VALUE(realServers_, realServers) };
    inline DeletePortRequest& setRealServers(vector<string> && realServers) { DARABONBA_PTR_SET_RVALUE(realServers_, realServers) };


  protected:
    // The port of the origin server. Valid values: **0** to **65535**.
    std::shared_ptr<string> backendPort_ = nullptr;
    // The forwarding port. Valid values: **0** to **65535**.
    // 
    // This parameter is required.
    std::shared_ptr<string> frontendPort_ = nullptr;
    // The type of the forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    // 
    // This parameter is required.
    std::shared_ptr<string> frontendProtocol_ = nullptr;
    // The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance to which the port forwarding rule belongs.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // An array that consists of the IP addresses of origin servers.
    std::shared_ptr<vector<string>> realServers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
