// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    ModifyFileSystemRequest() = default ;
    ModifyFileSystemRequest(const ModifyFileSystemRequest &) = default ;
    ModifyFileSystemRequest(ModifyFileSystemRequest &&) = default ;
    ModifyFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFileSystemRequest() = default ;
    ModifyFileSystemRequest& operator=(const ModifyFileSystemRequest &) = default ;
    ModifyFileSystemRequest& operator=(ModifyFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Options : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Options& obj) { 
        DARABONBA_PTR_TO_JSON(EnableABE, enableABE_);
        DARABONBA_PTR_TO_JSON(EnableOplock, enableOplock_);
        DARABONBA_PTR_TO_JSON(VscAccessPointAccessOnly, vscAccessPointAccessOnly_);
      };
      friend void from_json(const Darabonba::Json& j, Options& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableABE, enableABE_);
        DARABONBA_PTR_FROM_JSON(EnableOplock, enableOplock_);
        DARABONBA_PTR_FROM_JSON(VscAccessPointAccessOnly, vscAccessPointAccessOnly_);
      };
      Options() = default ;
      Options(const Options &) = default ;
      Options(Options &&) = default ;
      Options(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Options() = default ;
      Options& operator=(const Options &) = default ;
      Options& operator=(Options &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableABE_ == nullptr
        && this->enableOplock_ == nullptr && this->vscAccessPointAccessOnly_ == nullptr; };
      // enableABE Field Functions 
      bool hasEnableABE() const { return this->enableABE_ != nullptr;};
      void deleteEnableABE() { this->enableABE_ = nullptr;};
      inline bool getEnableABE() const { DARABONBA_PTR_GET_DEFAULT(enableABE_, false) };
      inline Options& setEnableABE(bool enableABE) { DARABONBA_PTR_SET_VALUE(enableABE_, enableABE) };


      // enableOplock Field Functions 
      bool hasEnableOplock() const { return this->enableOplock_ != nullptr;};
      void deleteEnableOplock() { this->enableOplock_ = nullptr;};
      inline bool getEnableOplock() const { DARABONBA_PTR_GET_DEFAULT(enableOplock_, false) };
      inline Options& setEnableOplock(bool enableOplock) { DARABONBA_PTR_SET_VALUE(enableOplock_, enableOplock) };


      // vscAccessPointAccessOnly Field Functions 
      bool hasVscAccessPointAccessOnly() const { return this->vscAccessPointAccessOnly_ != nullptr;};
      void deleteVscAccessPointAccessOnly() { this->vscAccessPointAccessOnly_ = nullptr;};
      inline bool getVscAccessPointAccessOnly() const { DARABONBA_PTR_GET_DEFAULT(vscAccessPointAccessOnly_, false) };
      inline Options& setVscAccessPointAccessOnly(bool vscAccessPointAccessOnly) { DARABONBA_PTR_SET_VALUE(vscAccessPointAccessOnly_, vscAccessPointAccessOnly) };


    protected:
      shared_ptr<bool> enableABE_ {};
      // Specifies whether to enable OpLock. Valid values:
      // 
      // - true: Enables OpLock.
      // 
      // - false: Disables OpLock.
      // 
      // > This feature is available only for file systems that use the SMB protocol.
      shared_ptr<bool> enableOplock_ {};
      shared_ptr<bool> vscAccessPointAccessOnly_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->options_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyFileSystemRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const ModifyFileSystemRequest::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, ModifyFileSystemRequest::Options) };
    inline ModifyFileSystemRequest::Options getOptions() { DARABONBA_PTR_GET(options_, ModifyFileSystemRequest::Options) };
    inline ModifyFileSystemRequest& setOptions(const ModifyFileSystemRequest::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ModifyFileSystemRequest& setOptions(ModifyFileSystemRequest::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


  protected:
    // The description of the file system.
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters.
    // 
    // - It must start with an uppercase or lowercase letter or a Chinese character, and cannot start with `http://` or `https://`.
    // 
    // - It can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // The ID of the file system.
    // 
    // - General-purpose NAS: For example, `31a8e4****`.
    // 
    // - Extreme NAS: The ID must start with `extreme-`. For example, `extreme-0015****`.
    // 
    // - CPFS: The ID must start with `cpfs-`. For example, `cpfs-125487****`.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // Additional options for the file system.
    shared_ptr<ModifyFileSystemRequest::Options> options_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
