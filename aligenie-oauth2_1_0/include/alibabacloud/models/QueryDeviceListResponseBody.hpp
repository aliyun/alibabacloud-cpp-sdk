// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDeviceListResponseBodyDeviceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class QueryDeviceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceList, deviceList_);
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceList, deviceList_);
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDeviceListResponseBody() = default ;
    QueryDeviceListResponseBody(const QueryDeviceListResponseBody &) = default ;
    QueryDeviceListResponseBody(QueryDeviceListResponseBody &&) = default ;
    QueryDeviceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceListResponseBody() = default ;
    QueryDeviceListResponseBody& operator=(const QueryDeviceListResponseBody &) = default ;
    QueryDeviceListResponseBody& operator=(QueryDeviceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceList_ != nullptr
        && this->encodeKey_ != nullptr && this->encodeType_ != nullptr && this->requestId_ != nullptr; };
    // deviceList Field Functions 
    bool hasDeviceList() const { return this->deviceList_ != nullptr;};
    void deleteDeviceList() { this->deviceList_ = nullptr;};
    inline const vector<QueryDeviceListResponseBodyDeviceList> & deviceList() const { DARABONBA_PTR_GET_CONST(deviceList_, vector<QueryDeviceListResponseBodyDeviceList>) };
    inline vector<QueryDeviceListResponseBodyDeviceList> deviceList() { DARABONBA_PTR_GET(deviceList_, vector<QueryDeviceListResponseBodyDeviceList>) };
    inline QueryDeviceListResponseBody& setDeviceList(const vector<QueryDeviceListResponseBodyDeviceList> & deviceList) { DARABONBA_PTR_SET_VALUE(deviceList_, deviceList) };
    inline QueryDeviceListResponseBody& setDeviceList(vector<QueryDeviceListResponseBodyDeviceList> && deviceList) { DARABONBA_PTR_SET_RVALUE(deviceList_, deviceList) };


    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline QueryDeviceListResponseBody& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline QueryDeviceListResponseBody& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeviceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryDeviceListResponseBodyDeviceList>> deviceList_ = nullptr;
    std::shared_ptr<string> encodeKey_ = nullptr;
    std::shared_ptr<string> encodeType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
