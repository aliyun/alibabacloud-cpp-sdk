// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkAuditLogRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkAuditLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(ErrorTrace, errorTrace_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_TO_JSON(IsDiagnosable, isDiagnosable_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
      DARABONBA_PTR_TO_JSON(StatementSource, statementSource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkAuditLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(ErrorTrace, errorTrace_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(InnerQueryId, innerQueryId_);
      DARABONBA_PTR_FROM_JSON(IsDiagnosable, isDiagnosable_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
      DARABONBA_PTR_FROM_JSON(StatementSource, statementSource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSparkAuditLogRecordsResponseBodyItems() = default ;
    DescribeSparkAuditLogRecordsResponseBodyItems(const DescribeSparkAuditLogRecordsResponseBodyItems &) = default ;
    DescribeSparkAuditLogRecordsResponseBodyItems(DescribeSparkAuditLogRecordsResponseBodyItems &&) = default ;
    DescribeSparkAuditLogRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkAuditLogRecordsResponseBodyItems() = default ;
    DescribeSparkAuditLogRecordsResponseBodyItems& operator=(const DescribeSparkAuditLogRecordsResponseBodyItems &) = default ;
    DescribeSparkAuditLogRecordsResponseBodyItems& operator=(DescribeSparkAuditLogRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->clientIp_ != nullptr && this->errorMsg_ != nullptr && this->errorTrace_ != nullptr && this->executeTime_ != nullptr && this->innerQueryId_ != nullptr
        && this->isDiagnosable_ != nullptr && this->processId_ != nullptr && this->resourceGroupName_ != nullptr && this->SQLText_ != nullptr && this->statementId_ != nullptr
        && this->statementSource_ != nullptr && this->status_ != nullptr && this->totalTime_ != nullptr && this->user_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // errorTrace Field Functions 
    bool hasErrorTrace() const { return this->errorTrace_ != nullptr;};
    void deleteErrorTrace() { this->errorTrace_ = nullptr;};
    inline string errorTrace() const { DARABONBA_PTR_GET_DEFAULT(errorTrace_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setErrorTrace(string errorTrace) { DARABONBA_PTR_SET_VALUE(errorTrace_, errorTrace) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // innerQueryId Field Functions 
    bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
    void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
    inline string innerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setInnerQueryId(string innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


    // isDiagnosable Field Functions 
    bool hasIsDiagnosable() const { return this->isDiagnosable_ != nullptr;};
    void deleteIsDiagnosable() { this->isDiagnosable_ = nullptr;};
    inline bool isDiagnosable() const { DARABONBA_PTR_GET_DEFAULT(isDiagnosable_, false) };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setIsDiagnosable(bool isDiagnosable) { DARABONBA_PTR_SET_VALUE(isDiagnosable_, isDiagnosable) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline string statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    // statementSource Field Functions 
    bool hasStatementSource() const { return this->statementSource_ != nullptr;};
    void deleteStatementSource() { this->statementSource_ = nullptr;};
    inline string statementSource() const { DARABONBA_PTR_GET_DEFAULT(statementSource_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setStatementSource(string statementSource) { DARABONBA_PTR_SET_VALUE(statementSource_, statementSource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSparkAuditLogRecordsResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> errorTrace_ = nullptr;
    std::shared_ptr<string> executeTime_ = nullptr;
    std::shared_ptr<string> innerQueryId_ = nullptr;
    std::shared_ptr<bool> isDiagnosable_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> SQLText_ = nullptr;
    // Statement ID。
    std::shared_ptr<string> statementId_ = nullptr;
    std::shared_ptr<string> statementSource_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
