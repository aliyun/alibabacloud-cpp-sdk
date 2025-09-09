// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODYSERVICEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODYSERVICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceRegistrationResponseBodyServiceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRegistrationResponseBodyServiceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRegistrationResponseBodyServiceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetServiceRegistrationResponseBodyServiceInfo() = default ;
    GetServiceRegistrationResponseBodyServiceInfo(const GetServiceRegistrationResponseBodyServiceInfo &) = default ;
    GetServiceRegistrationResponseBodyServiceInfo(GetServiceRegistrationResponseBodyServiceInfo &&) = default ;
    GetServiceRegistrationResponseBodyServiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRegistrationResponseBodyServiceInfo() = default ;
    GetServiceRegistrationResponseBodyServiceInfo& operator=(const GetServiceRegistrationResponseBodyServiceInfo &) = default ;
    GetServiceRegistrationResponseBodyServiceInfo& operator=(GetServiceRegistrationResponseBodyServiceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceType_ != nullptr
        && this->trialType_ != nullptr && this->versionName_ != nullptr; };
    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceRegistrationResponseBodyServiceInfo& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GetServiceRegistrationResponseBodyServiceInfo& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetServiceRegistrationResponseBodyServiceInfo& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The type of the service. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
    // The version name.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
