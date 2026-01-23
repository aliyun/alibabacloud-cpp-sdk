// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUALITYRULESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUALITYRULESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateQualityRuleSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQualityRuleSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQualityRuleSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateQualityRuleSwitchRequest() = default ;
    UpdateQualityRuleSwitchRequest(const UpdateQualityRuleSwitchRequest &) = default ;
    UpdateQualityRuleSwitchRequest(UpdateQualityRuleSwitchRequest &&) = default ;
    UpdateQualityRuleSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQualityRuleSwitchRequest() = default ;
    UpdateQualityRuleSwitchRequest& operator=(const UpdateQualityRuleSwitchRequest &) = default ;
    UpdateQualityRuleSwitchRequest& operator=(UpdateQualityRuleSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Open, open_);
        DARABONBA_PTR_TO_JSON(RuleIdList, ruleIdList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Open, open_);
        DARABONBA_PTR_FROM_JSON(RuleIdList, ruleIdList_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->open_ == nullptr
        && this->ruleIdList_ == nullptr; };
      // open Field Functions 
      bool hasOpen() const { return this->open_ != nullptr;};
      void deleteOpen() { this->open_ = nullptr;};
      inline bool getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
      inline UpdateCommand& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


      // ruleIdList Field Functions 
      bool hasRuleIdList() const { return this->ruleIdList_ != nullptr;};
      void deleteRuleIdList() { this->ruleIdList_ = nullptr;};
      inline const vector<int64_t> & getRuleIdList() const { DARABONBA_PTR_GET_CONST(ruleIdList_, vector<int64_t>) };
      inline vector<int64_t> getRuleIdList() { DARABONBA_PTR_GET(ruleIdList_, vector<int64_t>) };
      inline UpdateCommand& setRuleIdList(const vector<int64_t> & ruleIdList) { DARABONBA_PTR_SET_VALUE(ruleIdList_, ruleIdList) };
      inline UpdateCommand& setRuleIdList(vector<int64_t> && ruleIdList) { DARABONBA_PTR_SET_RVALUE(ruleIdList_, ruleIdList) };


    protected:
      // This parameter is required.
      shared_ptr<bool> open_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> ruleIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateQualityRuleSwitchRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateQualityRuleSwitchRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateQualityRuleSwitchRequest::UpdateCommand) };
    inline UpdateQualityRuleSwitchRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateQualityRuleSwitchRequest::UpdateCommand) };
    inline UpdateQualityRuleSwitchRequest& setUpdateCommand(const UpdateQualityRuleSwitchRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateQualityRuleSwitchRequest& setUpdateCommand(UpdateQualityRuleSwitchRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateQualityRuleSwitchRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
