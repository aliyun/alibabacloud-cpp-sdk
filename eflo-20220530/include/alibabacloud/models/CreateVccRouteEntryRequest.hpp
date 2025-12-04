// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVCCROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVCCROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateVccRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVccRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVccRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
    };
    CreateVccRouteEntryRequest() = default ;
    CreateVccRouteEntryRequest(const CreateVccRouteEntryRequest &) = default ;
    CreateVccRouteEntryRequest(CreateVccRouteEntryRequest &&) = default ;
    CreateVccRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVccRouteEntryRequest() = default ;
    CreateVccRouteEntryRequest& operator=(const CreateVccRouteEntryRequest &) = default ;
    CreateVccRouteEntryRequest& operator=(CreateVccRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && return this->regionId_ == nullptr && return this->vccId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateVccRouteEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVccRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline CreateVccRouteEntryRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


  protected:
    // Destination CIDR block
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
