// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResourceCountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCounts, resourceCounts_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResourceCountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCounts, resourceCounts_);
    };
    GetResourceGroupResourceCountsResponseBody() = default ;
    GetResourceGroupResourceCountsResponseBody(const GetResourceGroupResourceCountsResponseBody &) = default ;
    GetResourceGroupResourceCountsResponseBody(GetResourceGroupResourceCountsResponseBody &&) = default ;
    GetResourceGroupResourceCountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResourceCountsResponseBody() = default ;
    GetResourceGroupResourceCountsResponseBody& operator=(const GetResourceGroupResourceCountsResponseBody &) = default ;
    GetResourceGroupResourceCountsResponseBody& operator=(GetResourceGroupResourceCountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
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
        && this->groupByKey_ == nullptr && this->resourceGroupId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline ResourceCounts& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // groupByKey Field Functions 
      bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
      void deleteGroupByKey() { this->groupByKey_ = nullptr;};
      inline string getGroupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
      inline ResourceCounts& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ResourceCounts& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The number of the resources.
      shared_ptr<int64_t> count_ {};
      // The dimension by which resources are queried.
      shared_ptr<string> groupByKey_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceCounts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupResourceCountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCounts Field Functions 
    bool hasResourceCounts() const { return this->resourceCounts_ != nullptr;};
    void deleteResourceCounts() { this->resourceCounts_ = nullptr;};
    inline const vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts> & getResourceCounts() const { DARABONBA_PTR_GET_CONST(resourceCounts_, vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts>) };
    inline vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts> getResourceCounts() { DARABONBA_PTR_GET(resourceCounts_, vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts>) };
    inline GetResourceGroupResourceCountsResponseBody& setResourceCounts(const vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts> & resourceCounts) { DARABONBA_PTR_SET_VALUE(resourceCounts_, resourceCounts) };
    inline GetResourceGroupResourceCountsResponseBody& setResourceCounts(vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts> && resourceCounts) { DARABONBA_PTR_SET_RVALUE(resourceCounts_, resourceCounts) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The numbers of the resources.
    shared_ptr<vector<GetResourceGroupResourceCountsResponseBody::ResourceCounts>> resourceCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
