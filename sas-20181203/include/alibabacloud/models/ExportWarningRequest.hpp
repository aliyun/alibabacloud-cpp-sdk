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
        && this->exportType_ == nullptr && this->groupId_ == nullptr && this->isCleartextPwd_ == nullptr && this->isSummaryExport_ == nullptr && this->lang_ == nullptr
        && this->riskIds_ == nullptr && this->riskLevels_ == nullptr && this->riskName_ == nullptr && this->sourceIp_ == nullptr && this->statusList_ == nullptr
        && this->strategyId_ == nullptr && this->subTypeNames_ == nullptr && this->typeName_ == nullptr && this->typeNames_ == nullptr && this->uuids_ == nullptr; };
    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ExportWarningRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportWarningRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ExportWarningRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isCleartextPwd Field Functions 
    bool hasIsCleartextPwd() const { return this->isCleartextPwd_ != nullptr;};
    void deleteIsCleartextPwd() { this->isCleartextPwd_ = nullptr;};
    inline int32_t getIsCleartextPwd() const { DARABONBA_PTR_GET_DEFAULT(isCleartextPwd_, 0) };
    inline ExportWarningRequest& setIsCleartextPwd(int32_t isCleartextPwd) { DARABONBA_PTR_SET_VALUE(isCleartextPwd_, isCleartextPwd) };


    // isSummaryExport Field Functions 
    bool hasIsSummaryExport() const { return this->isSummaryExport_ != nullptr;};
    void deleteIsSummaryExport() { this->isSummaryExport_ = nullptr;};
    inline int32_t getIsSummaryExport() const { DARABONBA_PTR_GET_DEFAULT(isSummaryExport_, 0) };
    inline ExportWarningRequest& setIsSummaryExport(int32_t isSummaryExport) { DARABONBA_PTR_SET_VALUE(isSummaryExport_, isSummaryExport) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportWarningRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // riskIds Field Functions 
    bool hasRiskIds() const { return this->riskIds_ != nullptr;};
    void deleteRiskIds() { this->riskIds_ = nullptr;};
    inline string getRiskIds() const { DARABONBA_PTR_GET_DEFAULT(riskIds_, "") };
    inline ExportWarningRequest& setRiskIds(string riskIds) { DARABONBA_PTR_SET_VALUE(riskIds_, riskIds) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline string getRiskLevels() const { DARABONBA_PTR_GET_DEFAULT(riskLevels_, "") };
    inline ExportWarningRequest& setRiskLevels(string riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline ExportWarningRequest& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ExportWarningRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string getStatusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline ExportWarningRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline ExportWarningRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // subTypeNames Field Functions 
    bool hasSubTypeNames() const { return this->subTypeNames_ != nullptr;};
    void deleteSubTypeNames() { this->subTypeNames_ = nullptr;};
    inline string getSubTypeNames() const { DARABONBA_PTR_GET_DEFAULT(subTypeNames_, "") };
    inline ExportWarningRequest& setSubTypeNames(string subTypeNames) { DARABONBA_PTR_SET_VALUE(subTypeNames_, subTypeNames) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline ExportWarningRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // typeNames Field Functions 
    bool hasTypeNames() const { return this->typeNames_ != nullptr;};
    void deleteTypeNames() { this->typeNames_ = nullptr;};
    inline string getTypeNames() const { DARABONBA_PTR_GET_DEFAULT(typeNames_, "") };
    inline ExportWarningRequest& setTypeNames(string typeNames) { DARABONBA_PTR_SET_VALUE(typeNames_, typeNames) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ExportWarningRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // Specifies whether the baseline issue is handled. Valid values:
    // 
    // - **Y**: The issue is handled.
    // - **N**: The issue is not handled.
    shared_ptr<string> dealed_ {};
    // The type of the export task. Set the value to **hc_check_warning**, which indicates exporting baseline check results.
    shared_ptr<string> exportType_ {};
    // The ID of the server group.
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to obtain the ID of the server group.
    shared_ptr<int64_t> groupId_ {};
    // Specifies the export method for weak password baseline check results. Valid values:
    // 
    // - **0**: Weak passwords are masked before export.
    // - **1**: Weak passwords are exported in plaintext.
    shared_ptr<int32_t> isCleartextPwd_ {};
    // Specifies whether to export the baseline check results in summary mode. Valid values:
    // 
    // - **0**: The results are not exported in summary mode.
    // - **1**: The results are exported in summary mode.
    shared_ptr<int32_t> isSummaryExport_ {};
    // Specifies the language type for the request and response messages. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The IDs of the risk items in the baseline check results. Separate multiple risk item IDs with commas (,).
    shared_ptr<string> riskIds_ {};
    // The risk levels of the baselines. Separate multiple risk levels with commas (,). Valid values:
    // 
    // - **high**: High
    // - **medium**: Medium
    // - **low**: Low
    shared_ptr<string> riskLevels_ {};
    // The name of the baseline.
    shared_ptr<string> riskName_ {};
    // The source IP address.
    shared_ptr<string> sourceIp_ {};
    // The statuses of the risk items in the baseline check results. Separate multiple status values with commas (,). Valid values:
    // 
    // - **3**: Passed
    // - **1**: Failed
    shared_ptr<string> statusList_ {};
    // The ID of the baseline check policy.
    shared_ptr<int64_t> strategyId_ {};
    // Specifies the baseline subtypes to which the baseline check results to be exported belong. Separate multiple subtypes with commas (,).
    // 
    // > The value is the **TypeName** field under the **SubTypes** field returned by the [DescribeRiskType](~~DescribeRiskType~~) operation.
    shared_ptr<string> subTypeNames_ {};
    // Specifies the baseline type to which the baseline check results to be exported belong.
    // > The value is the **TypeName** field returned by the [DescribeRiskType](~~DescribeRiskType~~) operation. If both **TypeName** and **TypeNames** are specified, only **TypeName** takes effect.
    shared_ptr<string> typeName_ {};
    // Specifies the baseline types to which the baseline check results to be exported belong. Separate multiple types with commas (,).
    // 
    // > The value is the **TypeName** field returned by the [DescribeRiskType](~~DescribeRiskType~~) operation. If both **TypeName** and **TypeNames** are specified, only **TypeName** takes effect.
    shared_ptr<string> typeNames_ {};
    // The UUIDs of the server assets for which you want to export the baseline check results. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
