// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListAIAgentEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InfraInstanceId, infraInstanceId_);
      DARABONBA_PTR_TO_JSON(InfraName, infraName_);
      DARABONBA_PTR_TO_JSON(InfraRegionId, infraRegionId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InfraInstanceId, infraInstanceId_);
      DARABONBA_PTR_FROM_JSON(InfraName, infraName_);
      DARABONBA_PTR_FROM_JSON(InfraRegionId, infraRegionId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListAIAgentEventRequest() = default ;
    ListAIAgentEventRequest(const ListAIAgentEventRequest &) = default ;
    ListAIAgentEventRequest(ListAIAgentEventRequest &&) = default ;
    ListAIAgentEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentEventRequest() = default ;
    ListAIAgentEventRequest& operator=(const ListAIAgentEventRequest &) = default ;
    ListAIAgentEventRequest& operator=(ListAIAgentEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->assetName_ == nullptr && this->assetType_ == nullptr && this->currentPage_ == nullptr && this->infraInstanceId_ == nullptr
        && this->infraName_ == nullptr && this->infraRegionId_ == nullptr && this->lang_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr
        && this->pageSize_ == nullptr && this->riskLevel_ == nullptr && this->riskName_ == nullptr && this->source_ == nullptr && this->status_ == nullptr
        && this->statusList_ == nullptr && this->vendor_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAIAgentEventRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAIAgentEventRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline ListAIAgentEventRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline ListAIAgentEventRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAIAgentEventRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // infraInstanceId Field Functions 
    bool hasInfraInstanceId() const { return this->infraInstanceId_ != nullptr;};
    void deleteInfraInstanceId() { this->infraInstanceId_ = nullptr;};
    inline string getInfraInstanceId() const { DARABONBA_PTR_GET_DEFAULT(infraInstanceId_, "") };
    inline ListAIAgentEventRequest& setInfraInstanceId(string infraInstanceId) { DARABONBA_PTR_SET_VALUE(infraInstanceId_, infraInstanceId) };


    // infraName Field Functions 
    bool hasInfraName() const { return this->infraName_ != nullptr;};
    void deleteInfraName() { this->infraName_ = nullptr;};
    inline string getInfraName() const { DARABONBA_PTR_GET_DEFAULT(infraName_, "") };
    inline ListAIAgentEventRequest& setInfraName(string infraName) { DARABONBA_PTR_SET_VALUE(infraName_, infraName) };


    // infraRegionId Field Functions 
    bool hasInfraRegionId() const { return this->infraRegionId_ != nullptr;};
    void deleteInfraRegionId() { this->infraRegionId_ = nullptr;};
    inline string getInfraRegionId() const { DARABONBA_PTR_GET_DEFAULT(infraRegionId_, "") };
    inline ListAIAgentEventRequest& setInfraRegionId(string infraRegionId) { DARABONBA_PTR_SET_VALUE(infraRegionId_, infraRegionId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAIAgentEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListAIAgentEventRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListAIAgentEventRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAIAgentEventRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListAIAgentEventRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline ListAIAgentEventRequest& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListAIAgentEventRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAIAgentEventRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListAIAgentEventRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListAIAgentEventRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListAIAgentEventRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The ID of the agent application.
    shared_ptr<string> appId_ {};
    // Filters the agent list by application name.
    shared_ptr<string> appName_ {};
    // The asset name.
    shared_ptr<string> assetName_ {};
    // The type of the agent asset. Valid values:
    // 1. rag
    // 2. internet
    // 3. datasets
    // 4. tool
    // 5. model
    // 6. skill
    // 7. app
    // 8. identity
    shared_ptr<string> assetType_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The infrastructure instance ID.
    shared_ptr<string> infraInstanceId_ {};
    // The infrastructure name.
    shared_ptr<string> infraName_ {};
    // The infrastructure region.
    shared_ptr<string> infraRegionId_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // Sort direction
    shared_ptr<string> order_ {};
    // Sort field, currently supports CheckTime
    shared_ptr<string> orderBy_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The risk level of the check item to query. Valid values:
    // 
    // - **high**: High.
    // - **medium**: Medium.
    // - **low**: Low.
    shared_ptr<string> riskLevel_ {};
    // The risk name. Fuzzy match is supported.
    shared_ptr<string> riskName_ {};
    // The event source. Valid values:
    // 1. cspm
    // 2. aiguard
    // 3. SASE
    // 4. SAS 
    // 5. Agent-Runtime-Guard
    shared_ptr<string> source_ {};
    // The event status. Valid values:
    // 1. unhandled: Pending.
    // 2. handling: Being processed.
    // 3. fixed: Fixed.
    // 4. ignored: Ignored.
    // 5. rescanned: Rescanned.
    shared_ptr<string> status_ {};
    // The list of statuses.
    shared_ptr<vector<string>> statusList_ {};
    // The cloud asset vendor. Valid values:
    // - **DIFY**: DIFY.
    // - **BAILIAN**: BAILIAN.
    // - **VOLCAI**: VOLCAI.
    // - **AGENTRUN**: AGENTRUN.
    // - **PAI**: PAI.
    // - **OpenClaw**: OpenClaw.
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
