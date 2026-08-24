// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVULSCANGLOBALCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVULSCANGLOBALCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateVulScanGlobalConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVulScanGlobalConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxDownloadSpeed, maxDownloadSpeed_);
      DARABONBA_PTR_TO_JSON(WuyingVulFixConfig, wuyingVulFixConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVulScanGlobalConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxDownloadSpeed, maxDownloadSpeed_);
      DARABONBA_PTR_FROM_JSON(WuyingVulFixConfig, wuyingVulFixConfigShrink_);
    };
    UpdateVulScanGlobalConfigShrinkRequest() = default ;
    UpdateVulScanGlobalConfigShrinkRequest(const UpdateVulScanGlobalConfigShrinkRequest &) = default ;
    UpdateVulScanGlobalConfigShrinkRequest(UpdateVulScanGlobalConfigShrinkRequest &&) = default ;
    UpdateVulScanGlobalConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVulScanGlobalConfigShrinkRequest() = default ;
    UpdateVulScanGlobalConfigShrinkRequest& operator=(const UpdateVulScanGlobalConfigShrinkRequest &) = default ;
    UpdateVulScanGlobalConfigShrinkRequest& operator=(UpdateVulScanGlobalConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxDownloadSpeed_ == nullptr
        && this->wuyingVulFixConfigShrink_ == nullptr; };
    // maxDownloadSpeed Field Functions 
    bool hasMaxDownloadSpeed() const { return this->maxDownloadSpeed_ != nullptr;};
    void deleteMaxDownloadSpeed() { this->maxDownloadSpeed_ = nullptr;};
    inline int32_t getMaxDownloadSpeed() const { DARABONBA_PTR_GET_DEFAULT(maxDownloadSpeed_, 0) };
    inline UpdateVulScanGlobalConfigShrinkRequest& setMaxDownloadSpeed(int32_t maxDownloadSpeed) { DARABONBA_PTR_SET_VALUE(maxDownloadSpeed_, maxDownloadSpeed) };


    // wuyingVulFixConfigShrink Field Functions 
    bool hasWuyingVulFixConfigShrink() const { return this->wuyingVulFixConfigShrink_ != nullptr;};
    void deleteWuyingVulFixConfigShrink() { this->wuyingVulFixConfigShrink_ = nullptr;};
    inline string getWuyingVulFixConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(wuyingVulFixConfigShrink_, "") };
    inline UpdateVulScanGlobalConfigShrinkRequest& setWuyingVulFixConfigShrink(string wuyingVulFixConfigShrink) { DARABONBA_PTR_SET_VALUE(wuyingVulFixConfigShrink_, wuyingVulFixConfigShrink) };


  protected:
    // The maximum download rate for vulnerability patches on a single user terminal device. Unit: Byte/s. A value of 0 indicates no speed limit.
    shared_ptr<int32_t> maxDownloadSpeed_ {};
    // The vulnerability fix configuration for WUYING Workspace. This configuration applies only to user terminal devices of the Cloud Desktop type.
    shared_ptr<string> wuyingVulFixConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
