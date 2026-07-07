// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEEDGEMOBILEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEEDGEMOBILEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ActivateEdgeMobileAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateEdgeMobileAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateEdgeMobileAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ActivateEdgeMobileAgentResponseBody() = default ;
    ActivateEdgeMobileAgentResponseBody(const ActivateEdgeMobileAgentResponseBody &) = default ;
    ActivateEdgeMobileAgentResponseBody(ActivateEdgeMobileAgentResponseBody &&) = default ;
    ActivateEdgeMobileAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateEdgeMobileAgentResponseBody() = default ;
    ActivateEdgeMobileAgentResponseBody& operator=(const ActivateEdgeMobileAgentResponseBody &) = default ;
    ActivateEdgeMobileAgentResponseBody& operator=(ActivateEdgeMobileAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(Idempotent, idempotent_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(Idempotent, idempotent_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authToken_ == nullptr
        && this->deviceId_ == nullptr && this->idempotent_ == nullptr && this->instanceId_ == nullptr; };
      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline Data& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // idempotent Field Functions 
      bool hasIdempotent() const { return this->idempotent_ != nullptr;};
      void deleteIdempotent() { this->idempotent_ = nullptr;};
      inline bool getIdempotent() const { DARABONBA_PTR_GET_DEFAULT(idempotent_, false) };
      inline Data& setIdempotent(bool idempotent) { DARABONBA_PTR_SET_VALUE(idempotent_, idempotent) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The assigned API key. The plaintext value is returned only upon the first activation.
      shared_ptr<string> authToken_ {};
      // The device ID.
      shared_ptr<string> deviceId_ {};
      // Indicates whether the request is an idempotent duplicate request.
      shared_ptr<bool> idempotent_ {};
      // The EdgeMobile instance ID.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ActivateEdgeMobileAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ActivateEdgeMobileAgentResponseBody::Data) };
    inline ActivateEdgeMobileAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ActivateEdgeMobileAgentResponseBody::Data) };
    inline ActivateEdgeMobileAgentResponseBody& setData(const ActivateEdgeMobileAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ActivateEdgeMobileAgentResponseBody& setData(ActivateEdgeMobileAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActivateEdgeMobileAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data object.
    shared_ptr<ActivateEdgeMobileAgentResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
