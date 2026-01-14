// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    GetServiceListRequest() = default ;
    GetServiceListRequest(const GetServiceListRequest &) = default ;
    GetServiceListRequest(GetServiceListRequest &&) = default ;
    GetServiceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListRequest() = default ;
    GetServiceListRequest& operator=(const GetServiceListRequest &) = default ;
    GetServiceListRequest& operator=(GetServiceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appId_ == nullptr && this->ip_ == nullptr && this->region_ == nullptr && this->serviceName_ == nullptr && this->serviceType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetServiceListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetServiceListRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetServiceListRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetServiceListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceListRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceListRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The language of the response.
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The IP address.
    shared_ptr<string> ip_ {};
    // The ID of the region.
    shared_ptr<string> region_ {};
    // The name of the service.
    shared_ptr<string> serviceName_ {};
    // The type of the framework.
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
