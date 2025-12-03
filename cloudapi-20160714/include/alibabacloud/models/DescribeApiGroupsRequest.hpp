// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiGroupsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(EnableTagAuth, enableTagAuth_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(EnableTagAuth, enableTagAuth_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeApiGroupsRequest() = default ;
    DescribeApiGroupsRequest(const DescribeApiGroupsRequest &) = default ;
    DescribeApiGroupsRequest(DescribeApiGroupsRequest &&) = default ;
    DescribeApiGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupsRequest() = default ;
    DescribeApiGroupsRequest& operator=(const DescribeApiGroupsRequest &) = default ;
    DescribeApiGroupsRequest& operator=(DescribeApiGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && return this->enableTagAuth_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->sort_ == nullptr && return this->tag_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline DescribeApiGroupsRequest& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // enableTagAuth Field Functions 
    bool hasEnableTagAuth() const { return this->enableTagAuth_ != nullptr;};
    void deleteEnableTagAuth() { this->enableTagAuth_ = nullptr;};
    inline bool enableTagAuth() const { DARABONBA_PTR_GET_DEFAULT(enableTagAuth_, false) };
    inline DescribeApiGroupsRequest& setEnableTagAuth(bool enableTagAuth) { DARABONBA_PTR_SET_VALUE(enableTagAuth_, enableTagAuth) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiGroupsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiGroupsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApiGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApiGroupsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeApiGroupsRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeApiGroupsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeApiGroupsRequestTag>) };
    inline vector<DescribeApiGroupsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeApiGroupsRequestTag>) };
    inline DescribeApiGroupsRequest& setTag(const vector<DescribeApiGroupsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeApiGroupsRequest& setTag(vector<DescribeApiGroupsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The root path of the API.
    std::shared_ptr<string> basePath_ = nullptr;
    // Specifies whether to enable tag verification.
    std::shared_ptr<bool> enableTagAuth_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    // The keyword that can be specified in the name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The order. Valid values: asc and desc. Default value: desc.
    // 
    // *   asc: The API groups are displayed in ascending order of modification time.
    // *   desc: The API groups are displayed in descending order of modification time.
    std::shared_ptr<string> sort_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<DescribeApiGroupsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
