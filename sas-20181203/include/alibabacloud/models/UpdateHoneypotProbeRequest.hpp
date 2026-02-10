// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arp, arp_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Ping, ping_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arp, arp_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Ping, ping_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
    };
    UpdateHoneypotProbeRequest() = default ;
    UpdateHoneypotProbeRequest(const UpdateHoneypotProbeRequest &) = default ;
    UpdateHoneypotProbeRequest(UpdateHoneypotProbeRequest &&) = default ;
    UpdateHoneypotProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotProbeRequest() = default ;
    UpdateHoneypotProbeRequest& operator=(const UpdateHoneypotProbeRequest &) = default ;
    UpdateHoneypotProbeRequest& operator=(UpdateHoneypotProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arp_ == nullptr
        && this->displayName_ == nullptr && this->lang_ == nullptr && this->ping_ == nullptr && this->probeId_ == nullptr && this->serviceIpList_ == nullptr; };
    // arp Field Functions 
    bool hasArp() const { return this->arp_ != nullptr;};
    void deleteArp() { this->arp_ = nullptr;};
    inline bool getArp() const { DARABONBA_PTR_GET_DEFAULT(arp_, false) };
    inline UpdateHoneypotProbeRequest& setArp(bool arp) { DARABONBA_PTR_SET_VALUE(arp_, arp) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateHoneypotProbeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateHoneypotProbeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ping Field Functions 
    bool hasPing() const { return this->ping_ != nullptr;};
    void deletePing() { this->ping_ = nullptr;};
    inline bool getPing() const { DARABONBA_PTR_GET_DEFAULT(ping_, false) };
    inline UpdateHoneypotProbeRequest& setPing(bool ping) { DARABONBA_PTR_SET_VALUE(ping_, ping) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline UpdateHoneypotProbeRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // serviceIpList Field Functions 
    bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
    void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
    inline const vector<string> & getServiceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
    inline vector<string> getServiceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
    inline UpdateHoneypotProbeRequest& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
    inline UpdateHoneypotProbeRequest& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


  protected:
    // Specifies whether address resolution protocol (ARP) is enabled for the check type.
    shared_ptr<bool> arp_ {};
    // The name of the probe.
    shared_ptr<string> displayName_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    shared_ptr<string> lang_ {};
    // Specifies whether ping is enabled for the check type.
    shared_ptr<bool> ping_ {};
    // The ID of the probe.
    // 
    // > You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    // 
    // This parameter is required.
    shared_ptr<string> probeId_ {};
    // The IP addresses that are monitored.
    shared_ptr<vector<string>> serviceIpList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
