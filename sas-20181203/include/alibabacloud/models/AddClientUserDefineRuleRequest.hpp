// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddClientUserDefineRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddClientUserDefineRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(Md5List, md5List_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewFilePath, newFilePath_);
      DARABONBA_PTR_TO_JSON(ParentCmdline, parentCmdline_);
      DARABONBA_PTR_TO_JSON(ParentProcPath, parentProcPath_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PortStr, portStr_);
      DARABONBA_PTR_TO_JSON(ProcPath, procPath_);
      DARABONBA_PTR_TO_JSON(RegistryContent, registryContent_);
      DARABONBA_PTR_TO_JSON(RegistryKey, registryKey_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddClientUserDefineRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(Md5List, md5List_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewFilePath, newFilePath_);
      DARABONBA_PTR_FROM_JSON(ParentCmdline, parentCmdline_);
      DARABONBA_PTR_FROM_JSON(ParentProcPath, parentProcPath_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PortStr, portStr_);
      DARABONBA_PTR_FROM_JSON(ProcPath, procPath_);
      DARABONBA_PTR_FROM_JSON(RegistryContent, registryContent_);
      DARABONBA_PTR_FROM_JSON(RegistryKey, registryKey_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddClientUserDefineRuleRequest() = default ;
    AddClientUserDefineRuleRequest(const AddClientUserDefineRuleRequest &) = default ;
    AddClientUserDefineRuleRequest(AddClientUserDefineRuleRequest &&) = default ;
    AddClientUserDefineRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddClientUserDefineRuleRequest() = default ;
    AddClientUserDefineRuleRequest& operator=(const AddClientUserDefineRuleRequest &) = default ;
    AddClientUserDefineRuleRequest& operator=(AddClientUserDefineRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionType_ != nullptr
        && this->cmdline_ != nullptr && this->domain_ != nullptr && this->filePath_ != nullptr && this->IP_ != nullptr && this->md5List_ != nullptr
        && this->name_ != nullptr && this->newFilePath_ != nullptr && this->parentCmdline_ != nullptr && this->parentProcPath_ != nullptr && this->platform_ != nullptr
        && this->port_ != nullptr && this->portStr_ != nullptr && this->procPath_ != nullptr && this->registryContent_ != nullptr && this->registryKey_ != nullptr
        && this->type_ != nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline AddClientUserDefineRuleRequest& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // cmdline Field Functions 
    bool hasCmdline() const { return this->cmdline_ != nullptr;};
    void deleteCmdline() { this->cmdline_ = nullptr;};
    inline string cmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
    inline AddClientUserDefineRuleRequest& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddClientUserDefineRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline AddClientUserDefineRuleRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline AddClientUserDefineRuleRequest& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // md5List Field Functions 
    bool hasMd5List() const { return this->md5List_ != nullptr;};
    void deleteMd5List() { this->md5List_ = nullptr;};
    inline string md5List() const { DARABONBA_PTR_GET_DEFAULT(md5List_, "") };
    inline AddClientUserDefineRuleRequest& setMd5List(string md5List) { DARABONBA_PTR_SET_VALUE(md5List_, md5List) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddClientUserDefineRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newFilePath Field Functions 
    bool hasNewFilePath() const { return this->newFilePath_ != nullptr;};
    void deleteNewFilePath() { this->newFilePath_ = nullptr;};
    inline string newFilePath() const { DARABONBA_PTR_GET_DEFAULT(newFilePath_, "") };
    inline AddClientUserDefineRuleRequest& setNewFilePath(string newFilePath) { DARABONBA_PTR_SET_VALUE(newFilePath_, newFilePath) };


    // parentCmdline Field Functions 
    bool hasParentCmdline() const { return this->parentCmdline_ != nullptr;};
    void deleteParentCmdline() { this->parentCmdline_ = nullptr;};
    inline string parentCmdline() const { DARABONBA_PTR_GET_DEFAULT(parentCmdline_, "") };
    inline AddClientUserDefineRuleRequest& setParentCmdline(string parentCmdline) { DARABONBA_PTR_SET_VALUE(parentCmdline_, parentCmdline) };


    // parentProcPath Field Functions 
    bool hasParentProcPath() const { return this->parentProcPath_ != nullptr;};
    void deleteParentProcPath() { this->parentProcPath_ = nullptr;};
    inline string parentProcPath() const { DARABONBA_PTR_GET_DEFAULT(parentProcPath_, "") };
    inline AddClientUserDefineRuleRequest& setParentProcPath(string parentProcPath) { DARABONBA_PTR_SET_VALUE(parentProcPath_, parentProcPath) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline AddClientUserDefineRuleRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AddClientUserDefineRuleRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // portStr Field Functions 
    bool hasPortStr() const { return this->portStr_ != nullptr;};
    void deletePortStr() { this->portStr_ = nullptr;};
    inline string portStr() const { DARABONBA_PTR_GET_DEFAULT(portStr_, "") };
    inline AddClientUserDefineRuleRequest& setPortStr(string portStr) { DARABONBA_PTR_SET_VALUE(portStr_, portStr) };


    // procPath Field Functions 
    bool hasProcPath() const { return this->procPath_ != nullptr;};
    void deleteProcPath() { this->procPath_ = nullptr;};
    inline string procPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
    inline AddClientUserDefineRuleRequest& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


    // registryContent Field Functions 
    bool hasRegistryContent() const { return this->registryContent_ != nullptr;};
    void deleteRegistryContent() { this->registryContent_ = nullptr;};
    inline string registryContent() const { DARABONBA_PTR_GET_DEFAULT(registryContent_, "") };
    inline AddClientUserDefineRuleRequest& setRegistryContent(string registryContent) { DARABONBA_PTR_SET_VALUE(registryContent_, registryContent) };


    // registryKey Field Functions 
    bool hasRegistryKey() const { return this->registryKey_ != nullptr;};
    void deleteRegistryKey() { this->registryKey_ = nullptr;};
    inline string registryKey() const { DARABONBA_PTR_GET_DEFAULT(registryKey_, "") };
    inline AddClientUserDefineRuleRequest& setRegistryKey(string registryKey) { DARABONBA_PTR_SET_VALUE(registryKey_, registryKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AddClientUserDefineRuleRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The action of the custom defense rule. Valid values:
    // 
    // *   **0**: allow
    // *   **1**: block
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> actionType_ = nullptr;
    // The command line.
    std::shared_ptr<string> cmdline_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The file path.
    std::shared_ptr<string> filePath_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IP_ = nullptr;
    // The hash values of processes.
    std::shared_ptr<string> md5List_ = nullptr;
    // The name of the custom defense rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The new file path after the file is renamed.
    std::shared_ptr<string> newFilePath_ = nullptr;
    // The parent command line.
    std::shared_ptr<string> parentCmdline_ = nullptr;
    // The path to the parent process.
    std::shared_ptr<string> parentProcPath_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    // *   **all**: all types
    std::shared_ptr<string> platform_ = nullptr;
    // The port number. This parameter is deprecated.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The port number. Valid values: **1 to 65535**.
    std::shared_ptr<string> portStr_ = nullptr;
    // The path to the process.
    std::shared_ptr<string> procPath_ = nullptr;
    // The registry value.
    std::shared_ptr<string> registryContent_ = nullptr;
    // The registry key.
    std::shared_ptr<string> registryKey_ = nullptr;
    // The type of the custom defense rule. Valid values:
    // 
    // *   **1**: Process hash
    // *   **2**: Command line
    // *   **3**: Process Network
    // *   **4**: File Read and Write
    // *   **5**: Operation on Registry
    // *   **6**: Dynamic-link Library Loading
    // *   **7**: File Renaming
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
