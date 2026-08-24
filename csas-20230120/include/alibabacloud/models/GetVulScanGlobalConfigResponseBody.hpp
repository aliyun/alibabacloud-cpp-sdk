// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULSCANGLOBALCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVULSCANGLOBALCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetVulScanGlobalConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulScanGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxDownloadSpeed, maxDownloadSpeed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WuyingVulFixConfig, wuyingVulFixConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulScanGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxDownloadSpeed, maxDownloadSpeed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WuyingVulFixConfig, wuyingVulFixConfig_);
    };
    GetVulScanGlobalConfigResponseBody() = default ;
    GetVulScanGlobalConfigResponseBody(const GetVulScanGlobalConfigResponseBody &) = default ;
    GetVulScanGlobalConfigResponseBody(GetVulScanGlobalConfigResponseBody &&) = default ;
    GetVulScanGlobalConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulScanGlobalConfigResponseBody() = default ;
    GetVulScanGlobalConfigResponseBody& operator=(const GetVulScanGlobalConfigResponseBody &) = default ;
    GetVulScanGlobalConfigResponseBody& operator=(GetVulScanGlobalConfigResponseBody &&) = default ;
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
      // - **true**: Shutdown is prohibited.
      // - **false**: Shutdown is not prohibited.
      shared_ptr<bool> antiShutdownSwitch_ {};
      // Specifies whether to create a snapshot for the cloud desktop before the fix, which can be used for rollback if the fix fails. Valid values:
      // - **true**: A snapshot is created.
      // - **false**: No snapshot is created.
      shared_ptr<bool> snapshotSwitch_ {};
    };

    virtual bool empty() const override { return this->maxDownloadSpeed_ == nullptr
        && this->requestId_ == nullptr && this->wuyingVulFixConfig_ == nullptr; };
    // maxDownloadSpeed Field Functions 
    bool hasMaxDownloadSpeed() const { return this->maxDownloadSpeed_ != nullptr;};
    void deleteMaxDownloadSpeed() { this->maxDownloadSpeed_ = nullptr;};
    inline int32_t getMaxDownloadSpeed() const { DARABONBA_PTR_GET_DEFAULT(maxDownloadSpeed_, 0) };
    inline GetVulScanGlobalConfigResponseBody& setMaxDownloadSpeed(int32_t maxDownloadSpeed) { DARABONBA_PTR_SET_VALUE(maxDownloadSpeed_, maxDownloadSpeed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVulScanGlobalConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // wuyingVulFixConfig Field Functions 
    bool hasWuyingVulFixConfig() const { return this->wuyingVulFixConfig_ != nullptr;};
    void deleteWuyingVulFixConfig() { this->wuyingVulFixConfig_ = nullptr;};
    inline const GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig & getWuyingVulFixConfig() const { DARABONBA_PTR_GET_CONST(wuyingVulFixConfig_, GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig) };
    inline GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig getWuyingVulFixConfig() { DARABONBA_PTR_GET(wuyingVulFixConfig_, GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig) };
    inline GetVulScanGlobalConfigResponseBody& setWuyingVulFixConfig(const GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig & wuyingVulFixConfig) { DARABONBA_PTR_SET_VALUE(wuyingVulFixConfig_, wuyingVulFixConfig) };
    inline GetVulScanGlobalConfigResponseBody& setWuyingVulFixConfig(GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig && wuyingVulFixConfig) { DARABONBA_PTR_SET_RVALUE(wuyingVulFixConfig_, wuyingVulFixConfig) };


  protected:
    // The maximum download speed for vulnerability patches on a single user terminal device. Unit: bytes per second. A value of 0 indicates no speed limit.
    shared_ptr<int32_t> maxDownloadSpeed_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The vulnerability fix configuration for WUYING Workspace. This configuration takes effect only on user terminal devices of the Cloud Desktop type.
    shared_ptr<GetVulScanGlobalConfigResponseBody::WuyingVulFixConfig> wuyingVulFixConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
