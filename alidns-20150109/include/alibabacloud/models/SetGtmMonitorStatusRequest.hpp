// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETGTMMONITORSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETGTMMONITORSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetGtmMonitorStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetGtmMonitorStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetGtmMonitorStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetGtmMonitorStatusRequest() = default ;
    SetGtmMonitorStatusRequest(const SetGtmMonitorStatusRequest &) = default ;
    SetGtmMonitorStatusRequest(SetGtmMonitorStatusRequest &&) = default ;
    SetGtmMonitorStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetGtmMonitorStatusRequest() = default ;
    SetGtmMonitorStatusRequest& operator=(const SetGtmMonitorStatusRequest &) = default ;
    SetGtmMonitorStatusRequest& operator=(SetGtmMonitorStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->monitorConfigId_ != nullptr && this->status_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetGtmMonitorStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline SetGtmMonitorStatusRequest& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetGtmMonitorStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The language used by the user.
    std::shared_ptr<string> lang_ = nullptr;
    // The health check ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // Specifies whether health check is enabled for the address pool. Valid values:
    // 
    // *   **OPEN**: Enabled
    // *   **CLOSE**: Disabled
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
