// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTERROUTEMAPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTERROUTEMAPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListErRouteMapsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListErRouteMapsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapNum, erRouteMapNum_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceId, receptionInstanceId_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceName, receptionInstanceName_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceType, receptionInstanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteMapAction, routeMapAction_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceId, transmissionInstanceId_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceName, transmissionInstanceName_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceType, transmissionInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListErRouteMapsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapNum, erRouteMapNum_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceId, receptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceName, receptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceType, receptionInstanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteMapAction, routeMapAction_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceId, transmissionInstanceId_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceName, transmissionInstanceName_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceType, transmissionInstanceType_);
    };
    ListErRouteMapsRequest() = default ;
    ListErRouteMapsRequest(const ListErRouteMapsRequest &) = default ;
    ListErRouteMapsRequest(ListErRouteMapsRequest &&) = default ;
    ListErRouteMapsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListErRouteMapsRequest() = default ;
    ListErRouteMapsRequest& operator=(const ListErRouteMapsRequest &) = default ;
    ListErRouteMapsRequest& operator=(ListErRouteMapsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->enablePage_ == nullptr && this->erId_ == nullptr && this->erRouteMapId_ == nullptr && this->erRouteMapNum_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->receptionInstanceId_ == nullptr && this->receptionInstanceName_ == nullptr && this->receptionInstanceType_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->routeMapAction_ == nullptr && this->transmissionInstanceId_ == nullptr && this->transmissionInstanceName_ == nullptr && this->transmissionInstanceType_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ListErRouteMapsRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListErRouteMapsRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline ListErRouteMapsRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erRouteMapId Field Functions 
    bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
    void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
    inline string getErRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
    inline ListErRouteMapsRequest& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


    // erRouteMapNum Field Functions 
    bool hasErRouteMapNum() const { return this->erRouteMapNum_ != nullptr;};
    void deleteErRouteMapNum() { this->erRouteMapNum_ = nullptr;};
    inline int32_t getErRouteMapNum() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapNum_, 0) };
    inline ListErRouteMapsRequest& setErRouteMapNum(int32_t erRouteMapNum) { DARABONBA_PTR_SET_VALUE(erRouteMapNum_, erRouteMapNum) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListErRouteMapsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListErRouteMapsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // receptionInstanceId Field Functions 
    bool hasReceptionInstanceId() const { return this->receptionInstanceId_ != nullptr;};
    void deleteReceptionInstanceId() { this->receptionInstanceId_ = nullptr;};
    inline string getReceptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceId_, "") };
    inline ListErRouteMapsRequest& setReceptionInstanceId(string receptionInstanceId) { DARABONBA_PTR_SET_VALUE(receptionInstanceId_, receptionInstanceId) };


    // receptionInstanceName Field Functions 
    bool hasReceptionInstanceName() const { return this->receptionInstanceName_ != nullptr;};
    void deleteReceptionInstanceName() { this->receptionInstanceName_ = nullptr;};
    inline string getReceptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceName_, "") };
    inline ListErRouteMapsRequest& setReceptionInstanceName(string receptionInstanceName) { DARABONBA_PTR_SET_VALUE(receptionInstanceName_, receptionInstanceName) };


    // receptionInstanceType Field Functions 
    bool hasReceptionInstanceType() const { return this->receptionInstanceType_ != nullptr;};
    void deleteReceptionInstanceType() { this->receptionInstanceType_ = nullptr;};
    inline string getReceptionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceType_, "") };
    inline ListErRouteMapsRequest& setReceptionInstanceType(string receptionInstanceType) { DARABONBA_PTR_SET_VALUE(receptionInstanceType_, receptionInstanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListErRouteMapsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListErRouteMapsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeMapAction Field Functions 
    bool hasRouteMapAction() const { return this->routeMapAction_ != nullptr;};
    void deleteRouteMapAction() { this->routeMapAction_ = nullptr;};
    inline string getRouteMapAction() const { DARABONBA_PTR_GET_DEFAULT(routeMapAction_, "") };
    inline ListErRouteMapsRequest& setRouteMapAction(string routeMapAction) { DARABONBA_PTR_SET_VALUE(routeMapAction_, routeMapAction) };


    // transmissionInstanceId Field Functions 
    bool hasTransmissionInstanceId() const { return this->transmissionInstanceId_ != nullptr;};
    void deleteTransmissionInstanceId() { this->transmissionInstanceId_ = nullptr;};
    inline string getTransmissionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceId_, "") };
    inline ListErRouteMapsRequest& setTransmissionInstanceId(string transmissionInstanceId) { DARABONBA_PTR_SET_VALUE(transmissionInstanceId_, transmissionInstanceId) };


    // transmissionInstanceName Field Functions 
    bool hasTransmissionInstanceName() const { return this->transmissionInstanceName_ != nullptr;};
    void deleteTransmissionInstanceName() { this->transmissionInstanceName_ = nullptr;};
    inline string getTransmissionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceName_, "") };
    inline ListErRouteMapsRequest& setTransmissionInstanceName(string transmissionInstanceName) { DARABONBA_PTR_SET_VALUE(transmissionInstanceName_, transmissionInstanceName) };


    // transmissionInstanceType Field Functions 
    bool hasTransmissionInstanceType() const { return this->transmissionInstanceType_ != nullptr;};
    void deleteTransmissionInstanceType() { this->transmissionInstanceType_ = nullptr;};
    inline string getTransmissionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceType_, "") };
    inline ListErRouteMapsRequest& setTransmissionInstanceType(string transmissionInstanceType) { DARABONBA_PTR_SET_VALUE(transmissionInstanceType_, transmissionInstanceType) };


  protected:
    // Destination CIDR Block
    shared_ptr<string> destinationCidrBlock_ {};
    // Specifies whether to enable paged query.
    shared_ptr<bool> enablePage_ {};
    // Elastic Router ID
    // 
    // This parameter is required.
    shared_ptr<string> erId_ {};
    // routing policy ID
    shared_ptr<string> erRouteMapId_ {};
    // Policy number (default for automatic creation is 3000; The value range of the policy number manually created by the user is 1001-2000)
    shared_ptr<int32_t> erRouteMapNum_ {};
    // The page number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Receive Instance ID
    shared_ptr<string> receptionInstanceId_ {};
    // Receive Instance Name
    shared_ptr<string> receptionInstanceName_ {};
    // The type of the received instance. Optional values:
    // 
    // *   **VPD**: Lingjun network segment.
    // *   **VCC**: Lingjun Connection.
    shared_ptr<string> receptionInstanceType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group instance ID
    shared_ptr<string> resourceGroupId_ {};
    // Policy behavior; optional values:
    // 
    // *   **permit**: Allow
    // *   **deny**: Rejected
    shared_ptr<string> routeMapAction_ {};
    // Release Instance ID
    shared_ptr<string> transmissionInstanceId_ {};
    // Release Instance Name
    shared_ptr<string> transmissionInstanceName_ {};
    // The type of the published instance. Optional values:
    // 
    // *   **VPD**: Lingjun network segment.
    // *   **VCC**: Lingjun Connection.
    shared_ptr<string> transmissionInstanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
