// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultiAccountResourceCountsResponseBodyFilters.hpp>
#include <alibabacloud/models/GetMultiAccountResourceCountsResponseBodyResourceCounts.hpp>
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
    virtual bool empty() const override { this->filters_ != nullptr
        && this->groupByKey_ != nullptr && this->requestId_ != nullptr && this->resourceCounts_ != nullptr && this->scope_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<GetMultiAccountResourceCountsResponseBodyFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<GetMultiAccountResourceCountsResponseBodyFilters>) };
    inline vector<GetMultiAccountResourceCountsResponseBodyFilters> filters() { DARABONBA_PTR_GET(filters_, vector<GetMultiAccountResourceCountsResponseBodyFilters>) };
    inline GetMultiAccountResourceCountsResponseBody& setFilters(const vector<GetMultiAccountResourceCountsResponseBodyFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline GetMultiAccountResourceCountsResponseBody& setFilters(vector<GetMultiAccountResourceCountsResponseBodyFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetMultiAccountResourceCountsResponseBody& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiAccountResourceCountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCounts Field Functions 
    bool hasResourceCounts() const { return this->resourceCounts_ != nullptr;};
    void deleteResourceCounts() { this->resourceCounts_ = nullptr;};
    inline const vector<GetMultiAccountResourceCountsResponseBodyResourceCounts> & resourceCounts() const { DARABONBA_PTR_GET_CONST(resourceCounts_, vector<GetMultiAccountResourceCountsResponseBodyResourceCounts>) };
    inline vector<GetMultiAccountResourceCountsResponseBodyResourceCounts> resourceCounts() { DARABONBA_PTR_GET(resourceCounts_, vector<GetMultiAccountResourceCountsResponseBodyResourceCounts>) };
    inline GetMultiAccountResourceCountsResponseBody& setResourceCounts(const vector<GetMultiAccountResourceCountsResponseBodyResourceCounts> & resourceCounts) { DARABONBA_PTR_SET_VALUE(resourceCounts_, resourceCounts) };
    inline GetMultiAccountResourceCountsResponseBody& setResourceCounts(vector<GetMultiAccountResourceCountsResponseBodyResourceCounts> && resourceCounts) { DARABONBA_PTR_SET_RVALUE(resourceCounts_, resourceCounts) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetMultiAccountResourceCountsResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    std::shared_ptr<vector<GetMultiAccountResourceCountsResponseBodyFilters>> filters_ = nullptr;
    std::shared_ptr<string> groupByKey_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetMultiAccountResourceCountsResponseBodyResourceCounts>> resourceCounts_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
