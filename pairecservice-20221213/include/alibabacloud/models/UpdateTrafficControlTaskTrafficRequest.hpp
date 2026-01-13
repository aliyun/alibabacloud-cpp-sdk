// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKTRAFFICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKTRAFFICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateTrafficControlTaskTrafficRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficControlTaskTrafficRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Traffics, traffics_);
      DARABONBA_PTR_TO_JSON(new-param-3, newParam3_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficControlTaskTrafficRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Traffics, traffics_);
      DARABONBA_PTR_FROM_JSON(new-param-3, newParam3_);
    };
    UpdateTrafficControlTaskTrafficRequest() = default ;
    UpdateTrafficControlTaskTrafficRequest(const UpdateTrafficControlTaskTrafficRequest &) = default ;
    UpdateTrafficControlTaskTrafficRequest(UpdateTrafficControlTaskTrafficRequest &&) = default ;
    UpdateTrafficControlTaskTrafficRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficControlTaskTrafficRequest() = default ;
    UpdateTrafficControlTaskTrafficRequest& operator=(const UpdateTrafficControlTaskTrafficRequest &) = default ;
    UpdateTrafficControlTaskTrafficRequest& operator=(UpdateTrafficControlTaskTrafficRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traffics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traffics& obj) { 
        DARABONBA_PTR_TO_JSON(ItemOrExperimentId, itemOrExperimentId_);
        DARABONBA_PTR_TO_JSON(RecordTime, recordTime_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetId, trafficControlTargetId_);
        DARABONBA_PTR_TO_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
        DARABONBA_PTR_TO_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
      };
      friend void from_json(const Darabonba::Json& j, Traffics& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemOrExperimentId, itemOrExperimentId_);
        DARABONBA_PTR_FROM_JSON(RecordTime, recordTime_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetAimTraffic, trafficControlTargetAimTraffic_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetId, trafficControlTargetId_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTargetTraffic, trafficControlTargetTraffic_);
        DARABONBA_PTR_FROM_JSON(TrafficControlTaskTraffic, trafficControlTaskTraffic_);
      };
      Traffics() = default ;
      Traffics(const Traffics &) = default ;
      Traffics(Traffics &&) = default ;
      Traffics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Traffics() = default ;
      Traffics& operator=(const Traffics &) = default ;
      Traffics& operator=(Traffics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->itemOrExperimentId_ == nullptr
        && this->recordTime_ == nullptr && this->trafficControlTargetAimTraffic_ == nullptr && this->trafficControlTargetId_ == nullptr && this->trafficControlTargetTraffic_ == nullptr && this->trafficControlTaskTraffic_ == nullptr; };
      // itemOrExperimentId Field Functions 
      bool hasItemOrExperimentId() const { return this->itemOrExperimentId_ != nullptr;};
      void deleteItemOrExperimentId() { this->itemOrExperimentId_ = nullptr;};
      inline string getItemOrExperimentId() const { DARABONBA_PTR_GET_DEFAULT(itemOrExperimentId_, "") };
      inline Traffics& setItemOrExperimentId(string itemOrExperimentId) { DARABONBA_PTR_SET_VALUE(itemOrExperimentId_, itemOrExperimentId) };


      // recordTime Field Functions 
      bool hasRecordTime() const { return this->recordTime_ != nullptr;};
      void deleteRecordTime() { this->recordTime_ = nullptr;};
      inline string getRecordTime() const { DARABONBA_PTR_GET_DEFAULT(recordTime_, "") };
      inline Traffics& setRecordTime(string recordTime) { DARABONBA_PTR_SET_VALUE(recordTime_, recordTime) };


      // trafficControlTargetAimTraffic Field Functions 
      bool hasTrafficControlTargetAimTraffic() const { return this->trafficControlTargetAimTraffic_ != nullptr;};
      void deleteTrafficControlTargetAimTraffic() { this->trafficControlTargetAimTraffic_ = nullptr;};
      inline double getTrafficControlTargetAimTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetAimTraffic_, 0.0) };
      inline Traffics& setTrafficControlTargetAimTraffic(double trafficControlTargetAimTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetAimTraffic_, trafficControlTargetAimTraffic) };


      // trafficControlTargetId Field Functions 
      bool hasTrafficControlTargetId() const { return this->trafficControlTargetId_ != nullptr;};
      void deleteTrafficControlTargetId() { this->trafficControlTargetId_ = nullptr;};
      inline string getTrafficControlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetId_, "") };
      inline Traffics& setTrafficControlTargetId(string trafficControlTargetId) { DARABONBA_PTR_SET_VALUE(trafficControlTargetId_, trafficControlTargetId) };


      // trafficControlTargetTraffic Field Functions 
      bool hasTrafficControlTargetTraffic() const { return this->trafficControlTargetTraffic_ != nullptr;};
      void deleteTrafficControlTargetTraffic() { this->trafficControlTargetTraffic_ = nullptr;};
      inline int64_t getTrafficControlTargetTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetTraffic_, 0L) };
      inline Traffics& setTrafficControlTargetTraffic(int64_t trafficControlTargetTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTargetTraffic_, trafficControlTargetTraffic) };


      // trafficControlTaskTraffic Field Functions 
      bool hasTrafficControlTaskTraffic() const { return this->trafficControlTaskTraffic_ != nullptr;};
      void deleteTrafficControlTaskTraffic() { this->trafficControlTaskTraffic_ = nullptr;};
      inline int64_t getTrafficControlTaskTraffic() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskTraffic_, 0L) };
      inline Traffics& setTrafficControlTaskTraffic(int64_t trafficControlTaskTraffic) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTraffic_, trafficControlTaskTraffic) };


    protected:
      shared_ptr<string> itemOrExperimentId_ {};
      shared_ptr<string> recordTime_ {};
      shared_ptr<double> trafficControlTargetAimTraffic_ {};
      shared_ptr<string> trafficControlTargetId_ {};
      shared_ptr<int64_t> trafficControlTargetTraffic_ {};
      shared_ptr<int64_t> trafficControlTaskTraffic_ {};
    };

    virtual bool empty() const override { return this->environment_ == nullptr
        && this->instanceId_ == nullptr && this->traffics_ == nullptr && this->newParam3_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline UpdateTrafficControlTaskTrafficRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTrafficControlTaskTrafficRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // traffics Field Functions 
    bool hasTraffics() const { return this->traffics_ != nullptr;};
    void deleteTraffics() { this->traffics_ = nullptr;};
    inline const vector<UpdateTrafficControlTaskTrafficRequest::Traffics> & getTraffics() const { DARABONBA_PTR_GET_CONST(traffics_, vector<UpdateTrafficControlTaskTrafficRequest::Traffics>) };
    inline vector<UpdateTrafficControlTaskTrafficRequest::Traffics> getTraffics() { DARABONBA_PTR_GET(traffics_, vector<UpdateTrafficControlTaskTrafficRequest::Traffics>) };
    inline UpdateTrafficControlTaskTrafficRequest& setTraffics(const vector<UpdateTrafficControlTaskTrafficRequest::Traffics> & traffics) { DARABONBA_PTR_SET_VALUE(traffics_, traffics) };
    inline UpdateTrafficControlTaskTrafficRequest& setTraffics(vector<UpdateTrafficControlTaskTrafficRequest::Traffics> && traffics) { DARABONBA_PTR_SET_RVALUE(traffics_, traffics) };


    // newParam3 Field Functions 
    bool hasNewParam3() const { return this->newParam3_ != nullptr;};
    void deleteNewParam3() { this->newParam3_ = nullptr;};
    inline string getNewParam3() const { DARABONBA_PTR_GET_DEFAULT(newParam3_, "") };
    inline UpdateTrafficControlTaskTrafficRequest& setNewParam3(string newParam3) { DARABONBA_PTR_SET_VALUE(newParam3_, newParam3) };


  protected:
    shared_ptr<string> environment_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<UpdateTrafficControlTaskTrafficRequest::Traffics>> traffics_ {};
    shared_ptr<string> newParam3_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
