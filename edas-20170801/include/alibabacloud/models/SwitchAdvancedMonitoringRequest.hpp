// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHADVANCEDMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHADVANCEDMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class SwitchAdvancedMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchAdvancedMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EnableAdvancedMonitoring, enableAdvancedMonitoring_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchAdvancedMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableAdvancedMonitoring, enableAdvancedMonitoring_);
    };
    SwitchAdvancedMonitoringRequest() = default ;
    SwitchAdvancedMonitoringRequest(const SwitchAdvancedMonitoringRequest &) = default ;
    SwitchAdvancedMonitoringRequest(SwitchAdvancedMonitoringRequest &&) = default ;
    SwitchAdvancedMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchAdvancedMonitoringRequest() = default ;
    SwitchAdvancedMonitoringRequest& operator=(const SwitchAdvancedMonitoringRequest &) = default ;
    SwitchAdvancedMonitoringRequest& operator=(SwitchAdvancedMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->enableAdvancedMonitoring_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SwitchAdvancedMonitoringRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableAdvancedMonitoring Field Functions 
    bool hasEnableAdvancedMonitoring() const { return this->enableAdvancedMonitoring_ != nullptr;};
    void deleteEnableAdvancedMonitoring() { this->enableAdvancedMonitoring_ = nullptr;};
    inline bool enableAdvancedMonitoring() const { DARABONBA_PTR_GET_DEFAULT(enableAdvancedMonitoring_, false) };
    inline SwitchAdvancedMonitoringRequest& setEnableAdvancedMonitoring(bool enableAdvancedMonitoring) { DARABONBA_PTR_SET_VALUE(enableAdvancedMonitoring_, enableAdvancedMonitoring) };


  protected:
    // The ID of the application for which you want to query or configure the advanced application monitoring feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to enable the advanced application monitoring feature. Valid values:
    // 
    // *   true: enables the advanced application monitoring feature.
    // *   false: disables the advanced application monitoring feature.
    // 
    // If you call this operation to query the status of the advanced application monitoring feature, you do not need to specify this parameter.
    std::shared_ptr<bool> enableAdvancedMonitoring_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
