// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiIpControlsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiIpControlsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiIpControlsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeApiIpControlsRequest() = default ;
    DescribeApiIpControlsRequest(const DescribeApiIpControlsRequest &) = default ;
    DescribeApiIpControlsRequest(DescribeApiIpControlsRequest &&) = default ;
    DescribeApiIpControlsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiIpControlsRequest() = default ;
    DescribeApiIpControlsRequest& operator=(const DescribeApiIpControlsRequest &) = default ;
    DescribeApiIpControlsRequest& operator=(DescribeApiIpControlsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && return this->groupId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string apiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline DescribeApiIpControlsRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiIpControlsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiIpControlsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiIpControlsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApiIpControlsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiIpControlsRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The IDs of APIs. Separate multiple API IDs with commas (,). A maximum of 100 API IDs can be entered.
    std::shared_ptr<string> apiIds_ = nullptr;
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
