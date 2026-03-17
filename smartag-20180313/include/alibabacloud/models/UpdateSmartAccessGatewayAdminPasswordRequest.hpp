// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYADMINPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYADMINPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateSmartAccessGatewayAdminPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmartAccessGatewayAdminPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmartAccessGatewayAdminPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
    };
    UpdateSmartAccessGatewayAdminPasswordRequest() = default ;
    UpdateSmartAccessGatewayAdminPasswordRequest(const UpdateSmartAccessGatewayAdminPasswordRequest &) = default ;
    UpdateSmartAccessGatewayAdminPasswordRequest(UpdateSmartAccessGatewayAdminPasswordRequest &&) = default ;
    UpdateSmartAccessGatewayAdminPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmartAccessGatewayAdminPasswordRequest() = default ;
    UpdateSmartAccessGatewayAdminPasswordRequest& operator=(const UpdateSmartAccessGatewayAdminPasswordRequest &) = default ;
    UpdateSmartAccessGatewayAdminPasswordRequest& operator=(UpdateSmartAccessGatewayAdminPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccount_ == nullptr
        && this->password_ == nullptr && this->regionId_ == nullptr && this->resourceUid_ == nullptr && this->sagInsId_ == nullptr && this->sagSn_ == nullptr; };
    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline bool getCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(crossAccount_, false) };
    inline UpdateSmartAccessGatewayAdminPasswordRequest& setCrossAccount(bool crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateSmartAccessGatewayAdminPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSmartAccessGatewayAdminPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline UpdateSmartAccessGatewayAdminPasswordRequest& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline UpdateSmartAccessGatewayAdminPasswordRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline UpdateSmartAccessGatewayAdminPasswordRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


  protected:
    // Specifies whether to query only the SAG instances that belong to another Alibaba Cloud account. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> crossAccount_ {};
    // The new password used to log on to the SAG device.
    // 
    // The password must be 8 to 30 characters in length and can contain letters, digits, and underscores (_).
    // 
    // > In the example, asterisks (\\*) are used to conceal the real password. This does not mean that the password supports asterisks (\\*). The actual format requirement prevails.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // The region ID of the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud account to which the SAG instance belongs.
    shared_ptr<string> resourceUid_ {};
    // The ID of the Smart Access Gateway (SAG) instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
