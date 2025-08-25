// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYSESSIONMANAGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYSESSIONMANAGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantSettingsResponseBodySessionManagerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBodySessionManagerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SessionManagerEnabled, sessionManagerEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBodySessionManagerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionManagerEnabled, sessionManagerEnabled_);
    };
    DescribeCloudAssistantSettingsResponseBodySessionManagerConfig() = default ;
    DescribeCloudAssistantSettingsResponseBodySessionManagerConfig(const DescribeCloudAssistantSettingsResponseBodySessionManagerConfig &) = default ;
    DescribeCloudAssistantSettingsResponseBodySessionManagerConfig(DescribeCloudAssistantSettingsResponseBodySessionManagerConfig &&) = default ;
    DescribeCloudAssistantSettingsResponseBodySessionManagerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBodySessionManagerConfig() = default ;
    DescribeCloudAssistantSettingsResponseBodySessionManagerConfig& operator=(const DescribeCloudAssistantSettingsResponseBodySessionManagerConfig &) = default ;
    DescribeCloudAssistantSettingsResponseBodySessionManagerConfig& operator=(DescribeCloudAssistantSettingsResponseBodySessionManagerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionManagerEnabled_ != nullptr; };
    // sessionManagerEnabled Field Functions 
    bool hasSessionManagerEnabled() const { return this->sessionManagerEnabled_ != nullptr;};
    void deleteSessionManagerEnabled() { this->sessionManagerEnabled_ = nullptr;};
    inline bool sessionManagerEnabled() const { DARABONBA_PTR_GET_DEFAULT(sessionManagerEnabled_, false) };
    inline DescribeCloudAssistantSettingsResponseBodySessionManagerConfig& setSessionManagerEnabled(bool sessionManagerEnabled) { DARABONBA_PTR_SET_VALUE(sessionManagerEnabled_, sessionManagerEnabled) };


  protected:
    // Specify whether to enable Cloud Assistant Session Manager. Valid values:
    // 
    // *   true: Enables the feature.
    // *   false: Disables the feature.
    // 
    // Note:
    // 
    // *   The feature applies to all regions.
    std::shared_ptr<bool> sessionManagerEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
