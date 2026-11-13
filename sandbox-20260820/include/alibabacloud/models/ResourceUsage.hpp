// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEUSAGE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class ResourceUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceUsage& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(groups, groups_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(groups, groups_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ResourceUsage() = default ;
    ResourceUsage(const ResourceUsage &) = default ;
    ResourceUsage(ResourceUsage &&) = default ;
    ResourceUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceUsage() = default ;
    ResourceUsage& operator=(const ResourceUsage &) = default ;
    ResourceUsage& operator=(ResourceUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(items, items_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(buckets, buckets_);
          DARABONBA_PTR_TO_JSON(total, total_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(usageName, usageName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(buckets, buckets_);
          DARABONBA_PTR_FROM_JSON(total, total_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(usageName, usageName_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Buckets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Buckets& obj) { 
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(quantity, quantity_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, Buckets& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(quantity, quantity_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          };
          Buckets() = default ;
          Buckets(const Buckets &) = default ;
          Buckets(Buckets &&) = default ;
          Buckets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Buckets() = default ;
          Buckets& operator=(const Buckets &) = default ;
          Buckets& operator=(Buckets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->quantity_ == nullptr && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline Buckets& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // quantity Field Functions 
          bool hasQuantity() const { return this->quantity_ != nullptr;};
          void deleteQuantity() { this->quantity_ = nullptr;};
          inline double getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
          inline Buckets& setQuantity(double quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline Buckets& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          // The end time of this usage statistics period, exclusive.
          // 
          // This parameter is required.
          shared_ptr<string> endTime_ {};
          // The cumulative usage within this time period. The unit is specified by unit.
          // 
          // This parameter is required.
          shared_ptr<double> quantity_ {};
          // The start time of this usage statistics period, inclusive.
          // 
          // This parameter is required.
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->buckets_ == nullptr
        && this->total_ == nullptr && this->unit_ == nullptr && this->usageName_ == nullptr; };
        // buckets Field Functions 
        bool hasBuckets() const { return this->buckets_ != nullptr;};
        void deleteBuckets() { this->buckets_ = nullptr;};
        inline const vector<Items::Buckets> & getBuckets() const { DARABONBA_PTR_GET_CONST(buckets_, vector<Items::Buckets>) };
        inline vector<Items::Buckets> getBuckets() { DARABONBA_PTR_GET(buckets_, vector<Items::Buckets>) };
        inline Items& setBuckets(const vector<Items::Buckets> & buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };
        inline Items& setBuckets(vector<Items::Buckets> && buckets) { DARABONBA_PTR_SET_RVALUE(buckets_, buckets) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline double getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
        inline Items& setTotal(double total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Items& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // usageName Field Functions 
        bool hasUsageName() const { return this->usageName_ != nullptr;};
        void deleteUsageName() { this->usageName_ = nullptr;};
        inline string getUsageName() const { DARABONBA_PTR_GET_DEFAULT(usageName_, "") };
        inline Items& setUsageName(string usageName) { DARABONBA_PTR_SET_VALUE(usageName_, usageName) };


      protected:
        // The hourly or daily usage arranged in chronological order. Only time periods with records are returned. This field is omitted when granularity is set to All.
        shared_ptr<vector<Items::Buckets>> buckets_ {};
        // The cumulative usage of this usage item over the entire query interval. This field is omitted if there are no usage records for the item within the interval.
        shared_ptr<double> total_ {};
        // The unit of usage. The unit is CoreSecond for CPU, and GiBSecond for memory and cloud disks.
        // 
        // This parameter is required.
        shared_ptr<string> unit_ {};
        // The name of the usage item specified in the request.
        // 
        // This parameter is required.
        shared_ptr<string> usageName_ {};
      };

      virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->items_ == nullptr; };
      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const map<string, string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, map<string, string>) };
      inline map<string, string> getDimensions() { DARABONBA_PTR_GET(dimensions_, map<string, string>) };
      inline Groups& setDimensions(const map<string, string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline Groups& setDimensions(map<string, string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Groups::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Groups::Items>) };
      inline vector<Groups::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Groups::Items>) };
      inline Groups& setItems(const vector<Groups::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Groups& setItems(vector<Groups::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The team, template, or sandbox version corresponding to the usage of this group.
      // 
      // This parameter is required.
      shared_ptr<map<string, string>> dimensions_ {};
      // The query result for each requested usage item in this group.
      // 
      // This parameter is required.
      shared_ptr<vector<Groups::Items>> items_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->granularity_ == nullptr && this->groupBy_ == nullptr && this->groups_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ResourceUsage& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline ResourceUsage& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<string> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<string>) };
    inline vector<string> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<string>) };
    inline ResourceUsage& setGroupBy(const vector<string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline ResourceUsage& setGroupBy(vector<string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<ResourceUsage::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ResourceUsage::Groups>) };
    inline vector<ResourceUsage::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<ResourceUsage::Groups>) };
    inline ResourceUsage& setGroups(const vector<ResourceUsage::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ResourceUsage& setGroups(vector<ResourceUsage::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ResourceUsage& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the requested interval, exclusive.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The aggregation granularity used for this query. Valid values: All, Hour, and Day.
    // 
    // This parameter is required.
    shared_ptr<string> granularity_ {};
    // The grouping key used for this query. An empty array is returned when no grouping is applied.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> groupBy_ {};
    // The usage for each group. If no grouping is applied, the usage for the entire query range is returned. An empty array is returned if there are no usage records within the query range.
    // 
    // This parameter is required.
    shared_ptr<vector<ResourceUsage::Groups>> groups_ {};
    // The start time of the requested interval, inclusive.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
