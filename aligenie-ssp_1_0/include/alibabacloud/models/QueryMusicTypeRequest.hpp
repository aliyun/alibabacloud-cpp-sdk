// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMUSICTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMUSICTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMusicTypeRequestDeviceInfo.hpp>
#include <alibabacloud/models/QueryMusicTypeRequestPayload.hpp>
#include <alibabacloud/models/QueryMusicTypeRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryMusicTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMusicTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMusicTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    QueryMusicTypeRequest() = default ;
    QueryMusicTypeRequest(const QueryMusicTypeRequest &) = default ;
    QueryMusicTypeRequest(QueryMusicTypeRequest &&) = default ;
    QueryMusicTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMusicTypeRequest() = default ;
    QueryMusicTypeRequest& operator=(const QueryMusicTypeRequest &) = default ;
    QueryMusicTypeRequest& operator=(QueryMusicTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const QueryMusicTypeRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, QueryMusicTypeRequestDeviceInfo) };
    inline QueryMusicTypeRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, QueryMusicTypeRequestDeviceInfo) };
    inline QueryMusicTypeRequest& setDeviceInfo(const QueryMusicTypeRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline QueryMusicTypeRequest& setDeviceInfo(QueryMusicTypeRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const QueryMusicTypeRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, QueryMusicTypeRequestPayload) };
    inline QueryMusicTypeRequestPayload payload() { DARABONBA_PTR_GET(payload_, QueryMusicTypeRequestPayload) };
    inline QueryMusicTypeRequest& setPayload(const QueryMusicTypeRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline QueryMusicTypeRequest& setPayload(QueryMusicTypeRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const QueryMusicTypeRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, QueryMusicTypeRequestUserInfo) };
    inline QueryMusicTypeRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, QueryMusicTypeRequestUserInfo) };
    inline QueryMusicTypeRequest& setUserInfo(const QueryMusicTypeRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline QueryMusicTypeRequest& setUserInfo(QueryMusicTypeRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryMusicTypeRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<QueryMusicTypeRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<QueryMusicTypeRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
