// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientUserDefineRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleDetail, userDefineRuleDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleDetail, userDefineRuleDetail_);
    };
    GetClientUserDefineRuleResponseBody() = default ;
    GetClientUserDefineRuleResponseBody(const GetClientUserDefineRuleResponseBody &) = default ;
    GetClientUserDefineRuleResponseBody(GetClientUserDefineRuleResponseBody &&) = default ;
    GetClientUserDefineRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientUserDefineRuleResponseBody() = default ;
    GetClientUserDefineRuleResponseBody& operator=(const GetClientUserDefineRuleResponseBody &) = default ;
    GetClientUserDefineRuleResponseBody& operator=(GetClientUserDefineRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDefineRuleDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDefineRuleDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(Id, id_);
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
      friend void from_json(const Darabonba::Json& j, UserDefineRuleDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
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
      UserDefineRuleDetail() = default ;
      UserDefineRuleDetail(const UserDefineRuleDetail &) = default ;
      UserDefineRuleDetail(UserDefineRuleDetail &&) = default ;
      UserDefineRuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDefineRuleDetail() = default ;
      UserDefineRuleDetail& operator=(const UserDefineRuleDetail &) = default ;
      UserDefineRuleDetail& operator=(UserDefineRuleDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->cmdline_ == nullptr && this->domain_ == nullptr && this->filePath_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->IP_ == nullptr && this->id_ == nullptr && this->md5List_ == nullptr && this->name_ == nullptr && this->newFilePath_ == nullptr
        && this->parentCmdline_ == nullptr && this->parentProcPath_ == nullptr && this->platform_ == nullptr && this->port_ == nullptr && this->portStr_ == nullptr
        && this->procPath_ == nullptr && this->registryContent_ == nullptr && this->registryKey_ == nullptr && this->type_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline UserDefineRuleDetail& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline UserDefineRuleDetail& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline UserDefineRuleDetail& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline UserDefineRuleDetail& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline UserDefineRuleDetail& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline UserDefineRuleDetail& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline UserDefineRuleDetail& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UserDefineRuleDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // md5List Field Functions 
      bool hasMd5List() const { return this->md5List_ != nullptr;};
      void deleteMd5List() { this->md5List_ = nullptr;};
      inline string getMd5List() const { DARABONBA_PTR_GET_DEFAULT(md5List_, "") };
      inline UserDefineRuleDetail& setMd5List(string md5List) { DARABONBA_PTR_SET_VALUE(md5List_, md5List) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserDefineRuleDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newFilePath Field Functions 
      bool hasNewFilePath() const { return this->newFilePath_ != nullptr;};
      void deleteNewFilePath() { this->newFilePath_ = nullptr;};
      inline string getNewFilePath() const { DARABONBA_PTR_GET_DEFAULT(newFilePath_, "") };
      inline UserDefineRuleDetail& setNewFilePath(string newFilePath) { DARABONBA_PTR_SET_VALUE(newFilePath_, newFilePath) };


      // parentCmdline Field Functions 
      bool hasParentCmdline() const { return this->parentCmdline_ != nullptr;};
      void deleteParentCmdline() { this->parentCmdline_ = nullptr;};
      inline string getParentCmdline() const { DARABONBA_PTR_GET_DEFAULT(parentCmdline_, "") };
      inline UserDefineRuleDetail& setParentCmdline(string parentCmdline) { DARABONBA_PTR_SET_VALUE(parentCmdline_, parentCmdline) };


      // parentProcPath Field Functions 
      bool hasParentProcPath() const { return this->parentProcPath_ != nullptr;};
      void deleteParentProcPath() { this->parentProcPath_ = nullptr;};
      inline string getParentProcPath() const { DARABONBA_PTR_GET_DEFAULT(parentProcPath_, "") };
      inline UserDefineRuleDetail& setParentProcPath(string parentProcPath) { DARABONBA_PTR_SET_VALUE(parentProcPath_, parentProcPath) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline UserDefineRuleDetail& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline UserDefineRuleDetail& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // portStr Field Functions 
      bool hasPortStr() const { return this->portStr_ != nullptr;};
      void deletePortStr() { this->portStr_ = nullptr;};
      inline string getPortStr() const { DARABONBA_PTR_GET_DEFAULT(portStr_, "") };
      inline UserDefineRuleDetail& setPortStr(string portStr) { DARABONBA_PTR_SET_VALUE(portStr_, portStr) };


      // procPath Field Functions 
      bool hasProcPath() const { return this->procPath_ != nullptr;};
      void deleteProcPath() { this->procPath_ = nullptr;};
      inline string getProcPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
      inline UserDefineRuleDetail& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


      // registryContent Field Functions 
      bool hasRegistryContent() const { return this->registryContent_ != nullptr;};
      void deleteRegistryContent() { this->registryContent_ = nullptr;};
      inline string getRegistryContent() const { DARABONBA_PTR_GET_DEFAULT(registryContent_, "") };
      inline UserDefineRuleDetail& setRegistryContent(string registryContent) { DARABONBA_PTR_SET_VALUE(registryContent_, registryContent) };


      // registryKey Field Functions 
      bool hasRegistryKey() const { return this->registryKey_ != nullptr;};
      void deleteRegistryKey() { this->registryKey_ = nullptr;};
      inline string getRegistryKey() const { DARABONBA_PTR_GET_DEFAULT(registryKey_, "") };
      inline UserDefineRuleDetail& setRegistryKey(string registryKey) { DARABONBA_PTR_SET_VALUE(registryKey_, registryKey) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline UserDefineRuleDetail& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The action of the custom defense rule. Valid values:
      // 
      // *   **0**: allow
      // *   **1**: block
      shared_ptr<string> actionType_ {};
      // The command line.
      shared_ptr<string> cmdline_ {};
      // The domain name.
      shared_ptr<string> domain_ {};
      // The file path.
      shared_ptr<string> filePath_ {};
      // The time when the custom defense rule was created.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the custom defense rule was last modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The IP address.
      shared_ptr<string> IP_ {};
      // The ID of the custom defense rule.
      shared_ptr<int64_t> id_ {};
      // The hash values of processes.
      shared_ptr<string> md5List_ {};
      // The name of the custom defense rule.
      shared_ptr<string> name_ {};
      // The new file path after the file is renamed.
      shared_ptr<string> newFilePath_ {};
      // The parent command line.
      shared_ptr<string> parentCmdline_ {};
      // The path to the parent process.
      shared_ptr<string> parentProcPath_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **linux**
      // *   **windows**
      // *   **all**
      shared_ptr<string> platform_ {};
      // The port number.
      shared_ptr<int32_t> port_ {};
      // The port number. Valid values: 1 to 65535.
      shared_ptr<string> portStr_ {};
      // The path to the process.
      shared_ptr<string> procPath_ {};
      // The registry value.
      shared_ptr<string> registryContent_ {};
      // The registry key.
      shared_ptr<string> registryKey_ {};
      // The type of the custom defense rule. Valid values:
      // 
      // *   **1**: Process hash
      // *   **2**: Command line
      // *   **3**: Process Network
      // *   **4**: File Read and Write
      // *   **5**: Operation on Registry
      // *   **6**: Dynamic-link Library Loading
      // *   **7**: File Renaming
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userDefineRuleDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientUserDefineRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleDetail Field Functions 
    bool hasUserDefineRuleDetail() const { return this->userDefineRuleDetail_ != nullptr;};
    void deleteUserDefineRuleDetail() { this->userDefineRuleDetail_ = nullptr;};
    inline const GetClientUserDefineRuleResponseBody::UserDefineRuleDetail & getUserDefineRuleDetail() const { DARABONBA_PTR_GET_CONST(userDefineRuleDetail_, GetClientUserDefineRuleResponseBody::UserDefineRuleDetail) };
    inline GetClientUserDefineRuleResponseBody::UserDefineRuleDetail getUserDefineRuleDetail() { DARABONBA_PTR_GET(userDefineRuleDetail_, GetClientUserDefineRuleResponseBody::UserDefineRuleDetail) };
    inline GetClientUserDefineRuleResponseBody& setUserDefineRuleDetail(const GetClientUserDefineRuleResponseBody::UserDefineRuleDetail & userDefineRuleDetail) { DARABONBA_PTR_SET_VALUE(userDefineRuleDetail_, userDefineRuleDetail) };
    inline GetClientUserDefineRuleResponseBody& setUserDefineRuleDetail(GetClientUserDefineRuleResponseBody::UserDefineRuleDetail && userDefineRuleDetail) { DARABONBA_PTR_SET_RVALUE(userDefineRuleDetail_, userDefineRuleDetail) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the custom defense rule.
    shared_ptr<GetClientUserDefineRuleResponseBody::UserDefineRuleDetail> userDefineRuleDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
