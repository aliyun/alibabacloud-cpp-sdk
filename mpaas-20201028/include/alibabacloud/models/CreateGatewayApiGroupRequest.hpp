// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYAPIGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYAPIGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateGatewayApiGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayApiGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_ANY_TO_JSON(Centers, centers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EnableMTLS, enableMTLS_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpsModel, httpsModel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_TO_JSON(RegionMode, regionMode_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcModel, vpcModel_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayApiGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_ANY_FROM_JSON(Centers, centers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EnableMTLS, enableMTLS_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpsModel, httpsModel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_FROM_JSON(RegionMode, regionMode_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpstreamType, upstreamType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcModel, vpcModel_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateGatewayApiGroupRequest() = default ;
    CreateGatewayApiGroupRequest(const CreateGatewayApiGroupRequest &) = default ;
    CreateGatewayApiGroupRequest(CreateGatewayApiGroupRequest &&) = default ;
    CreateGatewayApiGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayApiGroupRequest() = default ;
    CreateGatewayApiGroupRequest& operator=(const CreateGatewayApiGroupRequest &) = default ;
    CreateGatewayApiGroupRequest& operator=(CreateGatewayApiGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->centers_ == nullptr && this->description_ == nullptr && this->domainName_ == nullptr && this->enableMTLS_ == nullptr && this->groupName_ == nullptr
        && this->host_ == nullptr && this->httpsModel_ == nullptr && this->instanceId_ == nullptr && this->instancePort_ == nullptr && this->regionMode_ == nullptr
        && this->tenantId_ == nullptr && this->timeout_ == nullptr && this->upstreamType_ == nullptr && this->vpcId_ == nullptr && this->vpcModel_ == nullptr
        && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateGatewayApiGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // centers Field Functions 
    bool hasCenters() const { return this->centers_ != nullptr;};
    void deleteCenters() { this->centers_ = nullptr;};
    inline     const Darabonba::Json & getCenters() const { DARABONBA_GET(centers_) };
    Darabonba::Json & getCenters() { DARABONBA_GET(centers_) };
    inline CreateGatewayApiGroupRequest& setCenters(const Darabonba::Json & centers) { DARABONBA_SET_VALUE(centers_, centers) };
    inline CreateGatewayApiGroupRequest& setCenters(Darabonba::Json && centers) { DARABONBA_SET_RVALUE(centers_, centers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGatewayApiGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateGatewayApiGroupRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // enableMTLS Field Functions 
    bool hasEnableMTLS() const { return this->enableMTLS_ != nullptr;};
    void deleteEnableMTLS() { this->enableMTLS_ = nullptr;};
    inline bool getEnableMTLS() const { DARABONBA_PTR_GET_DEFAULT(enableMTLS_, false) };
    inline CreateGatewayApiGroupRequest& setEnableMTLS(bool enableMTLS) { DARABONBA_PTR_SET_VALUE(enableMTLS_, enableMTLS) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateGatewayApiGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateGatewayApiGroupRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpsModel Field Functions 
    bool hasHttpsModel() const { return this->httpsModel_ != nullptr;};
    void deleteHttpsModel() { this->httpsModel_ = nullptr;};
    inline bool getHttpsModel() const { DARABONBA_PTR_GET_DEFAULT(httpsModel_, false) };
    inline CreateGatewayApiGroupRequest& setHttpsModel(bool httpsModel) { DARABONBA_PTR_SET_VALUE(httpsModel_, httpsModel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateGatewayApiGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instancePort Field Functions 
    bool hasInstancePort() const { return this->instancePort_ != nullptr;};
    void deleteInstancePort() { this->instancePort_ = nullptr;};
    inline int32_t getInstancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
    inline CreateGatewayApiGroupRequest& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


    // regionMode Field Functions 
    bool hasRegionMode() const { return this->regionMode_ != nullptr;};
    void deleteRegionMode() { this->regionMode_ = nullptr;};
    inline bool getRegionMode() const { DARABONBA_PTR_GET_DEFAULT(regionMode_, false) };
    inline CreateGatewayApiGroupRequest& setRegionMode(bool regionMode) { DARABONBA_PTR_SET_VALUE(regionMode_, regionMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateGatewayApiGroupRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateGatewayApiGroupRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // upstreamType Field Functions 
    bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
    void deleteUpstreamType() { this->upstreamType_ = nullptr;};
    inline string getUpstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
    inline CreateGatewayApiGroupRequest& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGatewayApiGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcModel Field Functions 
    bool hasVpcModel() const { return this->vpcModel_ != nullptr;};
    void deleteVpcModel() { this->vpcModel_ = nullptr;};
    inline bool getVpcModel() const { DARABONBA_PTR_GET_DEFAULT(vpcModel_, false) };
    inline CreateGatewayApiGroupRequest& setVpcModel(bool vpcModel) { DARABONBA_PTR_SET_VALUE(vpcModel_, vpcModel) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateGatewayApiGroupRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    Darabonba::Json centers_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<bool> enableMTLS_ {};
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    shared_ptr<string> host_ {};
    shared_ptr<bool> httpsModel_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> instancePort_ {};
    shared_ptr<bool> regionMode_ {};
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // This parameter is required.
    shared_ptr<int32_t> timeout_ {};
    // This parameter is required.
    shared_ptr<string> upstreamType_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<bool> vpcModel_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
