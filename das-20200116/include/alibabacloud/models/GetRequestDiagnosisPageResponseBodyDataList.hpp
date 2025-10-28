// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISPAGERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISPAGERESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRequestDiagnosisPageResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestDiagnosisPageResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(dbSchema, dbSchema_);
      DARABONBA_PTR_TO_JSON(engine, engine_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(param, param_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(sqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestDiagnosisPageResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(dbSchema, dbSchema_);
      DARABONBA_PTR_FROM_JSON(engine, engine_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(param, param_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(sqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    GetRequestDiagnosisPageResponseBodyDataList() = default ;
    GetRequestDiagnosisPageResponseBodyDataList(const GetRequestDiagnosisPageResponseBodyDataList &) = default ;
    GetRequestDiagnosisPageResponseBodyDataList(GetRequestDiagnosisPageResponseBodyDataList &&) = default ;
    GetRequestDiagnosisPageResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestDiagnosisPageResponseBodyDataList() = default ;
    GetRequestDiagnosisPageResponseBodyDataList& operator=(const GetRequestDiagnosisPageResponseBodyDataList &) = default ;
    GetRequestDiagnosisPageResponseBodyDataList& operator=(GetRequestDiagnosisPageResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->dbSchema_ == nullptr && return this->engine_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->messageId_ == nullptr
        && return this->param_ == nullptr && return this->result_ == nullptr && return this->sqlId_ == nullptr && return this->state_ == nullptr && return this->uuid_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // dbSchema Field Functions 
    bool hasDbSchema() const { return this->dbSchema_ != nullptr;};
    void deleteDbSchema() { this->dbSchema_ = nullptr;};
    inline string dbSchema() const { DARABONBA_PTR_GET_DEFAULT(dbSchema_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setDbSchema(string dbSchema) { DARABONBA_PTR_SET_VALUE(dbSchema_, dbSchema) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline GetRequestDiagnosisPageResponseBodyDataList& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetRequestDiagnosisPageResponseBodyDataList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The user ID.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbSchema_ = nullptr;
    // The database engine. Valid values:
    // 
    // * **MySQL**
    // * **PostgreSQL**
    // * **SQLServer**
    // * **PolarDBMySQL**
    // * **PolarDBOracle**
    // * **MongoDB**
    std::shared_ptr<string> engine_ = nullptr;
    // The time when the SQL diagnostics task was created. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the SQL diagnostics task was modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The unique ID of the diagnostics task.
    std::shared_ptr<string> messageId_ = nullptr;
    // Additional information.
    std::shared_ptr<string> param_ = nullptr;
    // The result of the SQL diagnostics task. The result includes the following information:
    // 
    // * **endTime**: the end time of the SQL diagnostics task.
    // * **errorCode**: indicates whether the SQL diagnostics task is complete. Valid values:
    //   * **0001**: The SQL diagnostics task is complete.
    //   * **0003**: The SQL diagnostics task failed.
    // 
    // * **errorMessage**: the error message.
    // * **estimateCost**: the estimated cost.
    //   * **cpu**: the estimated CPU utilization of the index.
    //   * **io**: the estimated I/O usage of the index.
    //   * **rows**: the estimated values of the rows returned for the index.
    // * **improvement**: the performance improvement ratio.
    // * **indexAdvices**: the index recommendations, which include the following information:
    //   * **columns**: the index columns.
    //   * **ddlAddIndex**: the DDL statement for the index.
    //   * **indexName**: the name of the index.
    //   * **schemaName**: the name of the database.
    //   * **tableName**: the name of the table.
    //   * **unique**: indicates whether the index is unique.
    // 
    // * **ip**: the IP address of the instance.
    // * **messageId**: the ID of the diagnostics task.
    // * **port**: the port used to connect to the instance.
    // * **sqlTag**: the SQL tag.
    // * **startTime**: the start time of the SQL diagnostics task.
    // * **success**: indicates whether the request was successful.
    // * **support**: indicates whether the SQL statement can be diagnosed. Valid values:
    //   * **true**: The SQL statement can be diagnosed.
    //   * **false**: The SQL statement cannot be diagnosed.
    // 
    // * **tuningAdvices**: the SQL rewrite suggestions.
    std::shared_ptr<string> result_ = nullptr;
    // The SQL template ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The status of the diagnostics task. Valid values:
    // 
    // * **0**: The diagnostics task is in progress.
    // 
    // * **1**: A diagnostics error occurred.
    // 
    // * **2**: The diagnostics task is complete.
    // 
    // * **3**: An SQL error occurred.
    // 
    // * **4**: An engine error occurred.
    std::shared_ptr<int32_t> state_ = nullptr;
    // The unique ID of the diagnostics instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
