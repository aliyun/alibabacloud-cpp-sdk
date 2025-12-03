// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCACCESSANDUPDATEAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCACCESSANDUPDATEAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyVpcAccessAndUpdateApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcAccessAndUpdateApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedBatchWork, needBatchWork_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Refresh, refresh_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcTargetHostName, vpcTargetHostName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcAccessAndUpdateApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedBatchWork, needBatchWork_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Refresh, refresh_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcTargetHostName, vpcTargetHostName_);
    };
    ModifyVpcAccessAndUpdateApisRequest() = default ;
    ModifyVpcAccessAndUpdateApisRequest(const ModifyVpcAccessAndUpdateApisRequest &) = default ;
    ModifyVpcAccessAndUpdateApisRequest(ModifyVpcAccessAndUpdateApisRequest &&) = default ;
    ModifyVpcAccessAndUpdateApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcAccessAndUpdateApisRequest() = default ;
    ModifyVpcAccessAndUpdateApisRequest& operator=(const ModifyVpcAccessAndUpdateApisRequest &) = default ;
    ModifyVpcAccessAndUpdateApisRequest& operator=(ModifyVpcAccessAndUpdateApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->name_ == nullptr && return this->needBatchWork_ == nullptr && return this->port_ == nullptr && return this->refresh_ == nullptr && return this->securityToken_ == nullptr
        && return this->token_ == nullptr && return this->vpcId_ == nullptr && return this->vpcTargetHostName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyVpcAccessAndUpdateApisRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpcAccessAndUpdateApisRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needBatchWork Field Functions 
    bool hasNeedBatchWork() const { return this->needBatchWork_ != nullptr;};
    void deleteNeedBatchWork() { this->needBatchWork_ = nullptr;};
    inline bool needBatchWork() const { DARABONBA_PTR_GET_DEFAULT(needBatchWork_, false) };
    inline ModifyVpcAccessAndUpdateApisRequest& setNeedBatchWork(bool needBatchWork) { DARABONBA_PTR_SET_VALUE(needBatchWork_, needBatchWork) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyVpcAccessAndUpdateApisRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // refresh Field Functions 
    bool hasRefresh() const { return this->refresh_ != nullptr;};
    void deleteRefresh() { this->refresh_ = nullptr;};
    inline bool refresh() const { DARABONBA_PTR_GET_DEFAULT(refresh_, false) };
    inline ModifyVpcAccessAndUpdateApisRequest& setRefresh(bool refresh) { DARABONBA_PTR_SET_VALUE(refresh_, refresh) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyVpcAccessAndUpdateApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ModifyVpcAccessAndUpdateApisRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyVpcAccessAndUpdateApisRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcTargetHostName Field Functions 
    bool hasVpcTargetHostName() const { return this->vpcTargetHostName_ != nullptr;};
    void deleteVpcTargetHostName() { this->vpcTargetHostName_ = nullptr;};
    inline string vpcTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(vpcTargetHostName_, "") };
    inline ModifyVpcAccessAndUpdateApisRequest& setVpcTargetHostName(string vpcTargetHostName) { DARABONBA_PTR_SET_VALUE(vpcTargetHostName_, vpcTargetHostName) };


  protected:
    // The ID of the new instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the VPC authorization.
    // 
    // > 
    // 
    // *   The name of a VPC authorization cannot be changed. You cannot use this parameter to change the name of a VPC authorization.
    // 
    // *   You must set this parameter to the name of the current VPC authorization.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to update the associated API.
    // 
    // **
    // 
    // **Warning:** If you want to update the VPC authorization of a published API, you must set this parameter to true. Otherwise, the update will not be synchronized to the backend service of the API.
    std::shared_ptr<bool> needBatchWork_ = nullptr;
    // The new port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // Specifies whether to update the VPC authorization.
    // 
    // > 
    // 
    // *   If the ID of the instance in your VPC is changed but the IP address of the instance remains unchanged, you can set this parameter to true to update the VPC authorization.
    std::shared_ptr<bool> refresh_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The token of the request.
    std::shared_ptr<string> token_ = nullptr;
    // The ID of the new VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The hostname of the backend service.
    std::shared_ptr<string> vpcTargetHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
