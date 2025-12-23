// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPCDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPCDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIpcDeviceInfoResponseBodyDeviceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetIpcDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpcDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpcDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetIpcDeviceInfoResponseBody() = default ;
    GetIpcDeviceInfoResponseBody(const GetIpcDeviceInfoResponseBody &) = default ;
    GetIpcDeviceInfoResponseBody(GetIpcDeviceInfoResponseBody &&) = default ;
    GetIpcDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpcDeviceInfoResponseBody() = default ;
    GetIpcDeviceInfoResponseBody& operator=(const GetIpcDeviceInfoResponseBody &) = default ;
    GetIpcDeviceInfoResponseBody& operator=(GetIpcDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceInfos_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // deviceInfos Field Functions 
    bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
    void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
    inline const vector<GetIpcDeviceInfoResponseBodyDeviceInfos> & deviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, vector<GetIpcDeviceInfoResponseBodyDeviceInfos>) };
    inline vector<GetIpcDeviceInfoResponseBodyDeviceInfos> deviceInfos() { DARABONBA_PTR_GET(deviceInfos_, vector<GetIpcDeviceInfoResponseBodyDeviceInfos>) };
    inline GetIpcDeviceInfoResponseBody& setDeviceInfos(const vector<GetIpcDeviceInfoResponseBodyDeviceInfos> & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
    inline GetIpcDeviceInfoResponseBody& setDeviceInfos(vector<GetIpcDeviceInfoResponseBodyDeviceInfos> && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpcDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetIpcDeviceInfoResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<GetIpcDeviceInfoResponseBodyDeviceInfos>> deviceInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
