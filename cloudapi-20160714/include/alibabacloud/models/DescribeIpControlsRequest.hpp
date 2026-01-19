// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_TO_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_FROM_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeIpControlsRequest() = default ;
    DescribeIpControlsRequest(const DescribeIpControlsRequest &) = default ;
    DescribeIpControlsRequest(DescribeIpControlsRequest &&) = default ;
    DescribeIpControlsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlsRequest() = default ;
    DescribeIpControlsRequest& operator=(const DescribeIpControlsRequest &) = default ;
    DescribeIpControlsRequest& operator=(DescribeIpControlsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlId_ == nullptr
        && this->ipControlName_ == nullptr && this->ipControlType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->securityToken_ == nullptr; };
    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string getIpControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline DescribeIpControlsRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // ipControlName Field Functions 
    bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
    void deleteIpControlName() { this->ipControlName_ = nullptr;};
    inline string getIpControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
    inline DescribeIpControlsRequest& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


    // ipControlType Field Functions 
    bool hasIpControlType() const { return this->ipControlType_ != nullptr;};
    void deleteIpControlType() { this->ipControlType_ = nullptr;};
    inline string getIpControlType() const { DARABONBA_PTR_GET_DEFAULT(ipControlType_, "") };
    inline DescribeIpControlsRequest& setIpControlType(string ipControlType) { DARABONBA_PTR_SET_VALUE(ipControlType_, ipControlType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpControlsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpControlsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeIpControlsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the ACL. The ID is unique.
    shared_ptr<string> ipControlId_ {};
    // The name of the ACL.
    shared_ptr<string> ipControlName_ {};
    // The type of the ACL. Valid values:
    // 
    // *   **ALLOW**: a whitelist
    // *   **REFUSE**: a blacklist
    shared_ptr<string> ipControlType_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
