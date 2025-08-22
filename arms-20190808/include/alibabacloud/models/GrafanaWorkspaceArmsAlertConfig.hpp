// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEARMSALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEARMSALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceArmsAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceArmsAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(armsAlertsEnable, armsAlertsEnable_);
      DARABONBA_PTR_TO_JSON(armsAlertsWebhookUrl, armsAlertsWebhookUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceArmsAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(armsAlertsEnable, armsAlertsEnable_);
      DARABONBA_PTR_FROM_JSON(armsAlertsWebhookUrl, armsAlertsWebhookUrl_);
    };
    GrafanaWorkspaceArmsAlertConfig() = default ;
    GrafanaWorkspaceArmsAlertConfig(const GrafanaWorkspaceArmsAlertConfig &) = default ;
    GrafanaWorkspaceArmsAlertConfig(GrafanaWorkspaceArmsAlertConfig &&) = default ;
    GrafanaWorkspaceArmsAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceArmsAlertConfig() = default ;
    GrafanaWorkspaceArmsAlertConfig& operator=(const GrafanaWorkspaceArmsAlertConfig &) = default ;
    GrafanaWorkspaceArmsAlertConfig& operator=(GrafanaWorkspaceArmsAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->armsAlertsEnable_ != nullptr
        && this->armsAlertsWebhookUrl_ != nullptr; };
    // armsAlertsEnable Field Functions 
    bool hasArmsAlertsEnable() const { return this->armsAlertsEnable_ != nullptr;};
    void deleteArmsAlertsEnable() { this->armsAlertsEnable_ = nullptr;};
    inline string armsAlertsEnable() const { DARABONBA_PTR_GET_DEFAULT(armsAlertsEnable_, "") };
    inline GrafanaWorkspaceArmsAlertConfig& setArmsAlertsEnable(string armsAlertsEnable) { DARABONBA_PTR_SET_VALUE(armsAlertsEnable_, armsAlertsEnable) };


    // armsAlertsWebhookUrl Field Functions 
    bool hasArmsAlertsWebhookUrl() const { return this->armsAlertsWebhookUrl_ != nullptr;};
    void deleteArmsAlertsWebhookUrl() { this->armsAlertsWebhookUrl_ = nullptr;};
    inline string armsAlertsWebhookUrl() const { DARABONBA_PTR_GET_DEFAULT(armsAlertsWebhookUrl_, "") };
    inline GrafanaWorkspaceArmsAlertConfig& setArmsAlertsWebhookUrl(string armsAlertsWebhookUrl) { DARABONBA_PTR_SET_VALUE(armsAlertsWebhookUrl_, armsAlertsWebhookUrl) };


  protected:
    std::shared_ptr<string> armsAlertsEnable_ = nullptr;
    std::shared_ptr<string> armsAlertsWebhookUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
