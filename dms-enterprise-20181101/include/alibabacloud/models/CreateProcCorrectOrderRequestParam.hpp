// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProcCorrectOrderRequestParamDbItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateProcCorrectOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcCorrectOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
      DARABONBA_PTR_TO_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_TO_JSON(RollbackAttachmentName, rollbackAttachmentName_);
      DARABONBA_PTR_TO_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_TO_JSON(RollbackSqlType, rollbackSqlType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcCorrectOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(DbItemList, dbItemList_);
      DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
      DARABONBA_PTR_FROM_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_FROM_JSON(RollbackAttachmentName, rollbackAttachmentName_);
      DARABONBA_PTR_FROM_JSON(RollbackSQL, rollbackSQL_);
      DARABONBA_PTR_FROM_JSON(RollbackSqlType, rollbackSqlType_);
    };
    CreateProcCorrectOrderRequestParam() = default ;
    CreateProcCorrectOrderRequestParam(const CreateProcCorrectOrderRequestParam &) = default ;
    CreateProcCorrectOrderRequestParam(CreateProcCorrectOrderRequestParam &&) = default ;
    CreateProcCorrectOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcCorrectOrderRequestParam() = default ;
    CreateProcCorrectOrderRequestParam& operator=(const CreateProcCorrectOrderRequestParam &) = default ;
    CreateProcCorrectOrderRequestParam& operator=(CreateProcCorrectOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && return this->dbItemList_ == nullptr && return this->execMode_ == nullptr && return this->execSQL_ == nullptr && return this->rollbackAttachmentName_ == nullptr && return this->rollbackSQL_ == nullptr
        && return this->rollbackSqlType_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateProcCorrectOrderRequestParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // dbItemList Field Functions 
    bool hasDbItemList() const { return this->dbItemList_ != nullptr;};
    void deleteDbItemList() { this->dbItemList_ = nullptr;};
    inline const vector<Models::CreateProcCorrectOrderRequestParamDbItemList> & dbItemList() const { DARABONBA_PTR_GET_CONST(dbItemList_, vector<Models::CreateProcCorrectOrderRequestParamDbItemList>) };
    inline vector<Models::CreateProcCorrectOrderRequestParamDbItemList> dbItemList() { DARABONBA_PTR_GET(dbItemList_, vector<Models::CreateProcCorrectOrderRequestParamDbItemList>) };
    inline CreateProcCorrectOrderRequestParam& setDbItemList(const vector<Models::CreateProcCorrectOrderRequestParamDbItemList> & dbItemList) { DARABONBA_PTR_SET_VALUE(dbItemList_, dbItemList) };
    inline CreateProcCorrectOrderRequestParam& setDbItemList(vector<Models::CreateProcCorrectOrderRequestParamDbItemList> && dbItemList) { DARABONBA_PTR_SET_RVALUE(dbItemList_, dbItemList) };


    // execMode Field Functions 
    bool hasExecMode() const { return this->execMode_ != nullptr;};
    void deleteExecMode() { this->execMode_ = nullptr;};
    inline string execMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
    inline CreateProcCorrectOrderRequestParam& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


    // execSQL Field Functions 
    bool hasExecSQL() const { return this->execSQL_ != nullptr;};
    void deleteExecSQL() { this->execSQL_ = nullptr;};
    inline string execSQL() const { DARABONBA_PTR_GET_DEFAULT(execSQL_, "") };
    inline CreateProcCorrectOrderRequestParam& setExecSQL(string execSQL) { DARABONBA_PTR_SET_VALUE(execSQL_, execSQL) };


    // rollbackAttachmentName Field Functions 
    bool hasRollbackAttachmentName() const { return this->rollbackAttachmentName_ != nullptr;};
    void deleteRollbackAttachmentName() { this->rollbackAttachmentName_ = nullptr;};
    inline string rollbackAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rollbackAttachmentName_, "") };
    inline CreateProcCorrectOrderRequestParam& setRollbackAttachmentName(string rollbackAttachmentName) { DARABONBA_PTR_SET_VALUE(rollbackAttachmentName_, rollbackAttachmentName) };


    // rollbackSQL Field Functions 
    bool hasRollbackSQL() const { return this->rollbackSQL_ != nullptr;};
    void deleteRollbackSQL() { this->rollbackSQL_ = nullptr;};
    inline string rollbackSQL() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQL_, "") };
    inline CreateProcCorrectOrderRequestParam& setRollbackSQL(string rollbackSQL) { DARABONBA_PTR_SET_VALUE(rollbackSQL_, rollbackSQL) };


    // rollbackSqlType Field Functions 
    bool hasRollbackSqlType() const { return this->rollbackSqlType_ != nullptr;};
    void deleteRollbackSqlType() { this->rollbackSqlType_ = nullptr;};
    inline string rollbackSqlType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSqlType_, "") };
    inline CreateProcCorrectOrderRequestParam& setRollbackSqlType(string rollbackSqlType) { DARABONBA_PTR_SET_VALUE(rollbackSqlType_, rollbackSqlType) };


  protected:
    // The reason for the programmable object change.
    std::shared_ptr<string> classify_ = nullptr;
    // The information about the database.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateProcCorrectOrderRequestParamDbItemList>> dbItemList_ = nullptr;
    // The mode in which the data change ticket is executed after the ticket is approved. Valid values:
    // 
    // *   **COMMITOR**: The ticket is executed by the user who submits the ticket.
    // *   **AUTO**: The ticket is automatically executed after the ticket is approved.
    // *   **LAST_AUDITOR**: The ticket is executed by the last approver of the ticket.
    std::shared_ptr<string> execMode_ = nullptr;
    // The SQL statements for data change.
    // 
    // This parameter is required.
    std::shared_ptr<string> execSQL_ = nullptr;
    // The key of the attachment that contains the SQL statements used to roll back the data change. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key from the value of AttachmentKey.
    // 
    // >  This parameter is required if you set **RollbackSqlType** to **ATTACHMENT**.
    std::shared_ptr<string> rollbackAttachmentName_ = nullptr;
    // The SQL statements for rolling back the data change.
    // 
    // >  This parameter is required if you set the **RollbackSqlType** parameter to **TEXT**.
    std::shared_ptr<string> rollbackSQL_ = nullptr;
    // The format of the SQL statements used to roll back the data change. Valid values:
    // 
    // *   **TEXT**
    // *   **ATTACHMENT**
    std::shared_ptr<string> rollbackSqlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
