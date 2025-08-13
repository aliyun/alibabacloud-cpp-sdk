// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateServiceSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IngressOptionsRequest, ingressOptionsRequestShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathList, pathListShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IngressOptionsRequest, ingressOptionsRequestShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathList, pathListShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateServiceSourceShrinkRequest() = default ;
    UpdateServiceSourceShrinkRequest(const UpdateServiceSourceShrinkRequest &) = default ;
    UpdateServiceSourceShrinkRequest(UpdateServiceSourceShrinkRequest &&) = default ;
    UpdateServiceSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceSourceShrinkRequest() = default ;
    UpdateServiceSourceShrinkRequest& operator=(const UpdateServiceSourceShrinkRequest &) = default ;
    UpdateServiceSourceShrinkRequest& operator=(UpdateServiceSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->address_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->id_ != nullptr && this->ingressOptionsRequestShrink_ != nullptr
        && this->name_ != nullptr && this->pathListShrink_ != nullptr && this->source_ != nullptr && this->type_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateServiceSourceShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateServiceSourceShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateServiceSourceShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateServiceSourceShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateServiceSourceShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ingressOptionsRequestShrink Field Functions 
    bool hasIngressOptionsRequestShrink() const { return this->ingressOptionsRequestShrink_ != nullptr;};
    void deleteIngressOptionsRequestShrink() { this->ingressOptionsRequestShrink_ = nullptr;};
    inline string ingressOptionsRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(ingressOptionsRequestShrink_, "") };
    inline UpdateServiceSourceShrinkRequest& setIngressOptionsRequestShrink(string ingressOptionsRequestShrink) { DARABONBA_PTR_SET_VALUE(ingressOptionsRequestShrink_, ingressOptionsRequestShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateServiceSourceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathListShrink Field Functions 
    bool hasPathListShrink() const { return this->pathListShrink_ != nullptr;};
    void deletePathListShrink() { this->pathListShrink_ = nullptr;};
    inline string pathListShrink() const { DARABONBA_PTR_GET_DEFAULT(pathListShrink_, "") };
    inline UpdateServiceSourceShrinkRequest& setPathListShrink(string pathListShrink) { DARABONBA_PTR_SET_VALUE(pathListShrink_, pathListShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateServiceSourceShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateServiceSourceShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese.
    // *   en: English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The address.
    std::shared_ptr<string> address_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the service source.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The configurations of Ingress resources.
    std::shared_ptr<string> ingressOptionsRequestShrink_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // An array of service root paths.
    std::shared_ptr<string> pathListShrink_ = nullptr;
    // The service source. Valid values:
    // 
    // *   K8s: ACK cluster.
    // *   MSE: Nacos instance.
    std::shared_ptr<string> source_ = nullptr;
    // The type of the service source. Valid values:
    // 
    // *   K8s: ACK cluster.
    // *   NACOS: Nacos instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
