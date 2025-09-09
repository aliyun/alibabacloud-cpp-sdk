// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsGtmMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorConfigId, monitorConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDnsGtmMonitorResponseBody() = default ;
    AddDnsGtmMonitorResponseBody(const AddDnsGtmMonitorResponseBody &) = default ;
    AddDnsGtmMonitorResponseBody(AddDnsGtmMonitorResponseBody &&) = default ;
    AddDnsGtmMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmMonitorResponseBody() = default ;
    AddDnsGtmMonitorResponseBody& operator=(const AddDnsGtmMonitorResponseBody &) = default ;
    AddDnsGtmMonitorResponseBody& operator=(AddDnsGtmMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->monitorConfigId_ != nullptr
        && this->requestId_ != nullptr; };
    // monitorConfigId Field Functions 
    bool hasMonitorConfigId() const { return this->monitorConfigId_ != nullptr;};
    void deleteMonitorConfigId() { this->monitorConfigId_ = nullptr;};
    inline string monitorConfigId() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigId_, "") };
    inline AddDnsGtmMonitorResponseBody& setMonitorConfigId(string monitorConfigId) { DARABONBA_PTR_SET_VALUE(monitorConfigId_, monitorConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDnsGtmMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the health check configuration.
    std::shared_ptr<string> monitorConfigId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
