// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListServiceSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListServiceSourceRequest() = default ;
    ListServiceSourceRequest(const ListServiceSourceRequest &) = default ;
    ListServiceSourceRequest(ListServiceSourceRequest &&) = default ;
    ListServiceSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSourceRequest() = default ;
    ListServiceSourceRequest& operator=(const ListServiceSourceRequest &) = default ;
    ListServiceSourceRequest& operator=(ListServiceSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->source_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListServiceSourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListServiceSourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListServiceSourceRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // Specifies the type of the returned service source. If this parameter is not specified, service sources of all types are returned. Valid values:
    // 
    // *   K8s
    // *   MSE
    // *   MSE_ZK
    // *   SAE
    // *   EDAS
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
