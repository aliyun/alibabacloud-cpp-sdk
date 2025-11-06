// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PULLSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class PullServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PullServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    PullServicesRequest() = default ;
    PullServicesRequest(const PullServicesRequest &) = default ;
    PullServicesRequest(PullServicesRequest &&) = default ;
    PullServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullServicesRequest() = default ;
    PullServicesRequest& operator=(const PullServicesRequest &) = default ;
    PullServicesRequest& operator=(PullServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->namespace_ == nullptr && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline PullServicesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline PullServicesRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PullServicesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline PullServicesRequest& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline PullServicesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    // The type of the service source.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
