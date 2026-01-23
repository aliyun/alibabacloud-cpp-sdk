// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUALITYRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUALITYRULESREQUEST_HPP_
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
  class DeleteQualityRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQualityRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQualityRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteQualityRulesRequest() = default ;
    DeleteQualityRulesRequest(const DeleteQualityRulesRequest &) = default ;
    DeleteQualityRulesRequest(DeleteQualityRulesRequest &&) = default ;
    DeleteQualityRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQualityRulesRequest() = default ;
    DeleteQualityRulesRequest& operator=(const DeleteQualityRulesRequest &) = default ;
    DeleteQualityRulesRequest& operator=(DeleteQualityRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RuleIdList, ruleIdList_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleIdList, ruleIdList_);
      };
      DeleteCommand() = default ;
      DeleteCommand(const DeleteCommand &) = default ;
      DeleteCommand(DeleteCommand &&) = default ;
      DeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteCommand() = default ;
      DeleteCommand& operator=(const DeleteCommand &) = default ;
      DeleteCommand& operator=(DeleteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleIdList_ == nullptr; };
      // ruleIdList Field Functions 
      bool hasRuleIdList() const { return this->ruleIdList_ != nullptr;};
      void deleteRuleIdList() { this->ruleIdList_ = nullptr;};
      inline const vector<int64_t> & getRuleIdList() const { DARABONBA_PTR_GET_CONST(ruleIdList_, vector<int64_t>) };
      inline vector<int64_t> getRuleIdList() { DARABONBA_PTR_GET(ruleIdList_, vector<int64_t>) };
      inline DeleteCommand& setRuleIdList(const vector<int64_t> & ruleIdList) { DARABONBA_PTR_SET_VALUE(ruleIdList_, ruleIdList) };
      inline DeleteCommand& setRuleIdList(vector<int64_t> && ruleIdList) { DARABONBA_PTR_SET_RVALUE(ruleIdList_, ruleIdList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<int64_t>> ruleIdList_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteQualityRulesRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteQualityRulesRequest::DeleteCommand) };
    inline DeleteQualityRulesRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteQualityRulesRequest::DeleteCommand) };
    inline DeleteQualityRulesRequest& setDeleteCommand(const DeleteQualityRulesRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteQualityRulesRequest& setDeleteCommand(DeleteQualityRulesRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteQualityRulesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteQualityRulesRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
