// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKSTARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKSTARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebLockStartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockStartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenceMode, defenceMode_);
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(ExclusiveDir, exclusiveDir_);
      DARABONBA_PTR_TO_JSON(ExclusiveFile, exclusiveFile_);
      DARABONBA_PTR_TO_JSON(ExclusiveFileType, exclusiveFileType_);
      DARABONBA_PTR_TO_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_TO_JSON(LocalBackupDir, localBackupDir_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockStartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenceMode, defenceMode_);
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(ExclusiveDir, exclusiveDir_);
      DARABONBA_PTR_FROM_JSON(ExclusiveFile, exclusiveFile_);
      DARABONBA_PTR_FROM_JSON(ExclusiveFileType, exclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(LocalBackupDir, localBackupDir_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyWebLockStartRequest() = default ;
    ModifyWebLockStartRequest(const ModifyWebLockStartRequest &) = default ;
    ModifyWebLockStartRequest(ModifyWebLockStartRequest &&) = default ;
    ModifyWebLockStartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockStartRequest() = default ;
    ModifyWebLockStartRequest& operator=(const ModifyWebLockStartRequest &) = default ;
    ModifyWebLockStartRequest& operator=(ModifyWebLockStartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenceMode_ == nullptr
        && this->dir_ == nullptr && this->exclusiveDir_ == nullptr && this->exclusiveFile_ == nullptr && this->exclusiveFileType_ == nullptr && this->inclusiveFileType_ == nullptr
        && this->localBackupDir_ == nullptr && this->mode_ == nullptr && this->uuid_ == nullptr; };
    // defenceMode Field Functions 
    bool hasDefenceMode() const { return this->defenceMode_ != nullptr;};
    void deleteDefenceMode() { this->defenceMode_ = nullptr;};
    inline string getDefenceMode() const { DARABONBA_PTR_GET_DEFAULT(defenceMode_, "") };
    inline ModifyWebLockStartRequest& setDefenceMode(string defenceMode) { DARABONBA_PTR_SET_VALUE(defenceMode_, defenceMode) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline ModifyWebLockStartRequest& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // exclusiveDir Field Functions 
    bool hasExclusiveDir() const { return this->exclusiveDir_ != nullptr;};
    void deleteExclusiveDir() { this->exclusiveDir_ = nullptr;};
    inline string getExclusiveDir() const { DARABONBA_PTR_GET_DEFAULT(exclusiveDir_, "") };
    inline ModifyWebLockStartRequest& setExclusiveDir(string exclusiveDir) { DARABONBA_PTR_SET_VALUE(exclusiveDir_, exclusiveDir) };


    // exclusiveFile Field Functions 
    bool hasExclusiveFile() const { return this->exclusiveFile_ != nullptr;};
    void deleteExclusiveFile() { this->exclusiveFile_ = nullptr;};
    inline string getExclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFile_, "") };
    inline ModifyWebLockStartRequest& setExclusiveFile(string exclusiveFile) { DARABONBA_PTR_SET_VALUE(exclusiveFile_, exclusiveFile) };


    // exclusiveFileType Field Functions 
    bool hasExclusiveFileType() const { return this->exclusiveFileType_ != nullptr;};
    void deleteExclusiveFileType() { this->exclusiveFileType_ = nullptr;};
    inline string getExclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFileType_, "") };
    inline ModifyWebLockStartRequest& setExclusiveFileType(string exclusiveFileType) { DARABONBA_PTR_SET_VALUE(exclusiveFileType_, exclusiveFileType) };


    // inclusiveFileType Field Functions 
    bool hasInclusiveFileType() const { return this->inclusiveFileType_ != nullptr;};
    void deleteInclusiveFileType() { this->inclusiveFileType_ = nullptr;};
    inline string getInclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFileType_, "") };
    inline ModifyWebLockStartRequest& setInclusiveFileType(string inclusiveFileType) { DARABONBA_PTR_SET_VALUE(inclusiveFileType_, inclusiveFileType) };


    // localBackupDir Field Functions 
    bool hasLocalBackupDir() const { return this->localBackupDir_ != nullptr;};
    void deleteLocalBackupDir() { this->localBackupDir_ = nullptr;};
    inline string getLocalBackupDir() const { DARABONBA_PTR_GET_DEFAULT(localBackupDir_, "") };
    inline ModifyWebLockStartRequest& setLocalBackupDir(string localBackupDir) { DARABONBA_PTR_SET_VALUE(localBackupDir_, localBackupDir) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyWebLockStartRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyWebLockStartRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The defense mode. Valid values:
    // 
    // - **block**: block
    // - **audit**: alert.
    // 
    // This parameter is required.
    shared_ptr<string> defenceMode_ {};
    // The protection directories. Separate multiple directories with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> dir_ {};
    // The folder that does not require web tamper proofing protection (excluded folder).
    // > This parameter is required when the Defense mode **Mode** is set to the **blacklist** pattern.
    shared_ptr<string> exclusiveDir_ {};
    // The files that do not require web tamper proofing protection (excluded files).
    // > This parameter is required when the Defense mode **Mode** is set to the **blacklist** pattern.
    shared_ptr<string> exclusiveFile_ {};
    // The file types that do not require web tamper proofing protection (excluded file types). Separate multiple file types with commas (,). Valid values:
    // - php
    // - jsp
    // - asp
    // - aspx
    // - js
    // - cgi
    // - html
    // - htm
    // - xml
    // - shtml
    // - shtm
    // - jpg
    // - gif
    // - png
    // 
    // > This parameter is required when the Defense mode **Mode** is set to the **blacklist** pattern.
    shared_ptr<string> exclusiveFileType_ {};
    // The file types that require web tamper proofing protection. Separate multiple file types with commas (,). Valid values:
    // - php
    // - jsp
    // - asp
    // - aspx
    // - js
    // - cgi
    // - html
    // - htm
    // - xml
    // - shtml
    // - shtm
    // - jpg
    // - gif
    // - png
    // 
    // > This parameter is required when the Defense mode **Mode** is set to the **whitelist** pattern.
    shared_ptr<string> inclusiveFileType_ {};
    // The local backup path used to back up the protection directories. The format of the protection directory path may differ between Linux servers and Windows servers. Make sure that you enter the path in the correct format. The following examples show the directory formats:
    //  - Linux server: /usr/local/aegis/bak
    //  - Windows server: C:\\Program Files (x86)\\Alibaba\\Aegis\\bak.
    // 
    // This parameter is required.
    shared_ptr<string> localBackupDir_ {};
    // The protection type. Valid values:
    // - **whitelist**: whitelist mode. Protects the specified protection directories and file types.
    // - **blacklist**: blacklist mode. Protects all subdirectories, file types, and specified files in the protection directories that are not excluded.
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // The UUID of the server that you want to protect.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
