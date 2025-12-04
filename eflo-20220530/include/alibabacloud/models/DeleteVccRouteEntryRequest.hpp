// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVCCROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVCCROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DeleteVccRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVccRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccRouteEntryId, vccRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVccRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccRouteEntryId, vccRouteEntryId_);
    };
    DeleteVccRouteEntryRequest() = default ;
    DeleteVccRouteEntryRequest(const DeleteVccRouteEntryRequest &) = default ;
    DeleteVccRouteEntryRequest(DeleteVccRouteEntryRequest &&) = default ;
    DeleteVccRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVccRouteEntryRequest() = default ;
    DeleteVccRouteEntryRequest& operator=(const DeleteVccRouteEntryRequest &) = default ;
    DeleteVccRouteEntryRequest& operator=(DeleteVccRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && return this->regionId_ == nullptr && return this->vccId_ == nullptr && return this->vccRouteEntryId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DeleteVccRouteEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteVccRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline DeleteVccRouteEntryRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccRouteEntryId Field Functions 
    bool hasVccRouteEntryId() const { return this->vccRouteEntryId_ != nullptr;};
    void deleteVccRouteEntryId() { this->vccRouteEntryId_ = nullptr;};
    inline string vccRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vccRouteEntryId_, "") };
    inline DeleteVccRouteEntryRequest& setVccRouteEntryId(string vccRouteEntryId) { DARABONBA_PTR_SET_VALUE(vccRouteEntryId_, vccRouteEntryId) };


  protected:
    // Destination CIDR block
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
    // The ID of the route entry.
    std::shared_ptr<string> vccRouteEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
