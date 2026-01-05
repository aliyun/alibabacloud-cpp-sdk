// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateLoadBalancerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
    };
    UpdateLoadBalancerAttributeRequest() = default ;
    UpdateLoadBalancerAttributeRequest(const UpdateLoadBalancerAttributeRequest &) = default ;
    UpdateLoadBalancerAttributeRequest(UpdateLoadBalancerAttributeRequest &&) = default ;
    UpdateLoadBalancerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerAttributeRequest() = default ;
    UpdateLoadBalancerAttributeRequest& operator=(const UpdateLoadBalancerAttributeRequest &) = default ;
    UpdateLoadBalancerAttributeRequest& operator=(UpdateLoadBalancerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModificationProtectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModificationProtectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ModificationProtectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ModificationProtectionConfig() = default ;
      ModificationProtectionConfig(const ModificationProtectionConfig &) = default ;
      ModificationProtectionConfig(ModificationProtectionConfig &&) = default ;
      ModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModificationProtectionConfig() = default ;
      ModificationProtectionConfig& operator=(const ModificationProtectionConfig &) = default ;
      ModificationProtectionConfig& operator=(ModificationProtectionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr; };
      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The reason for enabling the configuration read-only mode.
      // 
      // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
      // 
      // This parameter takes effect only when **Status** is set to **ConsoleProtection**.
      shared_ptr<string> reason_ {};
      // Specifies whether to enable the configuration read-only mode. Valid values:
      // 
      // *   **NonProtection**: disables the configuration read-only mode. In this case, the value of the **Reason** parameter that you specify does not take effect. If you set the value of **Reason**, the value is cleared.
      // *   **ConsoleProtection**: enables the configuration read-only mode. In this case, the value of the **Reason** parameter that you specify takes effect.****
      // 
      // >  If the parameter is set to **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the ALB instance in the ALB console. However, you can call API operations to modify the configurations of the ALB instance.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->modificationProtectionConfig_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLoadBalancerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateLoadBalancerAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline UpdateLoadBalancerAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline UpdateLoadBalancerAttributeRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig & getModificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig) };
    inline UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig getModificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig) };
    inline UpdateLoadBalancerAttributeRequest& setModificationProtectionConfig(const UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline UpdateLoadBalancerAttributeRequest& setModificationProtectionConfig(UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: performs a dry run and sends the request. If the request passes the dry run, a `2xx HTTP` status code is returned and the operation is performed. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The ID of the ALB instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The name of the ALB instance. The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> loadBalancerName_ {};
    // The configuration read-only mode settings.
    shared_ptr<UpdateLoadBalancerAttributeRequest::ModificationProtectionConfig> modificationProtectionConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
