// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailCommittedFile.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailDeletedFile.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand.hpp>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailTableModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CommittedFile, committedFile_);
      DARABONBA_PTR_TO_JSON(DeletedFile, deletedFile_);
      DARABONBA_PTR_TO_JSON(FileExecutionCommand, fileExecutionCommand_);
      DARABONBA_PTR_TO_JSON(TableModel, tableModel_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CommittedFile, committedFile_);
      DARABONBA_PTR_FROM_JSON(DeletedFile, deletedFile_);
      DARABONBA_PTR_FROM_JSON(FileExecutionCommand, fileExecutionCommand_);
      DARABONBA_PTR_FROM_JSON(TableModel, tableModel_);
    };
    GetIDEEventDetailResponseBodyEventDetail() = default ;
    GetIDEEventDetailResponseBodyEventDetail(const GetIDEEventDetailResponseBodyEventDetail &) = default ;
    GetIDEEventDetailResponseBodyEventDetail(GetIDEEventDetailResponseBodyEventDetail &&) = default ;
    GetIDEEventDetailResponseBodyEventDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetail() = default ;
    GetIDEEventDetailResponseBodyEventDetail& operator=(const GetIDEEventDetailResponseBodyEventDetail &) = default ;
    GetIDEEventDetailResponseBodyEventDetail& operator=(GetIDEEventDetailResponseBodyEventDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->committedFile_ != nullptr
        && this->deletedFile_ != nullptr && this->fileExecutionCommand_ != nullptr && this->tableModel_ != nullptr; };
    // committedFile Field Functions 
    bool hasCommittedFile() const { return this->committedFile_ != nullptr;};
    void deleteCommittedFile() { this->committedFile_ = nullptr;};
    inline const Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile & committedFile() const { DARABONBA_PTR_GET_CONST(committedFile_, Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile) };
    inline Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile committedFile() { DARABONBA_PTR_GET(committedFile_, Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile) };
    inline GetIDEEventDetailResponseBodyEventDetail& setCommittedFile(const Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile & committedFile) { DARABONBA_PTR_SET_VALUE(committedFile_, committedFile) };
    inline GetIDEEventDetailResponseBodyEventDetail& setCommittedFile(Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile && committedFile) { DARABONBA_PTR_SET_RVALUE(committedFile_, committedFile) };


    // deletedFile Field Functions 
    bool hasDeletedFile() const { return this->deletedFile_ != nullptr;};
    void deleteDeletedFile() { this->deletedFile_ = nullptr;};
    inline const Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile & deletedFile() const { DARABONBA_PTR_GET_CONST(deletedFile_, Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile) };
    inline Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile deletedFile() { DARABONBA_PTR_GET(deletedFile_, Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile) };
    inline GetIDEEventDetailResponseBodyEventDetail& setDeletedFile(const Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile & deletedFile) { DARABONBA_PTR_SET_VALUE(deletedFile_, deletedFile) };
    inline GetIDEEventDetailResponseBodyEventDetail& setDeletedFile(Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile && deletedFile) { DARABONBA_PTR_SET_RVALUE(deletedFile_, deletedFile) };


    // fileExecutionCommand Field Functions 
    bool hasFileExecutionCommand() const { return this->fileExecutionCommand_ != nullptr;};
    void deleteFileExecutionCommand() { this->fileExecutionCommand_ = nullptr;};
    inline const Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand & fileExecutionCommand() const { DARABONBA_PTR_GET_CONST(fileExecutionCommand_, Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand) };
    inline Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand fileExecutionCommand() { DARABONBA_PTR_GET(fileExecutionCommand_, Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand) };
    inline GetIDEEventDetailResponseBodyEventDetail& setFileExecutionCommand(const Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand & fileExecutionCommand) { DARABONBA_PTR_SET_VALUE(fileExecutionCommand_, fileExecutionCommand) };
    inline GetIDEEventDetailResponseBodyEventDetail& setFileExecutionCommand(Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand && fileExecutionCommand) { DARABONBA_PTR_SET_RVALUE(fileExecutionCommand_, fileExecutionCommand) };


    // tableModel Field Functions 
    bool hasTableModel() const { return this->tableModel_ != nullptr;};
    void deleteTableModel() { this->tableModel_ = nullptr;};
    inline const Models::GetIDEEventDetailResponseBodyEventDetailTableModel & tableModel() const { DARABONBA_PTR_GET_CONST(tableModel_, Models::GetIDEEventDetailResponseBodyEventDetailTableModel) };
    inline Models::GetIDEEventDetailResponseBodyEventDetailTableModel tableModel() { DARABONBA_PTR_GET(tableModel_, Models::GetIDEEventDetailResponseBodyEventDetailTableModel) };
    inline GetIDEEventDetailResponseBodyEventDetail& setTableModel(const Models::GetIDEEventDetailResponseBodyEventDetailTableModel & tableModel) { DARABONBA_PTR_SET_VALUE(tableModel_, tableModel) };
    inline GetIDEEventDetailResponseBodyEventDetail& setTableModel(Models::GetIDEEventDetailResponseBodyEventDetailTableModel && tableModel) { DARABONBA_PTR_SET_RVALUE(tableModel_, tableModel) };


  protected:
    // The data snapshot when the file is committed and deployed.
    // 
    // This parameter is valid only if the message type is IDE_FILE_SUBMIT_BEFORE or IDE_FILE_DEPLOY_BEFORE.
    std::shared_ptr<Models::GetIDEEventDetailResponseBodyEventDetailCommittedFile> committedFile_ = nullptr;
    // The data snapshot when the file is deleted. This parameter is valid only if the message type is IDE_FILE_DELETE_BEFORE.
    std::shared_ptr<Models::GetIDEEventDetailResponseBodyEventDetailDeletedFile> deletedFile_ = nullptr;
    // The data snapshot when the code in the file is run. This parameter is valid only if the message type is IDE_FILE_EXECUTE_BEFORE.
    std::shared_ptr<Models::GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand> fileExecutionCommand_ = nullptr;
    // The data snapshot when the table is committed and deployed. This parameter is valid only if the message type is IDE_TABLE_SUBMIT_BEFORE or IDE_TABLE_DEPLOY_BEFORE.
    std::shared_ptr<Models::GetIDEEventDetailResponseBodyEventDetailTableModel> tableModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
