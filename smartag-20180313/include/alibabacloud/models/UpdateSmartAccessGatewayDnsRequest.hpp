// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYDNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateSmartAccessGatewayDnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmartAccessGatewayDnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_TO_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
      DARABONBA_PTR_TO_JSON(SlaveDns, slaveDns_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmartAccessGatewayDnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_FROM_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
      DARABONBA_PTR_FROM_JSON(SlaveDns, slaveDns_);
    };
    UpdateSmartAccessGatewayDnsRequest() = default ;
    UpdateSmartAccessGatewayDnsRequest(const UpdateSmartAccessGatewayDnsRequest &) = default ;
    UpdateSmartAccessGatewayDnsRequest(UpdateSmartAccessGatewayDnsRequest &&) = default ;
    UpdateSmartAccessGatewayDnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmartAccessGatewayDnsRequest() = default ;
    UpdateSmartAccessGatewayDnsRequest& operator=(const UpdateSmartAccessGatewayDnsRequest &) = default ;
    UpdateSmartAccessGatewayDnsRequest& operator=(UpdateSmartAccessGatewayDnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccount_ == nullptr
        && this->masterDns_ == nullptr && this->regionId_ == nullptr && this->resourceUid_ == nullptr && this->sagInsId_ == nullptr && this->sagSn_ == nullptr
        && this->slaveDns_ == nullptr; };
    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline bool getCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(crossAccount_, false) };
    inline UpdateSmartAccessGatewayDnsRequest& setCrossAccount(bool crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };


    // masterDns Field Functions 
    bool hasMasterDns() const { return this->masterDns_ != nullptr;};
    void deleteMasterDns() { this->masterDns_ = nullptr;};
    inline string getMasterDns() const { DARABONBA_PTR_GET_DEFAULT(masterDns_, "") };
    inline UpdateSmartAccessGatewayDnsRequest& setMasterDns(string masterDns) { DARABONBA_PTR_SET_VALUE(masterDns_, masterDns) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSmartAccessGatewayDnsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline UpdateSmartAccessGatewayDnsRequest& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline UpdateSmartAccessGatewayDnsRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline UpdateSmartAccessGatewayDnsRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


    // slaveDns Field Functions 
    bool hasSlaveDns() const { return this->slaveDns_ != nullptr;};
    void deleteSlaveDns() { this->slaveDns_ = nullptr;};
    inline string getSlaveDns() const { DARABONBA_PTR_GET_DEFAULT(slaveDns_, "") };
    inline UpdateSmartAccessGatewayDnsRequest& setSlaveDns(string slaveDns) { DARABONBA_PTR_SET_VALUE(slaveDns_, slaveDns) };


  protected:
    // Specifies whether to query only the SAG instances that belong to another Alibaba Cloud account. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> crossAccount_ {};
    // The IP address of the primary DNS server.
    shared_ptr<string> masterDns_ {};
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
    // The IP address of the secondary DNS server.
    shared_ptr<string> slaveDns_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
