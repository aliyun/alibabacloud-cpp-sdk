// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKCONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockConfigListResponseBody() = default ;
    DescribeWebLockConfigListResponseBody(const DescribeWebLockConfigListResponseBody &) = default ;
    DescribeWebLockConfigListResponseBody(DescribeWebLockConfigListResponseBody &&) = default ;
    DescribeWebLockConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockConfigListResponseBody() = default ;
    DescribeWebLockConfigListResponseBody& operator=(const DescribeWebLockConfigListResponseBody &) = default ;
    DescribeWebLockConfigListResponseBody& operator=(DescribeWebLockConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
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
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenceMode_ == nullptr
        && this->dir_ == nullptr && this->exclusiveDir_ == nullptr && this->exclusiveFile_ == nullptr && this->exclusiveFileType_ == nullptr && this->id_ == nullptr
        && this->inclusiveFile_ == nullptr && this->inclusiveFileType_ == nullptr && this->localBackupDir_ == nullptr && this->mode_ == nullptr && this->uuid_ == nullptr; };
      // defenceMode Field Functions 
      bool hasDefenceMode() const { return this->defenceMode_ != nullptr;};
      void deleteDefenceMode() { this->defenceMode_ = nullptr;};
      inline string getDefenceMode() const { DARABONBA_PTR_GET_DEFAULT(defenceMode_, "") };
      inline ConfigList& setDefenceMode(string defenceMode) { DARABONBA_PTR_SET_VALUE(defenceMode_, defenceMode) };


      // dir Field Functions 
      bool hasDir() const { return this->dir_ != nullptr;};
      void deleteDir() { this->dir_ = nullptr;};
      inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
      inline ConfigList& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


      // exclusiveDir Field Functions 
      bool hasExclusiveDir() const { return this->exclusiveDir_ != nullptr;};
      void deleteExclusiveDir() { this->exclusiveDir_ = nullptr;};
      inline string getExclusiveDir() const { DARABONBA_PTR_GET_DEFAULT(exclusiveDir_, "") };
      inline ConfigList& setExclusiveDir(string exclusiveDir) { DARABONBA_PTR_SET_VALUE(exclusiveDir_, exclusiveDir) };


      // exclusiveFile Field Functions 
      bool hasExclusiveFile() const { return this->exclusiveFile_ != nullptr;};
      void deleteExclusiveFile() { this->exclusiveFile_ = nullptr;};
      inline string getExclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFile_, "") };
      inline ConfigList& setExclusiveFile(string exclusiveFile) { DARABONBA_PTR_SET_VALUE(exclusiveFile_, exclusiveFile) };


      // exclusiveFileType Field Functions 
      bool hasExclusiveFileType() const { return this->exclusiveFileType_ != nullptr;};
      void deleteExclusiveFileType() { this->exclusiveFileType_ = nullptr;};
      inline string getExclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveFileType_, "") };
      inline ConfigList& setExclusiveFileType(string exclusiveFileType) { DARABONBA_PTR_SET_VALUE(exclusiveFileType_, exclusiveFileType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inclusiveFile Field Functions 
      bool hasInclusiveFile() const { return this->inclusiveFile_ != nullptr;};
      void deleteInclusiveFile() { this->inclusiveFile_ = nullptr;};
      inline string getInclusiveFile() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFile_, "") };
      inline ConfigList& setInclusiveFile(string inclusiveFile) { DARABONBA_PTR_SET_VALUE(inclusiveFile_, inclusiveFile) };


      // inclusiveFileType Field Functions 
      bool hasInclusiveFileType() const { return this->inclusiveFileType_ != nullptr;};
      void deleteInclusiveFileType() { this->inclusiveFileType_ = nullptr;};
      inline string getInclusiveFileType() const { DARABONBA_PTR_GET_DEFAULT(inclusiveFileType_, "") };
      inline ConfigList& setInclusiveFileType(string inclusiveFileType) { DARABONBA_PTR_SET_VALUE(inclusiveFileType_, inclusiveFileType) };


      // localBackupDir Field Functions 
      bool hasLocalBackupDir() const { return this->localBackupDir_ != nullptr;};
      void deleteLocalBackupDir() { this->localBackupDir_ = nullptr;};
      inline string getLocalBackupDir() const { DARABONBA_PTR_GET_DEFAULT(localBackupDir_, "") };
      inline ConfigList& setLocalBackupDir(string localBackupDir) { DARABONBA_PTR_SET_VALUE(localBackupDir_, localBackupDir) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline ConfigList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ConfigList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The prevention mode. Valid values:
      // 
      // *   **block**: Interception Mode
      // *   **audit**: Alert Mode
      shared_ptr<string> defenceMode_ {};
      // The directory that has web tamper proofing enabled.
      shared_ptr<string> dir_ {};
      // The directory that has web tamper proofing disabled.
      // 
      // > If the value of **Mode** is **blacklist**, this parameter is returned.
      shared_ptr<string> exclusiveDir_ {};
      // The file that has web tamper proofing disabled.
      // 
      // > If the value of **Mode** is **blacklist**, this parameter is returned.
      shared_ptr<string> exclusiveFile_ {};
      // The type of the file that has web tamper proofing disabled.
      // 
      // > If the value of **Mode** is **blacklist**, this parameter is returned.
      shared_ptr<string> exclusiveFileType_ {};
      // The configuration ID of the protected directory.
      shared_ptr<string> id_ {};
      // The file that has web tamper proofing enabled.
      // 
      // > If the value of **Mode** is **whitelist**, this parameter is returned.
      shared_ptr<string> inclusiveFile_ {};
      // The type of the file that has web tamper proofing enabled.
      // 
      // > If the value of **Mode** is **whitelist**, this parameter is returned.
      shared_ptr<string> inclusiveFileType_ {};
      // The local path to the backup files of the protected directory.
      shared_ptr<string> localBackupDir_ {};
      // The protection mode of web tamper proofing. Valid values:
      // 
      // *   **whitelist**: In this mode, web tamper proofing is enabled for the specified directories and file types.
      // *   **blacklist**: In this mode, web tamper proofing is enabled for the unspecified subdirectories, file types, and files in the protected directory.
      shared_ptr<string> mode_ {};
      // The UUID of the server that has web tamper proofing enabled.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->configList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeWebLockConfigListResponseBody::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeWebLockConfigListResponseBody::ConfigList>) };
    inline vector<DescribeWebLockConfigListResponseBody::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<DescribeWebLockConfigListResponseBody::ConfigList>) };
    inline DescribeWebLockConfigListResponseBody& setConfigList(const vector<DescribeWebLockConfigListResponseBody::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeWebLockConfigListResponseBody& setConfigList(vector<DescribeWebLockConfigListResponseBody::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockConfigListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configurations of web tamper proofing.
    shared_ptr<vector<DescribeWebLockConfigListResponseBody::ConfigList>> configList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of directories that have web tamper proofing enabled on the server.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
