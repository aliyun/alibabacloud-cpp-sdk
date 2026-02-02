// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLANMAINTENANCEWINDOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLANMAINTENANCEWINDOWSRESPONSEBODY_HPP_
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
  class DescribePlanMaintenanceWindowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlanMaintenanceWindowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PlanMaintenanceWindowList, planMaintenanceWindowList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlanMaintenanceWindowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PlanMaintenanceWindowList, planMaintenanceWindowList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePlanMaintenanceWindowsResponseBody() = default ;
    DescribePlanMaintenanceWindowsResponseBody(const DescribePlanMaintenanceWindowsResponseBody &) = default ;
    DescribePlanMaintenanceWindowsResponseBody(DescribePlanMaintenanceWindowsResponseBody &&) = default ;
    DescribePlanMaintenanceWindowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlanMaintenanceWindowsResponseBody() = default ;
    DescribePlanMaintenanceWindowsResponseBody& operator=(const DescribePlanMaintenanceWindowsResponseBody &) = default ;
    DescribePlanMaintenanceWindowsResponseBody& operator=(DescribePlanMaintenanceWindowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlanMaintenanceWindowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlanMaintenanceWindowList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(PlanWindowId, planWindowId_);
        DARABONBA_PTR_TO_JSON(PlanWindowName, planWindowName_);
        DARABONBA_PTR_TO_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
        DARABONBA_PTR_TO_JSON(TargetResource, targetResource_);
        DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
      };
      friend void from_json(const Darabonba::Json& j, PlanMaintenanceWindowList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(PlanWindowId, planWindowId_);
        DARABONBA_PTR_FROM_JSON(PlanWindowName, planWindowName_);
        DARABONBA_PTR_FROM_JSON(SupportMaintenanceAction, supportMaintenanceAction_);
        DARABONBA_PTR_FROM_JSON(TargetResource, targetResource_);
        DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
      };
      PlanMaintenanceWindowList() = default ;
      PlanMaintenanceWindowList(const PlanMaintenanceWindowList &) = default ;
      PlanMaintenanceWindowList(PlanMaintenanceWindowList &&) = default ;
      PlanMaintenanceWindowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlanMaintenanceWindowList() = default ;
      PlanMaintenanceWindowList& operator=(const PlanMaintenanceWindowList &) = default ;
      PlanMaintenanceWindowList& operator=(PlanMaintenanceWindowList &&) = default ;
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
        shared_ptr<string> periodUnit_ {};
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
        shared_ptr<string> scope_ {};
        shared_ptr<vector<TargetResource::Tags>> tags_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->enable_ == nullptr && this->modifiedTime_ == nullptr && this->planWindowId_ == nullptr && this->planWindowName_ == nullptr && this->supportMaintenanceAction_ == nullptr
        && this->targetResource_ == nullptr && this->timePeriod_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PlanMaintenanceWindowList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline PlanMaintenanceWindowList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline PlanMaintenanceWindowList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // planWindowId Field Functions 
      bool hasPlanWindowId() const { return this->planWindowId_ != nullptr;};
      void deletePlanWindowId() { this->planWindowId_ = nullptr;};
      inline string getPlanWindowId() const { DARABONBA_PTR_GET_DEFAULT(planWindowId_, "") };
      inline PlanMaintenanceWindowList& setPlanWindowId(string planWindowId) { DARABONBA_PTR_SET_VALUE(planWindowId_, planWindowId) };


      // planWindowName Field Functions 
      bool hasPlanWindowName() const { return this->planWindowName_ != nullptr;};
      void deletePlanWindowName() { this->planWindowName_ = nullptr;};
      inline string getPlanWindowName() const { DARABONBA_PTR_GET_DEFAULT(planWindowName_, "") };
      inline PlanMaintenanceWindowList& setPlanWindowName(string planWindowName) { DARABONBA_PTR_SET_VALUE(planWindowName_, planWindowName) };


      // supportMaintenanceAction Field Functions 
      bool hasSupportMaintenanceAction() const { return this->supportMaintenanceAction_ != nullptr;};
      void deleteSupportMaintenanceAction() { this->supportMaintenanceAction_ = nullptr;};
      inline string getSupportMaintenanceAction() const { DARABONBA_PTR_GET_DEFAULT(supportMaintenanceAction_, "") };
      inline PlanMaintenanceWindowList& setSupportMaintenanceAction(string supportMaintenanceAction) { DARABONBA_PTR_SET_VALUE(supportMaintenanceAction_, supportMaintenanceAction) };


      // targetResource Field Functions 
      bool hasTargetResource() const { return this->targetResource_ != nullptr;};
      void deleteTargetResource() { this->targetResource_ = nullptr;};
      inline const PlanMaintenanceWindowList::TargetResource & getTargetResource() const { DARABONBA_PTR_GET_CONST(targetResource_, PlanMaintenanceWindowList::TargetResource) };
      inline PlanMaintenanceWindowList::TargetResource getTargetResource() { DARABONBA_PTR_GET(targetResource_, PlanMaintenanceWindowList::TargetResource) };
      inline PlanMaintenanceWindowList& setTargetResource(const PlanMaintenanceWindowList::TargetResource & targetResource) { DARABONBA_PTR_SET_VALUE(targetResource_, targetResource) };
      inline PlanMaintenanceWindowList& setTargetResource(PlanMaintenanceWindowList::TargetResource && targetResource) { DARABONBA_PTR_SET_RVALUE(targetResource_, targetResource) };


      // timePeriod Field Functions 
      bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
      void deleteTimePeriod() { this->timePeriod_ = nullptr;};
      inline const PlanMaintenanceWindowList::TimePeriod & getTimePeriod() const { DARABONBA_PTR_GET_CONST(timePeriod_, PlanMaintenanceWindowList::TimePeriod) };
      inline PlanMaintenanceWindowList::TimePeriod getTimePeriod() { DARABONBA_PTR_GET(timePeriod_, PlanMaintenanceWindowList::TimePeriod) };
      inline PlanMaintenanceWindowList& setTimePeriod(const PlanMaintenanceWindowList::TimePeriod & timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };
      inline PlanMaintenanceWindowList& setTimePeriod(PlanMaintenanceWindowList::TimePeriod && timePeriod) { DARABONBA_PTR_SET_RVALUE(timePeriod_, timePeriod) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> enable_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> planWindowId_ {};
      shared_ptr<string> planWindowName_ {};
      shared_ptr<string> supportMaintenanceAction_ {};
      shared_ptr<PlanMaintenanceWindowList::TargetResource> targetResource_ {};
      shared_ptr<PlanMaintenanceWindowList::TimePeriod> timePeriod_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->planMaintenanceWindowList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePlanMaintenanceWindowsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePlanMaintenanceWindowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // planMaintenanceWindowList Field Functions 
    bool hasPlanMaintenanceWindowList() const { return this->planMaintenanceWindowList_ != nullptr;};
    void deletePlanMaintenanceWindowList() { this->planMaintenanceWindowList_ = nullptr;};
    inline const vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList> & getPlanMaintenanceWindowList() const { DARABONBA_PTR_GET_CONST(planMaintenanceWindowList_, vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList>) };
    inline vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList> getPlanMaintenanceWindowList() { DARABONBA_PTR_GET(planMaintenanceWindowList_, vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList>) };
    inline DescribePlanMaintenanceWindowsResponseBody& setPlanMaintenanceWindowList(const vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList> & planMaintenanceWindowList) { DARABONBA_PTR_SET_VALUE(planMaintenanceWindowList_, planMaintenanceWindowList) };
    inline DescribePlanMaintenanceWindowsResponseBody& setPlanMaintenanceWindowList(vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList> && planMaintenanceWindowList) { DARABONBA_PTR_SET_RVALUE(planMaintenanceWindowList_, planMaintenanceWindowList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlanMaintenanceWindowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePlanMaintenanceWindowsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<DescribePlanMaintenanceWindowsResponseBody::PlanMaintenanceWindowList>> planMaintenanceWindowList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
