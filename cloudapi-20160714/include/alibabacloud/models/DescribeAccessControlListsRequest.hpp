// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeAccessControlListsRequest() = default ;
    DescribeAccessControlListsRequest(const DescribeAccessControlListsRequest &) = default ;
    DescribeAccessControlListsRequest(DescribeAccessControlListsRequest &&) = default ;
    DescribeAccessControlListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsRequest() = default ;
    DescribeAccessControlListsRequest& operator=(const DescribeAccessControlListsRequest &) = default ;
    DescribeAccessControlListsRequest& operator=(DescribeAccessControlListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclName_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr; };
    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListsRequest& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListsRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessControlListsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessControlListsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeAccessControlListsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The name of the access control policy.
    std::shared_ptr<string> aclName_ = nullptr;
    // IP版本，可以设置为**ipv4**或者**ipv6**。
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The page number of the current page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
