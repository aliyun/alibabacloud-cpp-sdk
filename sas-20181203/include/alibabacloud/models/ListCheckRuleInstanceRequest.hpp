// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckRuleInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    ListCheckRuleInstanceRequest() = default ;
    ListCheckRuleInstanceRequest(const ListCheckRuleInstanceRequest &) = default ;
    ListCheckRuleInstanceRequest(ListCheckRuleInstanceRequest &&) = default ;
    ListCheckRuleInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleInstanceRequest() = default ;
    ListCheckRuleInstanceRequest& operator=(const ListCheckRuleInstanceRequest &) = default ;
    ListCheckRuleInstanceRequest& operator=(ListCheckRuleInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // Asset instance ID.
      // > Call the [ListCheckInstanceResult](~~ListCheckInstanceResult~~) interface to get this parameter.
      shared_ptr<string> instanceId_ {};
      // The region where the asset is located.
      // > Call the [ListCheckInstanceResult](~~ListCheckInstanceResult~~) interface to get this parameter.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->instanceList_ == nullptr && this->pageSize_ == nullptr && this->ruleId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckRuleInstanceRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ListCheckRuleInstanceRequest::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ListCheckRuleInstanceRequest::InstanceList>) };
    inline vector<ListCheckRuleInstanceRequest::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<ListCheckRuleInstanceRequest::InstanceList>) };
    inline ListCheckRuleInstanceRequest& setInstanceList(const vector<ListCheckRuleInstanceRequest::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListCheckRuleInstanceRequest& setInstanceList(vector<ListCheckRuleInstanceRequest::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckRuleInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListCheckRuleInstanceRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The page number of the current page when performing a paginated query.
    shared_ptr<int32_t> currentPage_ {};
    // Instance list.
    shared_ptr<vector<ListCheckRuleInstanceRequest::InstanceList>> instanceList_ {};
    // The maximum number of items per page in a paginated query. The default value is **20**.
    shared_ptr<int32_t> pageSize_ {};
    // Rule ID.
    // > You can call the [LisCheckRule](https://help.aliyun.com/document_detail/2590599.html) interface to get this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
