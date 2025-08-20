// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSSHRINKREQUEST_HPP_
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
  class UpdateApprovalProcessShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(ExternalConfig, externalConfig_);
      DARABONBA_PTR_TO_JSON(MatchSchemaConfigs, matchSchemaConfigsShrink_);
      DARABONBA_PTR_TO_JSON(MatchSchemas, matchSchemasShrink_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(ExternalConfig, externalConfig_);
      DARABONBA_PTR_FROM_JSON(MatchSchemaConfigs, matchSchemaConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(MatchSchemas, matchSchemasShrink_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
    };
    UpdateApprovalProcessShrinkRequest() = default ;
    UpdateApprovalProcessShrinkRequest(const UpdateApprovalProcessShrinkRequest &) = default ;
    UpdateApprovalProcessShrinkRequest(UpdateApprovalProcessShrinkRequest &&) = default ;
    UpdateApprovalProcessShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessShrinkRequest() = default ;
    UpdateApprovalProcessShrinkRequest& operator=(const UpdateApprovalProcessShrinkRequest &) = default ;
    UpdateApprovalProcessShrinkRequest& operator=(UpdateApprovalProcessShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalType_ != nullptr
        && this->description_ != nullptr && this->eventLabel_ != nullptr && this->externalConfig_ != nullptr && this->matchSchemaConfigsShrink_ != nullptr && this->matchSchemasShrink_ != nullptr
        && this->processId_ != nullptr && this->processName_ != nullptr && this->processNodes_ != nullptr; };
    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline int32_t approvalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
    inline UpdateApprovalProcessShrinkRequest& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApprovalProcessShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline UpdateApprovalProcessShrinkRequest& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // externalConfig Field Functions 
    bool hasExternalConfig() const { return this->externalConfig_ != nullptr;};
    void deleteExternalConfig() { this->externalConfig_ = nullptr;};
    inline string externalConfig() const { DARABONBA_PTR_GET_DEFAULT(externalConfig_, "") };
    inline UpdateApprovalProcessShrinkRequest& setExternalConfig(string externalConfig) { DARABONBA_PTR_SET_VALUE(externalConfig_, externalConfig) };


    // matchSchemaConfigsShrink Field Functions 
    bool hasMatchSchemaConfigsShrink() const { return this->matchSchemaConfigsShrink_ != nullptr;};
    void deleteMatchSchemaConfigsShrink() { this->matchSchemaConfigsShrink_ = nullptr;};
    inline string matchSchemaConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(matchSchemaConfigsShrink_, "") };
    inline UpdateApprovalProcessShrinkRequest& setMatchSchemaConfigsShrink(string matchSchemaConfigsShrink) { DARABONBA_PTR_SET_VALUE(matchSchemaConfigsShrink_, matchSchemaConfigsShrink) };


    // matchSchemasShrink Field Functions 
    bool hasMatchSchemasShrink() const { return this->matchSchemasShrink_ != nullptr;};
    void deleteMatchSchemasShrink() { this->matchSchemasShrink_ = nullptr;};
    inline string matchSchemasShrink() const { DARABONBA_PTR_GET_DEFAULT(matchSchemasShrink_, "") };
    inline UpdateApprovalProcessShrinkRequest& setMatchSchemasShrink(string matchSchemasShrink) { DARABONBA_PTR_SET_VALUE(matchSchemasShrink_, matchSchemasShrink) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline UpdateApprovalProcessShrinkRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline UpdateApprovalProcessShrinkRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<string>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<string>>) };
    inline vector<vector<string>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<string>>) };
    inline UpdateApprovalProcessShrinkRequest& setProcessNodes(const vector<vector<string>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline UpdateApprovalProcessShrinkRequest& setProcessNodes(vector<vector<string>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


  protected:
    std::shared_ptr<int32_t> approvalType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> externalConfig_ = nullptr;
    std::shared_ptr<string> matchSchemaConfigsShrink_ = nullptr;
    std::shared_ptr<string> matchSchemasShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<vector<vector<string>>> processNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
