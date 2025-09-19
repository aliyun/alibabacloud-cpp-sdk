// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATAHONEYPOTPROBEBINDLISTBINDPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATAHONEYPOTPROBEBINDLISTBINDPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& obj) { 
      DARABONBA_PTR_TO_JSON(BindPort, bindPort_);
      DARABONBA_PTR_TO_JSON(EndPort, endPort_);
      DARABONBA_PTR_TO_JSON(Err, err_);
      DARABONBA_PTR_TO_JSON(Fixed, fixed_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(StartPort, startPort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindPort, bindPort_);
      DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
      DARABONBA_PTR_FROM_JSON(Err, err_);
      DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList() = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList(const GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList &) = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList(GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList &&) = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList() = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& operator=(const GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList &) = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& operator=(GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindPort_ != nullptr
        && this->endPort_ != nullptr && this->err_ != nullptr && this->fixed_ != nullptr && this->id_ != nullptr && this->msg_ != nullptr
        && this->proto_ != nullptr && this->startPort_ != nullptr && this->status_ != nullptr && this->targetPort_ != nullptr; };
    // bindPort Field Functions 
    bool hasBindPort() const { return this->bindPort_ != nullptr;};
    void deleteBindPort() { this->bindPort_ = nullptr;};
    inline bool bindPort() const { DARABONBA_PTR_GET_DEFAULT(bindPort_, false) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setBindPort(bool bindPort) { DARABONBA_PTR_SET_VALUE(bindPort_, bindPort) };


    // endPort Field Functions 
    bool hasEndPort() const { return this->endPort_ != nullptr;};
    void deleteEndPort() { this->endPort_ = nullptr;};
    inline int32_t endPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


    // err Field Functions 
    bool hasErr() const { return this->err_ != nullptr;};
    void deleteErr() { this->err_ = nullptr;};
    inline string err() const { DARABONBA_PTR_GET_DEFAULT(err_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setErr(string err) { DARABONBA_PTR_SET_VALUE(err_, err) };


    // fixed Field Functions 
    bool hasFixed() const { return this->fixed_ != nullptr;};
    void deleteFixed() { this->fixed_ = nullptr;};
    inline bool fixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, false) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setFixed(bool fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // startPort Field Functions 
    bool hasStartPort() const { return this->startPort_ != nullptr;};
    void deleteStartPort() { this->startPort_ = nullptr;};
    inline int32_t startPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // Indicates whether the port is bound.
    std::shared_ptr<bool> bindPort_ = nullptr;
    // The end port on which the probe monitors.
    std::shared_ptr<int32_t> endPort_ = nullptr;
    // The error that is returned if an error occurred in the port of the honeypot that is bound to the probe.
    std::shared_ptr<string> err_ = nullptr;
    // Indicates whether the port is a fixed port.
    std::shared_ptr<bool> fixed_ = nullptr;
    // The unique ID of the port binding record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The error message that is returned if an error occurred in the port of the honeypot that is bound to the probe.
    std::shared_ptr<string> msg_ = nullptr;
    // The type of the protocol.
    std::shared_ptr<string> proto_ = nullptr;
    // The start port on which the probe monitors.
    std::shared_ptr<int32_t> startPort_ = nullptr;
    // The status of the port of the honeypot that is bound to the probe. Valid values:
    // 
    // *   **1**: abnormal
    // *   **3**: normal
    std::shared_ptr<int32_t> status_ = nullptr;
    // The destination port.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
