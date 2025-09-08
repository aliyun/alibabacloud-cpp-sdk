// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINSTANCESVALUELISTENERSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAINSTANCESVALUELISTENERSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DataInstancesValueListenersValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataInstancesValueListenersValue& obj) { 
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
    };
    friend void from_json(const Darabonba::Json& j, DataInstancesValueListenersValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
    };
    DataInstancesValueListenersValue() = default ;
    DataInstancesValueListenersValue(const DataInstancesValueListenersValue &) = default ;
    DataInstancesValueListenersValue(DataInstancesValueListenersValue &&) = default ;
    DataInstancesValueListenersValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataInstancesValueListenersValue() = default ;
    DataInstancesValueListenersValue& operator=(const DataInstancesValueListenersValue &) = default ;
    DataInstancesValueListenersValue& operator=(DataInstancesValueListenersValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->protocol_ != nullptr
        && this->port_ != nullptr && this->status_ != nullptr && this->targetPort_ != nullptr && this->certIds_ != nullptr; };
    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DataInstancesValueListenersValue& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DataInstancesValueListenersValue& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataInstancesValueListenersValue& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline DataInstancesValueListenersValue& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string certIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline DataInstancesValueListenersValue& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


  protected:
    // The listener protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The listener port of the NLB instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The status of the NLB listener.
    // 
    // *   **Creating**: The listener is being created.
    // *   **Configuring**: The listener is being configured.
    // *   **Bounded**: The listener runs as expected.
    // *   **Unbinding**: The listener is being deleted.
    // *   **Failed**: The listener is unavailable.
    std::shared_ptr<string> status_ = nullptr;
    // The open ports of the NLB instance.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
    // The server certificates.
    std::shared_ptr<string> certIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
