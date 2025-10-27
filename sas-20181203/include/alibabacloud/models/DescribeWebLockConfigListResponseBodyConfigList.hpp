// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKCONFIGLISTRESPONSEBODYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKCONFIGLISTRESPONSEBODYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockConfigListResponseBodyConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockConfigListResponseBodyConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(DefenceMode, defenceMode_);
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(ExclusiveDir, exclusiveDir_);
      DARABONBA_PTR_TO_JSON(ExclusiveFile, exclusiveFile_);
      DARABONBA_PTR_TO_JSON(ExclusiveFileType, exclusiveFileType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InclusiveFile, inclusiveFile_);
      DARABONBA_PTR_TO_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_TO_JSON(LocalBackupDir, localBackupDir_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockConfigListResponseBodyConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenceMode, defenceMode_);
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(ExclusiveDir, exclusiveDir_);
      DARABONBA_PTR_FROM_JSON(ExclusiveFile, exclusiveFile_);
      DARABONBA_PTR_FROM_JSON(ExclusiveFileType, exclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InclusiveFile, inclusiveFile_);
      DARABONBA_PTR_FROM_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(LocalBackupDir, localBackupDir_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeWebLockConfigListResponseBodyConfigList() = default ;
    DescribeWebLockConfigListResponseBodyConfigList(const DescribeWebLockConfigListResponseBodyConfigList &) = default ;
    DescribeWebLockConfigListResponseBodyConfigList(DescribeWebLockConfigListResponseBodyConfigList &&) = default ;
    DescribeWebLockConfigListResponseBodyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockConfigListResponseBodyConfigList() = default ;
    DescribeWebLockConfigListResponseBodyConfigList& operator=(const DescribeWebLockConfigListResponseBodyConfigList &) = default ;
    DescribeWebLockConfigListResponseBodyConfigList& operator=(DescribeWebLockConfigListResponseBodyConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenceMode_ == nullptr
        && return this->dir_ == nullptr && return this->exclusiveDir_ == nullptr && return this->exclusiveFile_ == nullptr && return this->exclusiveFileType_ == nullptr && return this->id_ == nullptr
        && return this->inclusiveFile_ == nullptr && return this->inclusiveFileType_ == nullptr && return this->localBackupDir_ == nullptr && return this->mode_ == nullptr && return this->uuid_ == nullptr; };
    // defenceMode Field Functions 
    bool hasDefenceMode() const { return this->defenceMode_ != nullptr;};
    void deleteDefenceMode() { this->defenceMode_ = nullptr;};
    inline string defenceMode() const { DARABONBA_PTR_GET_DEFAULT(defenceMode_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setDefenceMode(string defenceMode) { DARABONBA_PTR_SET_VALUE(defenceMode_, defenceMode) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // exclusiveDir Field Functions 
    bool hasExclusiveDir() const { return this->exclusiveDir_ != nullptr;};
    void deleteExclusiveDir() { this->exclusiveDir_ = nullptr;};
    inline string exclusiveDir() const { DARABONBA_PTR_GET_DEFAULT(exclusiveDir_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setExclusiveDir(string exclusiveDir) { DARABONBA_PTR_SET_VALUE(exclusiveDir_, exclusiveDir) };


    // exclusiveFile Field Functions 
    bool hasExclusiveFile() const { return this->exclusiveFile_ != nullptr;};
    void deleteExclusiveFile() { this->exclusiveFile_ = nullptr;};
    inline string exclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFile_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setExclusiveFile(string exclusiveFile) { DARABONBA_PTR_SET_VALUE(exclusiveFile_, exclusiveFile) };


    // exclusiveFileType Field Functions 
    bool hasExclusiveFileType() const { return this->exclusiveFileType_ != nullptr;};
    void deleteExclusiveFileType() { this->exclusiveFileType_ = nullptr;};
    inline string exclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFileType_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setExclusiveFileType(string exclusiveFileType) { DARABONBA_PTR_SET_VALUE(exclusiveFileType_, exclusiveFileType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inclusiveFile Field Functions 
    bool hasInclusiveFile() const { return this->inclusiveFile_ != nullptr;};
    void deleteInclusiveFile() { this->inclusiveFile_ = nullptr;};
    inline string inclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFile_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setInclusiveFile(string inclusiveFile) { DARABONBA_PTR_SET_VALUE(inclusiveFile_, inclusiveFile) };


    // inclusiveFileType Field Functions 
    bool hasInclusiveFileType() const { return this->inclusiveFileType_ != nullptr;};
    void deleteInclusiveFileType() { this->inclusiveFileType_ = nullptr;};
    inline string inclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFileType_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setInclusiveFileType(string inclusiveFileType) { DARABONBA_PTR_SET_VALUE(inclusiveFileType_, inclusiveFileType) };


    // localBackupDir Field Functions 
    bool hasLocalBackupDir() const { return this->localBackupDir_ != nullptr;};
    void deleteLocalBackupDir() { this->localBackupDir_ = nullptr;};
    inline string localBackupDir() const { DARABONBA_PTR_GET_DEFAULT(localBackupDir_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setLocalBackupDir(string localBackupDir) { DARABONBA_PTR_SET_VALUE(localBackupDir_, localBackupDir) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeWebLockConfigListResponseBodyConfigList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The prevention mode. Valid values:
    // 
    // *   **block**: Interception Mode
    // *   **audit**: Alert Mode
    std::shared_ptr<string> defenceMode_ = nullptr;
    // The directory that has web tamper proofing enabled.
    std::shared_ptr<string> dir_ = nullptr;
    // The directory that has web tamper proofing disabled.
    // 
    // > If the value of **Mode** is **blacklist**, this parameter is returned.
    std::shared_ptr<string> exclusiveDir_ = nullptr;
    // The file that has web tamper proofing disabled.
    // 
    // > If the value of **Mode** is **blacklist**, this parameter is returned.
    std::shared_ptr<string> exclusiveFile_ = nullptr;
    // The type of the file that has web tamper proofing disabled.
    // 
    // > If the value of **Mode** is **blacklist**, this parameter is returned.
    std::shared_ptr<string> exclusiveFileType_ = nullptr;
    // The configuration ID of the protected directory.
    std::shared_ptr<string> id_ = nullptr;
    // The file that has web tamper proofing enabled.
    // 
    // > If the value of **Mode** is **whitelist**, this parameter is returned.
    std::shared_ptr<string> inclusiveFile_ = nullptr;
    // The type of the file that has web tamper proofing enabled.
    // 
    // > If the value of **Mode** is **whitelist**, this parameter is returned.
    std::shared_ptr<string> inclusiveFileType_ = nullptr;
    // The local path to the backup files of the protected directory.
    std::shared_ptr<string> localBackupDir_ = nullptr;
    // The protection mode of web tamper proofing. Valid values:
    // 
    // *   **whitelist**: In this mode, web tamper proofing is enabled for the specified directories and file types.
    // *   **blacklist**: In this mode, web tamper proofing is enabled for the unspecified subdirectories, file types, and files in the protected directory.
    std::shared_ptr<string> mode_ = nullptr;
    // The UUID of the server that has web tamper proofing enabled.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
