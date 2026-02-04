// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamNoLooseSentinelEnabled, paramNoLooseSentinelEnabled_);
      DARABONBA_PTR_TO_JSON(ParamNoLooseSentinelPasswordFreeAccess, paramNoLooseSentinelPasswordFreeAccess_);
      DARABONBA_PTR_TO_JSON(ParamNoLooseSentinelPasswordFreeCommands, paramNoLooseSentinelPasswordFreeCommands_);
      DARABONBA_PTR_TO_JSON(ParamReplMode, paramReplMode_);
      DARABONBA_PTR_TO_JSON(ParamSemisyncReplTimeout, paramSemisyncReplTimeout_);
      DARABONBA_PTR_TO_JSON(ParamSentinelCompatEnable, paramSentinelCompatEnable_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamNoLooseSentinelEnabled, paramNoLooseSentinelEnabled_);
      DARABONBA_PTR_FROM_JSON(ParamNoLooseSentinelPasswordFreeAccess, paramNoLooseSentinelPasswordFreeAccess_);
      DARABONBA_PTR_FROM_JSON(ParamNoLooseSentinelPasswordFreeCommands, paramNoLooseSentinelPasswordFreeCommands_);
      DARABONBA_PTR_FROM_JSON(ParamReplMode, paramReplMode_);
      DARABONBA_PTR_FROM_JSON(ParamSemisyncReplTimeout, paramSemisyncReplTimeout_);
      DARABONBA_PTR_FROM_JSON(ParamSentinelCompatEnable, paramSentinelCompatEnable_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest(ModifyInstanceConfigRequest &&) = default ;
    ModifyInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest& operator=(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest& operator=(ModifyInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->paramNoLooseSentinelEnabled_ == nullptr && this->paramNoLooseSentinelPasswordFreeAccess_ == nullptr
        && this->paramNoLooseSentinelPasswordFreeCommands_ == nullptr && this->paramReplMode_ == nullptr && this->paramSemisyncReplTimeout_ == nullptr && this->paramSentinelCompatEnable_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyInstanceConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramNoLooseSentinelEnabled Field Functions 
    bool hasParamNoLooseSentinelEnabled() const { return this->paramNoLooseSentinelEnabled_ != nullptr;};
    void deleteParamNoLooseSentinelEnabled() { this->paramNoLooseSentinelEnabled_ = nullptr;};
    inline string getParamNoLooseSentinelEnabled() const { DARABONBA_PTR_GET_DEFAULT(paramNoLooseSentinelEnabled_, "") };
    inline ModifyInstanceConfigRequest& setParamNoLooseSentinelEnabled(string paramNoLooseSentinelEnabled) { DARABONBA_PTR_SET_VALUE(paramNoLooseSentinelEnabled_, paramNoLooseSentinelEnabled) };


    // paramNoLooseSentinelPasswordFreeAccess Field Functions 
    bool hasParamNoLooseSentinelPasswordFreeAccess() const { return this->paramNoLooseSentinelPasswordFreeAccess_ != nullptr;};
    void deleteParamNoLooseSentinelPasswordFreeAccess() { this->paramNoLooseSentinelPasswordFreeAccess_ = nullptr;};
    inline string getParamNoLooseSentinelPasswordFreeAccess() const { DARABONBA_PTR_GET_DEFAULT(paramNoLooseSentinelPasswordFreeAccess_, "") };
    inline ModifyInstanceConfigRequest& setParamNoLooseSentinelPasswordFreeAccess(string paramNoLooseSentinelPasswordFreeAccess) { DARABONBA_PTR_SET_VALUE(paramNoLooseSentinelPasswordFreeAccess_, paramNoLooseSentinelPasswordFreeAccess) };


    // paramNoLooseSentinelPasswordFreeCommands Field Functions 
    bool hasParamNoLooseSentinelPasswordFreeCommands() const { return this->paramNoLooseSentinelPasswordFreeCommands_ != nullptr;};
    void deleteParamNoLooseSentinelPasswordFreeCommands() { this->paramNoLooseSentinelPasswordFreeCommands_ = nullptr;};
    inline string getParamNoLooseSentinelPasswordFreeCommands() const { DARABONBA_PTR_GET_DEFAULT(paramNoLooseSentinelPasswordFreeCommands_, "") };
    inline ModifyInstanceConfigRequest& setParamNoLooseSentinelPasswordFreeCommands(string paramNoLooseSentinelPasswordFreeCommands) { DARABONBA_PTR_SET_VALUE(paramNoLooseSentinelPasswordFreeCommands_, paramNoLooseSentinelPasswordFreeCommands) };


    // paramReplMode Field Functions 
    bool hasParamReplMode() const { return this->paramReplMode_ != nullptr;};
    void deleteParamReplMode() { this->paramReplMode_ = nullptr;};
    inline string getParamReplMode() const { DARABONBA_PTR_GET_DEFAULT(paramReplMode_, "") };
    inline ModifyInstanceConfigRequest& setParamReplMode(string paramReplMode) { DARABONBA_PTR_SET_VALUE(paramReplMode_, paramReplMode) };


    // paramSemisyncReplTimeout Field Functions 
    bool hasParamSemisyncReplTimeout() const { return this->paramSemisyncReplTimeout_ != nullptr;};
    void deleteParamSemisyncReplTimeout() { this->paramSemisyncReplTimeout_ = nullptr;};
    inline string getParamSemisyncReplTimeout() const { DARABONBA_PTR_GET_DEFAULT(paramSemisyncReplTimeout_, "") };
    inline ModifyInstanceConfigRequest& setParamSemisyncReplTimeout(string paramSemisyncReplTimeout) { DARABONBA_PTR_SET_VALUE(paramSemisyncReplTimeout_, paramSemisyncReplTimeout) };


    // paramSentinelCompatEnable Field Functions 
    bool hasParamSentinelCompatEnable() const { return this->paramSentinelCompatEnable_ != nullptr;};
    void deleteParamSentinelCompatEnable() { this->paramSentinelCompatEnable_ = nullptr;};
    inline string getParamSentinelCompatEnable() const { DARABONBA_PTR_GET_DEFAULT(paramSentinelCompatEnable_, "") };
    inline ModifyInstanceConfigRequest& setParamSentinelCompatEnable(string paramSentinelCompatEnable) { DARABONBA_PTR_SET_VALUE(paramSentinelCompatEnable_, paramSentinelCompatEnable) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyInstanceConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // 需修改的实例参数，格式为JSON，修改后的值会覆盖原来的值。例如您只希望修改**maxmemory-policy**参数为**noeviction**，您可以传入`{"maxmemory-policy":"noeviction"}`。
    // > 关于各参数的详细说明，请参见[参数说明](https://help.aliyun.com/document_detail/259681.html)。
    shared_ptr<string> config_ {};
    // 实例ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 哨兵兼容模式，适用于非集群实例。取值说明：
    // * **no**（默认）：未开启
    // * **yes**：开启
    // > 更多信息请参见[Sentinel兼容模式](https://help.aliyun.com/document_detail/178911.html)。
    shared_ptr<string> paramNoLooseSentinelEnabled_ {};
    // 开启哨兵模式时，是否允许免密执行Sentinel相关命令，取值说明：
    // * **no**（默认）：关闭。
    // * **yes**：开启。开启后，可以在任意连接上免密执行Sentinel命令以及使用SENTINEL命令监听+switch-master通道。
    shared_ptr<string> paramNoLooseSentinelPasswordFreeAccess_ {};
    // 启用哨兵模式及ParamNoLooseSentinelPasswordFreeAccess参数后，可通过本参数添加额外的免密命令列表（默认为空）。
    // > * 设置后可在任意连接上无需密码执行对应命令，请谨慎操作。
    // > * 命令需使用小写字母，多个命令以英文逗号(,)分隔。
    shared_ptr<string> paramNoLooseSentinelPasswordFreeCommands_ {};
    // 同步模式：
    // * **async**（默认）：异步
    // * **semisync**：半同步
    shared_ptr<string> paramReplMode_ {};
    // 半同步模式的降级阈值。仅半同步支持配置该参数，单位为ms，取值范围为10~60000，默认为500。
    // > * 当同步延迟超出该阈值时，同步模式会自动转为异步，当同步延迟消除后，同步模式会自动转换为半同步。
    // > * 仅Tair企业版实例支持，该功能公测中。
    shared_ptr<string> paramSemisyncReplTimeout_ {};
    // 哨兵兼容模式，适用于集群架构代理连接模式或读写分离架构的实例，取值说明：
    // * **0**（默认）：未开启
    // * **1**：开启
    // > 更多信息请参见[Sentinel兼容模式](https://help.aliyun.com/document_detail/178911.html)。
    shared_ptr<string> paramSentinelCompatEnable_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
