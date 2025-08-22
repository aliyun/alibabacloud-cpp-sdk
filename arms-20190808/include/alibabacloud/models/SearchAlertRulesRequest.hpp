// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertRulesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRuleId, alertRuleId_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemRegionId, systemRegionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRuleId, alertRuleId_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemRegionId, systemRegionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SearchAlertRulesRequest() = default ;
    SearchAlertRulesRequest(const SearchAlertRulesRequest &) = default ;
    SearchAlertRulesRequest(SearchAlertRulesRequest &&) = default ;
    SearchAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesRequest() = default ;
    SearchAlertRulesRequest& operator=(const SearchAlertRulesRequest &) = default ;
    SearchAlertRulesRequest& operator=(SearchAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRuleId_ != nullptr
        && this->appType_ != nullptr && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->systemRegionId_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // alertRuleId Field Functions 
    bool hasAlertRuleId() const { return this->alertRuleId_ != nullptr;};
    void deleteAlertRuleId() { this->alertRuleId_ = nullptr;};
    inline string alertRuleId() const { DARABONBA_PTR_GET_DEFAULT(alertRuleId_, "") };
    inline SearchAlertRulesRequest& setAlertRuleId(string alertRuleId) { DARABONBA_PTR_SET_VALUE(alertRuleId_, alertRuleId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchAlertRulesRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline SearchAlertRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAlertRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchAlertRulesRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchAlertRulesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemRegionId Field Functions 
    bool hasSystemRegionId() const { return this->systemRegionId_ != nullptr;};
    void deleteSystemRegionId() { this->systemRegionId_ = nullptr;};
    inline string systemRegionId() const { DARABONBA_PTR_GET_DEFAULT(systemRegionId_, "") };
    inline SearchAlertRulesRequest& setSystemRegionId(string systemRegionId) { DARABONBA_PTR_SET_VALUE(systemRegionId_, systemRegionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SearchAlertRulesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SearchAlertRulesRequestTags>) };
    inline vector<SearchAlertRulesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<SearchAlertRulesRequestTags>) };
    inline SearchAlertRulesRequest& setTags(const vector<SearchAlertRulesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchAlertRulesRequest& setTags(vector<SearchAlertRulesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchAlertRulesRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchAlertRulesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The id of AlertRule.
    std::shared_ptr<string> alertRuleId_ = nullptr;
    // The type of the application that is associated with the alert rule. Valid values:
    // 
    // *   `TRACE`: application
    // *   `RETCODE`: browser
    std::shared_ptr<string> appType_ = nullptr;
    // The page number of the page to return. Default value: `1`.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return per page. Default value: `10`.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The process identifier (PID) of the application that is associated with the alert rule. For more information about how to obtain the PID, see [Obtain the PID of an application](https://help.aliyun.com/document_detail/186100.html?spm=a2c4g.11186623.6.792.1b50654cqcDPyk#title-imy-7gj-qhr).
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID of the alert data. For more information about the mappings between **RegionId** and **SystemRegionId**, see the detailed description below the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The region ID of the alert rule. For more information about the mappings between **RegionId** and **SystemRegionId**, see the detailed description below the table.
    std::shared_ptr<string> systemRegionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<SearchAlertRulesRequestTags>> tags_ = nullptr;
    // The alert rule name.
    std::shared_ptr<string> title_ = nullptr;
    // The alert rule type. Valid values:
    // 
    // *   `1`: custom alert rules that are used to monitor drill-down data sets
    // *   `3`: custom alert rules that are used to monitor tiled data sets
    // *   `4`: alert rules that are used to monitor the browser, including the default frontend alert rules
    // *   `5`: alert rules that are used to monitor applications, including the default application alert rules
    // *   `6`: the default browser alert rules
    // *   `7`: the default application alert rules
    // *   `8`: Tracing Analysis alert rules
    // *   `101`: Prometheus alert rules
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
