// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class OpenDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, OpenDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    OpenDeliveryRequest() = default ;
    OpenDeliveryRequest(const OpenDeliveryRequest &) = default ;
    OpenDeliveryRequest(OpenDeliveryRequest &&) = default ;
    OpenDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenDeliveryRequest() = default ;
    OpenDeliveryRequest& operator=(const OpenDeliveryRequest &) = default ;
    OpenDeliveryRequest& operator=(OpenDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logCode_ == nullptr
        && this->productCode_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline OpenDeliveryRequest& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline OpenDeliveryRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline OpenDeliveryRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline OpenDeliveryRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The code for a specific log of the cloud service, such as the process log of Security Center. This parameter is optional. If you do not specify this parameter, the operation applies to all logs of the service.
    shared_ptr<string> logCode_ {};
    // The code of the cloud service. Valid values:
    // 
    // - qcloud_waf
    // 
    // - qcloud_cfw
    // 
    // - hcloud_waf
    // 
    // - hcloud_cfw
    // 
    // - ddos
    // 
    // - sas
    // 
    // - cfw
    // 
    // - config
    // 
    // - csk
    // 
    // - fc
    // 
    // - rds
    // 
    // - nas
    // 
    // - apigateway
    // 
    // - cdn
    // 
    // - mongodb
    // 
    // - eip
    // 
    // - slb
    // 
    // - vpc
    // 
    // - actiontrail
    // 
    // - waf
    // 
    // - bastionhost
    // 
    // - oss
    // 
    // - polardb
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The region where the Data Management center of threat analysis is located. Select a region based on the location of your assets. Valid values:
    // 
    // - cn-hangzhou: Select this value if your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: Select this value if your assets are in a region outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member account that the administrator wants to access.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // 
    // - 0: The view of the current Alibaba Cloud account.
    // 
    // - 1: The view of all accounts within the enterprise.
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
