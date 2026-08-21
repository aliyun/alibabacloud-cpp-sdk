// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRISKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRISKITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRiskItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRiskItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RiskCategory, riskCategory_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskScene, riskScene_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListRiskItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RiskCategory, riskCategory_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskScene, riskScene_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListRiskItemsRequest() = default ;
    ListRiskItemsRequest(const ListRiskItemsRequest &) = default ;
    ListRiskItemsRequest(ListRiskItemsRequest &&) = default ;
    ListRiskItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRiskItemsRequest() = default ;
    ListRiskItemsRequest& operator=(const ListRiskItemsRequest &) = default ;
    ListRiskItemsRequest& operator=(ListRiskItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->policyName_ == nullptr && this->riskCategory_ == nullptr && this->riskId_ == nullptr && this->riskLevel_ == nullptr
        && this->riskScene_ == nullptr && this->status_ == nullptr && this->statusList_ == nullptr && this->username_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListRiskItemsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRiskItemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListRiskItemsRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // riskCategory Field Functions 
    bool hasRiskCategory() const { return this->riskCategory_ != nullptr;};
    void deleteRiskCategory() { this->riskCategory_ = nullptr;};
    inline string getRiskCategory() const { DARABONBA_PTR_GET_DEFAULT(riskCategory_, "") };
    inline ListRiskItemsRequest& setRiskCategory(string riskCategory) { DARABONBA_PTR_SET_VALUE(riskCategory_, riskCategory) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline string getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, "") };
    inline ListRiskItemsRequest& setRiskId(string riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListRiskItemsRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskScene Field Functions 
    bool hasRiskScene() const { return this->riskScene_ != nullptr;};
    void deleteRiskScene() { this->riskScene_ = nullptr;};
    inline string getRiskScene() const { DARABONBA_PTR_GET_DEFAULT(riskScene_, "") };
    inline ListRiskItemsRequest& setRiskScene(string riskScene) { DARABONBA_PTR_SET_VALUE(riskScene_, riskScene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRiskItemsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListRiskItemsRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListRiskItemsRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListRiskItemsRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The page number of the current page in a paging query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page in a paging query. Valid values: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the risk analysis policy. Fuzzy match is supported.
    shared_ptr<string> policyName_ {};
    // The risk category. Valid values:
    // * `data_safe`: data security.
    // * `identify_safe`: identity security.
    // * `device_safe`: device security.
    // * `access_safe`: access security.
    // * `ai_agent_safe`: Agent security.
    shared_ptr<string> riskCategory_ {};
    // The risk event ID. If specified, the exact risk event is queried.
    shared_ptr<string> riskId_ {};
    // The risk level. Valid values:
    // * `High`: high risk.
    // * `Medium`: medium risk.
    // * `Low`: low risk.
    shared_ptr<string> riskLevel_ {};
    // The risk scenario. Valid values:
    // * `account_share`: account sharing.
    // * `account_stolen`: account theft.
    // * `device_share`: device sharing.
    // * `remote_logon`: remote logon from an unusual location.
    // * `sensitive_data_leakage`: sensitive data exfiltration.
    // * `compressed_archive_exfil`: compressed data exfiltration from the internal network.
    // * `lateral_scanning`: lateral scanning.
    // * `ai_skill_malware`: malicious Skill.
    // * `ai_config_check`: AI configuration check.
    // * `openclaw_vulnerability`: OpenClaw vulnerability.
    shared_ptr<string> riskScene_ {};
    // The disposition status of the risk event. This parameter cannot be set together with `StatusList`.
    shared_ptr<string> status_ {};
    // The list of disposition statuses of risk events, in Flat serialization format. This parameter cannot be set together with Status.
    shared_ptr<vector<string>> statusList_ {};
    // The username associated with the risk event. Fuzzy match is supported. Maximum length: 128 characters.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
