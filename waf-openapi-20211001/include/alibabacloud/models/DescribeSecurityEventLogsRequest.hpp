// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeSecurityEventLogsRequest() = default ;
    DescribeSecurityEventLogsRequest(const DescribeSecurityEventLogsRequest &) = default ;
    DescribeSecurityEventLogsRequest(DescribeSecurityEventLogsRequest &&) = default ;
    DescribeSecurityEventLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventLogsRequest() = default ;
    DescribeSecurityEventLogsRequest& operator=(const DescribeSecurityEventLogsRequest &) = default ;
    DescribeSecurityEventLogsRequest& operator=(DescribeSecurityEventLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DateRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DateRange& obj) { 
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        };
        friend void from_json(const Darabonba::Json& j, DateRange& obj) { 
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        };
        DateRange() = default ;
        DateRange(const DateRange &) = default ;
        DateRange(DateRange &&) = default ;
        DateRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DateRange() = default ;
        DateRange& operator=(const DateRange &) = default ;
        DateRange& operator=(DateRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endDate_ == nullptr
        && this->startDate_ == nullptr; };
        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
        inline DateRange& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
        inline DateRange& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      protected:
        // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
        // 
        // This parameter is required.
        shared_ptr<int64_t> endDate_ {};
        // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
        // 
        // This parameter is required.
        shared_ptr<int64_t> startDate_ {};
      };

      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(OpValue, opValue_);
          DARABONBA_ANY_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(OpValue, opValue_);
          DARABONBA_ANY_FROM_JSON(Values, values_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->opValue_ == nullptr && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Conditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // opValue Field Functions 
        bool hasOpValue() const { return this->opValue_ != nullptr;};
        void deleteOpValue() { this->opValue_ = nullptr;};
        inline string getOpValue() const { DARABONBA_PTR_GET_DEFAULT(opValue_, "") };
        inline Conditions& setOpValue(string opValue) { DARABONBA_PTR_SET_VALUE(opValue_, opValue) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline         const Darabonba::Json & getValues() const { DARABONBA_GET(values_) };
        Darabonba::Json & getValues() { DARABONBA_GET(values_) };
        inline Conditions& setValues(const Darabonba::Json & values) { DARABONBA_SET_VALUE(values_, values) };
        inline Conditions& setValues(Darabonba::Json && values) { DARABONBA_SET_RVALUE(values_, values) };


      protected:
        // The field name. This operation supports all fields. For more information, see the **Supported field names** section below.
        shared_ptr<string> key_ {};
        // The operator. For more information, see the **Supported operators** section below.
        shared_ptr<string> opValue_ {};
        // The field content.
        Darabonba::Json values_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->dateRange_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Filter::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Filter::Conditions>) };
      inline vector<Filter::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Filter::Conditions>) };
      inline Filter& setConditions(const vector<Filter::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Filter& setConditions(vector<Filter::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // dateRange Field Functions 
      bool hasDateRange() const { return this->dateRange_ != nullptr;};
      void deleteDateRange() { this->dateRange_ = nullptr;};
      inline const Filter::DateRange & getDateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Filter::DateRange) };
      inline Filter::DateRange getDateRange() { DARABONBA_PTR_GET(dateRange_, Filter::DateRange) };
      inline Filter& setDateRange(const Filter::DateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
      inline Filter& setDateRange(Filter::DateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    protected:
      // The filter conditions. Each object describes a filter condition.
      shared_ptr<vector<Filter::Conditions>> conditions_ {};
      // The time range for the query.
      // 
      // This parameter is required.
      shared_ptr<Filter::DateRange> dateRange_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeSecurityEventLogsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeSecurityEventLogsRequest::Filter) };
    inline DescribeSecurityEventLogsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, DescribeSecurityEventLogsRequest::Filter) };
    inline DescribeSecurityEventLogsRequest& setFilter(const DescribeSecurityEventLogsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeSecurityEventLogsRequest& setFilter(DescribeSecurityEventLogsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventLogsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSecurityEventLogsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSecurityEventLogsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventLogsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. Multiple conditions are evaluated by using a logical AND.
    // 
    // This parameter is required.
    shared_ptr<DescribeSecurityEventLogsRequest::Filter> filter_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: **1**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **100**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: The Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
