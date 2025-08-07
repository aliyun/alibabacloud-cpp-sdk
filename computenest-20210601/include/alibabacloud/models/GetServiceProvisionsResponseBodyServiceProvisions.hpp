// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODYSERVICEPROVISIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions.hpp>
#include <alibabacloud/models/GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBodyServiceProvisions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBodyServiceProvisions& obj) { 
      DARABONBA_PTR_TO_JSON(AutoEnableService, autoEnableService_);
      DARABONBA_PTR_TO_JSON(CommodityProvisions, commodityProvisions_);
      DARABONBA_PTR_TO_JSON(EnableURL, enableURL_);
      DARABONBA_PTR_TO_JSON(RoleProvision, roleProvision_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBodyServiceProvisions& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoEnableService, autoEnableService_);
      DARABONBA_PTR_FROM_JSON(CommodityProvisions, commodityProvisions_);
      DARABONBA_PTR_FROM_JSON(EnableURL, enableURL_);
      DARABONBA_PTR_FROM_JSON(RoleProvision, roleProvision_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
    };
    GetServiceProvisionsResponseBodyServiceProvisions() = default ;
    GetServiceProvisionsResponseBodyServiceProvisions(const GetServiceProvisionsResponseBodyServiceProvisions &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisions(GetServiceProvisionsResponseBodyServiceProvisions &&) = default ;
    GetServiceProvisionsResponseBodyServiceProvisions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBodyServiceProvisions() = default ;
    GetServiceProvisionsResponseBodyServiceProvisions& operator=(const GetServiceProvisionsResponseBodyServiceProvisions &) = default ;
    GetServiceProvisionsResponseBodyServiceProvisions& operator=(GetServiceProvisionsResponseBodyServiceProvisions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoEnableService_ != nullptr
        && this->commodityProvisions_ != nullptr && this->enableURL_ != nullptr && this->roleProvision_ != nullptr && this->serviceName_ != nullptr && this->status_ != nullptr
        && this->statusReason_ != nullptr; };
    // autoEnableService Field Functions 
    bool hasAutoEnableService() const { return this->autoEnableService_ != nullptr;};
    void deleteAutoEnableService() { this->autoEnableService_ = nullptr;};
    inline bool autoEnableService() const { DARABONBA_PTR_GET_DEFAULT(autoEnableService_, false) };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setAutoEnableService(bool autoEnableService) { DARABONBA_PTR_SET_VALUE(autoEnableService_, autoEnableService) };


    // commodityProvisions Field Functions 
    bool hasCommodityProvisions() const { return this->commodityProvisions_ != nullptr;};
    void deleteCommodityProvisions() { this->commodityProvisions_ = nullptr;};
    inline const vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions> & commodityProvisions() const { DARABONBA_PTR_GET_CONST(commodityProvisions_, vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions>) };
    inline vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions> commodityProvisions() { DARABONBA_PTR_GET(commodityProvisions_, vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions>) };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setCommodityProvisions(const vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions> & commodityProvisions) { DARABONBA_PTR_SET_VALUE(commodityProvisions_, commodityProvisions) };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setCommodityProvisions(vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions> && commodityProvisions) { DARABONBA_PTR_SET_RVALUE(commodityProvisions_, commodityProvisions) };


    // enableURL Field Functions 
    bool hasEnableURL() const { return this->enableURL_ != nullptr;};
    void deleteEnableURL() { this->enableURL_ = nullptr;};
    inline string enableURL() const { DARABONBA_PTR_GET_DEFAULT(enableURL_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setEnableURL(string enableURL) { DARABONBA_PTR_SET_VALUE(enableURL_, enableURL) };


    // roleProvision Field Functions 
    bool hasRoleProvision() const { return this->roleProvision_ != nullptr;};
    void deleteRoleProvision() { this->roleProvision_ = nullptr;};
    inline const Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision & roleProvision() const { DARABONBA_PTR_GET_CONST(roleProvision_, Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision) };
    inline Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision roleProvision() { DARABONBA_PTR_GET(roleProvision_, Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision) };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setRoleProvision(const Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision & roleProvision) { DARABONBA_PTR_SET_VALUE(roleProvision_, roleProvision) };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setRoleProvision(Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision && roleProvision) { DARABONBA_PTR_SET_RVALUE(roleProvision_, roleProvision) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetServiceProvisionsResponseBodyServiceProvisions& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    // Indicates whether automatic activation for the service is defined in the template. Valid values:
    // 
    // *   true: Automatic activation for the service is defined in the template.
    // *   false: Manual activation for the service is defined in the template.
    std::shared_ptr<bool> autoEnableService_ = nullptr;
    // Product details. Some services (such as ACS) involve the activation of multiple products
    std::shared_ptr<vector<Models::GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions>> commodityProvisions_ = nullptr;
    // The URL that points to the activation page of the service.
    // 
    // > This parameter is returned if Status is set to Disabled.
    std::shared_ptr<string> enableURL_ = nullptr;
    // The information about the RAM roles of the service. If this parameter is empty, no RAM role is associated with the service.
    std::shared_ptr<Models::GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision> roleProvision_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The activation status of the service. Valid values:
    // 
    // *   Enabled: The service is activated.
    // *   Disabled: The service is not activated.
    // *   Unknown: The activation status of the service is unknown.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the service is in the Disabled or Unknown state.
    // 
    // > This parameter is returned if Status is set to Disabled or Unknown.
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
