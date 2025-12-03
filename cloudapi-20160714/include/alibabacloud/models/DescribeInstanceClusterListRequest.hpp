// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_TO_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceClusterName, instanceClusterName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeInstanceClusterListRequest() = default ;
    DescribeInstanceClusterListRequest(const DescribeInstanceClusterListRequest &) = default ;
    DescribeInstanceClusterListRequest(DescribeInstanceClusterListRequest &&) = default ;
    DescribeInstanceClusterListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterListRequest() = default ;
    DescribeInstanceClusterListRequest& operator=(const DescribeInstanceClusterListRequest &) = default ;
    DescribeInstanceClusterListRequest& operator=(DescribeInstanceClusterListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceClusterId_ == nullptr
        && return this->instanceClusterName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr; };
    // instanceClusterId Field Functions 
    bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
    void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
    inline string instanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
    inline DescribeInstanceClusterListRequest& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


    // instanceClusterName Field Functions 
    bool hasInstanceClusterName() const { return this->instanceClusterName_ != nullptr;};
    void deleteInstanceClusterName() { this->instanceClusterName_ = nullptr;};
    inline string instanceClusterName() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterName_, "") };
    inline DescribeInstanceClusterListRequest& setInstanceClusterName(string instanceClusterName) { DARABONBA_PTR_SET_VALUE(instanceClusterName_, instanceClusterName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceClusterListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceClusterListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInstanceClusterListRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> instanceClusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> instanceClusterName_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
