// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROHIBITEDSOFTWARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROHIBITEDSOFTWARERESPONSEBODY_HPP_
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
  class CreateProhibitedSoftwareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProhibitedSoftwareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Software, software_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProhibitedSoftwareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Software, software_);
    };
    CreateProhibitedSoftwareResponseBody() = default ;
    CreateProhibitedSoftwareResponseBody(const CreateProhibitedSoftwareResponseBody &) = default ;
    CreateProhibitedSoftwareResponseBody(CreateProhibitedSoftwareResponseBody &&) = default ;
    CreateProhibitedSoftwareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProhibitedSoftwareResponseBody() = default ;
    CreateProhibitedSoftwareResponseBody& operator=(const CreateProhibitedSoftwareResponseBody &) = default ;
    CreateProhibitedSoftwareResponseBody& operator=(CreateProhibitedSoftwareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Software : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Software& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(LinuxProcesses, linuxProcesses_);
        DARABONBA_PTR_TO_JSON(MacOSProcesses, macOSProcesses_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
        DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
        DARABONBA_PTR_TO_JSON(WindowsProcesses, windowsProcesses_);
      };
      friend void from_json(const Darabonba::Json& j, Software& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(LinuxProcesses, linuxProcesses_);
        DARABONBA_PTR_FROM_JSON(MacOSProcesses, macOSProcesses_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
        DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
        DARABONBA_PTR_FROM_JSON(WindowsProcesses, windowsProcesses_);
      };
      Software() = default ;
      Software(const Software &) = default ;
      Software(Software &&) = default ;
      Software(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Software() = default ;
      Software& operator=(const Software &) = default ;
      Software& operator=(Software &&) = default ;
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
        // The bundle ID of the application. This parameter is required only for macOS processes.
        shared_ptr<string> bundleId_ {};
        // The command line parameters for starting the process.
        shared_ptr<string> cmdline_ {};
        // The directory where the process is located.
        shared_ptr<string> directory_ {};
        // The process name.
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
        // The bundle ID of the application. This parameter is required only for macOS processes.
        shared_ptr<string> bundleId_ {};
        // The command line parameters for starting the process.
        shared_ptr<string> cmdline_ {};
        // The directory where the process is located.
        shared_ptr<string> directory_ {};
        // The process name.
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
        // The bundle ID of the application. This parameter is required only for macOS processes.
        shared_ptr<string> bundleId_ {};
        // The command line parameters for starting the process.
        shared_ptr<string> cmdline_ {};
        // The directory where the process is located.
        shared_ptr<string> directory_ {};
        // The process name.
        shared_ptr<string> process_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->linuxProcesses_ == nullptr && this->macOSProcesses_ == nullptr && this->name_ == nullptr && this->softwareId_ == nullptr
        && this->tagIds_ == nullptr && this->windowsProcesses_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Software& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Software& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // linuxProcesses Field Functions 
      bool hasLinuxProcesses() const { return this->linuxProcesses_ != nullptr;};
      void deleteLinuxProcesses() { this->linuxProcesses_ = nullptr;};
      inline const vector<Software::LinuxProcesses> & getLinuxProcesses() const { DARABONBA_PTR_GET_CONST(linuxProcesses_, vector<Software::LinuxProcesses>) };
      inline vector<Software::LinuxProcesses> getLinuxProcesses() { DARABONBA_PTR_GET(linuxProcesses_, vector<Software::LinuxProcesses>) };
      inline Software& setLinuxProcesses(const vector<Software::LinuxProcesses> & linuxProcesses) { DARABONBA_PTR_SET_VALUE(linuxProcesses_, linuxProcesses) };
      inline Software& setLinuxProcesses(vector<Software::LinuxProcesses> && linuxProcesses) { DARABONBA_PTR_SET_RVALUE(linuxProcesses_, linuxProcesses) };


      // macOSProcesses Field Functions 
      bool hasMacOSProcesses() const { return this->macOSProcesses_ != nullptr;};
      void deleteMacOSProcesses() { this->macOSProcesses_ = nullptr;};
      inline const vector<Software::MacOSProcesses> & getMacOSProcesses() const { DARABONBA_PTR_GET_CONST(macOSProcesses_, vector<Software::MacOSProcesses>) };
      inline vector<Software::MacOSProcesses> getMacOSProcesses() { DARABONBA_PTR_GET(macOSProcesses_, vector<Software::MacOSProcesses>) };
      inline Software& setMacOSProcesses(const vector<Software::MacOSProcesses> & macOSProcesses) { DARABONBA_PTR_SET_VALUE(macOSProcesses_, macOSProcesses) };
      inline Software& setMacOSProcesses(vector<Software::MacOSProcesses> && macOSProcesses) { DARABONBA_PTR_SET_RVALUE(macOSProcesses_, macOSProcesses) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Software& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // softwareId Field Functions 
      bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
      void deleteSoftwareId() { this->softwareId_ = nullptr;};
      inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
      inline Software& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


      // tagIds Field Functions 
      bool hasTagIds() const { return this->tagIds_ != nullptr;};
      void deleteTagIds() { this->tagIds_ = nullptr;};
      inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
      inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
      inline Software& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
      inline Software& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


      // windowsProcesses Field Functions 
      bool hasWindowsProcesses() const { return this->windowsProcesses_ != nullptr;};
      void deleteWindowsProcesses() { this->windowsProcesses_ = nullptr;};
      inline const vector<Software::WindowsProcesses> & getWindowsProcesses() const { DARABONBA_PTR_GET_CONST(windowsProcesses_, vector<Software::WindowsProcesses>) };
      inline vector<Software::WindowsProcesses> getWindowsProcesses() { DARABONBA_PTR_GET(windowsProcesses_, vector<Software::WindowsProcesses>) };
      inline Software& setWindowsProcesses(const vector<Software::WindowsProcesses> & windowsProcesses) { DARABONBA_PTR_SET_VALUE(windowsProcesses_, windowsProcesses) };
      inline Software& setWindowsProcesses(vector<Software::WindowsProcesses> && windowsProcesses) { DARABONBA_PTR_SET_RVALUE(windowsProcesses_, windowsProcesses) };


    protected:
      // The creation time of the disabled software, in the yyyy-MM-dd HH:mm:ss format. The time is in the UTC+8 time zone.
      shared_ptr<string> createTime_ {};
      // The description of the disabled software.
      shared_ptr<string> description_ {};
      // The list of process configurations for the Linux operating system.
      shared_ptr<vector<Software::LinuxProcesses>> linuxProcesses_ {};
      // The list of process configurations for the macOS operating system.
      shared_ptr<vector<Software::MacOSProcesses>> macOSProcesses_ {};
      // The software name.
      shared_ptr<string> name_ {};
      // The ID of the disabled software.
      shared_ptr<string> softwareId_ {};
      // The IDs of disabled software tags associated with this disabled software.
      shared_ptr<vector<string>> tagIds_ {};
      // The list of process configurations for the Windows operating system.
      shared_ptr<vector<Software::WindowsProcesses>> windowsProcesses_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->software_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProhibitedSoftwareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // software Field Functions 
    bool hasSoftware() const { return this->software_ != nullptr;};
    void deleteSoftware() { this->software_ = nullptr;};
    inline const CreateProhibitedSoftwareResponseBody::Software & getSoftware() const { DARABONBA_PTR_GET_CONST(software_, CreateProhibitedSoftwareResponseBody::Software) };
    inline CreateProhibitedSoftwareResponseBody::Software getSoftware() { DARABONBA_PTR_GET(software_, CreateProhibitedSoftwareResponseBody::Software) };
    inline CreateProhibitedSoftwareResponseBody& setSoftware(const CreateProhibitedSoftwareResponseBody::Software & software) { DARABONBA_PTR_SET_VALUE(software_, software) };
    inline CreateProhibitedSoftwareResponseBody& setSoftware(CreateProhibitedSoftwareResponseBody::Software && software) { DARABONBA_PTR_SET_RVALUE(software_, software) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The details of the disabled software.
    shared_ptr<CreateProhibitedSoftwareResponseBody::Software> software_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
