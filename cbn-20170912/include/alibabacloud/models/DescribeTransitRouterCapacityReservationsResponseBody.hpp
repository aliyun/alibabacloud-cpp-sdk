// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERCAPACITYRESERVATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERCAPACITYRESERVATIONSRESPONSEBODY_HPP_
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
  class DescribeTransitRouterCapacityReservationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterCapacityReservationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(MinimumTransitRouterCapacities, minimumTransitRouterCapacities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterCapacityReservationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(MinimumTransitRouterCapacities, minimumTransitRouterCapacities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTransitRouterCapacityReservationsResponseBody() = default ;
    DescribeTransitRouterCapacityReservationsResponseBody(const DescribeTransitRouterCapacityReservationsResponseBody &) = default ;
    DescribeTransitRouterCapacityReservationsResponseBody(DescribeTransitRouterCapacityReservationsResponseBody &&) = default ;
    DescribeTransitRouterCapacityReservationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterCapacityReservationsResponseBody() = default ;
    DescribeTransitRouterCapacityReservationsResponseBody& operator=(const DescribeTransitRouterCapacityReservationsResponseBody &) = default ;
    DescribeTransitRouterCapacityReservationsResponseBody& operator=(DescribeTransitRouterCapacityReservationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MinimumTransitRouterCapacities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MinimumTransitRouterCapacities& obj) { 
        DARABONBA_PTR_TO_JSON(DataProcessGbps, dataProcessGbps_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, MinimumTransitRouterCapacities& obj) { 
        DARABONBA_PTR_FROM_JSON(DataProcessGbps, dataProcessGbps_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
      class State : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const State& obj) { 
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, State& obj) { 
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        State() = default ;
        State(const State &) = default ;
        State(State &&) = default ;
        State(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~State() = default ;
        State& operator=(const State &) = default ;
        State& operator=(State &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr; };
        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline State& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline State& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> reason_ {};
        shared_ptr<string> status_ {};
      };

      class DataProcessGbps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataProcessGbps& obj) { 
          DARABONBA_PTR_TO_JSON(Effective, effective_);
          DARABONBA_PTR_TO_JSON(Target, target_);
        };
        friend void from_json(const Darabonba::Json& j, DataProcessGbps& obj) { 
          DARABONBA_PTR_FROM_JSON(Effective, effective_);
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
        virtual bool empty() const override { return this->effective_ == nullptr
        && this->target_ == nullptr; };
        // effective Field Functions 
        bool hasEffective() const { return this->effective_ != nullptr;};
        void deleteEffective() { this->effective_ = nullptr;};
        inline int64_t getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, 0L) };
        inline DataProcessGbps& setEffective(int64_t effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
        inline DataProcessGbps& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      protected:
        shared_ptr<int64_t> effective_ {};
        shared_ptr<int64_t> target_ {};
      };

      virtual bool empty() const override { return this->dataProcessGbps_ == nullptr
        && this->state_ == nullptr && this->zoneId_ == nullptr; };
      // dataProcessGbps Field Functions 
      bool hasDataProcessGbps() const { return this->dataProcessGbps_ != nullptr;};
      void deleteDataProcessGbps() { this->dataProcessGbps_ = nullptr;};
      inline const MinimumTransitRouterCapacities::DataProcessGbps & getDataProcessGbps() const { DARABONBA_PTR_GET_CONST(dataProcessGbps_, MinimumTransitRouterCapacities::DataProcessGbps) };
      inline MinimumTransitRouterCapacities::DataProcessGbps getDataProcessGbps() { DARABONBA_PTR_GET(dataProcessGbps_, MinimumTransitRouterCapacities::DataProcessGbps) };
      inline MinimumTransitRouterCapacities& setDataProcessGbps(const MinimumTransitRouterCapacities::DataProcessGbps & dataProcessGbps) { DARABONBA_PTR_SET_VALUE(dataProcessGbps_, dataProcessGbps) };
      inline MinimumTransitRouterCapacities& setDataProcessGbps(MinimumTransitRouterCapacities::DataProcessGbps && dataProcessGbps) { DARABONBA_PTR_SET_RVALUE(dataProcessGbps_, dataProcessGbps) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline const MinimumTransitRouterCapacities::State & getState() const { DARABONBA_PTR_GET_CONST(state_, MinimumTransitRouterCapacities::State) };
      inline MinimumTransitRouterCapacities::State getState() { DARABONBA_PTR_GET(state_, MinimumTransitRouterCapacities::State) };
      inline MinimumTransitRouterCapacities& setState(const MinimumTransitRouterCapacities::State & state) { DARABONBA_PTR_SET_VALUE(state_, state) };
      inline MinimumTransitRouterCapacities& setState(MinimumTransitRouterCapacities::State && state) { DARABONBA_PTR_SET_RVALUE(state_, state) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline MinimumTransitRouterCapacities& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<MinimumTransitRouterCapacities::DataProcessGbps> dataProcessGbps_ {};
      shared_ptr<MinimumTransitRouterCapacities::State> state_ {};
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

    virtual bool empty() const override { return this->deploymentSets_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->minimumTransitRouterCapacities_ == nullptr && this->requestId_ == nullptr; };
    // deploymentSets Field Functions 
    bool hasDeploymentSets() const { return this->deploymentSets_ != nullptr;};
    void deleteDeploymentSets() { this->deploymentSets_ = nullptr;};
    inline const vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets> & getDeploymentSets() const { DARABONBA_PTR_GET_CONST(deploymentSets_, vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets>) };
    inline vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets> getDeploymentSets() { DARABONBA_PTR_GET(deploymentSets_, vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets>) };
    inline DescribeTransitRouterCapacityReservationsResponseBody& setDeploymentSets(const vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets> & deploymentSets) { DARABONBA_PTR_SET_VALUE(deploymentSets_, deploymentSets) };
    inline DescribeTransitRouterCapacityReservationsResponseBody& setDeploymentSets(vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets> && deploymentSets) { DARABONBA_PTR_SET_RVALUE(deploymentSets_, deploymentSets) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline DescribeTransitRouterCapacityReservationsResponseBody& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // minimumTransitRouterCapacities Field Functions 
    bool hasMinimumTransitRouterCapacities() const { return this->minimumTransitRouterCapacities_ != nullptr;};
    void deleteMinimumTransitRouterCapacities() { this->minimumTransitRouterCapacities_ = nullptr;};
    inline const vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities> & getMinimumTransitRouterCapacities() const { DARABONBA_PTR_GET_CONST(minimumTransitRouterCapacities_, vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities>) };
    inline vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities> getMinimumTransitRouterCapacities() { DARABONBA_PTR_GET(minimumTransitRouterCapacities_, vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities>) };
    inline DescribeTransitRouterCapacityReservationsResponseBody& setMinimumTransitRouterCapacities(const vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities> & minimumTransitRouterCapacities) { DARABONBA_PTR_SET_VALUE(minimumTransitRouterCapacities_, minimumTransitRouterCapacities) };
    inline DescribeTransitRouterCapacityReservationsResponseBody& setMinimumTransitRouterCapacities(vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities> && minimumTransitRouterCapacities) { DARABONBA_PTR_SET_RVALUE(minimumTransitRouterCapacities_, minimumTransitRouterCapacities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouterCapacityReservationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeTransitRouterCapacityReservationsResponseBody::DeploymentSets>> deploymentSets_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<vector<DescribeTransitRouterCapacityReservationsResponseBody::MinimumTransitRouterCapacities>> minimumTransitRouterCapacities_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
