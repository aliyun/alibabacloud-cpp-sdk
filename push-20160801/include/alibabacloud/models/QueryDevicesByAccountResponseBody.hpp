// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDevicesByAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicesByAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicesByAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDevicesByAccountResponseBody() = default ;
    QueryDevicesByAccountResponseBody(const QueryDevicesByAccountResponseBody &) = default ;
    QueryDevicesByAccountResponseBody(QueryDevicesByAccountResponseBody &&) = default ;
    QueryDevicesByAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicesByAccountResponseBody() = default ;
    QueryDevicesByAccountResponseBody& operator=(const QueryDevicesByAccountResponseBody &) = default ;
    QueryDevicesByAccountResponseBody& operator=(QueryDevicesByAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceIds& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      };
      DeviceIds() = default ;
      DeviceIds(const DeviceIds &) = default ;
      DeviceIds(DeviceIds &&) = default ;
      DeviceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceIds() = default ;
      DeviceIds& operator=(const DeviceIds &) = default ;
      DeviceIds& operator=(DeviceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceId_ == nullptr; };
      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline const vector<string> & getDeviceId() const { DARABONBA_PTR_GET_CONST(deviceId_, vector<string>) };
      inline vector<string> getDeviceId() { DARABONBA_PTR_GET(deviceId_, vector<string>) };
      inline DeviceIds& setDeviceId(const vector<string> & deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };
      inline DeviceIds& setDeviceId(vector<string> && deviceId) { DARABONBA_PTR_SET_RVALUE(deviceId_, deviceId) };


    protected:
      shared_ptr<vector<string>> deviceId_ {};
    };

    virtual bool empty() const override { return this->deviceIds_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const QueryDevicesByAccountResponseBody::DeviceIds & getDeviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, QueryDevicesByAccountResponseBody::DeviceIds) };
    inline QueryDevicesByAccountResponseBody::DeviceIds getDeviceIds() { DARABONBA_PTR_GET(deviceIds_, QueryDevicesByAccountResponseBody::DeviceIds) };
    inline QueryDevicesByAccountResponseBody& setDeviceIds(const QueryDevicesByAccountResponseBody::DeviceIds & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline QueryDevicesByAccountResponseBody& setDeviceIds(QueryDevicesByAccountResponseBody::DeviceIds && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDevicesByAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryDevicesByAccountResponseBody::DeviceIds> deviceIds_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
