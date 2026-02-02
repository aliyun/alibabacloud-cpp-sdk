// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLANMAINTENANCEWINDOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLANMAINTENANCEWINDOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreatePlanMaintenanceWindowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlanMaintenanceWindowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
      DARABONBA_PTR_TO_JSON(TargetResource, targetResource_);
      DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlanMaintenanceWindowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
      DARABONBA_PTR_FROM_JSON(TargetResource, targetResource_);
      DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
    };
    CreatePlanMaintenanceWindowRequest() = default ;
    CreatePlanMaintenanceWindowRequest(const CreatePlanMaintenanceWindowRequest &) = default ;
    CreatePlanMaintenanceWindowRequest(CreatePlanMaintenanceWindowRequest &&) = default ;
    CreatePlanMaintenanceWindowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlanMaintenanceWindowRequest() = default ;
    CreatePlanMaintenanceWindowRequest& operator=(const CreatePlanMaintenanceWindowRequest &) = default ;
    CreatePlanMaintenanceWindowRequest& operator=(CreatePlanMaintenanceWindowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimePeriod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimePeriod& obj) { 
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(RangeList, rangeList_);
      };
      friend void from_json(const Darabonba::Json& j, TimePeriod& obj) { 
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(RangeList, rangeList_);
      };
      TimePeriod() = default ;
      TimePeriod(const TimePeriod &) = default ;
      TimePeriod(TimePeriod &&) = default ;
      TimePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimePeriod() = default ;
      TimePeriod& operator=(const TimePeriod &) = default ;
      TimePeriod& operator=(TimePeriod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RangeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RangeList& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, RangeList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        RangeList() = default ;
        RangeList(const RangeList &) = default ;
        RangeList(RangeList &&) = default ;
        RangeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RangeList() = default ;
        RangeList& operator=(const RangeList &) = default ;
        RangeList& operator=(RangeList &&) = default ;
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
        inline RangeList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline RangeList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->periodUnit_ == nullptr
        && this->rangeList_ == nullptr; };
      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline TimePeriod& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // rangeList Field Functions 
      bool hasRangeList() const { return this->rangeList_ != nullptr;};
      void deleteRangeList() { this->rangeList_ = nullptr;};
      inline const vector<TimePeriod::RangeList> & getRangeList() const { DARABONBA_PTR_GET_CONST(rangeList_, vector<TimePeriod::RangeList>) };
      inline vector<TimePeriod::RangeList> getRangeList() { DARABONBA_PTR_GET(rangeList_, vector<TimePeriod::RangeList>) };
      inline TimePeriod& setRangeList(const vector<TimePeriod::RangeList> & rangeList) { DARABONBA_PTR_SET_VALUE(rangeList_, rangeList) };
      inline TimePeriod& setRangeList(vector<TimePeriod::RangeList> && rangeList) { DARABONBA_PTR_SET_RVALUE(rangeList_, rangeList) };


    protected:
      // This parameter is required.
      shared_ptr<string> periodUnit_ {};
      // This parameter is required.
      shared_ptr<vector<TimePeriod::RangeList>> rangeList_ {};
    };

    class TargetResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetResource& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, TargetResource& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      TargetResource() = default ;
      TargetResource(const TargetResource &) = default ;
      TargetResource(TargetResource &&) = default ;
      TargetResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetResource() = default ;
      TargetResource& operator=(const TargetResource &) = default ;
      TargetResource& operator=(TargetResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && this->scope_ == nullptr && this->tags_ == nullptr; };
      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline TargetResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline TargetResource& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TargetResource::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TargetResource::Tags>) };
      inline vector<TargetResource::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TargetResource::Tags>) };
      inline TargetResource& setTags(const vector<TargetResource::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TargetResource& setTags(vector<TargetResource::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> resourceGroupId_ {};
      // This parameter is required.
      shared_ptr<string> scope_ {};
      shared_ptr<vector<TargetResource::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->enable_ == nullptr
        && this->planWindowName_ == nullptr && this->regionId_ == nullptr && this->supportMaintenanceAction_ == nullptr && this->targetResource_ == nullptr && this->timePeriod_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreatePlanMaintenanceWindowRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // planWindowName Field Functions 
    bool hasPlanWindowName() const { return this->planWindowName_ != nullptr;};
    void deletePlanWindowName() { this->planWindowName_ = nullptr;};
    inline string getPlanWindowName() const { DARABONBA_PTR_GET_DEFAULT(planWindowName_, "") };
    inline CreatePlanMaintenanceWindowRequest& setPlanWindowName(string planWindowName) { DARABONBA_PTR_SET_VALUE(planWindowName_, planWindowName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePlanMaintenanceWindowRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportMaintenanceAction Field Functions 
    bool hasSupportMaintenanceAction() const { return this->supportMaintenanceAction_ != nullptr;};
    void deleteSupportMaintenanceAction() { this->supportMaintenanceAction_ = nullptr;};
    inline string getSupportMaintenanceAction() const { DARABONBA_PTR_GET_DEFAULT(supportMaintenanceAction_, "") };
    inline CreatePlanMaintenanceWindowRequest& setSupportMaintenanceAction(string supportMaintenanceAction) { DARABONBA_PTR_SET_VALUE(supportMaintenanceAction_, supportMaintenanceAction) };


    // targetResource Field Functions 
    bool hasTargetResource() const { return this->targetResource_ != nullptr;};
    void deleteTargetResource() { this->targetResource_ = nullptr;};
    inline const CreatePlanMaintenanceWindowRequest::TargetResource & getTargetResource() const { DARABONBA_PTR_GET_CONST(targetResource_, CreatePlanMaintenanceWindowRequest::TargetResource) };
    inline CreatePlanMaintenanceWindowRequest::TargetResource getTargetResource() { DARABONBA_PTR_GET(targetResource_, CreatePlanMaintenanceWindowRequest::TargetResource) };
    inline CreatePlanMaintenanceWindowRequest& setTargetResource(const CreatePlanMaintenanceWindowRequest::TargetResource & targetResource) { DARABONBA_PTR_SET_VALUE(targetResource_, targetResource) };
    inline CreatePlanMaintenanceWindowRequest& setTargetResource(CreatePlanMaintenanceWindowRequest::TargetResource && targetResource) { DARABONBA_PTR_SET_RVALUE(targetResource_, targetResource) };


    // timePeriod Field Functions 
    bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
    void deleteTimePeriod() { this->timePeriod_ = nullptr;};
    inline const CreatePlanMaintenanceWindowRequest::TimePeriod & getTimePeriod() const { DARABONBA_PTR_GET_CONST(timePeriod_, CreatePlanMaintenanceWindowRequest::TimePeriod) };
    inline CreatePlanMaintenanceWindowRequest::TimePeriod getTimePeriod() { DARABONBA_PTR_GET(timePeriod_, CreatePlanMaintenanceWindowRequest::TimePeriod) };
    inline CreatePlanMaintenanceWindowRequest& setTimePeriod(const CreatePlanMaintenanceWindowRequest::TimePeriod & timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };
    inline CreatePlanMaintenanceWindowRequest& setTimePeriod(CreatePlanMaintenanceWindowRequest::TimePeriod && timePeriod) { DARABONBA_PTR_SET_RVALUE(timePeriod_, timePeriod) };


  protected:
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // This parameter is required.
    shared_ptr<string> planWindowName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> supportMaintenanceAction_ {};
    // This parameter is required.
    shared_ptr<CreatePlanMaintenanceWindowRequest::TargetResource> targetResource_ {};
    // This parameter is required.
    shared_ptr<CreatePlanMaintenanceWindowRequest::TimePeriod> timePeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
