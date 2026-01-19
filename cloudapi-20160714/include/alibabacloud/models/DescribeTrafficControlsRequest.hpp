// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
    };
    DescribeTrafficControlsRequest() = default ;
    DescribeTrafficControlsRequest(const DescribeTrafficControlsRequest &) = default ;
    DescribeTrafficControlsRequest(DescribeTrafficControlsRequest &&) = default ;
    DescribeTrafficControlsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsRequest() = default ;
    DescribeTrafficControlsRequest& operator=(const DescribeTrafficControlsRequest &) = default ;
    DescribeTrafficControlsRequest& operator=(DescribeTrafficControlsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->groupId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->securityToken_ == nullptr && this->stageName_ == nullptr
        && this->trafficControlId_ == nullptr && this->trafficControlName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeTrafficControlsRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeTrafficControlsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTrafficControlsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTrafficControlsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeTrafficControlsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeTrafficControlsRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline DescribeTrafficControlsRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


    // trafficControlName Field Functions 
    bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
    void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
    inline string getTrafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
    inline DescribeTrafficControlsRequest& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


  protected:
    // The specified API ID. This parameter must be specified together with GroupId and StageName.
    shared_ptr<string> apiId_ {};
    // The specified group ID. This parameter must be specified together with ApiId and StageName.
    shared_ptr<string> groupId_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The environment name. This parameter must be specified together with GroupId and ApiId. Valid values:********
    // 
    // *   **RELEASE**
    // *   **TEST**
    shared_ptr<string> stageName_ {};
    // The ID of the throttling policy.
    shared_ptr<string> trafficControlId_ {};
    // The name of the throttling policy.
    shared_ptr<string> trafficControlName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
