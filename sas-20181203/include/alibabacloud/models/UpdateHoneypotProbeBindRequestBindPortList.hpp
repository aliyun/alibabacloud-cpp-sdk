// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTPROBEBINDREQUESTBINDPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTPROBEBINDREQUESTBINDPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotProbeBindRequestBindPortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotProbeBindRequestBindPortList& obj) { 
      DARABONBA_PTR_TO_JSON(BindPort, bindPort_);
      DARABONBA_PTR_TO_JSON(EndPort, endPort_);
      DARABONBA_PTR_TO_JSON(Fixed, fixed_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(StartPort, startPort_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotProbeBindRequestBindPortList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindPort, bindPort_);
      DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
      DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    UpdateHoneypotProbeBindRequestBindPortList() = default ;
    UpdateHoneypotProbeBindRequestBindPortList(const UpdateHoneypotProbeBindRequestBindPortList &) = default ;
    UpdateHoneypotProbeBindRequestBindPortList(UpdateHoneypotProbeBindRequestBindPortList &&) = default ;
    UpdateHoneypotProbeBindRequestBindPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotProbeBindRequestBindPortList() = default ;
    UpdateHoneypotProbeBindRequestBindPortList& operator=(const UpdateHoneypotProbeBindRequestBindPortList &) = default ;
    UpdateHoneypotProbeBindRequestBindPortList& operator=(UpdateHoneypotProbeBindRequestBindPortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindPort_ == nullptr
        && return this->endPort_ == nullptr && return this->fixed_ == nullptr && return this->id_ == nullptr && return this->proto_ == nullptr && return this->startPort_ == nullptr
        && return this->targetPort_ == nullptr; };
    // bindPort Field Functions 
    bool hasBindPort() const { return this->bindPort_ != nullptr;};
    void deleteBindPort() { this->bindPort_ = nullptr;};
    inline bool bindPort() const { DARABONBA_PTR_GET_DEFAULT(bindPort_, false) };
    inline UpdateHoneypotProbeBindRequestBindPortList& setBindPort(bool bindPort) { DARABONBA_PTR_SET_VALUE(bindPort_, bindPort) };


    // endPort Field Functions 
    bool hasEndPort() const { return this->endPort_ != nullptr;};
    void deleteEndPort() { this->endPort_ = nullptr;};
    inline int32_t endPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
    inline UpdateHoneypotProbeBindRequestBindPortList& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


    // fixed Field Functions 
    bool hasFixed() const { return this->fixed_ != nullptr;};
    void deleteFixed() { this->fixed_ = nullptr;};
    inline bool fixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, false) };
    inline UpdateHoneypotProbeBindRequestBindPortList& setFixed(bool fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateHoneypotProbeBindRequestBindPortList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline UpdateHoneypotProbeBindRequestBindPortList& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // startPort Field Functions 
    bool hasStartPort() const { return this->startPort_ != nullptr;};
    void deleteStartPort() { this->startPort_ = nullptr;};
    inline int32_t startPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
    inline UpdateHoneypotProbeBindRequestBindPortList& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline UpdateHoneypotProbeBindRequestBindPortList& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // Specifies whether to bind a port. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bindPort_ = nullptr;
    // The end port on which the probe monitors.
    std::shared_ptr<int32_t> endPort_ = nullptr;
    // Specifies whether the port is fixed. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<bool> fixed_ = nullptr;
    // The UUID of the port.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> proto_ = nullptr;
    // The start port on which the probe monitors.
    std::shared_ptr<int32_t> startPort_ = nullptr;
    // The destination port.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
