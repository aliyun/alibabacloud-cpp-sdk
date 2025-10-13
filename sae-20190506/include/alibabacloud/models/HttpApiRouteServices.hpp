// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTESERVICES_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTESERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRouteServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRouteServices& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(ServiceWeight, serviceWeight_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRouteServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(ServiceWeight, serviceWeight_);
    };
    HttpApiRouteServices() = default ;
    HttpApiRouteServices(const HttpApiRouteServices &) = default ;
    HttpApiRouteServices(HttpApiRouteServices &&) = default ;
    HttpApiRouteServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRouteServices() = default ;
    HttpApiRouteServices& operator=(const HttpApiRouteServices &) = default ;
    HttpApiRouteServices& operator=(HttpApiRouteServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->servicePort_ == nullptr && return this->serviceProtocol_ == nullptr
        && return this->serviceWeight_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline HttpApiRouteServices& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline HttpApiRouteServices& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline HttpApiRouteServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline HttpApiRouteServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int64_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
    inline HttpApiRouteServices& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline HttpApiRouteServices& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // serviceWeight Field Functions 
    bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
    void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
    inline int64_t serviceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0L) };
    inline HttpApiRouteServices& setServiceWeight(int64_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<int64_t> servicePort_ = nullptr;
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    std::shared_ptr<int64_t> serviceWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
