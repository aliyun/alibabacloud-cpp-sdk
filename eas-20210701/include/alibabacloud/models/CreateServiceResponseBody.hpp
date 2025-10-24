// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateServiceResponseBody() = default ;
    CreateServiceResponseBody(const CreateServiceResponseBody &) = default ;
    CreateServiceResponseBody(CreateServiceResponseBody &&) = default ;
    CreateServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceResponseBody() = default ;
    CreateServiceResponseBody& operator=(const CreateServiceResponseBody &) = default ;
    CreateServiceResponseBody& operator=(CreateServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetEndpoint_ == nullptr
        && return this->intranetEndpoint_ == nullptr && return this->region_ == nullptr && return this->requestId_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr
        && return this->status_ == nullptr; };
    // internetEndpoint Field Functions 
    bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
    void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
    inline string internetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
    inline CreateServiceResponseBody& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline CreateServiceResponseBody& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateServiceResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateServiceResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The public endpoint of the created service.
    std::shared_ptr<string> internetEndpoint_ = nullptr;
    // The internal endpoint of the created service.
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    // The region ID of the created service.
    std::shared_ptr<string> region_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the created service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the created service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service state.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
