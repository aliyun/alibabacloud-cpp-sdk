// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWARNINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWARNINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportWarningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWarningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsCleartextPwd, isCleartextPwd_);
      DARABONBA_PTR_TO_JSON(IsSummaryExport, isSummaryExport_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RiskIds, riskIds_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(SubTypeNames, subTypeNames_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(TypeNames, typeNames_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWarningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsCleartextPwd, isCleartextPwd_);
      DARABONBA_PTR_FROM_JSON(IsSummaryExport, isSummaryExport_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RiskIds, riskIds_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(SubTypeNames, subTypeNames_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(TypeNames, typeNames_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ExportWarningRequest() = default ;
    ExportWarningRequest(const ExportWarningRequest &) = default ;
    ExportWarningRequest(ExportWarningRequest &&) = default ;
    ExportWarningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWarningRequest() = default ;
    ExportWarningRequest& operator=(const ExportWarningRequest &) = default ;
    ExportWarningRequest& operator=(ExportWarningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dealed_ == nullptr
        && return this->exportType_ == nullptr && return this->groupId_ == nullptr && return this->isCleartextPwd_ == nullptr && return this->isSummaryExport_ == nullptr && return this->lang_ == nullptr
        && return this->riskIds_ == nullptr && return this->riskLevels_ == nullptr && return this->riskName_ == nullptr && return this->sourceIp_ == nullptr && return this->statusList_ == nullptr
        && return this->strategyId_ == nullptr && return this->subTypeNames_ == nullptr && return this->typeName_ == nullptr && return this->typeNames_ == nullptr && return this->uuids_ == nullptr; };
    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ExportWarningRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportWarningRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ExportWarningRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isCleartextPwd Field Functions 
    bool hasIsCleartextPwd() const { return this->isCleartextPwd_ != nullptr;};
    void deleteIsCleartextPwd() { this->isCleartextPwd_ = nullptr;};
    inline int32_t isCleartextPwd() const { DARABONBA_PTR_GET_DEFAULT(isCleartextPwd_, 0) };
    inline ExportWarningRequest& setIsCleartextPwd(int32_t isCleartextPwd) { DARABONBA_PTR_SET_VALUE(isCleartextPwd_, isCleartextPwd) };


    // isSummaryExport Field Functions 
    bool hasIsSummaryExport() const { return this->isSummaryExport_ != nullptr;};
    void deleteIsSummaryExport() { this->isSummaryExport_ = nullptr;};
    inline int32_t isSummaryExport() const { DARABONBA_PTR_GET_DEFAULT(isSummaryExport_, 0) };
    inline ExportWarningRequest& setIsSummaryExport(int32_t isSummaryExport) { DARABONBA_PTR_SET_VALUE(isSummaryExport_, isSummaryExport) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportWarningRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // riskIds Field Functions 
    bool hasRiskIds() const { return this->riskIds_ != nullptr;};
    void deleteRiskIds() { this->riskIds_ = nullptr;};
    inline string riskIds() const { DARABONBA_PTR_GET_DEFAULT(riskIds_, "") };
    inline ExportWarningRequest& setRiskIds(string riskIds) { DARABONBA_PTR_SET_VALUE(riskIds_, riskIds) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline string riskLevels() const { DARABONBA_PTR_GET_DEFAULT(riskLevels_, "") };
    inline ExportWarningRequest& setRiskLevels(string riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline ExportWarningRequest& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ExportWarningRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline ExportWarningRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline ExportWarningRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // subTypeNames Field Functions 
    bool hasSubTypeNames() const { return this->subTypeNames_ != nullptr;};
    void deleteSubTypeNames() { this->subTypeNames_ = nullptr;};
    inline string subTypeNames() const { DARABONBA_PTR_GET_DEFAULT(subTypeNames_, "") };
    inline ExportWarningRequest& setSubTypeNames(string subTypeNames) { DARABONBA_PTR_SET_VALUE(subTypeNames_, subTypeNames) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline ExportWarningRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // typeNames Field Functions 
    bool hasTypeNames() const { return this->typeNames_ != nullptr;};
    void deleteTypeNames() { this->typeNames_ = nullptr;};
    inline string typeNames() const { DARABONBA_PTR_GET_DEFAULT(typeNames_, "") };
    inline ExportWarningRequest& setTypeNames(string typeNames) { DARABONBA_PTR_SET_VALUE(typeNames_, typeNames) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ExportWarningRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // Specifies whether the baseline risks are handled. Valid values:
    // 
    // *   **Y**: yes
    // *   **N**: no
    std::shared_ptr<string> dealed_ = nullptr;
    // The type of the export task. Set the value to **hc_check_warning**, which indicates tasks to export baseline check results.
    std::shared_ptr<string> exportType_ = nullptr;
    // The ID of the server group.
    // 
    // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The export method of the results for the weak password baseline check. Valid values:
    // 
    // *   **0**: exports the check results after it is masked.
    // *   **1**: exports the check results in plaintext.
    std::shared_ptr<int32_t> isCleartextPwd_ = nullptr;
    // Specifies whether the baseline check results are aggregated and exported. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> isSummaryExport_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the risk item in the baseline check results. Separate multiple IDs with commas (,).
    std::shared_ptr<string> riskIds_ = nullptr;
    // The severity of the baseline check item. Separate multiple severities with commas (,). Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevels_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> riskName_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The status of the check item in the baseline check results. Separate multiple statuses with commas (,). Valid values:
    // 
    // *   **3**: passed
    // *   **1**: failed
    std::shared_ptr<string> statusList_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The subtypes of the baselines based on which baseline checks are performed. Separate multiple subtypes with commas (,).
    // 
    // > You must set the value of this parameter to the value of the **TypeName** parameter that is contained in the **SubTypes** parameter. You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to obtain the value of the TypeName parameter.
    std::shared_ptr<string> subTypeNames_ = nullptr;
    // The type of the baseline based on which baseline checks are performed.
    // 
    // > You must set the value of this parameter to the value of the **TypeName** parameter that is returned by calling the [DescribeRiskType](~~DescribeRiskType~~) operation. If both the **TypeName** and **TypeNames** parameters are specified, only the **TypeName** parameter takes effect.
    std::shared_ptr<string> typeName_ = nullptr;
    // The types of the baselines based on which baseline checks are performed. Separate multiple types with commas (,).
    // 
    // > You must set the value of this parameter to the value of the **TypeName** parameter that is returned by calling the [DescribeRiskType](~~DescribeRiskType~~) operation. If both the **TypeName** and **TypeNames** parameters are specified, only the **TypeName** parameter takes effect.
    std::shared_ptr<string> typeNames_ = nullptr;
    // The UUID of the server whose baseline check results you want to export. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
