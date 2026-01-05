// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupTypes, resourceGroupTypes_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupTypes, resourceGroupTypes_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest(ListResourceGroupsRequest &&) = default ;
    ListResourceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest& operator=(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest& operator=(ListResourceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AliyunResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AliyunResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AliyunResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AliyunResourceTags() = default ;
      AliyunResourceTags(const AliyunResourceTags &) = default ;
      AliyunResourceTags(AliyunResourceTags &&) = default ;
      AliyunResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AliyunResourceTags() = default ;
      AliyunResourceTags& operator=(const AliyunResourceTags &) = default ;
      AliyunResourceTags& operator=(AliyunResourceTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline AliyunResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AliyunResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Tag Key
      shared_ptr<string> key_ {};
      // Tag Value
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->aliyunResourceTags_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paymentType_ == nullptr
        && this->projectId_ == nullptr && this->resourceGroupTypes_ == nullptr && this->sortBy_ == nullptr && this->statuses_ == nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline ListResourceGroupsRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTags Field Functions 
    bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
    void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
    inline const vector<ListResourceGroupsRequest::AliyunResourceTags> & getAliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<ListResourceGroupsRequest::AliyunResourceTags>) };
    inline vector<ListResourceGroupsRequest::AliyunResourceTags> getAliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<ListResourceGroupsRequest::AliyunResourceTags>) };
    inline ListResourceGroupsRequest& setAliyunResourceTags(const vector<ListResourceGroupsRequest::AliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
    inline ListResourceGroupsRequest& setAliyunResourceTags(vector<ListResourceGroupsRequest::AliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListResourceGroupsRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListResourceGroupsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceGroupTypes Field Functions 
    bool hasResourceGroupTypes() const { return this->resourceGroupTypes_ != nullptr;};
    void deleteResourceGroupTypes() { this->resourceGroupTypes_ = nullptr;};
    inline const vector<string> & getResourceGroupTypes() const { DARABONBA_PTR_GET_CONST(resourceGroupTypes_, vector<string>) };
    inline vector<string> getResourceGroupTypes() { DARABONBA_PTR_GET(resourceGroupTypes_, vector<string>) };
    inline ListResourceGroupsRequest& setResourceGroupTypes(const vector<string> & resourceGroupTypes) { DARABONBA_PTR_SET_VALUE(resourceGroupTypes_, resourceGroupTypes) };
    inline ListResourceGroupsRequest& setResourceGroupTypes(vector<string> && resourceGroupTypes) { DARABONBA_PTR_SET_RVALUE(resourceGroupTypes_, resourceGroupTypes) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListResourceGroupsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListResourceGroupsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListResourceGroupsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // Alibaba Cloud Resource Group ID
    shared_ptr<string> aliyunResourceGroupId_ {};
    // Alibaba Cloud tag list
    shared_ptr<vector<ListResourceGroupsRequest::AliyunResourceTags>> aliyunResourceTags_ {};
    // The name of a resource group, which is used for fuzzy match.
    shared_ptr<string> name_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The billing method of resource groups. Valid values:
    // 
    // *   PrePaid
    // *   PostPaid
    shared_ptr<string> paymentType_ {};
    // The ID of the DataWorks workspace.
    shared_ptr<int64_t> projectId_ {};
    // The types of resource groups to query. If you do not configure this parameter, only serverless resource groups are returned by default.
    shared_ptr<vector<string>> resourceGroupTypes_ {};
    // The list of fields used for sorting. Fields such as TriggerTime and StartedTime are supported. You must configure this parameter in the Sorting field + Sort by (Desc/Asc). By default, results are sorted in ascending order. Valid values:
    // 
    // *   Id (Desc/Asc): the resource group ID
    // *   Name (Desc/Asc): the name of the resource group
    // *   Remark (Desc/Asc): the remarks of the resource group
    // *   Type (Desc/Asc): the type of the resource group
    // *   Status (Desc/Asc): the status of the resource group
    // *   Spec (Desc/Asc): the specifications of the resource group
    // *   CreateUser (Desc/Asc): the creator of the resource group
    // *   CreateTime (Desc/Asc): the time when the resource group is created
    // 
    // Default value: CreateTime Asc
    shared_ptr<string> sortBy_ {};
    // The statuses of resource groups.
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
