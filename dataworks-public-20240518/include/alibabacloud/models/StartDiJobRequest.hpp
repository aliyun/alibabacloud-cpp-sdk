// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StartDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(ForceToRerun, forceToRerun_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RealtimeStartSettings, realtimeStartSettings_);
    };
    friend void from_json(const Darabonba::Json& j, StartDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(ForceToRerun, forceToRerun_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RealtimeStartSettings, realtimeStartSettings_);
    };
    StartDIJobRequest() = default ;
    StartDIJobRequest(const StartDIJobRequest &) = default ;
    StartDIJobRequest(StartDIJobRequest &&) = default ;
    StartDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDIJobRequest() = default ;
    StartDIJobRequest& operator=(const StartDIJobRequest &) = default ;
    StartDIJobRequest& operator=(StartDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealtimeStartSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealtimeStartSettings& obj) { 
        DARABONBA_PTR_TO_JSON(FailoverSettings, failoverSettings_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, RealtimeStartSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(FailoverSettings, failoverSettings_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      RealtimeStartSettings() = default ;
      RealtimeStartSettings(const RealtimeStartSettings &) = default ;
      RealtimeStartSettings(RealtimeStartSettings &&) = default ;
      RealtimeStartSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealtimeStartSettings() = default ;
      RealtimeStartSettings& operator=(const RealtimeStartSettings &) = default ;
      RealtimeStartSettings& operator=(RealtimeStartSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailoverSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailoverSettings& obj) { 
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(UpperLimit, upperLimit_);
        };
        friend void from_json(const Darabonba::Json& j, FailoverSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(UpperLimit, upperLimit_);
        };
        FailoverSettings() = default ;
        FailoverSettings(const FailoverSettings &) = default ;
        FailoverSettings(FailoverSettings &&) = default ;
        FailoverSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailoverSettings() = default ;
        FailoverSettings& operator=(const FailoverSettings &) = default ;
        FailoverSettings& operator=(FailoverSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->interval_ == nullptr
        && this->upperLimit_ == nullptr; };
        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
        inline FailoverSettings& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // upperLimit Field Functions 
        bool hasUpperLimit() const { return this->upperLimit_ != nullptr;};
        void deleteUpperLimit() { this->upperLimit_ = nullptr;};
        inline int64_t getUpperLimit() const { DARABONBA_PTR_GET_DEFAULT(upperLimit_, 0L) };
        inline FailoverSettings& setUpperLimit(int64_t upperLimit) { DARABONBA_PTR_SET_VALUE(upperLimit_, upperLimit) };


      protected:
        // This parameter is deprecated. Use advanced parameters for failover settings when you create a task.
        shared_ptr<int64_t> interval_ {};
        // This parameter is deprecated. Use advanced parameters for failover settings when you create a task.
        shared_ptr<int64_t> upperLimit_ {};
      };

      virtual bool empty() const override { return this->failoverSettings_ == nullptr
        && this->startTime_ == nullptr; };
      // failoverSettings Field Functions 
      bool hasFailoverSettings() const { return this->failoverSettings_ != nullptr;};
      void deleteFailoverSettings() { this->failoverSettings_ = nullptr;};
      inline const RealtimeStartSettings::FailoverSettings & getFailoverSettings() const { DARABONBA_PTR_GET_CONST(failoverSettings_, RealtimeStartSettings::FailoverSettings) };
      inline RealtimeStartSettings::FailoverSettings getFailoverSettings() { DARABONBA_PTR_GET(failoverSettings_, RealtimeStartSettings::FailoverSettings) };
      inline RealtimeStartSettings& setFailoverSettings(const RealtimeStartSettings::FailoverSettings & failoverSettings) { DARABONBA_PTR_SET_VALUE(failoverSettings_, failoverSettings) };
      inline RealtimeStartSettings& setFailoverSettings(RealtimeStartSettings::FailoverSettings && failoverSettings) { DARABONBA_PTR_SET_RVALUE(failoverSettings_, failoverSettings) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline RealtimeStartSettings& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // This parameter is deprecated. Use advanced parameters for failover settings when you create a task.
      shared_ptr<RealtimeStartSettings::FailoverSettings> failoverSettings_ {};
      // The start time.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && this->forceToRerun_ == nullptr && this->id_ == nullptr && this->realtimeStartSettings_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline StartDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // forceToRerun Field Functions 
    bool hasForceToRerun() const { return this->forceToRerun_ != nullptr;};
    void deleteForceToRerun() { this->forceToRerun_ = nullptr;};
    inline bool getForceToRerun() const { DARABONBA_PTR_GET_DEFAULT(forceToRerun_, false) };
    inline StartDIJobRequest& setForceToRerun(bool forceToRerun) { DARABONBA_PTR_SET_VALUE(forceToRerun_, forceToRerun) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline StartDIJobRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // realtimeStartSettings Field Functions 
    bool hasRealtimeStartSettings() const { return this->realtimeStartSettings_ != nullptr;};
    void deleteRealtimeStartSettings() { this->realtimeStartSettings_ = nullptr;};
    inline const StartDIJobRequest::RealtimeStartSettings & getRealtimeStartSettings() const { DARABONBA_PTR_GET_CONST(realtimeStartSettings_, StartDIJobRequest::RealtimeStartSettings) };
    inline StartDIJobRequest::RealtimeStartSettings getRealtimeStartSettings() { DARABONBA_PTR_GET(realtimeStartSettings_, StartDIJobRequest::RealtimeStartSettings) };
    inline StartDIJobRequest& setRealtimeStartSettings(const StartDIJobRequest::RealtimeStartSettings & realtimeStartSettings) { DARABONBA_PTR_SET_VALUE(realtimeStartSettings_, realtimeStartSettings) };
    inline StartDIJobRequest& setRealtimeStartSettings(StartDIJobRequest::RealtimeStartSettings && realtimeStartSettings) { DARABONBA_PTR_SET_RVALUE(realtimeStartSettings_, realtimeStartSettings) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    shared_ptr<int64_t> DIJobId_ {};
    // Specifies whether to forcefully rerun all synchronization steps. If you do not configure this parameter, the system does not perform the forcible rerun operation.
    // 
    // *   If the system does not perform the forcible rerun operation, only the steps that are not run start to run.
    // *   If the system performs the forcible rerun operation, all steps start to rerun.
    shared_ptr<bool> forceToRerun_ {};
    // The ID of the synchronization task.
    shared_ptr<int64_t> id_ {};
    // The settings for starting real-time synchronization.
    // 
    //     {
    //       "StartTime":1663765058
    //     }
    shared_ptr<StartDIJobRequest::RealtimeStartSettings> realtimeStartSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
