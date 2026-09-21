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
      DARABONBA_PTR_TO_JSON(AutoUpgradeConfig, autoUpgradeConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpgradeConfig, autoUpgradeConfig_);
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
      // Specifies whether to enable the SMB Access-Based Enumeration (ABE) feature.
      shared_ptr<bool> enableABE_ {};
      // Specifies whether the OpLock feature is enabled.
      // 
      // Valid values:
      // - true: Enabled.
      // - false: Not enabled.
      // > Only file systems of the SMB Protocol Type are supported.
      shared_ptr<bool> enableOplock_ {};
      // Specifies whether the Lingjun VSC mount target supports only access point-based access.
      shared_ptr<bool> vscAccessPointAccessOnly_ {};
    };

    class AutoUpgradeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoUpgradeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(capacityUsedRatio, capacityUsedRatio_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(step, step_);
        DARABONBA_PTR_TO_JSON(time, time_);
      };
      friend void from_json(const Darabonba::Json& j, AutoUpgradeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(capacityUsedRatio, capacityUsedRatio_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(step, step_);
        DARABONBA_PTR_FROM_JSON(time, time_);
      };
      AutoUpgradeConfig() = default ;
      AutoUpgradeConfig(const AutoUpgradeConfig &) = default ;
      AutoUpgradeConfig(AutoUpgradeConfig &&) = default ;
      AutoUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoUpgradeConfig() = default ;
      AutoUpgradeConfig& operator=(const AutoUpgradeConfig &) = default ;
      AutoUpgradeConfig& operator=(AutoUpgradeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacityUsedRatio_ == nullptr
        && this->enabled_ == nullptr && this->step_ == nullptr && this->time_ == nullptr; };
      // capacityUsedRatio Field Functions 
      bool hasCapacityUsedRatio() const { return this->capacityUsedRatio_ != nullptr;};
      void deleteCapacityUsedRatio() { this->capacityUsedRatio_ = nullptr;};
      inline int32_t getCapacityUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(capacityUsedRatio_, 0) };
      inline AutoUpgradeConfig& setCapacityUsedRatio(int32_t capacityUsedRatio) { DARABONBA_PTR_SET_VALUE(capacityUsedRatio_, capacityUsedRatio) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AutoUpgradeConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
      inline AutoUpgradeConfig& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
      inline AutoUpgradeConfig& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The capacity usage threshold.
      shared_ptr<int32_t> capacityUsedRatio_ {};
      // Specifies whether to enable auto-scaling.
      shared_ptr<bool> enabled_ {};
      // The scaling increment.
      shared_ptr<int32_t> step_ {};
      // The duration.
      shared_ptr<int32_t> time_ {};
    };

    virtual bool empty() const override { return this->autoUpgradeConfig_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->options_ == nullptr; };
    // autoUpgradeConfig Field Functions 
    bool hasAutoUpgradeConfig() const { return this->autoUpgradeConfig_ != nullptr;};
    void deleteAutoUpgradeConfig() { this->autoUpgradeConfig_ = nullptr;};
    inline const ModifyFileSystemRequest::AutoUpgradeConfig & getAutoUpgradeConfig() const { DARABONBA_PTR_GET_CONST(autoUpgradeConfig_, ModifyFileSystemRequest::AutoUpgradeConfig) };
    inline ModifyFileSystemRequest::AutoUpgradeConfig getAutoUpgradeConfig() { DARABONBA_PTR_GET(autoUpgradeConfig_, ModifyFileSystemRequest::AutoUpgradeConfig) };
    inline ModifyFileSystemRequest& setAutoUpgradeConfig(const ModifyFileSystemRequest::AutoUpgradeConfig & autoUpgradeConfig) { DARABONBA_PTR_SET_VALUE(autoUpgradeConfig_, autoUpgradeConfig) };
    inline ModifyFileSystemRequest& setAutoUpgradeConfig(ModifyFileSystemRequest::AutoUpgradeConfig && autoUpgradeConfig) { DARABONBA_PTR_SET_RVALUE(autoUpgradeConfig_, autoUpgradeConfig) };


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
    // The auto-scaling configuration.
    shared_ptr<ModifyFileSystemRequest::AutoUpgradeConfig> autoUpgradeConfig_ {};
    // The description of the file system.
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter. It cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), or hyphens (-).
    shared_ptr<string> description_ {};
    // The file system ID.
    // 
    // - General-purpose NAS: `31a8e4****`.
    // 
    // - Extreme NAS: The ID must start with `extreme-`, for example, `extreme-0015****`.
    // - Cloud Parallel File Storage (CPFS): The ID must start with `cpfs-`, for example, `cpfs-125487****`.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The options.
    shared_ptr<ModifyFileSystemRequest::Options> options_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
