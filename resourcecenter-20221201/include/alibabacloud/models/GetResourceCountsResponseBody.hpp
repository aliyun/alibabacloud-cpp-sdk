// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceCountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCounts, resourceCounts_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCounts, resourceCounts_);
    };
    GetResourceCountsResponseBody() = default ;
    GetResourceCountsResponseBody(const GetResourceCountsResponseBody &) = default ;
    GetResourceCountsResponseBody(GetResourceCountsResponseBody &&) = default ;
    GetResourceCountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceCountsResponseBody() = default ;
    GetResourceCountsResponseBody& operator=(const GetResourceCountsResponseBody &) = default ;
    GetResourceCountsResponseBody& operator=(GetResourceCountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      };
      ResourceCounts() = default ;
      ResourceCounts(const ResourceCounts &) = default ;
      ResourceCounts(ResourceCounts &&) = default ;
      ResourceCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceCounts() = default ;
      ResourceCounts& operator=(const ResourceCounts &) = default ;
      ResourceCounts& operator=(ResourceCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->groupName_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline ResourceCounts& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ResourceCounts& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The number of resources.
      shared_ptr<int64_t> count_ {};
      // The group name.
      shared_ptr<string> groupName_ {};
    };

    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The key of the filter condition.
      shared_ptr<string> key_ {};
      // The values of the filter condition.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->filters_ == nullptr
        && this->groupByKey_ == nullptr && this->requestId_ == nullptr && this->resourceCounts_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<GetResourceCountsResponseBody::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<GetResourceCountsResponseBody::Filters>) };
    inline vector<GetResourceCountsResponseBody::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<GetResourceCountsResponseBody::Filters>) };
    inline GetResourceCountsResponseBody& setFilters(const vector<GetResourceCountsResponseBody::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline GetResourceCountsResponseBody& setFilters(vector<GetResourceCountsResponseBody::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string getGroupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceCountsResponseBody& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceCountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCounts Field Functions 
    bool hasResourceCounts() const { return this->resourceCounts_ != nullptr;};
    void deleteResourceCounts() { this->resourceCounts_ = nullptr;};
    inline const vector<GetResourceCountsResponseBody::ResourceCounts> & getResourceCounts() const { DARABONBA_PTR_GET_CONST(resourceCounts_, vector<GetResourceCountsResponseBody::ResourceCounts>) };
    inline vector<GetResourceCountsResponseBody::ResourceCounts> getResourceCounts() { DARABONBA_PTR_GET(resourceCounts_, vector<GetResourceCountsResponseBody::ResourceCounts>) };
    inline GetResourceCountsResponseBody& setResourceCounts(const vector<GetResourceCountsResponseBody::ResourceCounts> & resourceCounts) { DARABONBA_PTR_SET_VALUE(resourceCounts_, resourceCounts) };
    inline GetResourceCountsResponseBody& setResourceCounts(vector<GetResourceCountsResponseBody::ResourceCounts> && resourceCounts) { DARABONBA_PTR_SET_RVALUE(resourceCounts_, resourceCounts) };


  protected:
    // The filter conditions.
    shared_ptr<vector<GetResourceCountsResponseBody::Filters>> filters_ {};
    // The dimension by which the queried resources are grouped.
    shared_ptr<string> groupByKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of resource counts.
    shared_ptr<vector<GetResourceCountsResponseBody::ResourceCounts>> resourceCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
