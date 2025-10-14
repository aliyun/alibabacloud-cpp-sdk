// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDNSGTMMONITORSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDNSGTMMONITORSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetDnsGtmMonitorStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDnsGtmMonitorStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetDnsGtmMonitorStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetDnsGtmMonitorStatusRequest() = default ;
    SetDnsGtmMonitorStatusRequest(const SetDnsGtmMonitorStatusRequest &) = default ;
    SetDnsGtmMonitorStatusRequest(SetDnsGtmMonitorStatusRequest &&) = default ;
    SetDnsGtmMonitorStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDnsGtmMonitorStatusRequest() = default ;
    SetDnsGtmMonitorStatusRequest& operator=(const SetDnsGtmMonitorStatusRequest &) = default ;
    SetDnsGtmMonitorStatusRequest& operator=(SetDnsGtmMonitorStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->monitorConfigId_ == nullptr && return this->status_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetDnsGtmMonitorStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline SetDnsGtmMonitorStatusRequest& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetDnsGtmMonitorStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The language of the values for specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the health check task.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // *   OPEN: enables the health check feature.
    // *   CLOSE: disables the health check feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
