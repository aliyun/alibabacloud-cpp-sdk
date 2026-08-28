// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYELASTICPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYELASTICPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateGatewayElasticPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayElasticPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(elasticPolicy, elasticPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayElasticPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticPolicy, elasticPolicy_);
    };
    UpdateGatewayElasticPolicyRequest() = default ;
    UpdateGatewayElasticPolicyRequest(const UpdateGatewayElasticPolicyRequest &) = default ;
    UpdateGatewayElasticPolicyRequest(UpdateGatewayElasticPolicyRequest &&) = default ;
    UpdateGatewayElasticPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayElasticPolicyRequest() = default ;
    UpdateGatewayElasticPolicyRequest& operator=(const UpdateGatewayElasticPolicyRequest &) = default ;
    UpdateGatewayElasticPolicyRequest& operator=(UpdateGatewayElasticPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(elasticEnabled, elasticEnabled_);
        DARABONBA_PTR_TO_JSON(elasticType, elasticType_);
        DARABONBA_PTR_TO_JSON(enableScaleTimePolicyList, enableScaleTimePolicyList_);
        DARABONBA_PTR_TO_JSON(loadWarningThreshold, loadWarningThreshold_);
        DARABONBA_PTR_TO_JSON(maxUnits, maxUnits_);
        DARABONBA_PTR_TO_JSON(timePolicyList, timePolicyList_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(elasticEnabled, elasticEnabled_);
        DARABONBA_PTR_FROM_JSON(elasticType, elasticType_);
        DARABONBA_PTR_FROM_JSON(enableScaleTimePolicyList, enableScaleTimePolicyList_);
        DARABONBA_PTR_FROM_JSON(loadWarningThreshold, loadWarningThreshold_);
        DARABONBA_PTR_FROM_JSON(maxUnits, maxUnits_);
        DARABONBA_PTR_FROM_JSON(timePolicyList, timePolicyList_);
      };
      ElasticPolicy() = default ;
      ElasticPolicy(const ElasticPolicy &) = default ;
      ElasticPolicy(ElasticPolicy &&) = default ;
      ElasticPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticPolicy() = default ;
      ElasticPolicy& operator=(const ElasticPolicy &) = default ;
      ElasticPolicy& operator=(ElasticPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimePolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimePolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(units, units_);
        };
        friend void from_json(const Darabonba::Json& j, TimePolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(units, units_);
        };
        TimePolicyList() = default ;
        TimePolicyList(const TimePolicyList &) = default ;
        TimePolicyList(TimePolicyList &&) = default ;
        TimePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimePolicyList() = default ;
        TimePolicyList& operator=(const TimePolicyList &) = default ;
        TimePolicyList& operator=(TimePolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->units_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline TimePolicyList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline TimePolicyList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // units Field Functions 
        bool hasUnits() const { return this->units_ != nullptr;};
        void deleteUnits() { this->units_ = nullptr;};
        inline int32_t getUnits() const { DARABONBA_PTR_GET_DEFAULT(units_, 0) };
        inline TimePolicyList& setUnits(int32_t units) { DARABONBA_PTR_SET_VALUE(units_, units) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<int32_t> units_ {};
      };

      class EnableScaleTimePolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnableScaleTimePolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, EnableScaleTimePolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        EnableScaleTimePolicyList() = default ;
        EnableScaleTimePolicyList(const EnableScaleTimePolicyList &) = default ;
        EnableScaleTimePolicyList(EnableScaleTimePolicyList &&) = default ;
        EnableScaleTimePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnableScaleTimePolicyList() = default ;
        EnableScaleTimePolicyList& operator=(const EnableScaleTimePolicyList &) = default ;
        EnableScaleTimePolicyList& operator=(EnableScaleTimePolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline EnableScaleTimePolicyList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline EnableScaleTimePolicyList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->elasticEnabled_ == nullptr
        && this->elasticType_ == nullptr && this->enableScaleTimePolicyList_ == nullptr && this->loadWarningThreshold_ == nullptr && this->maxUnits_ == nullptr && this->timePolicyList_ == nullptr; };
      // elasticEnabled Field Functions 
      bool hasElasticEnabled() const { return this->elasticEnabled_ != nullptr;};
      void deleteElasticEnabled() { this->elasticEnabled_ = nullptr;};
      inline bool getElasticEnabled() const { DARABONBA_PTR_GET_DEFAULT(elasticEnabled_, false) };
      inline ElasticPolicy& setElasticEnabled(bool elasticEnabled) { DARABONBA_PTR_SET_VALUE(elasticEnabled_, elasticEnabled) };


      // elasticType Field Functions 
      bool hasElasticType() const { return this->elasticType_ != nullptr;};
      void deleteElasticType() { this->elasticType_ = nullptr;};
      inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
      inline ElasticPolicy& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


      // enableScaleTimePolicyList Field Functions 
      bool hasEnableScaleTimePolicyList() const { return this->enableScaleTimePolicyList_ != nullptr;};
      void deleteEnableScaleTimePolicyList() { this->enableScaleTimePolicyList_ = nullptr;};
      inline const vector<ElasticPolicy::EnableScaleTimePolicyList> & getEnableScaleTimePolicyList() const { DARABONBA_PTR_GET_CONST(enableScaleTimePolicyList_, vector<ElasticPolicy::EnableScaleTimePolicyList>) };
      inline vector<ElasticPolicy::EnableScaleTimePolicyList> getEnableScaleTimePolicyList() { DARABONBA_PTR_GET(enableScaleTimePolicyList_, vector<ElasticPolicy::EnableScaleTimePolicyList>) };
      inline ElasticPolicy& setEnableScaleTimePolicyList(const vector<ElasticPolicy::EnableScaleTimePolicyList> & enableScaleTimePolicyList) { DARABONBA_PTR_SET_VALUE(enableScaleTimePolicyList_, enableScaleTimePolicyList) };
      inline ElasticPolicy& setEnableScaleTimePolicyList(vector<ElasticPolicy::EnableScaleTimePolicyList> && enableScaleTimePolicyList) { DARABONBA_PTR_SET_RVALUE(enableScaleTimePolicyList_, enableScaleTimePolicyList) };


      // loadWarningThreshold Field Functions 
      bool hasLoadWarningThreshold() const { return this->loadWarningThreshold_ != nullptr;};
      void deleteLoadWarningThreshold() { this->loadWarningThreshold_ = nullptr;};
      inline bool getLoadWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(loadWarningThreshold_, false) };
      inline ElasticPolicy& setLoadWarningThreshold(bool loadWarningThreshold) { DARABONBA_PTR_SET_VALUE(loadWarningThreshold_, loadWarningThreshold) };


      // maxUnits Field Functions 
      bool hasMaxUnits() const { return this->maxUnits_ != nullptr;};
      void deleteMaxUnits() { this->maxUnits_ = nullptr;};
      inline int32_t getMaxUnits() const { DARABONBA_PTR_GET_DEFAULT(maxUnits_, 0) };
      inline ElasticPolicy& setMaxUnits(int32_t maxUnits) { DARABONBA_PTR_SET_VALUE(maxUnits_, maxUnits) };


      // timePolicyList Field Functions 
      bool hasTimePolicyList() const { return this->timePolicyList_ != nullptr;};
      void deleteTimePolicyList() { this->timePolicyList_ = nullptr;};
      inline const vector<ElasticPolicy::TimePolicyList> & getTimePolicyList() const { DARABONBA_PTR_GET_CONST(timePolicyList_, vector<ElasticPolicy::TimePolicyList>) };
      inline vector<ElasticPolicy::TimePolicyList> getTimePolicyList() { DARABONBA_PTR_GET(timePolicyList_, vector<ElasticPolicy::TimePolicyList>) };
      inline ElasticPolicy& setTimePolicyList(const vector<ElasticPolicy::TimePolicyList> & timePolicyList) { DARABONBA_PTR_SET_VALUE(timePolicyList_, timePolicyList) };
      inline ElasticPolicy& setTimePolicyList(vector<ElasticPolicy::TimePolicyList> && timePolicyList) { DARABONBA_PTR_SET_RVALUE(timePolicyList_, timePolicyList) };


    protected:
      shared_ptr<bool> elasticEnabled_ {};
      shared_ptr<string> elasticType_ {};
      shared_ptr<vector<ElasticPolicy::EnableScaleTimePolicyList>> enableScaleTimePolicyList_ {};
      shared_ptr<bool> loadWarningThreshold_ {};
      shared_ptr<int32_t> maxUnits_ {};
      shared_ptr<vector<ElasticPolicy::TimePolicyList>> timePolicyList_ {};
    };

    virtual bool empty() const override { return this->elasticPolicy_ == nullptr; };
    // elasticPolicy Field Functions 
    bool hasElasticPolicy() const { return this->elasticPolicy_ != nullptr;};
    void deleteElasticPolicy() { this->elasticPolicy_ = nullptr;};
    inline const UpdateGatewayElasticPolicyRequest::ElasticPolicy & getElasticPolicy() const { DARABONBA_PTR_GET_CONST(elasticPolicy_, UpdateGatewayElasticPolicyRequest::ElasticPolicy) };
    inline UpdateGatewayElasticPolicyRequest::ElasticPolicy getElasticPolicy() { DARABONBA_PTR_GET(elasticPolicy_, UpdateGatewayElasticPolicyRequest::ElasticPolicy) };
    inline UpdateGatewayElasticPolicyRequest& setElasticPolicy(const UpdateGatewayElasticPolicyRequest::ElasticPolicy & elasticPolicy) { DARABONBA_PTR_SET_VALUE(elasticPolicy_, elasticPolicy) };
    inline UpdateGatewayElasticPolicyRequest& setElasticPolicy(UpdateGatewayElasticPolicyRequest::ElasticPolicy && elasticPolicy) { DARABONBA_PTR_SET_RVALUE(elasticPolicy_, elasticPolicy) };


  protected:
    shared_ptr<UpdateGatewayElasticPolicyRequest::ElasticPolicy> elasticPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
