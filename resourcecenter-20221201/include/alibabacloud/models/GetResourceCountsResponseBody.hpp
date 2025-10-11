// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceCountsResponseBodyFilters.hpp>
#include <alibabacloud/models/GetResourceCountsResponseBodyResourceCounts.hpp>
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
    virtual bool empty() const override { this->filters_ != nullptr
        && this->groupByKey_ != nullptr && this->requestId_ != nullptr && this->resourceCounts_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<GetResourceCountsResponseBodyFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<GetResourceCountsResponseBodyFilters>) };
    inline vector<GetResourceCountsResponseBodyFilters> filters() { DARABONBA_PTR_GET(filters_, vector<GetResourceCountsResponseBodyFilters>) };
    inline GetResourceCountsResponseBody& setFilters(const vector<GetResourceCountsResponseBodyFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline GetResourceCountsResponseBody& setFilters(vector<GetResourceCountsResponseBodyFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceCountsResponseBody& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceCountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCounts Field Functions 
    bool hasResourceCounts() const { return this->resourceCounts_ != nullptr;};
    void deleteResourceCounts() { this->resourceCounts_ = nullptr;};
    inline const vector<GetResourceCountsResponseBodyResourceCounts> & resourceCounts() const { DARABONBA_PTR_GET_CONST(resourceCounts_, vector<GetResourceCountsResponseBodyResourceCounts>) };
    inline vector<GetResourceCountsResponseBodyResourceCounts> resourceCounts() { DARABONBA_PTR_GET(resourceCounts_, vector<GetResourceCountsResponseBodyResourceCounts>) };
    inline GetResourceCountsResponseBody& setResourceCounts(const vector<GetResourceCountsResponseBodyResourceCounts> & resourceCounts) { DARABONBA_PTR_SET_VALUE(resourceCounts_, resourceCounts) };
    inline GetResourceCountsResponseBody& setResourceCounts(vector<GetResourceCountsResponseBodyResourceCounts> && resourceCounts) { DARABONBA_PTR_SET_RVALUE(resourceCounts_, resourceCounts) };


  protected:
    // The filter conditions.
    std::shared_ptr<vector<GetResourceCountsResponseBodyFilters>> filters_ = nullptr;
    // The dimension by which resources are queried.
    std::shared_ptr<string> groupByKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The numbers of resources.
    std::shared_ptr<vector<GetResourceCountsResponseBodyResourceCounts>> resourceCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
