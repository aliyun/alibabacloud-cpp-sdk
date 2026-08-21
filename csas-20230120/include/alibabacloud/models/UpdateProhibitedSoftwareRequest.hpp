// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROHIBITEDSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROHIBITEDSOFTWAREREQUEST_HPP_
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
  class UpdateProhibitedSoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LinuxProcesses, linuxProcesses_);
      DARABONBA_PTR_TO_JSON(MacOSProcesses, macOSProcesses_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
      DARABONBA_PTR_TO_JSON(WindowsProcesses, windowsProcesses_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LinuxProcesses, linuxProcesses_);
      DARABONBA_PTR_FROM_JSON(MacOSProcesses, macOSProcesses_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
      DARABONBA_PTR_FROM_JSON(WindowsProcesses, windowsProcesses_);
    };
    UpdateProhibitedSoftwareRequest() = default ;
    UpdateProhibitedSoftwareRequest(const UpdateProhibitedSoftwareRequest &) = default ;
    UpdateProhibitedSoftwareRequest(UpdateProhibitedSoftwareRequest &&) = default ;
    UpdateProhibitedSoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProhibitedSoftwareRequest() = default ;
    UpdateProhibitedSoftwareRequest& operator=(const UpdateProhibitedSoftwareRequest &) = default ;
    UpdateProhibitedSoftwareRequest& operator=(UpdateProhibitedSoftwareRequest &&) = default ;
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
      // The bundle ID of the application. This parameter is required only for macOS processes. You must specify at least one of this parameter and Process. The value can be up to 1024 characters in length.
      shared_ptr<string> bundleId_ {};
      // The command line parameters for starting the process. If specified, only processes whose command line contains this content are matched. If left empty, the command line is not checked. The value can be up to 1024 characters in length.
      shared_ptr<string> cmdline_ {};
      // The directory where the process is located. If specified, only processes with the same name in this directory are matched. If left empty, processes in any directory are matched. The value can be up to 1024 characters in length.
      shared_ptr<string> directory_ {};
      // The process name. The value can be up to 1024 characters in length.
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
      // The bundle ID of the application. This parameter is required only for macOS processes. You must specify at least one of this parameter and Process. The value can be up to 1024 characters in length.
      shared_ptr<string> bundleId_ {};
      // The command line parameters for starting the process. If specified, only processes whose command line contains this content are matched. If left empty, the command line is not checked. The value can be up to 1024 characters in length.
      shared_ptr<string> cmdline_ {};
      // The directory where the process is located. If specified, only processes with the same name in this directory are matched. If left empty, processes in any directory are matched. The value can be up to 1024 characters in length.
      shared_ptr<string> directory_ {};
      // The process name. The value can be up to 1024 characters in length.
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
      // The bundle ID of the application. This parameter is required only for macOS processes. You must specify at least one of this parameter and Process. The value can be up to 1024 characters in length.
      shared_ptr<string> bundleId_ {};
      // The command line parameters for starting the process. If specified, only processes whose command line contains this content are matched. If left empty, the command line is not checked. The value can be up to 1024 characters in length.
      shared_ptr<string> cmdline_ {};
      // The directory where the process is located. If specified, only processes with the same name in this directory are matched. If left empty, processes in any directory are matched. The value can be up to 1024 characters in length.
      shared_ptr<string> directory_ {};
      // The process name. The value can be up to 1024 characters in length.
      shared_ptr<string> process_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->linuxProcesses_ == nullptr && this->macOSProcesses_ == nullptr && this->name_ == nullptr && this->softwareId_ == nullptr && this->tagIds_ == nullptr
        && this->windowsProcesses_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProhibitedSoftwareRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // linuxProcesses Field Functions 
    bool hasLinuxProcesses() const { return this->linuxProcesses_ != nullptr;};
    void deleteLinuxProcesses() { this->linuxProcesses_ = nullptr;};
    inline const vector<UpdateProhibitedSoftwareRequest::LinuxProcesses> & getLinuxProcesses() const { DARABONBA_PTR_GET_CONST(linuxProcesses_, vector<UpdateProhibitedSoftwareRequest::LinuxProcesses>) };
    inline vector<UpdateProhibitedSoftwareRequest::LinuxProcesses> getLinuxProcesses() { DARABONBA_PTR_GET(linuxProcesses_, vector<UpdateProhibitedSoftwareRequest::LinuxProcesses>) };
    inline UpdateProhibitedSoftwareRequest& setLinuxProcesses(const vector<UpdateProhibitedSoftwareRequest::LinuxProcesses> & linuxProcesses) { DARABONBA_PTR_SET_VALUE(linuxProcesses_, linuxProcesses) };
    inline UpdateProhibitedSoftwareRequest& setLinuxProcesses(vector<UpdateProhibitedSoftwareRequest::LinuxProcesses> && linuxProcesses) { DARABONBA_PTR_SET_RVALUE(linuxProcesses_, linuxProcesses) };


    // macOSProcesses Field Functions 
    bool hasMacOSProcesses() const { return this->macOSProcesses_ != nullptr;};
    void deleteMacOSProcesses() { this->macOSProcesses_ = nullptr;};
    inline const vector<UpdateProhibitedSoftwareRequest::MacOSProcesses> & getMacOSProcesses() const { DARABONBA_PTR_GET_CONST(macOSProcesses_, vector<UpdateProhibitedSoftwareRequest::MacOSProcesses>) };
    inline vector<UpdateProhibitedSoftwareRequest::MacOSProcesses> getMacOSProcesses() { DARABONBA_PTR_GET(macOSProcesses_, vector<UpdateProhibitedSoftwareRequest::MacOSProcesses>) };
    inline UpdateProhibitedSoftwareRequest& setMacOSProcesses(const vector<UpdateProhibitedSoftwareRequest::MacOSProcesses> & macOSProcesses) { DARABONBA_PTR_SET_VALUE(macOSProcesses_, macOSProcesses) };
    inline UpdateProhibitedSoftwareRequest& setMacOSProcesses(vector<UpdateProhibitedSoftwareRequest::MacOSProcesses> && macOSProcesses) { DARABONBA_PTR_SET_RVALUE(macOSProcesses_, macOSProcesses) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProhibitedSoftwareRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // softwareId Field Functions 
    bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
    void deleteSoftwareId() { this->softwareId_ = nullptr;};
    inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
    inline UpdateProhibitedSoftwareRequest& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline UpdateProhibitedSoftwareRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdateProhibitedSoftwareRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // windowsProcesses Field Functions 
    bool hasWindowsProcesses() const { return this->windowsProcesses_ != nullptr;};
    void deleteWindowsProcesses() { this->windowsProcesses_ = nullptr;};
    inline const vector<UpdateProhibitedSoftwareRequest::WindowsProcesses> & getWindowsProcesses() const { DARABONBA_PTR_GET_CONST(windowsProcesses_, vector<UpdateProhibitedSoftwareRequest::WindowsProcesses>) };
    inline vector<UpdateProhibitedSoftwareRequest::WindowsProcesses> getWindowsProcesses() { DARABONBA_PTR_GET(windowsProcesses_, vector<UpdateProhibitedSoftwareRequest::WindowsProcesses>) };
    inline UpdateProhibitedSoftwareRequest& setWindowsProcesses(const vector<UpdateProhibitedSoftwareRequest::WindowsProcesses> & windowsProcesses) { DARABONBA_PTR_SET_VALUE(windowsProcesses_, windowsProcesses) };
    inline UpdateProhibitedSoftwareRequest& setWindowsProcesses(vector<UpdateProhibitedSoftwareRequest::WindowsProcesses> && windowsProcesses) { DARABONBA_PTR_SET_RVALUE(windowsProcesses_, windowsProcesses) };


  protected:
    // The description of the prohibited software.
    shared_ptr<string> description_ {};
    // The list of process configurations for the Linux operating system.
    shared_ptr<vector<UpdateProhibitedSoftwareRequest::LinuxProcesses>> linuxProcesses_ {};
    // The list of process configurations for the macOS operating system.
    shared_ptr<vector<UpdateProhibitedSoftwareRequest::MacOSProcesses>> macOSProcesses_ {};
    // The name of the prohibited software.
    shared_ptr<string> name_ {};
    // The ID of the custom prohibited software to update. Only custom prohibited software under the current Alibaba Cloud account can be updated. Built-in prohibited software cannot be updated. You can obtain the value from the following operations:
    // - [ListProhibitedSoftware](~~ListProhibitedSoftware~~): queries prohibited software entries in batches.
    // - [CreateProhibitedSoftware](~~CreateProhibitedSoftware~~): creates a custom prohibited software entry.
    // 
    // This parameter is required.
    shared_ptr<string> softwareId_ {};
    // The IDs of the custom prohibited software tags to associate. Duplicate values are not allowed.
    shared_ptr<vector<string>> tagIds_ {};
    // The list of process configurations for the Windows operating system.
    shared_ptr<vector<UpdateProhibitedSoftwareRequest::WindowsProcesses>> windowsProcesses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
