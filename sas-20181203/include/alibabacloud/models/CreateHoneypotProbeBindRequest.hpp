// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEBINDREQUEST_HPP_
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
    class BindPortList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindPortList& obj) { 
        DARABONBA_PTR_TO_JSON(BindPort, bindPort_);
        DARABONBA_PTR_TO_JSON(EndPort, endPort_);
        DARABONBA_PTR_TO_JSON(Fixed, fixed_);
        DARABONBA_PTR_TO_JSON(Proto, proto_);
        DARABONBA_PTR_TO_JSON(StartPort, startPort_);
        DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      };
      friend void from_json(const Darabonba::Json& j, BindPortList& obj) { 
        DARABONBA_PTR_FROM_JSON(BindPort, bindPort_);
        DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
        DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
        DARABONBA_PTR_FROM_JSON(Proto, proto_);
        DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
        DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      };
      BindPortList() = default ;
      BindPortList(const BindPortList &) = default ;
      BindPortList(BindPortList &&) = default ;
      BindPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindPortList() = default ;
      BindPortList& operator=(const BindPortList &) = default ;
      BindPortList& operator=(BindPortList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindPort_ == nullptr
        && this->endPort_ == nullptr && this->fixed_ == nullptr && this->proto_ == nullptr && this->startPort_ == nullptr && this->targetPort_ == nullptr; };
      // bindPort Field Functions 
      bool hasBindPort() const { return this->bindPort_ != nullptr;};
      void deleteBindPort() { this->bindPort_ = nullptr;};
      inline bool getBindPort() const { DARABONBA_PTR_GET_DEFAULT(bindPort_, false) };
      inline BindPortList& setBindPort(bool bindPort) { DARABONBA_PTR_SET_VALUE(bindPort_, bindPort) };


      // endPort Field Functions 
      bool hasEndPort() const { return this->endPort_ != nullptr;};
      void deleteEndPort() { this->endPort_ = nullptr;};
      inline int32_t getEndPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
      inline BindPortList& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


      // fixed Field Functions 
      bool hasFixed() const { return this->fixed_ != nullptr;};
      void deleteFixed() { this->fixed_ = nullptr;};
      inline bool getFixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, false) };
      inline BindPortList& setFixed(bool fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


      // proto Field Functions 
      bool hasProto() const { return this->proto_ != nullptr;};
      void deleteProto() { this->proto_ = nullptr;};
      inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
      inline BindPortList& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


      // startPort Field Functions 
      bool hasStartPort() const { return this->startPort_ != nullptr;};
      void deleteStartPort() { this->startPort_ = nullptr;};
      inline int32_t getStartPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
      inline BindPortList& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


      // targetPort Field Functions 
      bool hasTargetPort() const { return this->targetPort_ != nullptr;};
      void deleteTargetPort() { this->targetPort_ = nullptr;};
      inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
      inline BindPortList& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    protected:
      // Specifies whether to bind the port. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> bindPort_ {};
      // The end port on which the probe monitors.
      shared_ptr<int32_t> endPort_ {};
      // Specifies whether the port is a fixed port. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> fixed_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> proto_ {};
      // The start port on which the probe monitors.
      shared_ptr<int32_t> startPort_ {};
      // The destination port.
      shared_ptr<int32_t> targetPort_ {};
    };

    virtual bool empty() const override { return this->bindPortList_ == nullptr
        && this->honeypotId_ == nullptr && this->lang_ == nullptr && this->probeId_ == nullptr && this->serviceIpList_ == nullptr; };
    // bindPortList Field Functions 
    bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
    void deleteBindPortList() { this->bindPortList_ = nullptr;};
    inline const vector<CreateHoneypotProbeBindRequest::BindPortList> & getBindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<CreateHoneypotProbeBindRequest::BindPortList>) };
    inline vector<CreateHoneypotProbeBindRequest::BindPortList> getBindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<CreateHoneypotProbeBindRequest::BindPortList>) };
    inline CreateHoneypotProbeBindRequest& setBindPortList(const vector<CreateHoneypotProbeBindRequest::BindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
    inline CreateHoneypotProbeBindRequest& setBindPortList(vector<CreateHoneypotProbeBindRequest::BindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline CreateHoneypotProbeBindRequest& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateHoneypotProbeBindRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline CreateHoneypotProbeBindRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // serviceIpList Field Functions 
    bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
    void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
    inline const vector<string> & getServiceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
    inline vector<string> getServiceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
    inline CreateHoneypotProbeBindRequest& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
    inline CreateHoneypotProbeBindRequest& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


  protected:
    // The ports that are bound to the probe.
    shared_ptr<vector<CreateHoneypotProbeBindRequest::BindPortList>> bindPortList_ {};
    // The honeypot ID.
    // 
    // >  You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
    shared_ptr<string> honeypotId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The probe ID.
    // 
    // >  You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    shared_ptr<string> probeId_ {};
    // The IP addresses that are monitored.
    shared_ptr<vector<string>> serviceIpList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
