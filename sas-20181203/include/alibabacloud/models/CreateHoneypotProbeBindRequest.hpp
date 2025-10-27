// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHoneypotProbeBindRequestBindPortList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotProbeBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
    };
    CreateHoneypotProbeBindRequest() = default ;
    CreateHoneypotProbeBindRequest(const CreateHoneypotProbeBindRequest &) = default ;
    CreateHoneypotProbeBindRequest(CreateHoneypotProbeBindRequest &&) = default ;
    CreateHoneypotProbeBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeBindRequest() = default ;
    CreateHoneypotProbeBindRequest& operator=(const CreateHoneypotProbeBindRequest &) = default ;
    CreateHoneypotProbeBindRequest& operator=(CreateHoneypotProbeBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindPortList_ == nullptr
        && return this->honeypotId_ == nullptr && return this->lang_ == nullptr && return this->probeId_ == nullptr && return this->serviceIpList_ == nullptr; };
    // bindPortList Field Functions 
    bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
    void deleteBindPortList() { this->bindPortList_ = nullptr;};
    inline const vector<CreateHoneypotProbeBindRequestBindPortList> & bindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<CreateHoneypotProbeBindRequestBindPortList>) };
    inline vector<CreateHoneypotProbeBindRequestBindPortList> bindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<CreateHoneypotProbeBindRequestBindPortList>) };
    inline CreateHoneypotProbeBindRequest& setBindPortList(const vector<CreateHoneypotProbeBindRequestBindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
    inline CreateHoneypotProbeBindRequest& setBindPortList(vector<CreateHoneypotProbeBindRequestBindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline CreateHoneypotProbeBindRequest& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateHoneypotProbeBindRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline CreateHoneypotProbeBindRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // serviceIpList Field Functions 
    bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
    void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
    inline const vector<string> & serviceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
    inline vector<string> serviceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
    inline CreateHoneypotProbeBindRequest& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
    inline CreateHoneypotProbeBindRequest& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


  protected:
    // The ports that are bound to the probe.
    std::shared_ptr<vector<CreateHoneypotProbeBindRequestBindPortList>> bindPortList_ = nullptr;
    // The honeypot ID.
    // 
    // >  You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
    std::shared_ptr<string> honeypotId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The probe ID.
    // 
    // >  You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    std::shared_ptr<string> probeId_ = nullptr;
    // The IP addresses that are monitored.
    std::shared_ptr<vector<string>> serviceIpList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
