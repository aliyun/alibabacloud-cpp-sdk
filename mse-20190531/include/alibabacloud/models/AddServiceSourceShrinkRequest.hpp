// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddServiceSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddServiceSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GroupList, groupListShrink_);
      DARABONBA_PTR_TO_JSON(IngressOptionsRequest, ingressOptionsRequestShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathList, pathListShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(ToAuthorizeSecurityGroups, toAuthorizeSecurityGroupsShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddServiceSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupListShrink_);
      DARABONBA_PTR_FROM_JSON(IngressOptionsRequest, ingressOptionsRequestShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathList, pathListShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(ToAuthorizeSecurityGroups, toAuthorizeSecurityGroupsShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddServiceSourceShrinkRequest() = default ;
    AddServiceSourceShrinkRequest(const AddServiceSourceShrinkRequest &) = default ;
    AddServiceSourceShrinkRequest(AddServiceSourceShrinkRequest &&) = default ;
    AddServiceSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddServiceSourceShrinkRequest() = default ;
    AddServiceSourceShrinkRequest& operator=(const AddServiceSourceShrinkRequest &) = default ;
    AddServiceSourceShrinkRequest& operator=(AddServiceSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->address_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->groupListShrink_ == nullptr && return this->ingressOptionsRequestShrink_ == nullptr && return this->name_ == nullptr
        && return this->pathListShrink_ == nullptr && return this->source_ == nullptr && return this->toAuthorizeSecurityGroupsShrink_ == nullptr && return this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddServiceSourceShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AddServiceSourceShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddServiceSourceShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // groupListShrink Field Functions 
    bool hasGroupListShrink() const { return this->groupListShrink_ != nullptr;};
    void deleteGroupListShrink() { this->groupListShrink_ = nullptr;};
    inline string groupListShrink() const { DARABONBA_PTR_GET_DEFAULT(groupListShrink_, "") };
    inline AddServiceSourceShrinkRequest& setGroupListShrink(string groupListShrink) { DARABONBA_PTR_SET_VALUE(groupListShrink_, groupListShrink) };


    // ingressOptionsRequestShrink Field Functions 
    bool hasIngressOptionsRequestShrink() const { return this->ingressOptionsRequestShrink_ != nullptr;};
    void deleteIngressOptionsRequestShrink() { this->ingressOptionsRequestShrink_ = nullptr;};
    inline string ingressOptionsRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(ingressOptionsRequestShrink_, "") };
    inline AddServiceSourceShrinkRequest& setIngressOptionsRequestShrink(string ingressOptionsRequestShrink) { DARABONBA_PTR_SET_VALUE(ingressOptionsRequestShrink_, ingressOptionsRequestShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddServiceSourceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathListShrink Field Functions 
    bool hasPathListShrink() const { return this->pathListShrink_ != nullptr;};
    void deletePathListShrink() { this->pathListShrink_ = nullptr;};
    inline string pathListShrink() const { DARABONBA_PTR_GET_DEFAULT(pathListShrink_, "") };
    inline AddServiceSourceShrinkRequest& setPathListShrink(string pathListShrink) { DARABONBA_PTR_SET_VALUE(pathListShrink_, pathListShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddServiceSourceShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // toAuthorizeSecurityGroupsShrink Field Functions 
    bool hasToAuthorizeSecurityGroupsShrink() const { return this->toAuthorizeSecurityGroupsShrink_ != nullptr;};
    void deleteToAuthorizeSecurityGroupsShrink() { this->toAuthorizeSecurityGroupsShrink_ = nullptr;};
    inline string toAuthorizeSecurityGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(toAuthorizeSecurityGroupsShrink_, "") };
    inline AddServiceSourceShrinkRequest& setToAuthorizeSecurityGroupsShrink(string toAuthorizeSecurityGroupsShrink) { DARABONBA_PTR_SET_VALUE(toAuthorizeSecurityGroupsShrink_, toAuthorizeSecurityGroupsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddServiceSourceShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN (default): Chinese
    // *   en-US: English
    // *   ja: Japanese
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to monitor Ingress classes.
    std::shared_ptr<string> address_ = nullptr;
    // Specifies whether to update the Ingress status.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The data structure.
    std::shared_ptr<string> groupListShrink_ = nullptr;
    // The list of service groups.
    std::shared_ptr<string> ingressOptionsRequestShrink_ = nullptr;
    // The namespace whose resources you want to monitor.
    std::shared_ptr<string> name_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<string> pathListShrink_ = nullptr;
    // The service source.
    // 
    // *   K8s: ACK cluster
    // *   NACOS: MSE Nacos instance
    std::shared_ptr<string> source_ = nullptr;
    // The list of security groups to be authorized. You can specify security groups to allow backend services to access data sources that you create.
    std::shared_ptr<string> toAuthorizeSecurityGroupsShrink_ = nullptr;
    // The type of the service source.
    // 
    // *   K8s: Container Service for Kubernetes (ACK) cluster
    // *   NACOS: Nacos instance
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
