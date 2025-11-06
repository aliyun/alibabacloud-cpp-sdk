// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddServiceSourceRequestIngressOptionsRequest.hpp>
#include <alibabacloud/models/AddServiceSourceRequestToAuthorizeSecurityGroups.hpp>
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
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->address_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->groupList_ == nullptr && return this->ingressOptionsRequest_ == nullptr && return this->name_ == nullptr
        && return this->pathList_ == nullptr && return this->source_ == nullptr && return this->toAuthorizeSecurityGroups_ == nullptr && return this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddServiceSourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AddServiceSourceRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddServiceSourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<string> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
    inline vector<string> groupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
    inline AddServiceSourceRequest& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline AddServiceSourceRequest& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // ingressOptionsRequest Field Functions 
    bool hasIngressOptionsRequest() const { return this->ingressOptionsRequest_ != nullptr;};
    void deleteIngressOptionsRequest() { this->ingressOptionsRequest_ = nullptr;};
    inline const AddServiceSourceRequestIngressOptionsRequest & ingressOptionsRequest() const { DARABONBA_PTR_GET_CONST(ingressOptionsRequest_, AddServiceSourceRequestIngressOptionsRequest) };
    inline AddServiceSourceRequestIngressOptionsRequest ingressOptionsRequest() { DARABONBA_PTR_GET(ingressOptionsRequest_, AddServiceSourceRequestIngressOptionsRequest) };
    inline AddServiceSourceRequest& setIngressOptionsRequest(const AddServiceSourceRequestIngressOptionsRequest & ingressOptionsRequest) { DARABONBA_PTR_SET_VALUE(ingressOptionsRequest_, ingressOptionsRequest) };
    inline AddServiceSourceRequest& setIngressOptionsRequest(AddServiceSourceRequestIngressOptionsRequest && ingressOptionsRequest) { DARABONBA_PTR_SET_RVALUE(ingressOptionsRequest_, ingressOptionsRequest) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddServiceSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathList Field Functions 
    bool hasPathList() const { return this->pathList_ != nullptr;};
    void deletePathList() { this->pathList_ = nullptr;};
    inline const vector<string> & pathList() const { DARABONBA_PTR_GET_CONST(pathList_, vector<string>) };
    inline vector<string> pathList() { DARABONBA_PTR_GET(pathList_, vector<string>) };
    inline AddServiceSourceRequest& setPathList(const vector<string> & pathList) { DARABONBA_PTR_SET_VALUE(pathList_, pathList) };
    inline AddServiceSourceRequest& setPathList(vector<string> && pathList) { DARABONBA_PTR_SET_RVALUE(pathList_, pathList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddServiceSourceRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // toAuthorizeSecurityGroups Field Functions 
    bool hasToAuthorizeSecurityGroups() const { return this->toAuthorizeSecurityGroups_ != nullptr;};
    void deleteToAuthorizeSecurityGroups() { this->toAuthorizeSecurityGroups_ = nullptr;};
    inline const vector<AddServiceSourceRequestToAuthorizeSecurityGroups> & toAuthorizeSecurityGroups() const { DARABONBA_PTR_GET_CONST(toAuthorizeSecurityGroups_, vector<AddServiceSourceRequestToAuthorizeSecurityGroups>) };
    inline vector<AddServiceSourceRequestToAuthorizeSecurityGroups> toAuthorizeSecurityGroups() { DARABONBA_PTR_GET(toAuthorizeSecurityGroups_, vector<AddServiceSourceRequestToAuthorizeSecurityGroups>) };
    inline AddServiceSourceRequest& setToAuthorizeSecurityGroups(const vector<AddServiceSourceRequestToAuthorizeSecurityGroups> & toAuthorizeSecurityGroups) { DARABONBA_PTR_SET_VALUE(toAuthorizeSecurityGroups_, toAuthorizeSecurityGroups) };
    inline AddServiceSourceRequest& setToAuthorizeSecurityGroups(vector<AddServiceSourceRequestToAuthorizeSecurityGroups> && toAuthorizeSecurityGroups) { DARABONBA_PTR_SET_RVALUE(toAuthorizeSecurityGroups_, toAuthorizeSecurityGroups) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddServiceSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
    std::shared_ptr<vector<string>> groupList_ = nullptr;
    // The list of service groups.
    std::shared_ptr<AddServiceSourceRequestIngressOptionsRequest> ingressOptionsRequest_ = nullptr;
    // The namespace whose resources you want to monitor.
    std::shared_ptr<string> name_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<vector<string>> pathList_ = nullptr;
    // The service source.
    // 
    // *   K8s: ACK cluster
    // *   NACOS: MSE Nacos instance
    std::shared_ptr<string> source_ = nullptr;
    // The list of security groups to be authorized. You can specify security groups to allow backend services to access data sources that you create.
    std::shared_ptr<vector<AddServiceSourceRequestToAuthorizeSecurityGroups>> toAuthorizeSecurityGroups_ = nullptr;
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
