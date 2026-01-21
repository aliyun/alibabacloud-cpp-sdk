// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMONITORGROUPDYNAMICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMONITORGROUPDYNAMICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMonitorGroupDynamicRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMonitorGroupDynamicRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupRules, groupRules_);
      DARABONBA_PTR_TO_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutMonitorGroupDynamicRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupRules, groupRules_);
      DARABONBA_PTR_FROM_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutMonitorGroupDynamicRuleRequest() = default ;
    PutMonitorGroupDynamicRuleRequest(const PutMonitorGroupDynamicRuleRequest &) = default ;
    PutMonitorGroupDynamicRuleRequest(PutMonitorGroupDynamicRuleRequest &&) = default ;
    PutMonitorGroupDynamicRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMonitorGroupDynamicRuleRequest() = default ;
    PutMonitorGroupDynamicRuleRequest& operator=(const PutMonitorGroupDynamicRuleRequest &) = default ;
    PutMonitorGroupDynamicRuleRequest& operator=(PutMonitorGroupDynamicRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupRules& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(FilterRelation, filterRelation_);
        DARABONBA_PTR_TO_JSON(Filters, filters_);
      };
      friend void from_json(const Darabonba::Json& j, GroupRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(FilterRelation, filterRelation_);
        DARABONBA_PTR_FROM_JSON(Filters, filters_);
      };
      GroupRules() = default ;
      GroupRules(const GroupRules &) = default ;
      GroupRules(GroupRules &&) = default ;
      GroupRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupRules() = default ;
      GroupRules& operator=(const GroupRules &) = default ;
      GroupRules& operator=(GroupRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Filters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Filters& obj) { 
          DARABONBA_PTR_TO_JSON(Function, function_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Filters& obj) { 
          DARABONBA_PTR_FROM_JSON(Function, function_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Filters() = default ;
        Filters(const Filters &) = default ;
        Filters(Filters &&) = default ;
        Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Filters() = default ;
        Filters& operator=(const Filters &) = default ;
        Filters& operator=(Filters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->function_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline Filters& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Filters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The method that is used to filter instances. Valid values of N: 1 to 3. Valid values:
        // 
        // *   contains: contains
        // *   notContains: does not contain
        // *   startWith: starts with a prefix
        // *   endWith: ends with a suffix
        // 
        // This parameter is required.
        shared_ptr<string> function_ {};
        // The name of the field based on which instances are filtered. Valid values of N: 1 to 3.
        // 
        // Only hostnames are supported. Example: hostName.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
        // The value to be matched with the specified field. Valid values of N: 1 to 3.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->filterRelation_ == nullptr && this->filters_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline GroupRules& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // filterRelation Field Functions 
      bool hasFilterRelation() const { return this->filterRelation_ != nullptr;};
      void deleteFilterRelation() { this->filterRelation_ = nullptr;};
      inline string getFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(filterRelation_, "") };
      inline GroupRules& setFilterRelation(string filterRelation) { DARABONBA_PTR_SET_VALUE(filterRelation_, filterRelation) };


      // filters Field Functions 
      bool hasFilters() const { return this->filters_ != nullptr;};
      void deleteFilters() { this->filters_ = nullptr;};
      inline const vector<GroupRules::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<GroupRules::Filters>) };
      inline vector<GroupRules::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<GroupRules::Filters>) };
      inline GroupRules& setFilters(const vector<GroupRules::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
      inline GroupRules& setFilters(vector<GroupRules::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    protected:
      // The cloud service to which the alert rule is applied. Valid values of N: 1 to 3. Valid values:
      // 
      // *   ecs: Elastic Compute Service (ECS)
      // *   rds: ApsaraDB RDS
      // *   slb: Server Load Balancer (SLB)
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // The logical operator used between conditional expressions in the alert rule. Valid values of N: 1 to 3. Valid values:
      // 
      // *   and: The instances that meet all the conditional expressions are automatically added to the application group.
      // *   or: The instances that meet one of the conditional expressions are automatically added to the application group.
      // 
      // This parameter is required.
      shared_ptr<string> filterRelation_ {};
      // None.
      // 
      // This parameter is required.
      shared_ptr<vector<GroupRules::Filters>> filters_ {};
    };

    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupRules_ == nullptr && this->isAsync_ == nullptr && this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline PutMonitorGroupDynamicRuleRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupRules Field Functions 
    bool hasGroupRules() const { return this->groupRules_ != nullptr;};
    void deleteGroupRules() { this->groupRules_ = nullptr;};
    inline const vector<PutMonitorGroupDynamicRuleRequest::GroupRules> & getGroupRules() const { DARABONBA_PTR_GET_CONST(groupRules_, vector<PutMonitorGroupDynamicRuleRequest::GroupRules>) };
    inline vector<PutMonitorGroupDynamicRuleRequest::GroupRules> getGroupRules() { DARABONBA_PTR_GET(groupRules_, vector<PutMonitorGroupDynamicRuleRequest::GroupRules>) };
    inline PutMonitorGroupDynamicRuleRequest& setGroupRules(const vector<PutMonitorGroupDynamicRuleRequest::GroupRules> & groupRules) { DARABONBA_PTR_SET_VALUE(groupRules_, groupRules) };
    inline PutMonitorGroupDynamicRuleRequest& setGroupRules(vector<PutMonitorGroupDynamicRuleRequest::GroupRules> && groupRules) { DARABONBA_PTR_SET_RVALUE(groupRules_, groupRules) };


    // isAsync Field Functions 
    bool hasIsAsync() const { return this->isAsync_ != nullptr;};
    void deleteIsAsync() { this->isAsync_ = nullptr;};
    inline bool getIsAsync() const { DARABONBA_PTR_GET_DEFAULT(isAsync_, false) };
    inline PutMonitorGroupDynamicRuleRequest& setIsAsync(bool isAsync) { DARABONBA_PTR_SET_VALUE(isAsync_, isAsync) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutMonitorGroupDynamicRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // None.
    // 
    // This parameter is required.
    shared_ptr<vector<PutMonitorGroupDynamicRuleRequest::GroupRules>> groupRules_ {};
    // The mode for creating the alert rule. Valid values:
    // 
    // *   true: creates asynchronously
    // *   false (default): creates synchronously
    shared_ptr<bool> isAsync_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
