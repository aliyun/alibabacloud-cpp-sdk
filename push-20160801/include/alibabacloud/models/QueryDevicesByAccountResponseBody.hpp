// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDevicesByAccountResponseBodyDeviceIds.hpp>
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
    virtual bool empty() const override { return this->deviceIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const QueryDevicesByAccountResponseBodyDeviceIds & deviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, QueryDevicesByAccountResponseBodyDeviceIds) };
    inline QueryDevicesByAccountResponseBodyDeviceIds deviceIds() { DARABONBA_PTR_GET(deviceIds_, QueryDevicesByAccountResponseBodyDeviceIds) };
    inline QueryDevicesByAccountResponseBody& setDeviceIds(const QueryDevicesByAccountResponseBodyDeviceIds & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline QueryDevicesByAccountResponseBody& setDeviceIds(QueryDevicesByAccountResponseBodyDeviceIds && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDevicesByAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryDevicesByAccountResponseBodyDeviceIds> deviceIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
