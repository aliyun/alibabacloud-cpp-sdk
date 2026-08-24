// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVULSCANGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVULSCANGLOBALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateVulScanGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVulScanGlobalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxDownloadSpeed, maxDownloadSpeed_);
      DARABONBA_PTR_TO_JSON(WuyingVulFixConfig, wuyingVulFixConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVulScanGlobalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxDownloadSpeed, maxDownloadSpeed_);
      DARABONBA_PTR_FROM_JSON(WuyingVulFixConfig, wuyingVulFixConfig_);
    };
    UpdateVulScanGlobalConfigRequest() = default ;
    UpdateVulScanGlobalConfigRequest(const UpdateVulScanGlobalConfigRequest &) = default ;
    UpdateVulScanGlobalConfigRequest(UpdateVulScanGlobalConfigRequest &&) = default ;
    UpdateVulScanGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVulScanGlobalConfigRequest() = default ;
    UpdateVulScanGlobalConfigRequest& operator=(const UpdateVulScanGlobalConfigRequest &) = default ;
    UpdateVulScanGlobalConfigRequest& operator=(UpdateVulScanGlobalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WuyingVulFixConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WuyingVulFixConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AntiShutdownSwitch, antiShutdownSwitch_);
        DARABONBA_PTR_TO_JSON(SnapshotSwitch, snapshotSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, WuyingVulFixConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AntiShutdownSwitch, antiShutdownSwitch_);
        DARABONBA_PTR_FROM_JSON(SnapshotSwitch, snapshotSwitch_);
      };
      WuyingVulFixConfig() = default ;
      WuyingVulFixConfig(const WuyingVulFixConfig &) = default ;
      WuyingVulFixConfig(WuyingVulFixConfig &&) = default ;
      WuyingVulFixConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WuyingVulFixConfig() = default ;
      WuyingVulFixConfig& operator=(const WuyingVulFixConfig &) = default ;
      WuyingVulFixConfig& operator=(WuyingVulFixConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->antiShutdownSwitch_ == nullptr
        && this->snapshotSwitch_ == nullptr; };
      // antiShutdownSwitch Field Functions 
      bool hasAntiShutdownSwitch() const { return this->antiShutdownSwitch_ != nullptr;};
      void deleteAntiShutdownSwitch() { this->antiShutdownSwitch_ = nullptr;};
      inline bool getAntiShutdownSwitch() const { DARABONBA_PTR_GET_DEFAULT(antiShutdownSwitch_, false) };
      inline WuyingVulFixConfig& setAntiShutdownSwitch(bool antiShutdownSwitch) { DARABONBA_PTR_SET_VALUE(antiShutdownSwitch_, antiShutdownSwitch) };


      // snapshotSwitch Field Functions 
      bool hasSnapshotSwitch() const { return this->snapshotSwitch_ != nullptr;};
      void deleteSnapshotSwitch() { this->snapshotSwitch_ = nullptr;};
      inline bool getSnapshotSwitch() const { DARABONBA_PTR_GET_DEFAULT(snapshotSwitch_, false) };
      inline WuyingVulFixConfig& setSnapshotSwitch(bool snapshotSwitch) { DARABONBA_PTR_SET_VALUE(snapshotSwitch_, snapshotSwitch) };


    protected:
      // Specifies whether to prohibit shutdown during the fix process to prevent system exceptions caused by shutting down during patch installation. Valid values:
      // - **true**: Prohibit shutdown.
      // - **false**: Do not prohibit shutdown.
      shared_ptr<bool> antiShutdownSwitch_ {};
      // Specifies whether to create a snapshot for the cloud desktop before the fix for rollback in case of fix failure. Valid values:
      // - **true**: Create a snapshot.
      // - **false**: Do not create a snapshot.
      shared_ptr<bool> snapshotSwitch_ {};
    };

    virtual bool empty() const override { return this->maxDownloadSpeed_ == nullptr
        && this->wuyingVulFixConfig_ == nullptr; };
    // maxDownloadSpeed Field Functions 
    bool hasMaxDownloadSpeed() const { return this->maxDownloadSpeed_ != nullptr;};
    void deleteMaxDownloadSpeed() { this->maxDownloadSpeed_ = nullptr;};
    inline int32_t getMaxDownloadSpeed() const { DARABONBA_PTR_GET_DEFAULT(maxDownloadSpeed_, 0) };
    inline UpdateVulScanGlobalConfigRequest& setMaxDownloadSpeed(int32_t maxDownloadSpeed) { DARABONBA_PTR_SET_VALUE(maxDownloadSpeed_, maxDownloadSpeed) };


    // wuyingVulFixConfig Field Functions 
    bool hasWuyingVulFixConfig() const { return this->wuyingVulFixConfig_ != nullptr;};
    void deleteWuyingVulFixConfig() { this->wuyingVulFixConfig_ = nullptr;};
    inline const UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig & getWuyingVulFixConfig() const { DARABONBA_PTR_GET_CONST(wuyingVulFixConfig_, UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig) };
    inline UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig getWuyingVulFixConfig() { DARABONBA_PTR_GET(wuyingVulFixConfig_, UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig) };
    inline UpdateVulScanGlobalConfigRequest& setWuyingVulFixConfig(const UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig & wuyingVulFixConfig) { DARABONBA_PTR_SET_VALUE(wuyingVulFixConfig_, wuyingVulFixConfig) };
    inline UpdateVulScanGlobalConfigRequest& setWuyingVulFixConfig(UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig && wuyingVulFixConfig) { DARABONBA_PTR_SET_RVALUE(wuyingVulFixConfig_, wuyingVulFixConfig) };


  protected:
    // The maximum download rate for vulnerability patches on a single user terminal device. Unit: Byte/s. A value of 0 indicates no speed limit.
    shared_ptr<int32_t> maxDownloadSpeed_ {};
    // The vulnerability fix configuration for WUYING Workspace. This configuration applies only to user terminal devices of the Cloud Desktop type.
    shared_ptr<UpdateVulScanGlobalConfigRequest::WuyingVulFixConfig> wuyingVulFixConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
