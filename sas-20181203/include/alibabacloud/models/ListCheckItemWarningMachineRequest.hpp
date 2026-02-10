// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINEREQUEST_HPP_
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
  class ListCheckItemWarningMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ListCheckItemWarningMachineRequest() = default ;
    ListCheckItemWarningMachineRequest(const ListCheckItemWarningMachineRequest &) = default ;
    ListCheckItemWarningMachineRequest(ListCheckItemWarningMachineRequest &&) = default ;
    ListCheckItemWarningMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningMachineRequest() = default ;
    ListCheckItemWarningMachineRequest& operator=(const ListCheckItemWarningMachineRequest &) = default ;
    ListCheckItemWarningMachineRequest& operator=(ListCheckItemWarningMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr && this->currentPage_ == nullptr && this->groupId_ == nullptr && this->lang_ == nullptr
        && this->pageSize_ == nullptr && this->remark_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->riskType_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->uuidList_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckItemWarningMachineRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline ListCheckItemWarningMachineRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline ListCheckItemWarningMachineRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckItemWarningMachineRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListCheckItemWarningMachineRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckItemWarningMachineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckItemWarningMachineRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCheckItemWarningMachineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ListCheckItemWarningMachineRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline ListCheckItemWarningMachineRequest& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListCheckItemWarningMachineRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCheckItemWarningMachineRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ListCheckItemWarningMachineRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ListCheckItemWarningMachineRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The ID of the check item.
    // 
    // This parameter is required.
    shared_ptr<int64_t> checkId_ {};
    // The name of the field that is used to query containers.
    shared_ptr<string> containerFieldName_ {};
    // The value of the field that is used to query containers.
    shared_ptr<string> containerFieldValue_ {};
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the asset group.
    // 
    // > You can call the [DescribeAllGroups](https://help.aliyun.com/document_detail/130972.html) operation to query the ID of the asset group.
    shared_ptr<int64_t> groupId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The keyword that is used to query servers in fuzzy match mode.
    shared_ptr<string> remark_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The type of the check item.
    shared_ptr<string> riskType_ {};
    // The data source. Default value: default. Valid values:
    // 
    // *   **default**: The check items of baselines for hosts.
    // *   **agentless**: The check items of baselines for agentless detection.
    shared_ptr<string> source_ {};
    // The status of the check item. Valid values:
    // 
    // *   **1**: failed
    // *   **2**: verifying
    // *   **3**: passed
    // *   **6**: ignored
    // *   **7**: fixing
    // *   **8**: fixed
    shared_ptr<int32_t> status_ {};
    // The UUID array of the servers.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
