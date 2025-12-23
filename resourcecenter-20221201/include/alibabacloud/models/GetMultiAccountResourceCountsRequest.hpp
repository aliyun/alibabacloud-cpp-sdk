// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultiAccountResourceCountsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountResourceCountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountResourceCountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountResourceCountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    GetMultiAccountResourceCountsRequest() = default ;
    GetMultiAccountResourceCountsRequest(const GetMultiAccountResourceCountsRequest &) = default ;
    GetMultiAccountResourceCountsRequest(GetMultiAccountResourceCountsRequest &&) = default ;
    GetMultiAccountResourceCountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountResourceCountsRequest() = default ;
    GetMultiAccountResourceCountsRequest& operator=(const GetMultiAccountResourceCountsRequest &) = default ;
    GetMultiAccountResourceCountsRequest& operator=(GetMultiAccountResourceCountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->groupByKey_ == nullptr && return this->scope_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetMultiAccountResourceCountsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetMultiAccountResourceCountsRequestFilter>) };
    inline vector<GetMultiAccountResourceCountsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<GetMultiAccountResourceCountsRequestFilter>) };
    inline GetMultiAccountResourceCountsRequest& setFilter(const vector<GetMultiAccountResourceCountsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetMultiAccountResourceCountsRequest& setFilter(vector<GetMultiAccountResourceCountsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetMultiAccountResourceCountsRequest& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetMultiAccountResourceCountsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    std::shared_ptr<vector<GetMultiAccountResourceCountsRequestFilter>> filter_ = nullptr;
    std::shared_ptr<string> groupByKey_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
