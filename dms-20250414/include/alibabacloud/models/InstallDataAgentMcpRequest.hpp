// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLDATAAGENTMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLDATAAGENTMCPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class InstallDataAgentMcpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallDataAgentMcpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(FromJson, fromJson_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedUidInHeader, needUidInHeader_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(TransportType, transportType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallDataAgentMcpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(FromJson, fromJson_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedUidInHeader, needUidInHeader_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(TransportType, transportType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    InstallDataAgentMcpRequest() = default ;
    InstallDataAgentMcpRequest(const InstallDataAgentMcpRequest &) = default ;
    InstallDataAgentMcpRequest(InstallDataAgentMcpRequest &&) = default ;
    InstallDataAgentMcpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallDataAgentMcpRequest() = default ;
    InstallDataAgentMcpRequest& operator=(const InstallDataAgentMcpRequest &) = default ;
    InstallDataAgentMcpRequest& operator=(InstallDataAgentMcpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->endpoint_ == nullptr && this->fromJson_ == nullptr && this->headers_ == nullptr && this->name_ == nullptr && this->needUidInHeader_ == nullptr
        && this->netType_ == nullptr && this->transportType_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline InstallDataAgentMcpRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline InstallDataAgentMcpRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // fromJson Field Functions 
    bool hasFromJson() const { return this->fromJson_ != nullptr;};
    void deleteFromJson() { this->fromJson_ = nullptr;};
    inline string getFromJson() const { DARABONBA_PTR_GET_DEFAULT(fromJson_, "") };
    inline InstallDataAgentMcpRequest& setFromJson(string fromJson) { DARABONBA_PTR_SET_VALUE(fromJson_, fromJson) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline InstallDataAgentMcpRequest& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InstallDataAgentMcpRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needUidInHeader Field Functions 
    bool hasNeedUidInHeader() const { return this->needUidInHeader_ != nullptr;};
    void deleteNeedUidInHeader() { this->needUidInHeader_ = nullptr;};
    inline bool getNeedUidInHeader() const { DARABONBA_PTR_GET_DEFAULT(needUidInHeader_, false) };
    inline InstallDataAgentMcpRequest& setNeedUidInHeader(bool needUidInHeader) { DARABONBA_PTR_SET_VALUE(needUidInHeader_, needUidInHeader) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline InstallDataAgentMcpRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // transportType Field Functions 
    bool hasTransportType() const { return this->transportType_ != nullptr;};
    void deleteTransportType() { this->transportType_ = nullptr;};
    inline string getTransportType() const { DARABONBA_PTR_GET_DEFAULT(transportType_, "") };
    inline InstallDataAgentMcpRequest& setTransportType(string transportType) { DARABONBA_PTR_SET_VALUE(transportType_, transportType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline InstallDataAgentMcpRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline InstallDataAgentMcpRequest& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline InstallDataAgentMcpRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The brief description of the artifact. This parameter can be empty.
    shared_ptr<string> description_ {};
    // The endpoint of the MCP instance.
    shared_ptr<string> endpoint_ {};
    // The JSON used to create the MCP.
    shared_ptr<string> fromJson_ {};
    // The request header settings.
    shared_ptr<string> headers_ {};
    // The MCP name.
    shared_ptr<string> name_ {};
    // Specifies whether to include the Alibaba Cloud UID in the request header.
    shared_ptr<bool> needUidInHeader_ {};
    // The network type. Valid values:
    // 
    // - `vpc`: virtual private cloud.
    // - `public`: public network.
    shared_ptr<string> netType_ {};
    // The transport channel type. Valid values: streamablehttp and sse.
    shared_ptr<string> transportType_ {};
    // VPC ID
    shared_ptr<string> vpcId_ {};
    // The vSwitch ID.
    shared_ptr<string> vswId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
