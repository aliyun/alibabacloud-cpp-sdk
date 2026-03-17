// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYPORTROUTEPROTOCOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYPORTROUTEPROTOCOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ViewSmartAccessGatewayPortRouteProtocolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSmartAccessGatewayPortRouteProtocolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSmartAccessGatewayPortRouteProtocolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
    };
    ViewSmartAccessGatewayPortRouteProtocolRequest() = default ;
    ViewSmartAccessGatewayPortRouteProtocolRequest(const ViewSmartAccessGatewayPortRouteProtocolRequest &) = default ;
    ViewSmartAccessGatewayPortRouteProtocolRequest(ViewSmartAccessGatewayPortRouteProtocolRequest &&) = default ;
    ViewSmartAccessGatewayPortRouteProtocolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSmartAccessGatewayPortRouteProtocolRequest() = default ;
    ViewSmartAccessGatewayPortRouteProtocolRequest& operator=(const ViewSmartAccessGatewayPortRouteProtocolRequest &) = default ;
    ViewSmartAccessGatewayPortRouteProtocolRequest& operator=(ViewSmartAccessGatewayPortRouteProtocolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccount_ == nullptr
        && this->regionId_ == nullptr && this->resourceUid_ == nullptr && this->sagInsId_ == nullptr && this->sagSn_ == nullptr; };
    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline bool getCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(crossAccount_, false) };
    inline ViewSmartAccessGatewayPortRouteProtocolRequest& setCrossAccount(bool crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ViewSmartAccessGatewayPortRouteProtocolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline ViewSmartAccessGatewayPortRouteProtocolRequest& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline ViewSmartAccessGatewayPortRouteProtocolRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline ViewSmartAccessGatewayPortRouteProtocolRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


  protected:
    shared_ptr<bool> crossAccount_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceUid_ {};
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
