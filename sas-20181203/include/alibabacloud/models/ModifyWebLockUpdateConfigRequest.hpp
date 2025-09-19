// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKUPDATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKUPDATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebLockUpdateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockUpdateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenceMode, defenceMode_);
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(ExclusiveDir, exclusiveDir_);
      DARABONBA_PTR_TO_JSON(ExclusiveFile, exclusiveFile_);
      DARABONBA_PTR_TO_JSON(ExclusiveFileType, exclusiveFileType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InclusiveFile, inclusiveFile_);
      DARABONBA_PTR_TO_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LocalBackupDir, localBackupDir_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockUpdateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenceMode, defenceMode_);
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(ExclusiveDir, exclusiveDir_);
      DARABONBA_PTR_FROM_JSON(ExclusiveFile, exclusiveFile_);
      DARABONBA_PTR_FROM_JSON(ExclusiveFileType, exclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InclusiveFile, inclusiveFile_);
      DARABONBA_PTR_FROM_JSON(InclusiveFileType, inclusiveFileType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LocalBackupDir, localBackupDir_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyWebLockUpdateConfigRequest() = default ;
    ModifyWebLockUpdateConfigRequest(const ModifyWebLockUpdateConfigRequest &) = default ;
    ModifyWebLockUpdateConfigRequest(ModifyWebLockUpdateConfigRequest &&) = default ;
    ModifyWebLockUpdateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockUpdateConfigRequest() = default ;
    ModifyWebLockUpdateConfigRequest& operator=(const ModifyWebLockUpdateConfigRequest &) = default ;
    ModifyWebLockUpdateConfigRequest& operator=(ModifyWebLockUpdateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenceMode_ != nullptr
        && this->dir_ != nullptr && this->exclusiveDir_ != nullptr && this->exclusiveFile_ != nullptr && this->exclusiveFileType_ != nullptr && this->id_ != nullptr
        && this->inclusiveFile_ != nullptr && this->inclusiveFileType_ != nullptr && this->lang_ != nullptr && this->localBackupDir_ != nullptr && this->mode_ != nullptr
        && this->sourceIp_ != nullptr && this->uuid_ != nullptr; };
    // defenceMode Field Functions 
    bool hasDefenceMode() const { return this->defenceMode_ != nullptr;};
    void deleteDefenceMode() { this->defenceMode_ = nullptr;};
    inline string defenceMode() const { DARABONBA_PTR_GET_DEFAULT(defenceMode_, "") };
    inline ModifyWebLockUpdateConfigRequest& setDefenceMode(string defenceMode) { DARABONBA_PTR_SET_VALUE(defenceMode_, defenceMode) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline ModifyWebLockUpdateConfigRequest& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // exclusiveDir Field Functions 
    bool hasExclusiveDir() const { return this->exclusiveDir_ != nullptr;};
    void deleteExclusiveDir() { this->exclusiveDir_ = nullptr;};
    inline string exclusiveDir() const { DARABONBA_PTR_GET_DEFAULT(exclusiveDir_, "") };
    inline ModifyWebLockUpdateConfigRequest& setExclusiveDir(string exclusiveDir) { DARABONBA_PTR_SET_VALUE(exclusiveDir_, exclusiveDir) };


    // exclusiveFile Field Functions 
    bool hasExclusiveFile() const { return this->exclusiveFile_ != nullptr;};
    void deleteExclusiveFile() { this->exclusiveFile_ = nullptr;};
    inline string exclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFile_, "") };
    inline ModifyWebLockUpdateConfigRequest& setExclusiveFile(string exclusiveFile) { DARABONBA_PTR_SET_VALUE(exclusiveFile_, exclusiveFile) };


    // exclusiveFileType Field Functions 
    bool hasExclusiveFileType() const { return this->exclusiveFileType_ != nullptr;};
    void deleteExclusiveFileType() { this->exclusiveFileType_ = nullptr;};
    inline string exclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFileType_, "") };
    inline ModifyWebLockUpdateConfigRequest& setExclusiveFileType(string exclusiveFileType) { DARABONBA_PTR_SET_VALUE(exclusiveFileType_, exclusiveFileType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ModifyWebLockUpdateConfigRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inclusiveFile Field Functions 
    bool hasInclusiveFile() const { return this->inclusiveFile_ != nullptr;};
    void deleteInclusiveFile() { this->inclusiveFile_ = nullptr;};
    inline string inclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFile_, "") };
    inline ModifyWebLockUpdateConfigRequest& setInclusiveFile(string inclusiveFile) { DARABONBA_PTR_SET_VALUE(inclusiveFile_, inclusiveFile) };


    // inclusiveFileType Field Functions 
    bool hasInclusiveFileType() const { return this->inclusiveFileType_ != nullptr;};
    void deleteInclusiveFileType() { this->inclusiveFileType_ = nullptr;};
    inline string inclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFileType_, "") };
    inline ModifyWebLockUpdateConfigRequest& setInclusiveFileType(string inclusiveFileType) { DARABONBA_PTR_SET_VALUE(inclusiveFileType_, inclusiveFileType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyWebLockUpdateConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // localBackupDir Field Functions 
    bool hasLocalBackupDir() const { return this->localBackupDir_ != nullptr;};
    void deleteLocalBackupDir() { this->localBackupDir_ = nullptr;};
    inline string localBackupDir() const { DARABONBA_PTR_GET_DEFAULT(localBackupDir_, "") };
    inline ModifyWebLockUpdateConfigRequest& setLocalBackupDir(string localBackupDir) { DARABONBA_PTR_SET_VALUE(localBackupDir_, localBackupDir) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyWebLockUpdateConfigRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyWebLockUpdateConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyWebLockUpdateConfigRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The prevention mode. Valid values:
    // 
    // *   **block**: Interception Mode
    // *   **audit**: Alert Mode
    // 
    // This parameter is required.
    std::shared_ptr<string> defenceMode_ = nullptr;
    // The directory for which you want to enable web tamper proofing.
    // 
    // This parameter is required.
    std::shared_ptr<string> dir_ = nullptr;
    // The directory for which you want to disable web tamper proofing.
    // 
    // > If you set **Mode** to **blacklist**, you must specify this parameter.
    std::shared_ptr<string> exclusiveDir_ = nullptr;
    // The file for which you want to disable web tamper proofing.
    // 
    // > If you set **Mode** to **blacklist**, you must specify this parameter.
    std::shared_ptr<string> exclusiveFile_ = nullptr;
    // The type of the file for which you want to disable web tamper proofing. Separate multiple types with semicolons (;). Valid values:
    // 
    // *   php
    // *   jsp
    // *   asp
    // *   aspx
    // *   js
    // *   cgi
    // *   html
    // *   htm
    // *   xml
    // *   shtml
    // *   shtm
    // *   jpg
    // *   gif
    // *   png
    // 
    // > If you set **Mode** to **blacklist**, you must specify this parameter.
    std::shared_ptr<string> exclusiveFileType_ = nullptr;
    // The ID of the protected directory for which you want to change the status of web tamper proofing.
    // 
    // > You can call the [DescribeWebLockConfigList](~~DescribeWebLockConfigList~~) operation to query the IDs of protected directories.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The file for which you want to enable web tamper proofing.
    // 
    // > If you set **Mode** to **whitelist**, you must specify this parameter.
    std::shared_ptr<string> inclusiveFile_ = nullptr;
    // The type of the file for which you want to enable web tamper proofing. Separate multiple types with semicolons (;). Valid values:
    // 
    // *   php
    // *   jsp
    // *   asp
    // *   aspx
    // *   js
    // *   cgi
    // *   html
    // *   htm
    // *   xml
    // *   shtml
    // *   shtm
    // *   jpg
    // *   gif
    // *   png
    // 
    // > If you set **Mode** to **whitelist**, you must specify this parameter.
    std::shared_ptr<string> inclusiveFileType_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The local path to the backup files of the protected directory.\\
    // The directory format of a Linux server is different from that of a Windows server. You must enter the directory in the required format based on your operating system. Examples:
    // 
    // *   Linux server: /usr/local/aegis/bak
    // *   Windows server: C:\\Program Files (x86)\\Alibaba\\Aegis\\bak
    // 
    // This parameter is required.
    std::shared_ptr<string> localBackupDir_ = nullptr;
    // The protection mode of web tamper proofing. Valid values:
    // 
    // *   **whitelist**: In this mode, web tamper proofing is enabled for the specified directories and file types.
    // *   **blacklist**: In this mode, web tamper proofing is enabled for the unspecified subdirectories, file types, and files in the protected directory.
    std::shared_ptr<string> mode_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The UUID of the server on which the protected directory is located.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
