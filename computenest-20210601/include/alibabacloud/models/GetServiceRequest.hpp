// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(ShowDetails, showDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(ShowDetails, showDetails_);
    };
    GetServiceRequest() = default ;
    GetServiceRequest(const GetServiceRequest &) = default ;
    GetServiceRequest(GetServiceRequest &&) = default ;
    GetServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRequest() = default ;
    GetServiceRequest& operator=(const GetServiceRequest &) = default ;
    GetServiceRequest& operator=(GetServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->serviceId_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceName_ != nullptr && this->serviceVersion_ != nullptr && this->showDetails_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // showDetails Field Functions 
    bool hasShowDetails() const { return this->showDetails_ != nullptr;};
    void deleteShowDetails() { this->showDetails_ = nullptr;};
    inline const vector<string> & showDetails() const { DARABONBA_PTR_GET_CONST(showDetails_, vector<string>) };
    inline vector<string> showDetails() { DARABONBA_PTR_GET(showDetails_, vector<string>) };
    inline GetServiceRequest& setShowDetails(const vector<string> & showDetails) { DARABONBA_PTR_SET_VALUE(showDetails_, showDetails) };
    inline GetServiceRequest& setShowDetails(vector<string> && showDetails) { DARABONBA_PTR_SET_RVALUE(showDetails_, showDetails) };


  protected:
    // Region Id.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service instance id.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // Whether to disclose service details.
    std::shared_ptr<vector<string>> showDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
