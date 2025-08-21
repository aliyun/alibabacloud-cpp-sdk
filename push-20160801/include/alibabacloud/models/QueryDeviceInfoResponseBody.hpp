// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDeviceInfoResponseBodyDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDeviceInfoResponseBody() = default ;
    QueryDeviceInfoResponseBody(const QueryDeviceInfoResponseBody &) = default ;
    QueryDeviceInfoResponseBody(QueryDeviceInfoResponseBody &&) = default ;
    QueryDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceInfoResponseBody() = default ;
    QueryDeviceInfoResponseBody& operator=(const QueryDeviceInfoResponseBody &) = default ;
    QueryDeviceInfoResponseBody& operator=(QueryDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const QueryDeviceInfoResponseBodyDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, QueryDeviceInfoResponseBodyDeviceInfo) };
    inline QueryDeviceInfoResponseBodyDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, QueryDeviceInfoResponseBodyDeviceInfo) };
    inline QueryDeviceInfoResponseBody& setDeviceInfo(const QueryDeviceInfoResponseBodyDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline QueryDeviceInfoResponseBody& setDeviceInfo(QueryDeviceInfoResponseBodyDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryDeviceInfoResponseBodyDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
