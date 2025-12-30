// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERVPCAUTHORIZATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERVPCAUTHORIZATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeUserVpcAuthorizationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserVpcAuthorizationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserVpcAuthorizationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeUserVpcAuthorizationsRequest() = default ;
    DescribeUserVpcAuthorizationsRequest(const DescribeUserVpcAuthorizationsRequest &) = default ;
    DescribeUserVpcAuthorizationsRequest(DescribeUserVpcAuthorizationsRequest &&) = default ;
    DescribeUserVpcAuthorizationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserVpcAuthorizationsRequest() = default ;
    DescribeUserVpcAuthorizationsRequest& operator=(const DescribeUserVpcAuthorizationsRequest &) = default ;
    DescribeUserVpcAuthorizationsRequest& operator=(DescribeUserVpcAuthorizationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && this->authorizedUserId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeUserVpcAuthorizationsRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline int64_t getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, 0L) };
    inline DescribeUserVpcAuthorizationsRequest& setAuthorizedUserId(int64_t authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserVpcAuthorizationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserVpcAuthorizationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The authorization scope. Valid values:
    // 
    // *   NORMAL: general authorization
    // *   CLOUD_PRODUCT: cloud service-related authorization
    shared_ptr<string> authType_ {};
    // The ID of the Alibaba Cloud account to which the permissions on the resources are granted.
    shared_ptr<int64_t> authorizedUserId_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
