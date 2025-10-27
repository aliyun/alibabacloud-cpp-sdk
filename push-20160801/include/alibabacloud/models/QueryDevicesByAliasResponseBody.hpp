// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESBYALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESBYALIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDevicesByAliasResponseBodyDeviceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDevicesByAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicesByAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicesByAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDevicesByAliasResponseBody() = default ;
    QueryDevicesByAliasResponseBody(const QueryDevicesByAliasResponseBody &) = default ;
    QueryDevicesByAliasResponseBody(QueryDevicesByAliasResponseBody &&) = default ;
    QueryDevicesByAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicesByAliasResponseBody() = default ;
    QueryDevicesByAliasResponseBody& operator=(const QueryDevicesByAliasResponseBody &) = default ;
    QueryDevicesByAliasResponseBody& operator=(QueryDevicesByAliasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const QueryDevicesByAliasResponseBodyDeviceIds & deviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, QueryDevicesByAliasResponseBodyDeviceIds) };
    inline QueryDevicesByAliasResponseBodyDeviceIds deviceIds() { DARABONBA_PTR_GET(deviceIds_, QueryDevicesByAliasResponseBodyDeviceIds) };
    inline QueryDevicesByAliasResponseBody& setDeviceIds(const QueryDevicesByAliasResponseBodyDeviceIds & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline QueryDevicesByAliasResponseBody& setDeviceIds(QueryDevicesByAliasResponseBodyDeviceIds && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDevicesByAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryDevicesByAliasResponseBodyDeviceIds> deviceIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
