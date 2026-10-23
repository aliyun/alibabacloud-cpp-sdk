// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERCAPACITYRESERVATIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERCAPACITYRESERVATIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyTransitRouterCapacityReservationsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTransitRouterCapacityReservationsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentSets, deploymentSetsShrink_);
      DARABONBA_PTR_TO_JSON(MinimumTransitRouterCapacities, minimumTransitRouterCapacitiesShrink_);
      DARABONBA_PTR_TO_JSON(ResetCapacityReservations, resetCapacityReservationsShrink_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTransitRouterCapacityReservationsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentSets, deploymentSetsShrink_);
      DARABONBA_PTR_FROM_JSON(MinimumTransitRouterCapacities, minimumTransitRouterCapacitiesShrink_);
      DARABONBA_PTR_FROM_JSON(ResetCapacityReservations, resetCapacityReservationsShrink_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ModifyTransitRouterCapacityReservationsShrinkRequest() = default ;
    ModifyTransitRouterCapacityReservationsShrinkRequest(const ModifyTransitRouterCapacityReservationsShrinkRequest &) = default ;
    ModifyTransitRouterCapacityReservationsShrinkRequest(ModifyTransitRouterCapacityReservationsShrinkRequest &&) = default ;
    ModifyTransitRouterCapacityReservationsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTransitRouterCapacityReservationsShrinkRequest() = default ;
    ModifyTransitRouterCapacityReservationsShrinkRequest& operator=(const ModifyTransitRouterCapacityReservationsShrinkRequest &) = default ;
    ModifyTransitRouterCapacityReservationsShrinkRequest& operator=(ModifyTransitRouterCapacityReservationsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->deploymentSetsShrink_ == nullptr && this->minimumTransitRouterCapacitiesShrink_ == nullptr && this->resetCapacityReservationsShrink_ == nullptr && this->transitRouterId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyTransitRouterCapacityReservationsShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentSetsShrink Field Functions 
    bool hasDeploymentSetsShrink() const { return this->deploymentSetsShrink_ != nullptr;};
    void deleteDeploymentSetsShrink() { this->deploymentSetsShrink_ = nullptr;};
    inline string getDeploymentSetsShrink() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetsShrink_, "") };
    inline ModifyTransitRouterCapacityReservationsShrinkRequest& setDeploymentSetsShrink(string deploymentSetsShrink) { DARABONBA_PTR_SET_VALUE(deploymentSetsShrink_, deploymentSetsShrink) };


    // minimumTransitRouterCapacitiesShrink Field Functions 
    bool hasMinimumTransitRouterCapacitiesShrink() const { return this->minimumTransitRouterCapacitiesShrink_ != nullptr;};
    void deleteMinimumTransitRouterCapacitiesShrink() { this->minimumTransitRouterCapacitiesShrink_ = nullptr;};
    inline string getMinimumTransitRouterCapacitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(minimumTransitRouterCapacitiesShrink_, "") };
    inline ModifyTransitRouterCapacityReservationsShrinkRequest& setMinimumTransitRouterCapacitiesShrink(string minimumTransitRouterCapacitiesShrink) { DARABONBA_PTR_SET_VALUE(minimumTransitRouterCapacitiesShrink_, minimumTransitRouterCapacitiesShrink) };


    // resetCapacityReservationsShrink Field Functions 
    bool hasResetCapacityReservationsShrink() const { return this->resetCapacityReservationsShrink_ != nullptr;};
    void deleteResetCapacityReservationsShrink() { this->resetCapacityReservationsShrink_ = nullptr;};
    inline string getResetCapacityReservationsShrink() const { DARABONBA_PTR_GET_DEFAULT(resetCapacityReservationsShrink_, "") };
    inline ModifyTransitRouterCapacityReservationsShrinkRequest& setResetCapacityReservationsShrink(string resetCapacityReservationsShrink) { DARABONBA_PTR_SET_VALUE(resetCapacityReservationsShrink_, resetCapacityReservationsShrink) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ModifyTransitRouterCapacityReservationsShrinkRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyTransitRouterCapacityReservationsShrinkRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> deploymentSetsShrink_ {};
    shared_ptr<string> minimumTransitRouterCapacitiesShrink_ {};
    shared_ptr<string> resetCapacityReservationsShrink_ {};
    // This parameter is required.
    shared_ptr<string> transitRouterId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
