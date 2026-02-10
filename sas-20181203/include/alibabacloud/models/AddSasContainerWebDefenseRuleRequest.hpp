// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
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
  class AddSasContainerWebDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, AddSasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    AddSasContainerWebDefenseRuleRequest() = default ;
    AddSasContainerWebDefenseRuleRequest(const AddSasContainerWebDefenseRuleRequest &) = default ;
    AddSasContainerWebDefenseRuleRequest(AddSasContainerWebDefenseRuleRequest &&) = default ;
    AddSasContainerWebDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSasContainerWebDefenseRuleRequest() = default ;
    AddSasContainerWebDefenseRuleRequest& operator=(const AddSasContainerWebDefenseRuleRequest &) = default ;
    AddSasContainerWebDefenseRuleRequest& operator=(AddSasContainerWebDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PathConfDTOList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PathConfDTOList& obj) { 
        DARABONBA_PTR_TO_JSON(BackupPath, backupPath_);
        DARABONBA_PTR_TO_JSON(DefenseMode, defenseMode_);
        DARABONBA_PTR_TO_JSON(DefensePath, defensePath_);
        DARABONBA_PTR_TO_JSON(ExcludeFile, excludeFile_);
        DARABONBA_PTR_TO_JSON(ExcludeFilePath, excludeFilePath_);
        DARABONBA_PTR_TO_JSON(ExcludeFileType, excludeFileType_);
        DARABONBA_PTR_TO_JSON(GuardType, guardType_);
        DARABONBA_PTR_TO_JSON(IncludeFile, includeFile_);
        DARABONBA_PTR_TO_JSON(IncludeFileType, includeFileType_);
        DARABONBA_PTR_TO_JSON(ProcessPathList, processPathList_);
      };
      friend void from_json(const Darabonba::Json& j, PathConfDTOList& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupPath, backupPath_);
        DARABONBA_PTR_FROM_JSON(DefenseMode, defenseMode_);
        DARABONBA_PTR_FROM_JSON(DefensePath, defensePath_);
        DARABONBA_PTR_FROM_JSON(ExcludeFile, excludeFile_);
        DARABONBA_PTR_FROM_JSON(ExcludeFilePath, excludeFilePath_);
        DARABONBA_PTR_FROM_JSON(ExcludeFileType, excludeFileType_);
        DARABONBA_PTR_FROM_JSON(GuardType, guardType_);
        DARABONBA_PTR_FROM_JSON(IncludeFile, includeFile_);
        DARABONBA_PTR_FROM_JSON(IncludeFileType, includeFileType_);
        DARABONBA_PTR_FROM_JSON(ProcessPathList, processPathList_);
      };
      PathConfDTOList() = default ;
      PathConfDTOList(const PathConfDTOList &) = default ;
      PathConfDTOList(PathConfDTOList &&) = default ;
      PathConfDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PathConfDTOList() = default ;
      PathConfDTOList& operator=(const PathConfDTOList &) = default ;
      PathConfDTOList& operator=(PathConfDTOList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupPath_ == nullptr
        && this->defenseMode_ == nullptr && this->defensePath_ == nullptr && this->excludeFile_ == nullptr && this->excludeFilePath_ == nullptr && this->excludeFileType_ == nullptr
        && this->guardType_ == nullptr && this->includeFile_ == nullptr && this->includeFileType_ == nullptr && this->processPathList_ == nullptr; };
      // backupPath Field Functions 
      bool hasBackupPath() const { return this->backupPath_ != nullptr;};
      void deleteBackupPath() { this->backupPath_ = nullptr;};
      inline string getBackupPath() const { DARABONBA_PTR_GET_DEFAULT(backupPath_, "") };
      inline PathConfDTOList& setBackupPath(string backupPath) { DARABONBA_PTR_SET_VALUE(backupPath_, backupPath) };


      // defenseMode Field Functions 
      bool hasDefenseMode() const { return this->defenseMode_ != nullptr;};
      void deleteDefenseMode() { this->defenseMode_ = nullptr;};
      inline string getDefenseMode() const { DARABONBA_PTR_GET_DEFAULT(defenseMode_, "") };
      inline PathConfDTOList& setDefenseMode(string defenseMode) { DARABONBA_PTR_SET_VALUE(defenseMode_, defenseMode) };


      // defensePath Field Functions 
      bool hasDefensePath() const { return this->defensePath_ != nullptr;};
      void deleteDefensePath() { this->defensePath_ = nullptr;};
      inline string getDefensePath() const { DARABONBA_PTR_GET_DEFAULT(defensePath_, "") };
      inline PathConfDTOList& setDefensePath(string defensePath) { DARABONBA_PTR_SET_VALUE(defensePath_, defensePath) };


      // excludeFile Field Functions 
      bool hasExcludeFile() const { return this->excludeFile_ != nullptr;};
      void deleteExcludeFile() { this->excludeFile_ = nullptr;};
      inline string getExcludeFile() const { DARABONBA_PTR_GET_DEFAULT(excludeFile_, "") };
      inline PathConfDTOList& setExcludeFile(string excludeFile) { DARABONBA_PTR_SET_VALUE(excludeFile_, excludeFile) };


      // excludeFilePath Field Functions 
      bool hasExcludeFilePath() const { return this->excludeFilePath_ != nullptr;};
      void deleteExcludeFilePath() { this->excludeFilePath_ = nullptr;};
      inline string getExcludeFilePath() const { DARABONBA_PTR_GET_DEFAULT(excludeFilePath_, "") };
      inline PathConfDTOList& setExcludeFilePath(string excludeFilePath) { DARABONBA_PTR_SET_VALUE(excludeFilePath_, excludeFilePath) };


      // excludeFileType Field Functions 
      bool hasExcludeFileType() const { return this->excludeFileType_ != nullptr;};
      void deleteExcludeFileType() { this->excludeFileType_ = nullptr;};
      inline string getExcludeFileType() const { DARABONBA_PTR_GET_DEFAULT(excludeFileType_, "") };
      inline PathConfDTOList& setExcludeFileType(string excludeFileType) { DARABONBA_PTR_SET_VALUE(excludeFileType_, excludeFileType) };


      // guardType Field Functions 
      bool hasGuardType() const { return this->guardType_ != nullptr;};
      void deleteGuardType() { this->guardType_ = nullptr;};
      inline int32_t getGuardType() const { DARABONBA_PTR_GET_DEFAULT(guardType_, 0) };
      inline PathConfDTOList& setGuardType(int32_t guardType) { DARABONBA_PTR_SET_VALUE(guardType_, guardType) };


      // includeFile Field Functions 
      bool hasIncludeFile() const { return this->includeFile_ != nullptr;};
      void deleteIncludeFile() { this->includeFile_ = nullptr;};
      inline string getIncludeFile() const { DARABONBA_PTR_GET_DEFAULT(includeFile_, "") };
      inline PathConfDTOList& setIncludeFile(string includeFile) { DARABONBA_PTR_SET_VALUE(includeFile_, includeFile) };


      // includeFileType Field Functions 
      bool hasIncludeFileType() const { return this->includeFileType_ != nullptr;};
      void deleteIncludeFileType() { this->includeFileType_ = nullptr;};
      inline string getIncludeFileType() const { DARABONBA_PTR_GET_DEFAULT(includeFileType_, "") };
      inline PathConfDTOList& setIncludeFileType(string includeFileType) { DARABONBA_PTR_SET_VALUE(includeFileType_, includeFileType) };


      // processPathList Field Functions 
      bool hasProcessPathList() const { return this->processPathList_ != nullptr;};
      void deleteProcessPathList() { this->processPathList_ = nullptr;};
      inline const vector<string> & getProcessPathList() const { DARABONBA_PTR_GET_CONST(processPathList_, vector<string>) };
      inline vector<string> getProcessPathList() { DARABONBA_PTR_GET(processPathList_, vector<string>) };
      inline PathConfDTOList& setProcessPathList(const vector<string> & processPathList) { DARABONBA_PTR_SET_VALUE(processPathList_, processPathList) };
      inline PathConfDTOList& setProcessPathList(vector<string> && processPathList) { DARABONBA_PTR_SET_RVALUE(processPathList_, processPathList) };


    protected:
      // The backup path.
      shared_ptr<string> backupPath_ {};
      // The prevention mode. Valid values:
      // 
      // *   **block**
      // *   **audit**
      shared_ptr<string> defenseMode_ {};
      // The path that you want to protect.
      // 
      // This parameter is required.
      shared_ptr<string> defensePath_ {};
      // The file that you want to exclude.
      shared_ptr<string> excludeFile_ {};
      // The path to the file that you want to exclude.
      shared_ptr<string> excludeFilePath_ {};
      // The type of the file that you want to exclude.
      shared_ptr<string> excludeFileType_ {};
      // The protecion mode. Valid values:
      // 
      // *   **0**: basic mode (whitelist)
      // *   **1**: complex mode (blacklist)
      // 
      // This parameter is required.
      shared_ptr<int32_t> guardType_ {};
      // The file that you want to include.
      shared_ptr<string> includeFile_ {};
      // The type of the file that you want to include.
      shared_ptr<string> includeFileType_ {};
      // The processes that you want to add to the whitelist.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> processPathList_ {};
    };

    virtual bool empty() const override { return this->pathConfDTOList_ == nullptr
        && this->ruleName_ == nullptr; };
    // pathConfDTOList Field Functions 
    bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
    void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
    inline const vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList> & getPathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList>) };
    inline vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList> getPathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList>) };
    inline AddSasContainerWebDefenseRuleRequest& setPathConfDTOList(const vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
    inline AddSasContainerWebDefenseRuleRequest& setPathConfDTOList(vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddSasContainerWebDefenseRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The paths that you want to protect.
    shared_ptr<vector<AddSasContainerWebDefenseRuleRequest::PathConfDTOList>> pathConfDTOList_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
