// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteBackupFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupFileIdList, backupFileIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupFileIdList, backupFileIdList_);
    };
    DeleteBackupFileRequest() = default ;
    DeleteBackupFileRequest(const DeleteBackupFileRequest &) = default ;
    DeleteBackupFileRequest(DeleteBackupFileRequest &&) = default ;
    DeleteBackupFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupFileRequest() = default ;
    DeleteBackupFileRequest& operator=(const DeleteBackupFileRequest &) = default ;
    DeleteBackupFileRequest& operator=(DeleteBackupFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupFileIdList_ != nullptr; };
    // backupFileIdList Field Functions 
    bool hasBackupFileIdList() const { return this->backupFileIdList_ != nullptr;};
    void deleteBackupFileIdList() { this->backupFileIdList_ = nullptr;};
    inline const vector<string> & backupFileIdList() const { DARABONBA_PTR_GET_CONST(backupFileIdList_, vector<string>) };
    inline vector<string> backupFileIdList() { DARABONBA_PTR_GET(backupFileIdList_, vector<string>) };
    inline DeleteBackupFileRequest& setBackupFileIdList(const vector<string> & backupFileIdList) { DARABONBA_PTR_SET_VALUE(backupFileIdList_, backupFileIdList) };
    inline DeleteBackupFileRequest& setBackupFileIdList(vector<string> && backupFileIdList) { DARABONBA_PTR_SET_RVALUE(backupFileIdList_, backupFileIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> backupFileIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
