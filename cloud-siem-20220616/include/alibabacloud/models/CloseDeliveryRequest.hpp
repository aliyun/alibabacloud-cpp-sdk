// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSEDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class CloseDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, CloseDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    CloseDeliveryRequest() = default ;
    CloseDeliveryRequest(const CloseDeliveryRequest &) = default ;
    CloseDeliveryRequest(CloseDeliveryRequest &&) = default ;
    CloseDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseDeliveryRequest() = default ;
    CloseDeliveryRequest& operator=(const CloseDeliveryRequest &) = default ;
    CloseDeliveryRequest& operator=(CloseDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logCode_ != nullptr
        && this->productCode_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr; };
    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline CloseDeliveryRequest& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CloseDeliveryRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CloseDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CloseDeliveryRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline CloseDeliveryRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The log code of the cloud service, such as the code of the process log for Security Center. You can obtain the log code from the response of the ListDelivery operation.
    std::shared_ptr<string> logCode_ = nullptr;
    // The code of the cloud service. Valid values:
    // 
    // *   qcloud_waf
    // *   qlcoud_cfw
    // *   hcloud_waf
    // *   hcloud_cfw
    // *   ddos
    // *   sas
    // *   cfw
    // *   config
    // *   csk
    // *   fc
    // *   rds
    // *   nas
    // *   apigateway
    // *   cdn
    // *   mongodb
    // *   eip
    // *   slb
    // *   vpc
    // *   actiontrail
    // *   waf
    // *   bastionhost
    // *   oss
    // *   polardb
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the region where your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
