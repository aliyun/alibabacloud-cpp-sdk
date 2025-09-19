// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUESTHONEYPOTBINDLISTBINDPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUESTHONEYPOTBINDLISTBINDPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotProbeRequestHoneypotBindListBindPortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeRequestHoneypotBindListBindPortList& obj) { 
      DARABONBA_PTR_TO_JSON(BindPort, bindPort_);
      DARABONBA_PTR_TO_JSON(EndPort, endPort_);
      DARABONBA_PTR_TO_JSON(Fixed, fixed_);
      DARABONBA_PTR_TO_JSON(StartPort, startPort_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeRequestHoneypotBindListBindPortList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindPort, bindPort_);
      DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
      DARABONBA_PTR_FROM_JSON(Fixed, fixed_);
      DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    CreateHoneypotProbeRequestHoneypotBindListBindPortList() = default ;
    CreateHoneypotProbeRequestHoneypotBindListBindPortList(const CreateHoneypotProbeRequestHoneypotBindListBindPortList &) = default ;
    CreateHoneypotProbeRequestHoneypotBindListBindPortList(CreateHoneypotProbeRequestHoneypotBindListBindPortList &&) = default ;
    CreateHoneypotProbeRequestHoneypotBindListBindPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeRequestHoneypotBindListBindPortList() = default ;
    CreateHoneypotProbeRequestHoneypotBindListBindPortList& operator=(const CreateHoneypotProbeRequestHoneypotBindListBindPortList &) = default ;
    CreateHoneypotProbeRequestHoneypotBindListBindPortList& operator=(CreateHoneypotProbeRequestHoneypotBindListBindPortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindPort_ != nullptr
        && this->endPort_ != nullptr && this->fixed_ != nullptr && this->startPort_ != nullptr && this->targetPort_ != nullptr; };
    // bindPort Field Functions 
    bool hasBindPort() const { return this->bindPort_ != nullptr;};
    void deleteBindPort() { this->bindPort_ = nullptr;};
    inline bool bindPort() const { DARABONBA_PTR_GET_DEFAULT(bindPort_, false) };
    inline CreateHoneypotProbeRequestHoneypotBindListBindPortList& setBindPort(bool bindPort) { DARABONBA_PTR_SET_VALUE(bindPort_, bindPort) };


    // endPort Field Functions 
    bool hasEndPort() const { return this->endPort_ != nullptr;};
    void deleteEndPort() { this->endPort_ = nullptr;};
    inline int32_t endPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
    inline CreateHoneypotProbeRequestHoneypotBindListBindPortList& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


    // fixed Field Functions 
    bool hasFixed() const { return this->fixed_ != nullptr;};
    void deleteFixed() { this->fixed_ = nullptr;};
    inline bool fixed() const { DARABONBA_PTR_GET_DEFAULT(fixed_, false) };
    inline CreateHoneypotProbeRequestHoneypotBindListBindPortList& setFixed(bool fixed) { DARABONBA_PTR_SET_VALUE(fixed_, fixed) };


    // startPort Field Functions 
    bool hasStartPort() const { return this->startPort_ != nullptr;};
    void deleteStartPort() { this->startPort_ = nullptr;};
    inline int32_t startPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
    inline CreateHoneypotProbeRequestHoneypotBindListBindPortList& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline CreateHoneypotProbeRequestHoneypotBindListBindPortList& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // Specifies whether to bind a port. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> bindPort_ = nullptr;
    // The end of the port range.
    std::shared_ptr<int32_t> endPort_ = nullptr;
    // Specifies whether the port is a fixed port. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<bool> fixed_ = nullptr;
    // The start of the port range.
    std::shared_ptr<int32_t> startPort_ = nullptr;
    // The destination port.
    // 
    // > If **HoneypotId** is specified, this parameter is required.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
