// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUserResourcePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortRule, sortRule_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortRule, sortRule_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeUserResourcePackageRequest() = default ;
    DescribeUserResourcePackageRequest(const DescribeUserResourcePackageRequest &) = default ;
    DescribeUserResourcePackageRequest(DescribeUserResourcePackageRequest &&) = default ;
    DescribeUserResourcePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcePackageRequest() = default ;
    DescribeUserResourcePackageRequest& operator=(const DescribeUserResourcePackageRequest &) = default ;
    DescribeUserResourcePackageRequest& operator=(DescribeUserResourcePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->securityToken_ == nullptr && this->sortField_ == nullptr && this->sortRule_ == nullptr
        && this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUserResourcePackageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserResourcePackageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserResourcePackageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeUserResourcePackageRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline DescribeUserResourcePackageRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortRule Field Functions 
    bool hasSortRule() const { return this->sortRule_ != nullptr;};
    void deleteSortRule() { this->sortRule_ = nullptr;};
    inline string getSortRule() const { DARABONBA_PTR_GET_DEFAULT(sortRule_, "") };
    inline DescribeUserResourcePackageRequest& setSortRule(string sortRule) { DARABONBA_PTR_SET_VALUE(sortRule_, sortRule) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeUserResourcePackageRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID of the resource plan.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> securityToken_ {};
    // The sorting field. Valid values:
    // - startTime: the effective period of the instance.
    // - endTime: the expiration time of the instance.
    // - StartTime: the effective period of the instance.
    // - EndTime: the expiration time of the instance.
    // - default: no sorting field.
    shared_ptr<string> sortField_ {};
    // The sorting rule. Default value: desc. Valid values:
    // - asc
    // - desc
    shared_ptr<string> sortRule_ {};
    // The status of the resource plan. Default value: valid. Valid values:
    // - valid: Valid.
    // - invalid: Invalid.
    // - exhaust: Exhausted.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
