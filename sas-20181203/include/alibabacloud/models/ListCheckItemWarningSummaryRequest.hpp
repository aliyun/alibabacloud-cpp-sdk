// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemWarningSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItemFuzzy, checkItemFuzzy_);
      DARABONBA_PTR_TO_JSON(CheckLevel, checkLevel_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CheckWarningStatus, checkWarningStatus_);
      DARABONBA_PTR_TO_JSON(CheckWarningStatusList, checkWarningStatusList_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItemFuzzy, checkItemFuzzy_);
      DARABONBA_PTR_FROM_JSON(CheckLevel, checkLevel_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CheckWarningStatus, checkWarningStatus_);
      DARABONBA_PTR_FROM_JSON(CheckWarningStatusList, checkWarningStatusList_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ListCheckItemWarningSummaryRequest() = default ;
    ListCheckItemWarningSummaryRequest(const ListCheckItemWarningSummaryRequest &) = default ;
    ListCheckItemWarningSummaryRequest(ListCheckItemWarningSummaryRequest &&) = default ;
    ListCheckItemWarningSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningSummaryRequest() = default ;
    ListCheckItemWarningSummaryRequest& operator=(const ListCheckItemWarningSummaryRequest &) = default ;
    ListCheckItemWarningSummaryRequest& operator=(ListCheckItemWarningSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkItemFuzzy_ != nullptr
        && this->checkLevel_ != nullptr && this->checkType_ != nullptr && this->checkWarningStatus_ != nullptr && this->checkWarningStatusList_ != nullptr && this->containerFieldName_ != nullptr
        && this->containerFieldValue_ != nullptr && this->currentPage_ != nullptr && this->groupId_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr
        && this->riskType_ != nullptr && this->source_ != nullptr && this->startTime_ != nullptr && this->uuidList_ != nullptr; };
    // checkItemFuzzy Field Functions 
    bool hasCheckItemFuzzy() const { return this->checkItemFuzzy_ != nullptr;};
    void deleteCheckItemFuzzy() { this->checkItemFuzzy_ = nullptr;};
    inline string checkItemFuzzy() const { DARABONBA_PTR_GET_DEFAULT(checkItemFuzzy_, "") };
    inline ListCheckItemWarningSummaryRequest& setCheckItemFuzzy(string checkItemFuzzy) { DARABONBA_PTR_SET_VALUE(checkItemFuzzy_, checkItemFuzzy) };


    // checkLevel Field Functions 
    bool hasCheckLevel() const { return this->checkLevel_ != nullptr;};
    void deleteCheckLevel() { this->checkLevel_ = nullptr;};
    inline string checkLevel() const { DARABONBA_PTR_GET_DEFAULT(checkLevel_, "") };
    inline ListCheckItemWarningSummaryRequest& setCheckLevel(string checkLevel) { DARABONBA_PTR_SET_VALUE(checkLevel_, checkLevel) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckItemWarningSummaryRequest& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // checkWarningStatus Field Functions 
    bool hasCheckWarningStatus() const { return this->checkWarningStatus_ != nullptr;};
    void deleteCheckWarningStatus() { this->checkWarningStatus_ = nullptr;};
    inline int32_t checkWarningStatus() const { DARABONBA_PTR_GET_DEFAULT(checkWarningStatus_, 0) };
    inline ListCheckItemWarningSummaryRequest& setCheckWarningStatus(int32_t checkWarningStatus) { DARABONBA_PTR_SET_VALUE(checkWarningStatus_, checkWarningStatus) };


    // checkWarningStatusList Field Functions 
    bool hasCheckWarningStatusList() const { return this->checkWarningStatusList_ != nullptr;};
    void deleteCheckWarningStatusList() { this->checkWarningStatusList_ = nullptr;};
    inline const vector<int32_t> & checkWarningStatusList() const { DARABONBA_PTR_GET_CONST(checkWarningStatusList_, vector<int32_t>) };
    inline vector<int32_t> checkWarningStatusList() { DARABONBA_PTR_GET(checkWarningStatusList_, vector<int32_t>) };
    inline ListCheckItemWarningSummaryRequest& setCheckWarningStatusList(const vector<int32_t> & checkWarningStatusList) { DARABONBA_PTR_SET_VALUE(checkWarningStatusList_, checkWarningStatusList) };
    inline ListCheckItemWarningSummaryRequest& setCheckWarningStatusList(vector<int32_t> && checkWarningStatusList) { DARABONBA_PTR_SET_RVALUE(checkWarningStatusList_, checkWarningStatusList) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string containerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline ListCheckItemWarningSummaryRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string containerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline ListCheckItemWarningSummaryRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckItemWarningSummaryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListCheckItemWarningSummaryRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckItemWarningSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckItemWarningSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline ListCheckItemWarningSummaryRequest& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListCheckItemWarningSummaryRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCheckItemWarningSummaryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ListCheckItemWarningSummaryRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ListCheckItemWarningSummaryRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The name of the check item. Fuzzy match is supported.
    std::shared_ptr<string> checkItemFuzzy_ = nullptr;
    // The risk level. Default value: null, which indicates that check items at all risk levels are queried.Valid values:
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> checkLevel_ = nullptr;
    // The type of the check item.
    std::shared_ptr<string> checkType_ = nullptr;
    // The risk status. Default value is null, meaning check items in all states are queried. Valid values:
    // 
    // *   **1**: failed
    // *   **3**: passed
    // *   **6**: whitelisted
    std::shared_ptr<int32_t> checkWarningStatus_ = nullptr;
    // The list of risk levels. If the CheckWarningStatus parameter is specified, only it takes effect.
    std::shared_ptr<vector<int32_t>> checkWarningStatusList_ = nullptr;
    // The name of the field that is used to query containers.
    std::shared_ptr<string> containerFieldName_ = nullptr;
    // The value of the field that is used to query containers.
    std::shared_ptr<string> containerFieldValue_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The ID of the asset group.
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of asset groups.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the baseline.
    std::shared_ptr<string> riskType_ = nullptr;
    // The data source. Default value: **default**. Valid value:
    // 
    // *   **agentless**: The check items of baselines for agentless detection.
    // *   **default**: The check items of baselines for hosts.
    std::shared_ptr<string> source_ = nullptr;
    // Start of time range for filtering alerts, effective only for querying historically handled alerts.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The UUIDs of the servers.
    // 
    // >  You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of the servers.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
