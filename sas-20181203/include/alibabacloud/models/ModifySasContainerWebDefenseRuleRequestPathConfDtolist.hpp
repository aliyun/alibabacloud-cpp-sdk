// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSASCONTAINERWEBDEFENSERULEREQUESTPATHCONFDTOLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSASCONTAINERWEBDEFENSERULEREQUESTPATHCONFDTOLIST_HPP_
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
  class ModifySasContainerWebDefenseRuleRequestPathConfDTOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySasContainerWebDefenseRuleRequestPathConfDTOList& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPath, backupPath_);
      DARABONBA_PTR_TO_JSON(DefenseMode, defenseMode_);
      DARABONBA_PTR_TO_JSON(DefensePath, defensePath_);
      DARABONBA_PTR_TO_JSON(ExcludeFile, excludeFile_);
      DARABONBA_PTR_TO_JSON(ExcludeFilePath, excludeFilePath_);
      DARABONBA_PTR_TO_JSON(ExcludeFileType, excludeFileType_);
      DARABONBA_PTR_TO_JSON(GuardType, guardType_);
      DARABONBA_PTR_TO_JSON(IncludeFile, includeFile_);
      DARABONBA_PTR_TO_JSON(IncludeFileType, includeFileType_);
      DARABONBA_PTR_TO_JSON(PathConfId, pathConfId_);
      DARABONBA_PTR_TO_JSON(ProcessPathList, processPathList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySasContainerWebDefenseRuleRequestPathConfDTOList& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPath, backupPath_);
      DARABONBA_PTR_FROM_JSON(DefenseMode, defenseMode_);
      DARABONBA_PTR_FROM_JSON(DefensePath, defensePath_);
      DARABONBA_PTR_FROM_JSON(ExcludeFile, excludeFile_);
      DARABONBA_PTR_FROM_JSON(ExcludeFilePath, excludeFilePath_);
      DARABONBA_PTR_FROM_JSON(ExcludeFileType, excludeFileType_);
      DARABONBA_PTR_FROM_JSON(GuardType, guardType_);
      DARABONBA_PTR_FROM_JSON(IncludeFile, includeFile_);
      DARABONBA_PTR_FROM_JSON(IncludeFileType, includeFileType_);
      DARABONBA_PTR_FROM_JSON(PathConfId, pathConfId_);
      DARABONBA_PTR_FROM_JSON(ProcessPathList, processPathList_);
    };
    ModifySasContainerWebDefenseRuleRequestPathConfDTOList() = default ;
    ModifySasContainerWebDefenseRuleRequestPathConfDTOList(const ModifySasContainerWebDefenseRuleRequestPathConfDTOList &) = default ;
    ModifySasContainerWebDefenseRuleRequestPathConfDTOList(ModifySasContainerWebDefenseRuleRequestPathConfDTOList &&) = default ;
    ModifySasContainerWebDefenseRuleRequestPathConfDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySasContainerWebDefenseRuleRequestPathConfDTOList() = default ;
    ModifySasContainerWebDefenseRuleRequestPathConfDTOList& operator=(const ModifySasContainerWebDefenseRuleRequestPathConfDTOList &) = default ;
    ModifySasContainerWebDefenseRuleRequestPathConfDTOList& operator=(ModifySasContainerWebDefenseRuleRequestPathConfDTOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupPath_ != nullptr
        && this->defenseMode_ != nullptr && this->defensePath_ != nullptr && this->excludeFile_ != nullptr && this->excludeFilePath_ != nullptr && this->excludeFileType_ != nullptr
        && this->guardType_ != nullptr && this->includeFile_ != nullptr && this->includeFileType_ != nullptr && this->pathConfId_ != nullptr && this->processPathList_ != nullptr; };
    // backupPath Field Functions 
    bool hasBackupPath() const { return this->backupPath_ != nullptr;};
    void deleteBackupPath() { this->backupPath_ = nullptr;};
    inline string backupPath() const { DARABONBA_PTR_GET_DEFAULT(backupPath_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setBackupPath(string backupPath) { DARABONBA_PTR_SET_VALUE(backupPath_, backupPath) };


    // defenseMode Field Functions 
    bool hasDefenseMode() const { return this->defenseMode_ != nullptr;};
    void deleteDefenseMode() { this->defenseMode_ = nullptr;};
    inline string defenseMode() const { DARABONBA_PTR_GET_DEFAULT(defenseMode_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setDefenseMode(string defenseMode) { DARABONBA_PTR_SET_VALUE(defenseMode_, defenseMode) };


    // defensePath Field Functions 
    bool hasDefensePath() const { return this->defensePath_ != nullptr;};
    void deleteDefensePath() { this->defensePath_ = nullptr;};
    inline string defensePath() const { DARABONBA_PTR_GET_DEFAULT(defensePath_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setDefensePath(string defensePath) { DARABONBA_PTR_SET_VALUE(defensePath_, defensePath) };


    // excludeFile Field Functions 
    bool hasExcludeFile() const { return this->excludeFile_ != nullptr;};
    void deleteExcludeFile() { this->excludeFile_ = nullptr;};
    inline string excludeFile() const { DARABONBA_PTR_GET_DEFAULT(excludeFile_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setExcludeFile(string excludeFile) { DARABONBA_PTR_SET_VALUE(excludeFile_, excludeFile) };


    // excludeFilePath Field Functions 
    bool hasExcludeFilePath() const { return this->excludeFilePath_ != nullptr;};
    void deleteExcludeFilePath() { this->excludeFilePath_ = nullptr;};
    inline string excludeFilePath() const { DARABONBA_PTR_GET_DEFAULT(excludeFilePath_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setExcludeFilePath(string excludeFilePath) { DARABONBA_PTR_SET_VALUE(excludeFilePath_, excludeFilePath) };


    // excludeFileType Field Functions 
    bool hasExcludeFileType() const { return this->excludeFileType_ != nullptr;};
    void deleteExcludeFileType() { this->excludeFileType_ = nullptr;};
    inline string excludeFileType() const { DARABONBA_PTR_GET_DEFAULT(excludeFileType_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setExcludeFileType(string excludeFileType) { DARABONBA_PTR_SET_VALUE(excludeFileType_, excludeFileType) };


    // guardType Field Functions 
    bool hasGuardType() const { return this->guardType_ != nullptr;};
    void deleteGuardType() { this->guardType_ = nullptr;};
    inline int32_t guardType() const { DARABONBA_PTR_GET_DEFAULT(guardType_, 0) };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setGuardType(int32_t guardType) { DARABONBA_PTR_SET_VALUE(guardType_, guardType) };


    // includeFile Field Functions 
    bool hasIncludeFile() const { return this->includeFile_ != nullptr;};
    void deleteIncludeFile() { this->includeFile_ = nullptr;};
    inline string includeFile() const { DARABONBA_PTR_GET_DEFAULT(includeFile_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setIncludeFile(string includeFile) { DARABONBA_PTR_SET_VALUE(includeFile_, includeFile) };


    // includeFileType Field Functions 
    bool hasIncludeFileType() const { return this->includeFileType_ != nullptr;};
    void deleteIncludeFileType() { this->includeFileType_ = nullptr;};
    inline string includeFileType() const { DARABONBA_PTR_GET_DEFAULT(includeFileType_, "") };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setIncludeFileType(string includeFileType) { DARABONBA_PTR_SET_VALUE(includeFileType_, includeFileType) };


    // pathConfId Field Functions 
    bool hasPathConfId() const { return this->pathConfId_ != nullptr;};
    void deletePathConfId() { this->pathConfId_ = nullptr;};
    inline int64_t pathConfId() const { DARABONBA_PTR_GET_DEFAULT(pathConfId_, 0L) };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setPathConfId(int64_t pathConfId) { DARABONBA_PTR_SET_VALUE(pathConfId_, pathConfId) };


    // processPathList Field Functions 
    bool hasProcessPathList() const { return this->processPathList_ != nullptr;};
    void deleteProcessPathList() { this->processPathList_ = nullptr;};
    inline const vector<string> & processPathList() const { DARABONBA_PTR_GET_CONST(processPathList_, vector<string>) };
    inline vector<string> processPathList() { DARABONBA_PTR_GET(processPathList_, vector<string>) };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setProcessPathList(const vector<string> & processPathList) { DARABONBA_PTR_SET_VALUE(processPathList_, processPathList) };
    inline ModifySasContainerWebDefenseRuleRequestPathConfDTOList& setProcessPathList(vector<string> && processPathList) { DARABONBA_PTR_SET_RVALUE(processPathList_, processPathList) };


  protected:
    // The backup paths.
    std::shared_ptr<string> backupPath_ = nullptr;
    // The prevention mode. Valid values:
    // 
    // *   **block**
    // *   **audit**
    // 
    // This parameter is required.
    std::shared_ptr<string> defenseMode_ = nullptr;
    // The path that is protected.
    // 
    // This parameter is required.
    std::shared_ptr<string> defensePath_ = nullptr;
    // The files that are excluded.
    std::shared_ptr<string> excludeFile_ = nullptr;
    // The paths to the files that are excluded.
    std::shared_ptr<string> excludeFilePath_ = nullptr;
    // The types of the files that are excluded.
    std::shared_ptr<string> excludeFileType_ = nullptr;
    // The protection mode. Valid values:
    // 
    // *   **0**: basic mode (whitelist)
    // *   **1**: complex mode (blacklist)
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> guardType_ = nullptr;
    // The files that are included.
    std::shared_ptr<string> includeFile_ = nullptr;
    // The type of the files that are included.
    std::shared_ptr<string> includeFileType_ = nullptr;
    // The path ID.
    std::shared_ptr<int64_t> pathConfId_ = nullptr;
    // The processes that are added to the whitelist.
    std::shared_ptr<vector<string>> processPathList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
