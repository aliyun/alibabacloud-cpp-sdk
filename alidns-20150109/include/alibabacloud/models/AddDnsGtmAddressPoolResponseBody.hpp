// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMADDRESSPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsGtmAddressPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDnsGtmAddressPoolResponseBody() = default ;
    AddDnsGtmAddressPoolResponseBody(const AddDnsGtmAddressPoolResponseBody &) = default ;
    AddDnsGtmAddressPoolResponseBody(AddDnsGtmAddressPoolResponseBody &&) = default ;
    AddDnsGtmAddressPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmAddressPoolResponseBody() = default ;
    AddDnsGtmAddressPoolResponseBody& operator=(const AddDnsGtmAddressPoolResponseBody &) = default ;
    AddDnsGtmAddressPoolResponseBody& operator=(AddDnsGtmAddressPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPoolId_ != nullptr
        && this->monitorConfigId_ != nullptr && this->requestId_ != nullptr; };
    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline AddDnsGtmAddressPoolResponseBody& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline AddDnsGtmAddressPoolResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDnsGtmAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the address pool.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The ID of the health check configuration.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
