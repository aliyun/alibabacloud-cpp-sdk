// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERISKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERISKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateRiskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRiskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RiskConfirm, riskConfirm_);
      DARABONBA_PTR_TO_JSON(RiskConfirmDesc, riskConfirmDesc_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(RiskScene, riskScene_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRiskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskConfirm, riskConfirm_);
      DARABONBA_PTR_FROM_JSON(RiskConfirmDesc, riskConfirmDesc_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(RiskScene, riskScene_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateRiskStatusRequest() = default ;
    UpdateRiskStatusRequest(const UpdateRiskStatusRequest &) = default ;
    UpdateRiskStatusRequest(UpdateRiskStatusRequest &&) = default ;
    UpdateRiskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRiskStatusRequest() = default ;
    UpdateRiskStatusRequest& operator=(const UpdateRiskStatusRequest &) = default ;
    UpdateRiskStatusRequest& operator=(UpdateRiskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskConfirm_ == nullptr
        && this->riskConfirmDesc_ == nullptr && this->riskId_ == nullptr && this->riskScene_ == nullptr && this->status_ == nullptr; };
    // riskConfirm Field Functions 
    bool hasRiskConfirm() const { return this->riskConfirm_ != nullptr;};
    void deleteRiskConfirm() { this->riskConfirm_ = nullptr;};
    inline string getRiskConfirm() const { DARABONBA_PTR_GET_DEFAULT(riskConfirm_, "") };
    inline UpdateRiskStatusRequest& setRiskConfirm(string riskConfirm) { DARABONBA_PTR_SET_VALUE(riskConfirm_, riskConfirm) };


    // riskConfirmDesc Field Functions 
    bool hasRiskConfirmDesc() const { return this->riskConfirmDesc_ != nullptr;};
    void deleteRiskConfirmDesc() { this->riskConfirmDesc_ = nullptr;};
    inline string getRiskConfirmDesc() const { DARABONBA_PTR_GET_DEFAULT(riskConfirmDesc_, "") };
    inline UpdateRiskStatusRequest& setRiskConfirmDesc(string riskConfirmDesc) { DARABONBA_PTR_SET_VALUE(riskConfirmDesc_, riskConfirmDesc) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline string getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, "") };
    inline UpdateRiskStatusRequest& setRiskId(string riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskScene Field Functions 
    bool hasRiskScene() const { return this->riskScene_ != nullptr;};
    void deleteRiskScene() { this->riskScene_ = nullptr;};
    inline string getRiskScene() const { DARABONBA_PTR_GET_DEFAULT(riskScene_, "") };
    inline UpdateRiskStatusRequest& setRiskScene(string riskScene) { DARABONBA_PTR_SET_VALUE(riskScene_, riskScene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateRiskStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The manually confirmed risk conclusion. This parameter is required when `Status` is set to `Processed`. Do not specify this parameter when `Status` is set to `Unprocess` or `Processing`. Valid values:
    // * `Risk`: Confirmed as risky.
    // * `Ignore`: Confirmed as not risky.
    // * `Invalid`: Confirmed as a false positive.
    shared_ptr<string> riskConfirm_ {};
    // The description of the risk event handling. The length must be 1 to 128 characters.
    shared_ptr<string> riskConfirmDesc_ {};
    // The risk event ID. You can obtain the value from the following operation:
    // * `ListRiskItems`: Queries the list of risk events.
    shared_ptr<string> riskId_ {};
    // The risk scenario. This parameter is optional. If not specified, the system automatically populates it based on RiskId. Valid values:
    // * account_share: Account sharing.
    // * account_stolen: Account stolen.
    // * device_share: Device sharing.
    // * remote_logon: Remote logon.
    // * sensitive_data_leakage: Sensitive data leakage.
    // * lateral_scanning: Lateral scanning.
    // * ai_skill_malware: Malicious skill.
    // * ai_config_check: AI configuration check.
    // * openclaw_vulnerability: OpenClaw vulnerability.
    shared_ptr<string> riskScene_ {};
    // The handling status of the risk event. Valid values:
    // * `Unprocess`: Unprocessed.
    // * `Processing`: Being processed.
    // * `Processed`: Processed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
