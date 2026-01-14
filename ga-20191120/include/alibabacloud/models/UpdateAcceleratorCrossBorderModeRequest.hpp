// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCELERATORCROSSBORDERMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCELERATORCROSSBORDERMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateAcceleratorCrossBorderModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAcceleratorCrossBorderModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossBorderMode, crossBorderMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAcceleratorCrossBorderModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossBorderMode, crossBorderMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateAcceleratorCrossBorderModeRequest() = default ;
    UpdateAcceleratorCrossBorderModeRequest(const UpdateAcceleratorCrossBorderModeRequest &) = default ;
    UpdateAcceleratorCrossBorderModeRequest(UpdateAcceleratorCrossBorderModeRequest &&) = default ;
    UpdateAcceleratorCrossBorderModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAcceleratorCrossBorderModeRequest() = default ;
    UpdateAcceleratorCrossBorderModeRequest& operator=(const UpdateAcceleratorCrossBorderModeRequest &) = default ;
    UpdateAcceleratorCrossBorderModeRequest& operator=(UpdateAcceleratorCrossBorderModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->crossBorderMode_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline UpdateAcceleratorCrossBorderModeRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAcceleratorCrossBorderModeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossBorderMode Field Functions 
    bool hasCrossBorderMode() const { return this->crossBorderMode_ != nullptr;};
    void deleteCrossBorderMode() { this->crossBorderMode_ = nullptr;};
    inline string getCrossBorderMode() const { DARABONBA_PTR_GET_DEFAULT(crossBorderMode_, "") };
    inline UpdateAcceleratorCrossBorderModeRequest& setCrossBorderMode(string crossBorderMode) { DARABONBA_PTR_SET_VALUE(crossBorderMode_, crossBorderMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAcceleratorCrossBorderModeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The GA instance ID.
    // 
    // > The bandwidth metering method of the GA instance must be pay-by-data-transfer.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The type of transmission network of the GA instance. Valid values:
    // 
    // *   **bgpPro**: BGP (Multi-ISP) Pro. BGP (Multi-ISP) Pro lines are used for cross-border acceleration. You do not need to complete real-name verification.
    // *   **private**: cross-border Express Connect circuit. Cross-border Express Connect circuits provide better acceleration performance but require real-name verification.
    // 
    // This parameter is required.
    shared_ptr<string> crossBorderMode_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
