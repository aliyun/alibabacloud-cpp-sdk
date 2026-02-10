// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXCHECKWARNINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FIXCHECKWARNINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FixCheckWarningsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixCheckWarningsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckParams, checkParams_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, FixCheckWarningsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckParams, checkParams_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    FixCheckWarningsRequest() = default ;
    FixCheckWarningsRequest(const FixCheckWarningsRequest &) = default ;
    FixCheckWarningsRequest(FixCheckWarningsRequest &&) = default ;
    FixCheckWarningsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixCheckWarningsRequest() = default ;
    FixCheckWarningsRequest& operator=(const FixCheckWarningsRequest &) = default ;
    FixCheckWarningsRequest& operator=(FixCheckWarningsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkParams_ == nullptr
        && this->lang_ == nullptr && this->retentionDays_ == nullptr && this->riskId_ == nullptr && this->snapshotName_ == nullptr && this->sourceIp_ == nullptr
        && this->uuids_ == nullptr; };
    // checkParams Field Functions 
    bool hasCheckParams() const { return this->checkParams_ != nullptr;};
    void deleteCheckParams() { this->checkParams_ = nullptr;};
    inline string getCheckParams() const { DARABONBA_PTR_GET_DEFAULT(checkParams_, "") };
    inline FixCheckWarningsRequest& setCheckParams(string checkParams) { DARABONBA_PTR_SET_VALUE(checkParams_, checkParams) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline FixCheckWarningsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline FixCheckWarningsRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline FixCheckWarningsRequest& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline FixCheckWarningsRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline FixCheckWarningsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline FixCheckWarningsRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The parameters for the baseline risk item that you want to fix.
    // 
    // *   **checkId**: the ID of the check item that corresponds to the baseline risk item.
    // 
    // *   **rules**: an array that consists of the rules applied to fixes.
    // 
    //     *   **value**: specifies whether a fix method is selected. Valid values: **0** and **1**. The value 0 indicates that no fix method is selected and the value 1 indicates that a fix method is selected.
    //     *   **ruleId**: the ID of the fix method.
    //     *   **paramList**: an array that consists of the details about the fix method.\\
    //         • **paramName**: the name of the fix method.\\
    //         • **value**: the value of the fix method.
    // 
    // This parameter is required.
    shared_ptr<string> checkParams_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The retention period of the snapshot that is created when you fix the baseline risk. Valid values: 1 to 365. Unit: days.
    shared_ptr<int32_t> retentionDays_ {};
    // The ID of the risk item.
    // 
    // >  To query the information about the risk items and check items of a server, you must specify the IDs of the risk items. You can call the [DescribeCheckWarningSummary](~~DescribeCheckWarningSummary~~) operation to query the IDs of risk items.
    shared_ptr<int64_t> riskId_ {};
    // The name of the snapshot that is created when you fix the baseline risk.
    shared_ptr<string> snapshotName_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The UUID of the asset for which you want to fix the baseline risk item. You can call the [DescribeWarningMachines](~~DescribeWarningMachines~~) operation to query the UUIDs of assets.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
