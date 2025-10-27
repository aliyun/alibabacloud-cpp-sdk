// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTDASHBOARDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTDASHBOARDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectDashboardResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectDashboardResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableRuleCount, enableRuleCount_);
      DARABONBA_PTR_TO_JSON(PluginCount, pluginCount_);
      DARABONBA_PTR_TO_JSON(PluginOfflineCount, pluginOfflineCount_);
      DARABONBA_PTR_TO_JSON(PluginOnlineCount, pluginOnlineCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectDashboardResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableRuleCount, enableRuleCount_);
      DARABONBA_PTR_FROM_JSON(PluginCount, pluginCount_);
      DARABONBA_PTR_FROM_JSON(PluginOfflineCount, pluginOfflineCount_);
      DARABONBA_PTR_FROM_JSON(PluginOnlineCount, pluginOnlineCount_);
    };
    GetFileProtectDashboardResponseBodyData() = default ;
    GetFileProtectDashboardResponseBodyData(const GetFileProtectDashboardResponseBodyData &) = default ;
    GetFileProtectDashboardResponseBodyData(GetFileProtectDashboardResponseBodyData &&) = default ;
    GetFileProtectDashboardResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectDashboardResponseBodyData() = default ;
    GetFileProtectDashboardResponseBodyData& operator=(const GetFileProtectDashboardResponseBodyData &) = default ;
    GetFileProtectDashboardResponseBodyData& operator=(GetFileProtectDashboardResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableRuleCount_ == nullptr
        && return this->pluginCount_ == nullptr && return this->pluginOfflineCount_ == nullptr && return this->pluginOnlineCount_ == nullptr; };
    // enableRuleCount Field Functions 
    bool hasEnableRuleCount() const { return this->enableRuleCount_ != nullptr;};
    void deleteEnableRuleCount() { this->enableRuleCount_ = nullptr;};
    inline int32_t enableRuleCount() const { DARABONBA_PTR_GET_DEFAULT(enableRuleCount_, 0) };
    inline GetFileProtectDashboardResponseBodyData& setEnableRuleCount(int32_t enableRuleCount) { DARABONBA_PTR_SET_VALUE(enableRuleCount_, enableRuleCount) };


    // pluginCount Field Functions 
    bool hasPluginCount() const { return this->pluginCount_ != nullptr;};
    void deletePluginCount() { this->pluginCount_ = nullptr;};
    inline int32_t pluginCount() const { DARABONBA_PTR_GET_DEFAULT(pluginCount_, 0) };
    inline GetFileProtectDashboardResponseBodyData& setPluginCount(int32_t pluginCount) { DARABONBA_PTR_SET_VALUE(pluginCount_, pluginCount) };


    // pluginOfflineCount Field Functions 
    bool hasPluginOfflineCount() const { return this->pluginOfflineCount_ != nullptr;};
    void deletePluginOfflineCount() { this->pluginOfflineCount_ = nullptr;};
    inline int32_t pluginOfflineCount() const { DARABONBA_PTR_GET_DEFAULT(pluginOfflineCount_, 0) };
    inline GetFileProtectDashboardResponseBodyData& setPluginOfflineCount(int32_t pluginOfflineCount) { DARABONBA_PTR_SET_VALUE(pluginOfflineCount_, pluginOfflineCount) };


    // pluginOnlineCount Field Functions 
    bool hasPluginOnlineCount() const { return this->pluginOnlineCount_ != nullptr;};
    void deletePluginOnlineCount() { this->pluginOnlineCount_ = nullptr;};
    inline int32_t pluginOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(pluginOnlineCount_, 0) };
    inline GetFileProtectDashboardResponseBodyData& setPluginOnlineCount(int32_t pluginOnlineCount) { DARABONBA_PTR_SET_VALUE(pluginOnlineCount_, pluginOnlineCount) };


  protected:
    // The total number of enabled rules.
    std::shared_ptr<int32_t> enableRuleCount_ = nullptr;
    // The total number of servers on which the Security Center agent is installed.
    std::shared_ptr<int32_t> pluginCount_ = nullptr;
    // The total number of servers on which the Security Center agent is offline.
    std::shared_ptr<int32_t> pluginOfflineCount_ = nullptr;
    // The total number of servers on which the Security Center agent is online.
    std::shared_ptr<int32_t> pluginOnlineCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
