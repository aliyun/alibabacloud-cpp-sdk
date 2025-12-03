// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByVpcAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByVpcAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByVpcAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeApisByVpcAccessRequest() = default ;
    DescribeApisByVpcAccessRequest(const DescribeApisByVpcAccessRequest &) = default ;
    DescribeApisByVpcAccessRequest(DescribeApisByVpcAccessRequest &&) = default ;
    DescribeApisByVpcAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByVpcAccessRequest() = default ;
    DescribeApisByVpcAccessRequest& operator=(const DescribeApisByVpcAccessRequest &) = default ;
    DescribeApisByVpcAccessRequest& operator=(DescribeApisByVpcAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->vpcName_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByVpcAccessRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByVpcAccessRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApisByVpcAccessRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeApisByVpcAccessRequest& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the VPC access authorization.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
