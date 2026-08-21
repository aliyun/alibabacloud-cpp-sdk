// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROHIBITEDSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROHIBITEDSOFTWAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateProhibitedSoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LinuxProcesses, linuxProcesses_);
      DARABONBA_PTR_TO_JSON(MacOSProcesses, macOSProcesses_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
      DARABONBA_PTR_TO_JSON(WindowsProcesses, windowsProcesses_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LinuxProcesses, linuxProcesses_);
      DARABONBA_PTR_FROM_JSON(MacOSProcesses, macOSProcesses_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
      DARABONBA_PTR_FROM_JSON(WindowsProcesses, windowsProcesses_);
    };
    CreateProhibitedSoftwareRequest() = default ;
    CreateProhibitedSoftwareRequest(const CreateProhibitedSoftwareRequest &) = default ;
    CreateProhibitedSoftwareRequest(CreateProhibitedSoftwareRequest &&) = default ;
    CreateProhibitedSoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProhibitedSoftwareRequest() = default ;
    CreateProhibitedSoftwareRequest& operator=(const CreateProhibitedSoftwareRequest &) = default ;
    CreateProhibitedSoftwareRequest& operator=(CreateProhibitedSoftwareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WindowsProcesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WindowsProcesses& obj) { 
        DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
        DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Process, process_);
      };
      friend void from_json(const Darabonba::Json& j, WindowsProcesses& obj) { 
        DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
        DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
      };
      WindowsProcesses() = default ;
      WindowsProcesses(const WindowsProcesses &) = default ;
      WindowsProcesses(WindowsProcesses &&) = default ;
      WindowsProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WindowsProcesses() = default ;
      WindowsProcesses& operator=(const WindowsProcesses &) = default ;
      WindowsProcesses& operator=(WindowsProcesses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bundleId_ == nullptr
        && this->cmdline_ == nullptr && this->directory_ == nullptr && this->process_ == nullptr; };
      // bundleId Field Functions 
      bool hasBundleId() const { return this->bundleId_ != nullptr;};
      void deleteBundleId() { this->bundleId_ = nullptr;};
      inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
      inline WindowsProcesses& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline WindowsProcesses& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline WindowsProcesses& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline WindowsProcesses& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    protected:
      // The bundle ID of the application. This parameter is required only for macOS processes. You must specify at least one of BundleId and Process. Maximum length: 1024 characters.
      shared_ptr<string> bundleId_ {};
      // The command line parameters for starting the process. If specified, only processes whose command line contains this content are matched. If left empty, the command line is not checked. Maximum length: 1024 characters.
      shared_ptr<string> cmdline_ {};
      // The directory where the process is located. If specified, only processes with the same name in this directory are matched. If left empty, processes in any directory are matched. Maximum length: 1024 characters.
      shared_ptr<string> directory_ {};
      // The process name. Maximum length: 1024 characters.
      shared_ptr<string> process_ {};
    };

    class MacOSProcesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MacOSProcesses& obj) { 
        DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
        DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Process, process_);
      };
      friend void from_json(const Darabonba::Json& j, MacOSProcesses& obj) { 
        DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
        DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
      };
      MacOSProcesses() = default ;
      MacOSProcesses(const MacOSProcesses &) = default ;
      MacOSProcesses(MacOSProcesses &&) = default ;
      MacOSProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MacOSProcesses() = default ;
      MacOSProcesses& operator=(const MacOSProcesses &) = default ;
      MacOSProcesses& operator=(MacOSProcesses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bundleId_ == nullptr
        && this->cmdline_ == nullptr && this->directory_ == nullptr && this->process_ == nullptr; };
      // bundleId Field Functions 
      bool hasBundleId() const { return this->bundleId_ != nullptr;};
      void deleteBundleId() { this->bundleId_ = nullptr;};
      inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
      inline MacOSProcesses& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline MacOSProcesses& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline MacOSProcesses& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline MacOSProcesses& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    protected:
      // The bundle ID of the application. This parameter is required only for macOS processes. You must specify at least one of BundleId and Process. Maximum length: 1024 characters.
      shared_ptr<string> bundleId_ {};
      // The command line parameters for starting the process. If specified, only processes whose command line contains this content are matched. If left empty, the command line is not checked. Maximum length: 1024 characters.
      shared_ptr<string> cmdline_ {};
      // The directory where the process is located. If specified, only processes with the same name in this directory are matched. If left empty, processes in any directory are matched. Maximum length: 1024 characters.
      shared_ptr<string> directory_ {};
      // The process name. Maximum length: 1024 characters.
      shared_ptr<string> process_ {};
    };

    class LinuxProcesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LinuxProcesses& obj) { 
        DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
        DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Process, process_);
      };
      friend void from_json(const Darabonba::Json& j, LinuxProcesses& obj) { 
        DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
        DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
      };
      LinuxProcesses() = default ;
      LinuxProcesses(const LinuxProcesses &) = default ;
      LinuxProcesses(LinuxProcesses &&) = default ;
      LinuxProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LinuxProcesses() = default ;
      LinuxProcesses& operator=(const LinuxProcesses &) = default ;
      LinuxProcesses& operator=(LinuxProcesses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bundleId_ == nullptr
        && this->cmdline_ == nullptr && this->directory_ == nullptr && this->process_ == nullptr; };
      // bundleId Field Functions 
      bool hasBundleId() const { return this->bundleId_ != nullptr;};
      void deleteBundleId() { this->bundleId_ = nullptr;};
      inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
      inline LinuxProcesses& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline LinuxProcesses& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline LinuxProcesses& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline LinuxProcesses& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    protected:
      // The bundle ID of the application. This parameter is required only for macOS processes. You must specify at least one of BundleId and Process. Maximum length: 1024 characters.
      shared_ptr<string> bundleId_ {};
      // The command line parameters for starting the process. If specified, only processes whose command line contains this content are matched. If left empty, the command line is not checked. Maximum length: 1024 characters.
      shared_ptr<string> cmdline_ {};
      // The directory where the process is located. If specified, only processes with the same name in this directory are matched. If left empty, processes in any directory are matched. Maximum length: 1024 characters.
      shared_ptr<string> directory_ {};
      // The process name. Maximum length: 1024 characters.
      shared_ptr<string> process_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->linuxProcesses_ == nullptr && this->macOSProcesses_ == nullptr && this->name_ == nullptr && this->tagIds_ == nullptr && this->windowsProcesses_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProhibitedSoftwareRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // linuxProcesses Field Functions 
    bool hasLinuxProcesses() const { return this->linuxProcesses_ != nullptr;};
    void deleteLinuxProcesses() { this->linuxProcesses_ = nullptr;};
    inline const vector<CreateProhibitedSoftwareRequest::LinuxProcesses> & getLinuxProcesses() const { DARABONBA_PTR_GET_CONST(linuxProcesses_, vector<CreateProhibitedSoftwareRequest::LinuxProcesses>) };
    inline vector<CreateProhibitedSoftwareRequest::LinuxProcesses> getLinuxProcesses() { DARABONBA_PTR_GET(linuxProcesses_, vector<CreateProhibitedSoftwareRequest::LinuxProcesses>) };
    inline CreateProhibitedSoftwareRequest& setLinuxProcesses(const vector<CreateProhibitedSoftwareRequest::LinuxProcesses> & linuxProcesses) { DARABONBA_PTR_SET_VALUE(linuxProcesses_, linuxProcesses) };
    inline CreateProhibitedSoftwareRequest& setLinuxProcesses(vector<CreateProhibitedSoftwareRequest::LinuxProcesses> && linuxProcesses) { DARABONBA_PTR_SET_RVALUE(linuxProcesses_, linuxProcesses) };


    // macOSProcesses Field Functions 
    bool hasMacOSProcesses() const { return this->macOSProcesses_ != nullptr;};
    void deleteMacOSProcesses() { this->macOSProcesses_ = nullptr;};
    inline const vector<CreateProhibitedSoftwareRequest::MacOSProcesses> & getMacOSProcesses() const { DARABONBA_PTR_GET_CONST(macOSProcesses_, vector<CreateProhibitedSoftwareRequest::MacOSProcesses>) };
    inline vector<CreateProhibitedSoftwareRequest::MacOSProcesses> getMacOSProcesses() { DARABONBA_PTR_GET(macOSProcesses_, vector<CreateProhibitedSoftwareRequest::MacOSProcesses>) };
    inline CreateProhibitedSoftwareRequest& setMacOSProcesses(const vector<CreateProhibitedSoftwareRequest::MacOSProcesses> & macOSProcesses) { DARABONBA_PTR_SET_VALUE(macOSProcesses_, macOSProcesses) };
    inline CreateProhibitedSoftwareRequest& setMacOSProcesses(vector<CreateProhibitedSoftwareRequest::MacOSProcesses> && macOSProcesses) { DARABONBA_PTR_SET_RVALUE(macOSProcesses_, macOSProcesses) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProhibitedSoftwareRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline CreateProhibitedSoftwareRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline CreateProhibitedSoftwareRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // windowsProcesses Field Functions 
    bool hasWindowsProcesses() const { return this->windowsProcesses_ != nullptr;};
    void deleteWindowsProcesses() { this->windowsProcesses_ = nullptr;};
    inline const vector<CreateProhibitedSoftwareRequest::WindowsProcesses> & getWindowsProcesses() const { DARABONBA_PTR_GET_CONST(windowsProcesses_, vector<CreateProhibitedSoftwareRequest::WindowsProcesses>) };
    inline vector<CreateProhibitedSoftwareRequest::WindowsProcesses> getWindowsProcesses() { DARABONBA_PTR_GET(windowsProcesses_, vector<CreateProhibitedSoftwareRequest::WindowsProcesses>) };
    inline CreateProhibitedSoftwareRequest& setWindowsProcesses(const vector<CreateProhibitedSoftwareRequest::WindowsProcesses> & windowsProcesses) { DARABONBA_PTR_SET_VALUE(windowsProcesses_, windowsProcesses) };
    inline CreateProhibitedSoftwareRequest& setWindowsProcesses(vector<CreateProhibitedSoftwareRequest::WindowsProcesses> && windowsProcesses) { DARABONBA_PTR_SET_RVALUE(windowsProcesses_, windowsProcesses) };


  protected:
    // The description of the disabled software.
    shared_ptr<string> description_ {};
    // The list of process configurations for the Linux operating system.
    shared_ptr<vector<CreateProhibitedSoftwareRequest::LinuxProcesses>> linuxProcesses_ {};
    // The list of process configurations for the macOS operating system.
    shared_ptr<vector<CreateProhibitedSoftwareRequest::MacOSProcesses>> macOSProcesses_ {};
    // The name of the disabled software.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The IDs of custom disabled software tags to associate. Duplicate values are not allowed.
    shared_ptr<vector<string>> tagIds_ {};
    // The list of process configurations for the Windows operating system.
    shared_ptr<vector<CreateProhibitedSoftwareRequest::WindowsProcesses>> windowsProcesses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
