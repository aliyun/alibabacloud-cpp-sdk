// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByIpControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByIpControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByIpControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeApisByIpControlRequest() = default ;
    DescribeApisByIpControlRequest(const DescribeApisByIpControlRequest &) = default ;
    DescribeApisByIpControlRequest(DescribeApisByIpControlRequest &&) = default ;
    DescribeApisByIpControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByIpControlRequest() = default ;
    DescribeApisByIpControlRequest& operator=(const DescribeApisByIpControlRequest &) = default ;
    DescribeApisByIpControlRequest& operator=(DescribeApisByIpControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr; };
    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline DescribeApisByIpControlRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByIpControlRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByIpControlRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApisByIpControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the ACL.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlId_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
