// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERCAPACITYRESERVATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERCAPACITYRESERVATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyTransitRouterCapacityReservationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTransitRouterCapacityReservationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_TO_JSON(MinimumTransitRouterCapacities, minimumTransitRouterCapacities_);
      DARABONBA_PTR_TO_JSON(ResetCapacityReservations, resetCapacityReservations_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTransitRouterCapacityReservationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_FROM_JSON(MinimumTransitRouterCapacities, minimumTransitRouterCapacities_);
      DARABONBA_PTR_FROM_JSON(ResetCapacityReservations, resetCapacityReservations_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ModifyTransitRouterCapacityReservationsRequest() = default ;
    ModifyTransitRouterCapacityReservationsRequest(const ModifyTransitRouterCapacityReservationsRequest &) = default ;
    ModifyTransitRouterCapacityReservationsRequest(ModifyTransitRouterCapacityReservationsRequest &&) = default ;
    ModifyTransitRouterCapacityReservationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTransitRouterCapacityReservationsRequest() = default ;
    ModifyTransitRouterCapacityReservationsRequest& operator=(const ModifyTransitRouterCapacityReservationsRequest &) = default ;
    ModifyTransitRouterCapacityReservationsRequest& operator=(ModifyTransitRouterCapacityReservationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResetCapacityReservations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResetCapacityReservations& obj) { 
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ResetCapacityReservations& obj) { 
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ResetCapacityReservations() = default ;
      ResetCapacityReservations(const ResetCapacityReservations &) = default ;
      ResetCapacityReservations(ResetCapacityReservations &&) = default ;
      ResetCapacityReservations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResetCapacityReservations() = default ;
      ResetCapacityReservations& operator=(const ResetCapacityReservations &) = default ;
      ResetCapacityReservations& operator=(ResetCapacityReservations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->zoneId_ == nullptr; };
      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ResetCapacityReservations& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> zoneId_ {};
    };

    class MinimumTransitRouterCapacities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MinimumTransitRouterCapacities& obj) { 
        DARABONBA_PTR_TO_JSON(DataProcessGbps, dataProcessGbps_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, MinimumTransitRouterCapacities& obj) { 
        DARABONBA_PTR_FROM_JSON(DataProcessGbps, dataProcessGbps_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      MinimumTransitRouterCapacities() = default ;
      MinimumTransitRouterCapacities(const MinimumTransitRouterCapacities &) = default ;
      MinimumTransitRouterCapacities(MinimumTransitRouterCapacities &&) = default ;
      MinimumTransitRouterCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MinimumTransitRouterCapacities() = default ;
      MinimumTransitRouterCapacities& operator=(const MinimumTransitRouterCapacities &) = default ;
      MinimumTransitRouterCapacities& operator=(MinimumTransitRouterCapacities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataProcessGbps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataProcessGbps& obj) { 
          DARABONBA_PTR_TO_JSON(Target, target_);
        };
        friend void from_json(const Darabonba::Json& j, DataProcessGbps& obj) { 
          DARABONBA_PTR_FROM_JSON(Target, target_);
        };
        DataProcessGbps() = default ;
        DataProcessGbps(const DataProcessGbps &) = default ;
        DataProcessGbps(DataProcessGbps &&) = default ;
        DataProcessGbps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataProcessGbps() = default ;
        DataProcessGbps& operator=(const DataProcessGbps &) = default ;
        DataProcessGbps& operator=(DataProcessGbps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->target_ == nullptr; };
        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
        inline DataProcessGbps& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      protected:
        shared_ptr<int64_t> target_ {};
      };

      virtual bool empty() const override { return this->dataProcessGbps_ == nullptr
        && this->zoneId_ == nullptr; };
      // dataProcessGbps Field Functions 
      bool hasDataProcessGbps() const { return this->dataProcessGbps_ != nullptr;};
      void deleteDataProcessGbps() { this->dataProcessGbps_ = nullptr;};
      inline const MinimumTransitRouterCapacities::DataProcessGbps & getDataProcessGbps() const { DARABONBA_PTR_GET_CONST(dataProcessGbps_, MinimumTransitRouterCapacities::DataProcessGbps) };
      inline MinimumTransitRouterCapacities::DataProcessGbps getDataProcessGbps() { DARABONBA_PTR_GET(dataProcessGbps_, MinimumTransitRouterCapacities::DataProcessGbps) };
      inline MinimumTransitRouterCapacities& setDataProcessGbps(const MinimumTransitRouterCapacities::DataProcessGbps & dataProcessGbps) { DARABONBA_PTR_SET_VALUE(dataProcessGbps_, dataProcessGbps) };
      inline MinimumTransitRouterCapacities& setDataProcessGbps(MinimumTransitRouterCapacities::DataProcessGbps && dataProcessGbps) { DARABONBA_PTR_SET_RVALUE(dataProcessGbps_, dataProcessGbps) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline MinimumTransitRouterCapacities& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<MinimumTransitRouterCapacities::DataProcessGbps> dataProcessGbps_ {};
      shared_ptr<string> zoneId_ {};
    };

    class DeploymentSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentSets& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentSetID, deploymentSetID_);
        DARABONBA_PTR_TO_JSON(ZoneID, zoneID_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentSets& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentSetID, deploymentSetID_);
        DARABONBA_PTR_FROM_JSON(ZoneID, zoneID_);
      };
      DeploymentSets() = default ;
      DeploymentSets(const DeploymentSets &) = default ;
      DeploymentSets(DeploymentSets &&) = default ;
      DeploymentSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentSets() = default ;
      DeploymentSets& operator=(const DeploymentSets &) = default ;
      DeploymentSets& operator=(DeploymentSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deploymentSetID_ == nullptr
        && this->zoneID_ == nullptr; };
      // deploymentSetID Field Functions 
      bool hasDeploymentSetID() const { return this->deploymentSetID_ != nullptr;};
      void deleteDeploymentSetID() { this->deploymentSetID_ = nullptr;};
      inline string getDeploymentSetID() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetID_, "") };
      inline DeploymentSets& setDeploymentSetID(string deploymentSetID) { DARABONBA_PTR_SET_VALUE(deploymentSetID_, deploymentSetID) };


      // zoneID Field Functions 
      bool hasZoneID() const { return this->zoneID_ != nullptr;};
      void deleteZoneID() { this->zoneID_ = nullptr;};
      inline string getZoneID() const { DARABONBA_PTR_GET_DEFAULT(zoneID_, "") };
      inline DeploymentSets& setZoneID(string zoneID) { DARABONBA_PTR_SET_VALUE(zoneID_, zoneID) };


    protected:
      shared_ptr<string> deploymentSetID_ {};
      shared_ptr<string> zoneID_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->deploymentSets_ == nullptr && this->minimumTransitRouterCapacities_ == nullptr && this->resetCapacityReservations_ == nullptr && this->transitRouterId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyTransitRouterCapacityReservationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentSets Field Functions 
    bool hasDeploymentSets() const { return this->deploymentSets_ != nullptr;};
    void deleteDeploymentSets() { this->deploymentSets_ = nullptr;};
    inline const vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets> & getDeploymentSets() const { DARABONBA_PTR_GET_CONST(deploymentSets_, vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets>) };
    inline vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets> getDeploymentSets() { DARABONBA_PTR_GET(deploymentSets_, vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets>) };
    inline ModifyTransitRouterCapacityReservationsRequest& setDeploymentSets(const vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets> & deploymentSets) { DARABONBA_PTR_SET_VALUE(deploymentSets_, deploymentSets) };
    inline ModifyTransitRouterCapacityReservationsRequest& setDeploymentSets(vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets> && deploymentSets) { DARABONBA_PTR_SET_RVALUE(deploymentSets_, deploymentSets) };


    // minimumTransitRouterCapacities Field Functions 
    bool hasMinimumTransitRouterCapacities() const { return this->minimumTransitRouterCapacities_ != nullptr;};
    void deleteMinimumTransitRouterCapacities() { this->minimumTransitRouterCapacities_ = nullptr;};
    inline const vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities> & getMinimumTransitRouterCapacities() const { DARABONBA_PTR_GET_CONST(minimumTransitRouterCapacities_, vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities>) };
    inline vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities> getMinimumTransitRouterCapacities() { DARABONBA_PTR_GET(minimumTransitRouterCapacities_, vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities>) };
    inline ModifyTransitRouterCapacityReservationsRequest& setMinimumTransitRouterCapacities(const vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities> & minimumTransitRouterCapacities) { DARABONBA_PTR_SET_VALUE(minimumTransitRouterCapacities_, minimumTransitRouterCapacities) };
    inline ModifyTransitRouterCapacityReservationsRequest& setMinimumTransitRouterCapacities(vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities> && minimumTransitRouterCapacities) { DARABONBA_PTR_SET_RVALUE(minimumTransitRouterCapacities_, minimumTransitRouterCapacities) };


    // resetCapacityReservations Field Functions 
    bool hasResetCapacityReservations() const { return this->resetCapacityReservations_ != nullptr;};
    void deleteResetCapacityReservations() { this->resetCapacityReservations_ = nullptr;};
    inline const vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations> & getResetCapacityReservations() const { DARABONBA_PTR_GET_CONST(resetCapacityReservations_, vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations>) };
    inline vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations> getResetCapacityReservations() { DARABONBA_PTR_GET(resetCapacityReservations_, vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations>) };
    inline ModifyTransitRouterCapacityReservationsRequest& setResetCapacityReservations(const vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations> & resetCapacityReservations) { DARABONBA_PTR_SET_VALUE(resetCapacityReservations_, resetCapacityReservations) };
    inline ModifyTransitRouterCapacityReservationsRequest& setResetCapacityReservations(vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations> && resetCapacityReservations) { DARABONBA_PTR_SET_RVALUE(resetCapacityReservations_, resetCapacityReservations) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ModifyTransitRouterCapacityReservationsRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyTransitRouterCapacityReservationsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<ModifyTransitRouterCapacityReservationsRequest::DeploymentSets>> deploymentSets_ {};
    shared_ptr<vector<ModifyTransitRouterCapacityReservationsRequest::MinimumTransitRouterCapacities>> minimumTransitRouterCapacities_ {};
    shared_ptr<vector<ModifyTransitRouterCapacityReservationsRequest::ResetCapacityReservations>> resetCapacityReservations_ {};
    // This parameter is required.
    shared_ptr<string> transitRouterId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
