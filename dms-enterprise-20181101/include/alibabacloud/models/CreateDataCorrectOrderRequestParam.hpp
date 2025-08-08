// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACORRECTORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACORRECTORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataCorrectOrderRequestParamDbItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCorrectOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCorrectOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_TO_JSON(EstimateAffectRows, estimateAffectRows_);
      DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
      DARABONBA_PTR_TO_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_TO_JSON(RollbackAttachmentName, rollbackAttachmentName_);
      DARABONBA_PTR_TO_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_TO_JSON(RollbackSqlType, rollbackSqlType_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCorrectOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_FROM_JSON(EstimateAffectRows, estimateAffectRows_);
      DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
      DARABONBA_PTR_FROM_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_FROM_JSON(RollbackAttachmentName, rollbackAttachmentName_);
      DARABONBA_PTR_FROM_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_FROM_JSON(RollbackSqlType, rollbackSqlType_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
    };
    CreateDataCorrectOrderRequestParam() = default ;
    CreateDataCorrectOrderRequestParam(const CreateDataCorrectOrderRequestParam &) = default ;
    CreateDataCorrectOrderRequestParam(CreateDataCorrectOrderRequestParam &&) = default ;
    CreateDataCorrectOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCorrectOrderRequestParam() = default ;
    CreateDataCorrectOrderRequestParam& operator=(const CreateDataCorrectOrderRequestParam &) = default ;
    CreateDataCorrectOrderRequestParam& operator=(CreateDataCorrectOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentName_ != nullptr
        && this->classify_ != nullptr && this->dbItemList_ != nullptr && this->estimateAffectRows_ != nullptr && this->execMode_ != nullptr && this->execSQL_ != nullptr
        && this->rollbackAttachmentName_ != nullptr && this->rollbackSQL_ != nullptr && this->rollbackSqlType_ != nullptr && this->sqlType_ != nullptr; };
    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline CreateDataCorrectOrderRequestParam& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateDataCorrectOrderRequestParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // dbItemList Field Functions 
    bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
    void deleteDbItemList() { this->dbItemList_ = nullptr;};
    inline const vector<Models::CreateDataCorrectOrderRequestParamDbItemList> & dbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Models::CreateDataCorrectOrderRequestParamDbItemList>) };
    inline vector<Models::CreateDataCorrectOrderRequestParamDbItemList> dbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Models::CreateDataCorrectOrderRequestParamDbItemList>) };
    inline CreateDataCorrectOrderRequestParam& setDbItemList(const vector<Models::CreateDataCorrectOrderRequestParamDbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
    inline CreateDataCorrectOrderRequestParam& setDbItemList(vector<Models::CreateDataCorrectOrderRequestParamDbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


    // estimateAffectRows Field Functions 
    bool hasEstimateAffectRows() const { return this->estimateAffectRows_ != nullptr;};
    void deleteEstimateAffectRows() { this->estimateAffectRows_ = nullptr;};
    inline int64_t estimateAffectRows() const { DARABONBA_PTR_GET_DEFAULT(estimateAffectRows_, 0L) };
    inline CreateDataCorrectOrderRequestParam& setEstimateAffectRows(int64_t estimateAffectRows) { DARABONBA_PTR_SET_VALUE(estimateAffectRows_, estimateAffectRows) };


    // execMode Field Functions 
    bool hasExecMode() const { return this->execMode_ != nullptr;};
    void deleteExecMode() { this->execMode_ = nullptr;};
    inline string execMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
    inline CreateDataCorrectOrderRequestParam& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


    // execSQL Field Functions 
    bool hasExecSQL() const { return this->execSQL_ != nullptr;};
    void deleteExecSQL() { this->execSQL_ = nullptr;};
    inline string execSQL() const { DARABONBA_PTR_GET_DEFAULT(execSQL_, "") };
    inline CreateDataCorrectOrderRequestParam& setExecSQL(string execSQL) { DARABONBA_PTR_SET_VALUE(execSQL_, execSQL) };


    // rollbackAttachmentName Field Functions 
    bool hasRollbackAttachmentName() const { return this->rollbackAttachmentName_ != nullptr;};
    void deleteRollbackAttachmentName() { this->rollbackAttachmentName_ = nullptr;};
    inline string rollbackAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rollbackAttachmentName_, "") };
    inline CreateDataCorrectOrderRequestParam& setRollbackAttachmentName(string rollbackAttachmentName) { DARABONBA_PTR_SET_VALUE(rollbackAttachmentName_, rollbackAttachmentName) };


    // rollbackSQL Field Functions 
    bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
    void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
    inline string rollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
    inline CreateDataCorrectOrderRequestParam& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


    // rollbackSqlType Field Functions 
    bool hasRollbackSqlType() const { return this->rollbackSqlType_ != nullptr;};
    void deleteRollbackSqlType() { this->rollbackSqlType_ = nullptr;};
    inline string rollbackSqlType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSqlType_, "") };
    inline CreateDataCorrectOrderRequestParam& setRollbackSqlType(string rollbackSqlType) { DARABONBA_PTR_SET_VALUE(rollbackSqlType_, rollbackSqlType) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline CreateDataCorrectOrderRequestParam& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


  protected:
    // The key of the attachment that contains the SQL statements used to change data. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of AttachmentKey.
    // 
    // >  This parameter is required if you set **SqlType** to **ATTACHMENT**.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // The reason for the data change.
    std::shared_ptr<string> classify_ = nullptr;
    // The databases whose data you want to change.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataCorrectOrderRequestParamDbItemList>> dbItemList_ = nullptr;
    // The estimated number of data rows that may be affected by the data change.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> estimateAffectRows_ = nullptr;
    // The mode in which the data change ticket is executed after the ticket is approved. Valid values:
    // 
    // *   **COMMITOR**: The ticket is executed by the user who submits the ticket.
    // *   **AUTO**: The ticket is automatically executed after the ticket is approved.
    // *   **LAST_AUDITOR**: The ticket is executed by the last approver of the ticket.
    std::shared_ptr<string> execMode_ = nullptr;
    // The SQL statements for data change.
    // 
    // > 
    // 
    // *   This parameter is required if you set **SqlType** to **TEXT**.
    // 
    // *   The size of the SQL statement cannot exceed 15 MB.
    std::shared_ptr<string> execSQL_ = nullptr;
    // The key of the attachment that contains the SQL statements used to roll back the data change. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of AttachmentKey.
    // 
    // >  This parameter is required if you set **RollbackSqlType** to **ATTACHMENT**.
    std::shared_ptr<string> rollbackAttachmentName_ = nullptr;
    // The SQL statements for rolling back the data change.
    // 
    // >  This parameter is required if you set **RollbackSqlType** to **TEXT**.
    std::shared_ptr<string> rollbackSQL_ = nullptr;
    // The format of the SQL statements used to roll back the data change. Valid values:
    // 
    // *   **TEXT**
    // *   **ATTACHMENT**
    std::shared_ptr<string> rollbackSqlType_ = nullptr;
    // The format of the SQL statements used to change data. Valid values:
    // 
    // *   **TEXT**
    // *   **ATTACHMENT**
    // 
    // This parameter is required.
    std::shared_ptr<string> sqlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
