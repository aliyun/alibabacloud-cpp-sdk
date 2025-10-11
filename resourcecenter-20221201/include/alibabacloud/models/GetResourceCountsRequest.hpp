// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceCountsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceCountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceCountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceCountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
    };
    GetResourceCountsRequest() = default ;
    GetResourceCountsRequest(const GetResourceCountsRequest &) = default ;
    GetResourceCountsRequest(GetResourceCountsRequest &&) = default ;
    GetResourceCountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceCountsRequest() = default ;
    GetResourceCountsRequest& operator=(const GetResourceCountsRequest &) = default ;
    GetResourceCountsRequest& operator=(GetResourceCountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->groupByKey_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetResourceCountsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetResourceCountsRequestFilter>) };
    inline vector<GetResourceCountsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<GetResourceCountsRequestFilter>) };
    inline GetResourceCountsRequest& setFilter(const vector<GetResourceCountsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetResourceCountsRequest& setFilter(vector<GetResourceCountsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceCountsRequest& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


  protected:
    // The filter conditions.
    std::shared_ptr<vector<GetResourceCountsRequestFilter>> filter_ = nullptr;
    // The dimension by which resources are queried. Valid values:
    // 
    // *   ResourceType
    // *   Region
    // *   ResourceGroupId
    // *   TagKey
    // *   TagValue
    std::shared_ptr<string> groupByKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
