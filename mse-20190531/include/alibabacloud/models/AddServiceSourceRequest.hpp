// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddServiceSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddServiceSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(IngressOptionsRequest, ingressOptionsRequest_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathList, pathList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(ToAuthorizeSecurityGroups, toAuthorizeSecurityGroups_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddServiceSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(IngressOptionsRequest, ingressOptionsRequest_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathList, pathList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(ToAuthorizeSecurityGroups, toAuthorizeSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddServiceSourceRequest() = default ;
    AddServiceSourceRequest(const AddServiceSourceRequest &) = default ;
    AddServiceSourceRequest(AddServiceSourceRequest &&) = default ;
    AddServiceSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddServiceSourceRequest() = default ;
    AddServiceSourceRequest& operator=(const AddServiceSourceRequest &) = default ;
    AddServiceSourceRequest& operator=(AddServiceSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToAuthorizeSecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToAuthorizeSecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, ToAuthorizeSecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      };
      ToAuthorizeSecurityGroups() = default ;
      ToAuthorizeSecurityGroups(const ToAuthorizeSecurityGroups &) = default ;
      ToAuthorizeSecurityGroups(ToAuthorizeSecurityGroups &&) = default ;
      ToAuthorizeSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToAuthorizeSecurityGroups() = default ;
      ToAuthorizeSecurityGroups& operator=(const ToAuthorizeSecurityGroups &) = default ;
      ToAuthorizeSecurityGroups& operator=(ToAuthorizeSecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->portRange_ == nullptr && this->securityGroupId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ToAuthorizeSecurityGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline ToAuthorizeSecurityGroups& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline ToAuthorizeSecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    protected:
      // The description of the authorization record.
      shared_ptr<string> description_ {};
      // The authorized port range of the security group. You can select multiple port ranges. Separate each port range with a comma (,).
      shared_ptr<string> portRange_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
    };

    class IngressOptionsRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressOptionsRequest& obj) { 
        DARABONBA_PTR_TO_JSON(EnableIngress, enableIngress_);
        DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_TO_JSON(IngressClass, ingressClass_);
        DARABONBA_PTR_TO_JSON(WatchNamespace, watchNamespace_);
      };
      friend void from_json(const Darabonba::Json& j, IngressOptionsRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableIngress, enableIngress_);
        DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_FROM_JSON(IngressClass, ingressClass_);
        DARABONBA_PTR_FROM_JSON(WatchNamespace, watchNamespace_);
      };
      IngressOptionsRequest() = default ;
      IngressOptionsRequest(const IngressOptionsRequest &) = default ;
      IngressOptionsRequest(IngressOptionsRequest &&) = default ;
      IngressOptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressOptionsRequest() = default ;
      IngressOptionsRequest& operator=(const IngressOptionsRequest &) = default ;
      IngressOptionsRequest& operator=(IngressOptionsRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableIngress_ == nullptr
        && this->enableStatus_ == nullptr && this->ingressClass_ == nullptr && this->watchNamespace_ == nullptr; };
      // enableIngress Field Functions 
      bool hasEnableIngress() const { return this->enableIngress_ != nullptr;};
      void deleteEnableIngress() { this->enableIngress_ = nullptr;};
      inline bool getEnableIngress() const { DARABONBA_PTR_GET_DEFAULT(enableIngress_, false) };
      inline IngressOptionsRequest& setEnableIngress(bool enableIngress) { DARABONBA_PTR_SET_VALUE(enableIngress_, enableIngress) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline bool getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
      inline IngressOptionsRequest& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // ingressClass Field Functions 
      bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
      void deleteIngressClass() { this->ingressClass_ = nullptr;};
      inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
      inline IngressOptionsRequest& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


      // watchNamespace Field Functions 
      bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
      void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
      inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
      inline IngressOptionsRequest& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


    protected:
      // The group to which the service belongs.
      shared_ptr<bool> enableIngress_ {};
      // The language of the response. Valid values:
      // 
      // *   zh-CN: Chinese. This is the default value.
      // *   en-US: English.
      // *   ja: Japanese.
      shared_ptr<bool> enableStatus_ {};
      // An array of service root paths.
      shared_ptr<string> ingressClass_ {};
      // The root path of the service.
      shared_ptr<string> watchNamespace_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->address_ == nullptr && this->gatewayUniqueId_ == nullptr && this->groupList_ == nullptr && this->ingressOptionsRequest_ == nullptr && this->name_ == nullptr
        && this->pathList_ == nullptr && this->source_ == nullptr && this->toAuthorizeSecurityGroups_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddServiceSourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AddServiceSourceRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddServiceSourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<string> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
    inline vector<string> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
    inline AddServiceSourceRequest& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline AddServiceSourceRequest& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // ingressOptionsRequest Field Functions 
    bool hasIngressOptionsRequest() const { return this->ingressOptionsRequest_ != nullptr;};
    void deleteIngressOptionsRequest() { this->ingressOptionsRequest_ = nullptr;};
    inline const AddServiceSourceRequest::IngressOptionsRequest & getIngressOptionsRequest() const { DARABONBA_PTR_GET_CONST(ingressOptionsRequest_, AddServiceSourceRequest::IngressOptionsRequest) };
    inline AddServiceSourceRequest::IngressOptionsRequest getIngressOptionsRequest() { DARABONBA_PTR_GET(ingressOptionsRequest_, AddServiceSourceRequest::IngressOptionsRequest) };
    inline AddServiceSourceRequest& setIngressOptionsRequest(const AddServiceSourceRequest::IngressOptionsRequest & ingressOptionsRequest) { DARABONBA_PTR_SET_VALUE(ingressOptionsRequest_, ingressOptionsRequest) };
    inline AddServiceSourceRequest& setIngressOptionsRequest(AddServiceSourceRequest::IngressOptionsRequest && ingressOptionsRequest) { DARABONBA_PTR_SET_RVALUE(ingressOptionsRequest_, ingressOptionsRequest) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddServiceSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathList Field Functions 
    bool hasPathList() const { return this->pathList_ != nullptr;};
    void deletePathList() { this->pathList_ = nullptr;};
    inline const vector<string> & getPathList() const { DARABONBA_PTR_GET_CONST(pathList_, vector<string>) };
    inline vector<string> getPathList() { DARABONBA_PTR_GET(pathList_, vector<string>) };
    inline AddServiceSourceRequest& setPathList(const vector<string> & pathList) { DARABONBA_PTR_SET_VALUE(pathList_, pathList) };
    inline AddServiceSourceRequest& setPathList(vector<string> && pathList) { DARABONBA_PTR_SET_RVALUE(pathList_, pathList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddServiceSourceRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // toAuthorizeSecurityGroups Field Functions 
    bool hasToAuthorizeSecurityGroups() const { return this->toAuthorizeSecurityGroups_ != nullptr;};
    void deleteToAuthorizeSecurityGroups() { this->toAuthorizeSecurityGroups_ = nullptr;};
    inline const vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups> & getToAuthorizeSecurityGroups() const { DARABONBA_PTR_GET_CONST(toAuthorizeSecurityGroups_, vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups>) };
    inline vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups> getToAuthorizeSecurityGroups() { DARABONBA_PTR_GET(toAuthorizeSecurityGroups_, vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups>) };
    inline AddServiceSourceRequest& setToAuthorizeSecurityGroups(const vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups> & toAuthorizeSecurityGroups) { DARABONBA_PTR_SET_VALUE(toAuthorizeSecurityGroups_, toAuthorizeSecurityGroups) };
    inline AddServiceSourceRequest& setToAuthorizeSecurityGroups(vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups> && toAuthorizeSecurityGroups) { DARABONBA_PTR_SET_RVALUE(toAuthorizeSecurityGroups_, toAuthorizeSecurityGroups) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddServiceSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN (default): Chinese
    // *   en-US: English
    // *   ja: Japanese
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to monitor Ingress classes.
    shared_ptr<string> address_ {};
    // Specifies whether to update the Ingress status.
    shared_ptr<string> gatewayUniqueId_ {};
    // The data structure.
    shared_ptr<vector<string>> groupList_ {};
    // The list of service groups.
    shared_ptr<AddServiceSourceRequest::IngressOptionsRequest> ingressOptionsRequest_ {};
    // The namespace whose resources you want to monitor.
    shared_ptr<string> name_ {};
    // The HTTP status code returned.
    shared_ptr<vector<string>> pathList_ {};
    // The service source.
    // 
    // *   K8s: ACK cluster
    // *   NACOS: MSE Nacos instance
    shared_ptr<string> source_ {};
    // The list of security groups to be authorized. You can specify security groups to allow backend services to access data sources that you create.
    shared_ptr<vector<AddServiceSourceRequest::ToAuthorizeSecurityGroups>> toAuthorizeSecurityGroups_ {};
    // The type of the service source.
    // 
    // *   K8s: Container Service for Kubernetes (ACK) cluster
    // *   NACOS: Nacos instance
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
