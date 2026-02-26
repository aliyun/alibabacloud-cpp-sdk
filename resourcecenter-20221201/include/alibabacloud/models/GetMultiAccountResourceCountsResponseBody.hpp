// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECOUNTSRESPONSEBODY_HPP_
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
  class GetMultiAccountResourceCountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCounts, resourceCounts_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCounts, resourceCounts_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    GetMultiAccountResourceCountsResponseBody() = default ;
    GetMultiAccountResourceCountsResponseBody(const GetMultiAccountResourceCountsResponseBody &) = default ;
    GetMultiAccountResourceCountsResponseBody(GetMultiAccountResourceCountsResponseBody &&) = default ;
    GetMultiAccountResourceCountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountResourceCountsResponseBody() = default ;
    GetMultiAccountResourceCountsResponseBody& operator=(const GetMultiAccountResourceCountsResponseBody &) = default ;
    GetMultiAccountResourceCountsResponseBody& operator=(GetMultiAccountResourceCountsResponseBody &&) = default ;
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
        && this->groupByKey_ == nullptr && this->requestId_ == nullptr && this->resourceCounts_ == nullptr && this->scope_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<GetMultiAccountResourceCountsResponseBody::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<GetMultiAccountResourceCountsResponseBody::Filters>) };
    inline vector<GetMultiAccountResourceCountsResponseBody::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<GetMultiAccountResourceCountsResponseBody::Filters>) };
    inline GetMultiAccountResourceCountsResponseBody& setFilters(const vector<GetMultiAccountResourceCountsResponseBody::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline GetMultiAccountResourceCountsResponseBody& setFilters(vector<GetMultiAccountResourceCountsResponseBody::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string getGroupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetMultiAccountResourceCountsResponseBody& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiAccountResourceCountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCounts Field Functions 
    bool hasResourceCounts() const { return this->resourceCounts_ != nullptr;};
    void deleteResourceCounts() { this->resourceCounts_ = nullptr;};
    inline const vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts> & getResourceCounts() const { DARABONBA_PTR_GET_CONST(resourceCounts_, vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts>) };
    inline vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts> getResourceCounts() { DARABONBA_PTR_GET(resourceCounts_, vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts>) };
    inline GetMultiAccountResourceCountsResponseBody& setResourceCounts(const vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts> & resourceCounts) { DARABONBA_PTR_SET_VALUE(resourceCounts_, resourceCounts) };
    inline GetMultiAccountResourceCountsResponseBody& setResourceCounts(vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts> && resourceCounts) { DARABONBA_PTR_SET_RVALUE(resourceCounts_, resourceCounts) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetMultiAccountResourceCountsResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The filter condition.
    shared_ptr<vector<GetMultiAccountResourceCountsResponseBody::Filters>> filters_ {};
    // The dimension by which resources are queried.
    shared_ptr<string> groupByKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The numbers of resources.
    shared_ptr<vector<GetMultiAccountResourceCountsResponseBody::ResourceCounts>> resourceCounts_ {};
    // The search scope. Valid values:
    // 
    // - ID of a resource directory: Resources within the management account and all members of the resource directory are searched.
    // 
    // - ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched.
    // 
    // - ID of a folder: Resources within all members in the folder are searched.
    // 
    // - ID of a member: Resources within the member are searched.
    // 
    // For information about how to obtain the ID of a resource directory, the Root folder, a folder, or a member, see [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html), [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html), or [ListAccounts](https://help.aliyun.com/document_detail/160016.html).
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
