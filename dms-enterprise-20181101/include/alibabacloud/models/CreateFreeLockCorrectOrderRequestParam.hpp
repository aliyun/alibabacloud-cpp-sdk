// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFREELOCKCORRECTORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEFREELOCKCORRECTORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFreeLockCorrectOrderRequestParamDbItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateFreeLockCorrectOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFreeLockCorrectOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
      DARABONBA_PTR_TO_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_TO_JSON(RollbackAttachmentName, rollbackAttachmentName_);
      DARABONBA_PTR_TO_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_TO_JSON(RollbackSqlType, rollbackSqlType_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFreeLockCorrectOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
      DARABONBA_PTR_FROM_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_FROM_JSON(RollbackAttachmentName, rollbackAttachmentName_);
      DARABONBA_PTR_FROM_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_FROM_JSON(RollbackSqlType, rollbackSqlType_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
    };
    CreateFreeLockCorrectOrderRequestParam() = default ;
    CreateFreeLockCorrectOrderRequestParam(const CreateFreeLockCorrectOrderRequestParam &) = default ;
    CreateFreeLockCorrectOrderRequestParam(CreateFreeLockCorrectOrderRequestParam &&) = default ;
    CreateFreeLockCorrectOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFreeLockCorrectOrderRequestParam() = default ;
    CreateFreeLockCorrectOrderRequestParam& operator=(const CreateFreeLockCorrectOrderRequestParam &) = default ;
    CreateFreeLockCorrectOrderRequestParam& operator=(CreateFreeLockCorrectOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentName_ != nullptr
        && this->classify_ != nullptr && this->dbItemList_ != nullptr && this->execMode_ != nullptr && this->execSQL_ != nullptr && this->rollbackAttachmentName_ != nullptr
        && this->rollbackSQL_ != nullptr && this->rollbackSqlType_ != nullptr && this->sqlType_ != nullptr; };
    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // dbItemList Field Functions 
    bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
    void deleteDbItemList() { this->dbItemList_ = nullptr;};
    inline const vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList> & dbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList>) };
    inline vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList> dbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList>) };
    inline CreateFreeLockCorrectOrderRequestParam& setDbItemList(const vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
    inline CreateFreeLockCorrectOrderRequestParam& setDbItemList(vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


    // execMode Field Functions 
    bool hasExecMode() const { return this->execMode_ != nullptr;};
    void deleteExecMode() { this->execMode_ = nullptr;};
    inline string execMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


    // execSQL Field Functions 
    bool hasExecSQL() const { return this->execSQL_ != nullptr;};
    void deleteExecSQL() { this->execSQL_ = nullptr;};
    inline string execSQL() const { DARABONBA_PTR_GET_DEFAULT(execSQL_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setExecSQL(string execSQL) { DARABONBA_PTR_SET_VALUE(execSQL_, execSQL) };


    // rollbackAttachmentName Field Functions 
    bool hasRollbackAttachmentName() const { return this->rollbackAttachmentName_ != nullptr;};
    void deleteRollbackAttachmentName() { this->rollbackAttachmentName_ = nullptr;};
    inline string rollbackAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rollbackAttachmentName_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setRollbackAttachmentName(string rollbackAttachmentName) { DARABONBA_PTR_SET_VALUE(rollbackAttachmentName_, rollbackAttachmentName) };


    // rollbackSQL Field Functions 
    bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
    void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
    inline string rollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


    // rollbackSqlType Field Functions 
    bool hasRollbackSqlType() const { return this->rollbackSqlType_ != nullptr;};
    void deleteRollbackSqlType() { this->rollbackSqlType_ = nullptr;};
    inline string rollbackSqlType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSqlType_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setRollbackSqlType(string rollbackSqlType) { DARABONBA_PTR_SET_VALUE(rollbackSqlType_, rollbackSqlType) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline CreateFreeLockCorrectOrderRequestParam& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


  protected:
    // The key of the attachment that contains the SQL statements used to change data. This parameter is not supported.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // The reason for the data change.
    std::shared_ptr<string> classify_ = nullptr;
    // The databases in which you want to change data.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateFreeLockCorrectOrderRequestParamDbItemList>> dbItemList_ = nullptr;
    // The execution mode of the ticket after the ticket is approved. Valid values:
    // 
    // *   **COMMITOR**: The data change is performed by the user who submits the ticket.
    // *   **AUTO**: The data change is automatically performed after the ticket is approved.
    // *   **LAST_AUDITOR**: The data change is performed by the last approver of the ticket.
    std::shared_ptr<string> execMode_ = nullptr;
    // The SQL statements that you want to execute to change data.
    // 
    // This parameter is required.
    std::shared_ptr<string> execSQL_ = nullptr;
    // The key of the attachment that contains the SQL statements used to roll back the data change.
    std::shared_ptr<string> rollbackAttachmentName_ = nullptr;
    // The SQL statements used to roll back the data change.
    std::shared_ptr<string> rollbackSQL_ = nullptr;
    // The format of the SQL statements used to roll back the data change. Valid values:
    // 
    // *   **TEXT**: text
    // *   **ATTACHMENT**: attachment. This value is not supported.
    std::shared_ptr<string> rollbackSqlType_ = nullptr;
    // The format of the SQL statements used to change data. Valid values:
    // 
    // *   **TEXT**: text
    // *   **ATTACHMENT**: attachment. This value is not supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> sqlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
