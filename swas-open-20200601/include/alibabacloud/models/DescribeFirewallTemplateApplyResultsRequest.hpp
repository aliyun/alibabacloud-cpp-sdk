// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATEAPPLYRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTEMPLATEAPPLYRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeFirewallTemplateApplyResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTemplateApplyResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTemplateApplyResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeFirewallTemplateApplyResultsRequest() = default ;
    DescribeFirewallTemplateApplyResultsRequest(const DescribeFirewallTemplateApplyResultsRequest &) = default ;
    DescribeFirewallTemplateApplyResultsRequest(DescribeFirewallTemplateApplyResultsRequest &&) = default ;
    DescribeFirewallTemplateApplyResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTemplateApplyResultsRequest() = default ;
    DescribeFirewallTemplateApplyResultsRequest& operator=(const DescribeFirewallTemplateApplyResultsRequest &) = default ;
    DescribeFirewallTemplateApplyResultsRequest& operator=(DescribeFirewallTemplateApplyResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->firewallTemplateId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->taskId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeFirewallTemplateApplyResultsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // firewallTemplateId Field Functions 
    bool hasFirewallTemplateId() const { return this->firewallTemplateId_ != nullptr;};
    void deleteFirewallTemplateId() { this->firewallTemplateId_ = nullptr;};
    inline string getFirewallTemplateId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateId_, "") };
    inline DescribeFirewallTemplateApplyResultsRequest& setFirewallTemplateId(string firewallTemplateId) { DARABONBA_PTR_SET_VALUE(firewallTemplateId_, firewallTemplateId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFirewallTemplateApplyResultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFirewallTemplateApplyResultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFirewallTemplateApplyResultsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline const vector<string> & getTaskId() const { DARABONBA_PTR_GET_CONST(taskId_, vector<string>) };
    inline vector<string> getTaskId() { DARABONBA_PTR_GET(taskId_, vector<string>) };
    inline DescribeFirewallTemplateApplyResultsRequest& setTaskId(const vector<string> & taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };
    inline DescribeFirewallTemplateApplyResultsRequest& setTaskId(vector<string> && taskId) { DARABONBA_PTR_SET_RVALUE(taskId_, taskId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. A client token is generated from your client to ensure uniqueness across different requests. The value of **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The firewall template ID.
    shared_ptr<string> firewallTemplateId_ {};
    // The page number of the firewall rule list.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paged query. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the simple application server. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query the list of supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the template application task.
    shared_ptr<vector<string>> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
