// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODYDATAEXPORTORDERDETAILORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODYDATAEXPORTORDERDETAILORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ExeSQL, exeSQL_);
      DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_TO_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ExeSQL, exeSQL_);
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
    };
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail() = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail(const GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail &) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail(GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail &&) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail() = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& operator=(const GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail &) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& operator=(GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualAffectRows_ != nullptr
        && this->classify_ != nullptr && this->database_ != nullptr && this->dbId_ != nullptr && this->envType_ != nullptr && this->exeSQL_ != nullptr
        && this->ignoreAffectRows_ != nullptr && this->ignoreAffectRowsReason_ != nullptr && this->logic_ != nullptr; };
    // actualAffectRows Field Functions 
    bool hasActualAffectRows() const { return this->actualAffectRows_ != nullptr;};
    void deleteActualAffectRows() { this->actualAffectRows_ = nullptr;};
    inline int64_t actualAffectRows() const { DARABONBA_PTR_GET_DEFAULT(actualAffectRows_, 0L) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // exeSQL Field Functions 
    bool hasExeSQL() const { return this->exeSQL_ != nullptr;};
    void deleteExeSQL() { this->exeSQL_ = nullptr;};
    inline string exeSQL() const { DARABONBA_PTR_GET_DEFAULT(exeSQL_, "") };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setExeSQL(string exeSQL) { DARABONBA_PTR_SET_VALUE(exeSQL_, exeSQL) };


    // ignoreAffectRows Field Functions 
    bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
    void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
    inline bool ignoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


    // ignoreAffectRowsReason Field Functions 
    bool hasIgnoreAffectRowsReason() const { return this->ignoreAffectRowsReason_ != nullptr;};
    void deleteIgnoreAffectRowsReason() { this->ignoreAffectRowsReason_ = nullptr;};
    inline string ignoreAffectRowsReason() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRowsReason_, "") };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setIgnoreAffectRowsReason(string ignoreAffectRowsReason) { DARABONBA_PTR_SET_VALUE(ignoreAffectRowsReason_, ignoreAffectRowsReason) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


  protected:
    // The number of rows that were affected by the SQL statement.
    std::shared_ptr<int64_t> actualAffectRows_ = nullptr;
    // The category of the reason for the data export.
    std::shared_ptr<string> classify_ = nullptr;
    // The name of the database from which data was exported.
    std::shared_ptr<string> database_ = nullptr;
    // The ID of the database from which data was exported.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // The type of the environment to which the database belongs.
    std::shared_ptr<string> envType_ = nullptr;
    // The SQL statement that was executed to export data.
    std::shared_ptr<string> exeSQL_ = nullptr;
    // Indicates whether the affected rows are skipped.
    std::shared_ptr<bool> ignoreAffectRows_ = nullptr;
    // The reason why the affected rows are skipped.
    std::shared_ptr<string> ignoreAffectRowsReason_ = nullptr;
    // Indicates whether the database is a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
