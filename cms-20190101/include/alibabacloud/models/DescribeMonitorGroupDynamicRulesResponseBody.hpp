// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODY_HPP_
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
  class DescribeMonitorGroupDynamicRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitorGroupDynamicRulesResponseBody() = default ;
    DescribeMonitorGroupDynamicRulesResponseBody(const DescribeMonitorGroupDynamicRulesResponseBody &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBody(DescribeMonitorGroupDynamicRulesResponseBody &&) = default ;
    DescribeMonitorGroupDynamicRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesResponseBody() = default ;
    DescribeMonitorGroupDynamicRulesResponseBody& operator=(const DescribeMonitorGroupDynamicRulesResponseBody &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBody& operator=(DescribeMonitorGroupDynamicRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceItem& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(FilterRelation, filterRelation_);
          DARABONBA_PTR_TO_JSON(Filters, filters_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(FilterRelation, filterRelation_);
          DARABONBA_PTR_FROM_JSON(Filters, filters_);
        };
        ResourceItem() = default ;
        ResourceItem(const ResourceItem &) = default ;
        ResourceItem(ResourceItem &&) = default ;
        ResourceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceItem() = default ;
        ResourceItem& operator=(const ResourceItem &) = default ;
        ResourceItem& operator=(ResourceItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Filters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Filters& obj) { 
            DARABONBA_PTR_TO_JSON(Filter, filter_);
          };
          friend void from_json(const Darabonba::Json& j, Filters& obj) { 
            DARABONBA_PTR_FROM_JSON(Filter, filter_);
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
          class Filter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Filter& obj) { 
              DARABONBA_PTR_TO_JSON(Function, function_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Filter& obj) { 
              DARABONBA_PTR_FROM_JSON(Function, function_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
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
            virtual bool empty() const override { return this->function_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
            // function Field Functions 
            bool hasFunction() const { return this->function_ != nullptr;};
            void deleteFunction() { this->function_ = nullptr;};
            inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
            inline Filter& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Filter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The method that is used to filter the instances. Valid values:
            // 
            // *   contains: contains
            // *   startWith: starts with a prefix
            // *   endWith: ends with a suffix
            shared_ptr<string> function_ {};
            // The instance name.
            shared_ptr<string> name_ {};
            // The value of the dynamic rule.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->filter_ == nullptr; };
          // filter Field Functions 
          bool hasFilter() const { return this->filter_ != nullptr;};
          void deleteFilter() { this->filter_ = nullptr;};
          inline const vector<Filters::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<Filters::Filter>) };
          inline vector<Filters::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<Filters::Filter>) };
          inline Filters& setFilter(const vector<Filters::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
          inline Filters& setFilter(vector<Filters::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


        protected:
          shared_ptr<vector<Filters::Filter>> filter_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->filterRelation_ == nullptr && this->filters_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline ResourceItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // filterRelation Field Functions 
        bool hasFilterRelation() const { return this->filterRelation_ != nullptr;};
        void deleteFilterRelation() { this->filterRelation_ = nullptr;};
        inline string getFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(filterRelation_, "") };
        inline ResourceItem& setFilterRelation(string filterRelation) { DARABONBA_PTR_SET_VALUE(filterRelation_, filterRelation) };


        // filters Field Functions 
        bool hasFilters() const { return this->filters_ != nullptr;};
        void deleteFilters() { this->filters_ = nullptr;};
        inline const ResourceItem::Filters & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, ResourceItem::Filters) };
        inline ResourceItem::Filters getFilters() { DARABONBA_PTR_GET(filters_, ResourceItem::Filters) };
        inline ResourceItem& setFilters(const ResourceItem::Filters & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
        inline ResourceItem& setFilters(ResourceItem::Filters && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


      protected:
        // The type of the cloud service to which the dynamic rule belongs. Valid values:
        // 
        // *   ecs: Elastic Compute Service (ECS)
        // *   rds: ApsaraDB RDS
        // *   slb: Server Load Balancer (SLB)
        shared_ptr<string> category_ {};
        // The filter condition. Valid values:
        // 
        // *   and: queries the instances that meet all alert rules.
        // *   or: queries the instances that meet any alert rule.
        shared_ptr<string> filterRelation_ {};
        // The dynamic rules of the application group.
        shared_ptr<ResourceItem::Filters> filters_ {};
      };

      virtual bool empty() const override { return this->resource_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Resource::ResourceItem> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Resource::ResourceItem>) };
      inline vector<Resource::ResourceItem> getResource() { DARABONBA_PTR_GET(resource_, vector<Resource::ResourceItem>) };
      inline Resource& setResource(const vector<Resource::ResourceItem> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Resource& setResource(vector<Resource::ResourceItem> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    protected:
      shared_ptr<vector<Resource::ResourceItem>> resource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resource_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const DescribeMonitorGroupDynamicRulesResponseBody::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, DescribeMonitorGroupDynamicRulesResponseBody::Resource) };
    inline DescribeMonitorGroupDynamicRulesResponseBody::Resource getResource() { DARABONBA_PTR_GET(resource_, DescribeMonitorGroupDynamicRulesResponseBody::Resource) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setResource(const DescribeMonitorGroupDynamicRulesResponseBody::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setResource(DescribeMonitorGroupDynamicRulesResponseBody::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources that are associated with the application group.
    shared_ptr<DescribeMonitorGroupDynamicRulesResponseBody::Resource> resource_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
