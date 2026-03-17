// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYDNSFORWARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYDNSFORWARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ViewSmartAccessGatewayDnsForwardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSmartAccessGatewayDnsForwardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSmartAccessGatewayDnsForwardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
    };
    ViewSmartAccessGatewayDnsForwardsRequest() = default ;
    ViewSmartAccessGatewayDnsForwardsRequest(const ViewSmartAccessGatewayDnsForwardsRequest &) = default ;
    ViewSmartAccessGatewayDnsForwardsRequest(ViewSmartAccessGatewayDnsForwardsRequest &&) = default ;
    ViewSmartAccessGatewayDnsForwardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSmartAccessGatewayDnsForwardsRequest() = default ;
    ViewSmartAccessGatewayDnsForwardsRequest& operator=(const ViewSmartAccessGatewayDnsForwardsRequest &) = default ;
    ViewSmartAccessGatewayDnsForwardsRequest& operator=(ViewSmartAccessGatewayDnsForwardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sagInsId_ == nullptr && this->sagSn_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ViewSmartAccessGatewayDnsForwardsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline ViewSmartAccessGatewayDnsForwardsRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline ViewSmartAccessGatewayDnsForwardsRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


  protected:
    // The ID of the region in which the SAG instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // The serial number (SN) of the device.
    // 
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
