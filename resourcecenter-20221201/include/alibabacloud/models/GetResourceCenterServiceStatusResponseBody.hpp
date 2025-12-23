// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECENTERSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECENTERSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceCenterServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceCenterServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InitialStatus, initialStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceCenterServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InitialStatus, initialStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
    };
    GetResourceCenterServiceStatusResponseBody() = default ;
    GetResourceCenterServiceStatusResponseBody(const GetResourceCenterServiceStatusResponseBody &) = default ;
    GetResourceCenterServiceStatusResponseBody(GetResourceCenterServiceStatusResponseBody &&) = default ;
    GetResourceCenterServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceCenterServiceStatusResponseBody() = default ;
    GetResourceCenterServiceStatusResponseBody& operator=(const GetResourceCenterServiceStatusResponseBody &) = default ;
    GetResourceCenterServiceStatusResponseBody& operator=(GetResourceCenterServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->initialStatus_ == nullptr
        && return this->requestId_ == nullptr && return this->serviceStatus_ == nullptr; };
    // initialStatus Field Functions 
    bool hasInitialStatus() const { return this->initialStatus_ != nullptr;};
    void deleteInitialStatus() { this->initialStatus_ = nullptr;};
    inline string initialStatus() const { DARABONBA_PTR_GET_DEFAULT(initialStatus_, "") };
    inline GetResourceCenterServiceStatusResponseBody& setInitialStatus(string initialStatus) { DARABONBA_PTR_SET_VALUE(initialStatus_, initialStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceCenterServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline GetResourceCenterServiceStatusResponseBody& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


  protected:
    // The initialization status of the service. Valid values:
    // 
    // *   Pending: The service is being initialized.
    // *   Finished: The service is initialized.
    std::shared_ptr<string> initialStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the service. Valid values:
    // 
    // *   Enabled: The service is activated.
    // *   Disabled: The service is deactivated.
    std::shared_ptr<string> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
