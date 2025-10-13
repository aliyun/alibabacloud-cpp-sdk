// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSERVICEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSERVICEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeAppServiceDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppServiceDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_TO_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_TO_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppServiceDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_FROM_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_FROM_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
    };
    DescribeAppServiceDetailRequest() = default ;
    DescribeAppServiceDetailRequest(const DescribeAppServiceDetailRequest &) = default ;
    DescribeAppServiceDetailRequest(DescribeAppServiceDetailRequest &&) = default ;
    DescribeAppServiceDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppServiceDetailRequest() = default ;
    DescribeAppServiceDetailRequest& operator=(const DescribeAppServiceDetailRequest &) = default ;
    DescribeAppServiceDetailRequest& operator=(DescribeAppServiceDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->nacosInstanceId_ == nullptr && return this->nacosNamespaceId_ == nullptr && return this->serviceGroup_ == nullptr && return this->serviceName_ == nullptr && return this->serviceType_ == nullptr
        && return this->serviceVersion_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppServiceDetailRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // nacosInstanceId Field Functions 
    bool hasNacosInstanceId() const { return this->nacosInstanceId_ != nullptr;};
    void deleteNacosInstanceId() { this->nacosInstanceId_ = nullptr;};
    inline string nacosInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nacosInstanceId_, "") };
    inline DescribeAppServiceDetailRequest& setNacosInstanceId(string nacosInstanceId) { DARABONBA_PTR_SET_VALUE(nacosInstanceId_, nacosInstanceId) };


    // nacosNamespaceId Field Functions 
    bool hasNacosNamespaceId() const { return this->nacosNamespaceId_ != nullptr;};
    void deleteNacosNamespaceId() { this->nacosNamespaceId_ = nullptr;};
    inline string nacosNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(nacosNamespaceId_, "") };
    inline DescribeAppServiceDetailRequest& setNacosNamespaceId(string nacosNamespaceId) { DARABONBA_PTR_SET_VALUE(nacosNamespaceId_, nacosNamespaceId) };


    // serviceGroup Field Functions 
    bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
    void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
    inline string serviceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
    inline DescribeAppServiceDetailRequest& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeAppServiceDetailRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeAppServiceDetailRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline DescribeAppServiceDetailRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


  protected:
    // 6dcc8c9e-d3da-478a-a066-86dcf820\\*\\*\\*\\*
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the MSE Nacos instance.
    std::shared_ptr<string> nacosInstanceId_ = nullptr;
    // The ID of the namespace for the MSE Nacos instance.
    std::shared_ptr<string> nacosNamespaceId_ = nullptr;
    // springCloud
    std::shared_ptr<string> serviceGroup_ = nullptr;
    // edas.service.provider
    std::shared_ptr<string> serviceName_ = nullptr;
    // springCloud
    std::shared_ptr<string> serviceType_ = nullptr;
    // 1.0.0
    std::shared_ptr<string> serviceVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
