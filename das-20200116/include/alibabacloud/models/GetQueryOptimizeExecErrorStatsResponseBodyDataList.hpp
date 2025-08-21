// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSTATSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSTATSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeExecErrorStatsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeExecErrorStatsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Dbname, dbname_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeExecErrorStatsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dbname, dbname_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
    };
    GetQueryOptimizeExecErrorStatsResponseBodyDataList() = default ;
    GetQueryOptimizeExecErrorStatsResponseBodyDataList(const GetQueryOptimizeExecErrorStatsResponseBodyDataList &) = default ;
    GetQueryOptimizeExecErrorStatsResponseBodyDataList(GetQueryOptimizeExecErrorStatsResponseBodyDataList &&) = default ;
    GetQueryOptimizeExecErrorStatsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeExecErrorStatsResponseBodyDataList() = default ;
    GetQueryOptimizeExecErrorStatsResponseBodyDataList& operator=(const GetQueryOptimizeExecErrorStatsResponseBodyDataList &) = default ;
    GetQueryOptimizeExecErrorStatsResponseBodyDataList& operator=(GetQueryOptimizeExecErrorStatsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbname_ != nullptr
        && this->errorCode_ != nullptr && this->errorCount_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->sqlId_ != nullptr
        && this->sqlText_ != nullptr; };
    // dbname Field Functions 
    bool hasDbname() const { return this->dbname_ != nullptr;};
    void deleteDbname() { this->dbname_ = nullptr;};
    inline string dbname() const { DARABONBA_PTR_GET_DEFAULT(dbname_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setDbname(string dbname) { DARABONBA_PTR_SET_VALUE(dbname_, dbname) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBodyDataList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dbname_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The number of errors.
    std::shared_ptr<int64_t> errorCount_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The alias of the database instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The SQL template ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The content of the SQL template.
    std::shared_ptr<string> sqlText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
