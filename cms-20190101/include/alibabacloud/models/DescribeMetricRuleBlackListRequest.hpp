// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTREQUEST_HPP_
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
  class DescribeMetricRuleBlackListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleBlackListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    DescribeMetricRuleBlackListRequest() = default ;
    DescribeMetricRuleBlackListRequest(const DescribeMetricRuleBlackListRequest &) = default ;
    DescribeMetricRuleBlackListRequest(DescribeMetricRuleBlackListRequest &&) = default ;
    DescribeMetricRuleBlackListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleBlackListRequest() = default ;
    DescribeMetricRuleBlackListRequest& operator=(const DescribeMetricRuleBlackListRequest &) = default ;
    DescribeMetricRuleBlackListRequest& operator=(DescribeMetricRuleBlackListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->ids_ == nullptr && return this->instanceIds_ == nullptr && return this->isEnable_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->scopeType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMetricRuleBlackListRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline DescribeMetricRuleBlackListRequest& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DescribeMetricRuleBlackListRequest& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeMetricRuleBlackListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeMetricRuleBlackListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline bool isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
    inline DescribeMetricRuleBlackListRequest& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMetricRuleBlackListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricRuleBlackListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline DescribeMetricRuleBlackListRequest& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMetricRuleBlackListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetricRuleBlackListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricRuleBlackListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline DescribeMetricRuleBlackListRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The ID of the blacklist policy.
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<string>> ids_ = nullptr;
    // The IDs of the instances in the blacklist policy.
    // 
    // Valid values of N: 0 to 10.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The status of the blacklist policy. Valid values:
    // 
    // *   true: The blacklist policy is enabled.
    // *   false: The blacklist policy is disabled.
    std::shared_ptr<bool> isEnable_ = nullptr;
    // The name of the blacklist policy.
    // 
    // This parameter supports fuzzy match.
    std::shared_ptr<string> name_ = nullptr;
    // The timestamp when the blacklist policy expired.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> namespace_ = nullptr;
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The name of the metric.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The categories of the Alibaba Cloud service. For example, ApsaraDB for Redis includes the following categories: ApsaraDB for Redis (standard architecture), ApsaraDB for Redis (cluster architecture), and ApsaraDB for Redis (read/write splitting architecture). In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The effective scope of the blacklist policy. Valid values:
    // 
    // *   USER: The blacklist policy takes effect only within the current Alibaba Cloud account.
    // *   GROUP: The blacklist policy takes effect only within the specified application group.
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
