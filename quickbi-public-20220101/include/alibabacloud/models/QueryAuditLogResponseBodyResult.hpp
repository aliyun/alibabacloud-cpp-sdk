// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITLOGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITLOGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryAuditLogResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditLogResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(OperatorAccountName, operatorAccountName_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditLogResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(OperatorAccountName, operatorAccountName_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryAuditLogResponseBodyResult() = default ;
    QueryAuditLogResponseBodyResult(const QueryAuditLogResponseBodyResult &) = default ;
    QueryAuditLogResponseBodyResult(QueryAuditLogResponseBodyResult &&) = default ;
    QueryAuditLogResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditLogResponseBodyResult() = default ;
    QueryAuditLogResponseBodyResult& operator=(const QueryAuditLogResponseBodyResult &) = default ;
    QueryAuditLogResponseBodyResult& operator=(QueryAuditLogResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->operatorAccountName_ == nullptr && return this->operatorName_ == nullptr && return this->operatorType_ == nullptr && return this->targetId_ == nullptr && return this->targetName_ == nullptr
        && return this->targetType_ == nullptr && return this->workspaceId_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryAuditLogResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // operatorAccountName Field Functions 
    bool hasOperatorAccountName() const { return this->operatorAccountName_ != nullptr;};
    void deleteOperatorAccountName() { this->operatorAccountName_ = nullptr;};
    inline string operatorAccountName() const { DARABONBA_PTR_GET_DEFAULT(operatorAccountName_, "") };
    inline QueryAuditLogResponseBodyResult& setOperatorAccountName(string operatorAccountName) { DARABONBA_PTR_SET_VALUE(operatorAccountName_, operatorAccountName) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline QueryAuditLogResponseBodyResult& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline QueryAuditLogResponseBodyResult& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline QueryAuditLogResponseBodyResult& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline QueryAuditLogResponseBodyResult& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline QueryAuditLogResponseBodyResult& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryAuditLogResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Log time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Operator account.
    std::shared_ptr<string> operatorAccountName_ = nullptr;
    // Operator\\"s nickname.
    std::shared_ptr<string> operatorName_ = nullptr;
    // Operation type.
    std::shared_ptr<string> operatorType_ = nullptr;
    // Target ID.
    std::shared_ptr<string> targetId_ = nullptr;
    // Target name.
    std::shared_ptr<string> targetName_ = nullptr;
    // Target type.
    std::shared_ptr<string> targetType_ = nullptr;
    // Workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
