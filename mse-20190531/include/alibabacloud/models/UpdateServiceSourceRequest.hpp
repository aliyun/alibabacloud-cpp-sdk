// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICESOURCEREQUEST_HPP_
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
  class UpdateServiceSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IngressOptionsRequest, ingressOptionsRequest_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathList, pathList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IngressOptionsRequest, ingressOptionsRequest_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathList, pathList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateServiceSourceRequest() = default ;
    UpdateServiceSourceRequest(const UpdateServiceSourceRequest &) = default ;
    UpdateServiceSourceRequest(UpdateServiceSourceRequest &&) = default ;
    UpdateServiceSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceSourceRequest() = default ;
    UpdateServiceSourceRequest& operator=(const UpdateServiceSourceRequest &) = default ;
    UpdateServiceSourceRequest& operator=(UpdateServiceSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // Specifies whether to enable Ingress.
      shared_ptr<bool> enableIngress_ {};
      // Specifies whether to update the Ingress status.
      shared_ptr<bool> enableStatus_ {};
      // Specifies whether to monitor Ingress classes.
      shared_ptr<string> ingressClass_ {};
      // The namespace whose resources you want to monitor.
      shared_ptr<string> watchNamespace_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->address_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr && this->ingressOptionsRequest_ == nullptr
        && this->name_ == nullptr && this->pathList_ == nullptr && this->source_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateServiceSourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateServiceSourceRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateServiceSourceRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateServiceSourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateServiceSourceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ingressOptionsRequest Field Functions 
    bool hasIngressOptionsRequest() const { return this->ingressOptionsRequest_ != nullptr;};
    void deleteIngressOptionsRequest() { this->ingressOptionsRequest_ = nullptr;};
    inline const UpdateServiceSourceRequest::IngressOptionsRequest & getIngressOptionsRequest() const { DARABONBA_PTR_GET_CONST(ingressOptionsRequest_, UpdateServiceSourceRequest::IngressOptionsRequest) };
    inline UpdateServiceSourceRequest::IngressOptionsRequest getIngressOptionsRequest() { DARABONBA_PTR_GET(ingressOptionsRequest_, UpdateServiceSourceRequest::IngressOptionsRequest) };
    inline UpdateServiceSourceRequest& setIngressOptionsRequest(const UpdateServiceSourceRequest::IngressOptionsRequest & ingressOptionsRequest) { DARABONBA_PTR_SET_VALUE(ingressOptionsRequest_, ingressOptionsRequest) };
    inline UpdateServiceSourceRequest& setIngressOptionsRequest(UpdateServiceSourceRequest::IngressOptionsRequest && ingressOptionsRequest) { DARABONBA_PTR_SET_RVALUE(ingressOptionsRequest_, ingressOptionsRequest) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateServiceSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathList Field Functions 
    bool hasPathList() const { return this->pathList_ != nullptr;};
    void deletePathList() { this->pathList_ = nullptr;};
    inline const vector<string> & getPathList() const { DARABONBA_PTR_GET_CONST(pathList_, vector<string>) };
    inline vector<string> getPathList() { DARABONBA_PTR_GET(pathList_, vector<string>) };
    inline UpdateServiceSourceRequest& setPathList(const vector<string> & pathList) { DARABONBA_PTR_SET_VALUE(pathList_, pathList) };
    inline UpdateServiceSourceRequest& setPathList(vector<string> && pathList) { DARABONBA_PTR_SET_RVALUE(pathList_, pathList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateServiceSourceRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateServiceSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese.
    // *   en: English.
    shared_ptr<string> acceptLanguage_ {};
    // The address.
    shared_ptr<string> address_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the service source.
    shared_ptr<int64_t> id_ {};
    // The configurations of Ingress resources.
    shared_ptr<UpdateServiceSourceRequest::IngressOptionsRequest> ingressOptionsRequest_ {};
    // The name.
    shared_ptr<string> name_ {};
    // An array of service root paths.
    shared_ptr<vector<string>> pathList_ {};
    // The service source. Valid values:
    // 
    // *   K8s: ACK cluster.
    // *   MSE: Nacos instance.
    shared_ptr<string> source_ {};
    // The type of the service source. Valid values:
    // 
    // *   K8s: ACK cluster.
    // *   NACOS: Nacos instance.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
