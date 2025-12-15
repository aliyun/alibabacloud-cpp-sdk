// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONSERVICESSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONSERVICESSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonResponseBodyAddonServicesSpecInputParams.hpp>
#include <alibabacloud/models/GetAddonResponseBodyAddonServicesSpecNetworkACL.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetAddonResponseBodyAddonServicesSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyAddonServicesSpec& obj) { 
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(NetworkACL, networkACL_);
      DARABONBA_PTR_TO_JSON(ServiceAccessType, serviceAccessType_);
      DARABONBA_PTR_TO_JSON(ServiceAccessUrl, serviceAccessUrl_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyAddonServicesSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(NetworkACL, networkACL_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessType, serviceAccessType_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessUrl, serviceAccessUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetAddonResponseBodyAddonServicesSpec() = default ;
    GetAddonResponseBodyAddonServicesSpec(const GetAddonResponseBodyAddonServicesSpec &) = default ;
    GetAddonResponseBodyAddonServicesSpec(GetAddonResponseBodyAddonServicesSpec &&) = default ;
    GetAddonResponseBodyAddonServicesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyAddonServicesSpec() = default ;
    GetAddonResponseBodyAddonServicesSpec& operator=(const GetAddonResponseBodyAddonServicesSpec &) = default ;
    GetAddonResponseBodyAddonServicesSpec& operator=(GetAddonResponseBodyAddonServicesSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputParams_ == nullptr
        && return this->networkACL_ == nullptr && return this->serviceAccessType_ == nullptr && return this->serviceAccessUrl_ == nullptr && return this->serviceName_ == nullptr; };
    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline const vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams> & inputParams() const { DARABONBA_PTR_GET_CONST(inputParams_, vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams>) };
    inline vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams> inputParams() { DARABONBA_PTR_GET(inputParams_, vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams>) };
    inline GetAddonResponseBodyAddonServicesSpec& setInputParams(const vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams> & inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };
    inline GetAddonResponseBodyAddonServicesSpec& setInputParams(vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams> && inputParams) { DARABONBA_PTR_SET_RVALUE(inputParams_, inputParams) };


    // networkACL Field Functions 
    bool hasNetworkACL() const { return this->networkACL_ != nullptr;};
    void deleteNetworkACL() { this->networkACL_ = nullptr;};
    inline const vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL> & networkACL() const { DARABONBA_PTR_GET_CONST(networkACL_, vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL>) };
    inline vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL> networkACL() { DARABONBA_PTR_GET(networkACL_, vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL>) };
    inline GetAddonResponseBodyAddonServicesSpec& setNetworkACL(const vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL> & networkACL) { DARABONBA_PTR_SET_VALUE(networkACL_, networkACL) };
    inline GetAddonResponseBodyAddonServicesSpec& setNetworkACL(vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL> && networkACL) { DARABONBA_PTR_SET_RVALUE(networkACL_, networkACL) };


    // serviceAccessType Field Functions 
    bool hasServiceAccessType() const { return this->serviceAccessType_ != nullptr;};
    void deleteServiceAccessType() { this->serviceAccessType_ = nullptr;};
    inline string serviceAccessType() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessType_, "") };
    inline GetAddonResponseBodyAddonServicesSpec& setServiceAccessType(string serviceAccessType) { DARABONBA_PTR_SET_VALUE(serviceAccessType_, serviceAccessType) };


    // serviceAccessUrl Field Functions 
    bool hasServiceAccessUrl() const { return this->serviceAccessUrl_ != nullptr;};
    void deleteServiceAccessUrl() { this->serviceAccessUrl_ = nullptr;};
    inline string serviceAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessUrl_, "") };
    inline GetAddonResponseBodyAddonServicesSpec& setServiceAccessUrl(string serviceAccessUrl) { DARABONBA_PTR_SET_VALUE(serviceAccessUrl_, serviceAccessUrl) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetAddonResponseBodyAddonServicesSpec& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The parameter configurations of the service.
    std::shared_ptr<vector<Models::GetAddonResponseBodyAddonServicesSpecInputParams>> inputParams_ = nullptr;
    // The security group configurations of the service.
    std::shared_ptr<vector<Models::GetAddonResponseBodyAddonServicesSpecNetworkACL>> networkACL_ = nullptr;
    // The service access type.
    std::shared_ptr<string> serviceAccessType_ = nullptr;
    // The service access URL.
    std::shared_ptr<string> serviceAccessUrl_ = nullptr;
    // The service name.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
