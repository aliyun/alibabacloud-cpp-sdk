// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTREQUEST_HPP_
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
  class DescribeRiskCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryFlag, queryFlag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryFlag, queryFlag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRiskCheckResultRequest() = default ;
    DescribeRiskCheckResultRequest(const DescribeRiskCheckResultRequest &) = default ;
    DescribeRiskCheckResultRequest(DescribeRiskCheckResultRequest &&) = default ;
    DescribeRiskCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckResultRequest() = default ;
    DescribeRiskCheckResultRequest& operator=(const DescribeRiskCheckResultRequest &) = default ;
    DescribeRiskCheckResultRequest& operator=(DescribeRiskCheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && return this->currentPage_ == nullptr && return this->groupId_ == nullptr && return this->itemIds_ == nullptr && return this->lang_ == nullptr && return this->name_ == nullptr
        && return this->pageSize_ == nullptr && return this->queryFlag_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->riskLevel_ == nullptr && return this->sourceIp_ == nullptr
        && return this->status_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeRiskCheckResultRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRiskCheckResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeRiskCheckResultRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // itemIds Field Functions 
    bool hasItemIds() const { return this->itemIds_ != nullptr;};
    void deleteItemIds() { this->itemIds_ = nullptr;};
    inline const vector<string> & itemIds() const { DARABONBA_PTR_GET_CONST(itemIds_, vector<string>) };
    inline vector<string> itemIds() { DARABONBA_PTR_GET(itemIds_, vector<string>) };
    inline DescribeRiskCheckResultRequest& setItemIds(const vector<string> & itemIds) { DARABONBA_PTR_SET_VALUE(itemIds_, itemIds) };
    inline DescribeRiskCheckResultRequest& setItemIds(vector<string> && itemIds) { DARABONBA_PTR_SET_RVALUE(itemIds_, itemIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskCheckResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRiskCheckResultRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskCheckResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryFlag Field Functions 
    bool hasQueryFlag() const { return this->queryFlag_ != nullptr;};
    void deleteQueryFlag() { this->queryFlag_ = nullptr;};
    inline string queryFlag() const { DARABONBA_PTR_GET_DEFAULT(queryFlag_, "") };
    inline DescribeRiskCheckResultRequest& setQueryFlag(string queryFlag) { DARABONBA_PTR_SET_VALUE(queryFlag_, queryFlag) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRiskCheckResultRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeRiskCheckResultRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeRiskCheckResultRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRiskCheckResultRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cloud service whose configuration check results you want to query. For more information about the check items for the cloud service, see the check item table in the "Response parameters" section of this topic.
    std::shared_ptr<string> assetType_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The type of the check item that you want to query. Valid values:
    // 
    // *   **1**: identity authentication and permissions
    // *   **2**: network access control
    // *   **3**: log audit
    // *   **4**: data security
    // *   **5**: monitoring and alerting
    // *   **6**: basic security protection
    // 
    // > If you do not specify this parameter, all types of check items are queried.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // An array that consists of the IDs of check items. For more information about the check item, see the check item table in the "Response parameters" section of this topic.
    std::shared_ptr<vector<string>> itemIds_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the check item. For more information about the check item, see the check item table in the "Response parameters" section of this topic.
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether the check item is supported by the edition of Security Center that you purchase. Valid values:
    // 
    // *   **enabled**: yes
    // *   **disabled**: no
    std::shared_ptr<string> queryFlag_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The risk level of the check item that you want to query. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The status of the check results. Valid values:
    // 
    // *   **pass**
    // *   **failed**
    // *   **running**
    // *   **waiting**
    // *   **ignored**
    // *   **falsePositive**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
