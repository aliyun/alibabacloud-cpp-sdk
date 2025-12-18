// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATEDSERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATEDSERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetIntegratedServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegratedServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegratedServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    GetIntegratedServiceStatusRequest() = default ;
    GetIntegratedServiceStatusRequest(const GetIntegratedServiceStatusRequest &) = default ;
    GetIntegratedServiceStatusRequest(GetIntegratedServiceStatusRequest &&) = default ;
    GetIntegratedServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegratedServiceStatusRequest() = default ;
    GetIntegratedServiceStatusRequest& operator=(const GetIntegratedServiceStatusRequest &) = default ;
    GetIntegratedServiceStatusRequest& operator=(GetIntegratedServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCode_ == nullptr; };
    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetIntegratedServiceStatusRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // The identity of the cloud service that is integrated with Cloud Config. Valid values:
    // 
    // *   eventbridge: EventBridge
    // *   cms: CloudMonitor
    // *   bpstudio: Cloud Architect Design Tools (CADT)
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
