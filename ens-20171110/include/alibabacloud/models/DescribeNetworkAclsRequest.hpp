// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAclsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(NetworkAclName, networkAclName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(NetworkAclName, networkAclName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeNetworkAclsRequest() = default ;
    DescribeNetworkAclsRequest(const DescribeNetworkAclsRequest &) = default ;
    DescribeNetworkAclsRequest(DescribeNetworkAclsRequest &&) = default ;
    DescribeNetworkAclsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsRequest() = default ;
    DescribeNetworkAclsRequest& operator=(const DescribeNetworkAclsRequest &) = default ;
    DescribeNetworkAclsRequest& operator=(DescribeNetworkAclsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAclId_ == nullptr
        && this->networkAclName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceId_ == nullptr; };
    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworkAclsRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkAclName Field Functions 
    bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
    void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
    inline string getNetworkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
    inline DescribeNetworkAclsRequest& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeNetworkAclsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeNetworkAclsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeNetworkAclsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The ID of the network ACL.
    shared_ptr<string> networkAclId_ {};
    // The name of the network ACL.
    shared_ptr<string> networkAclName_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<string> pageSize_ {};
    // The ID of the associated instance.
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
