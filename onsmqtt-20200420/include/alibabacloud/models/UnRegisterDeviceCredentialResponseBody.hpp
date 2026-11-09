// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNREGISTERDEVICECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNREGISTERDEVICECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class UnRegisterDeviceCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnRegisterDeviceCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnRegisterDeviceCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnRegisterDeviceCredentialResponseBody() = default ;
    UnRegisterDeviceCredentialResponseBody(const UnRegisterDeviceCredentialResponseBody &) = default ;
    UnRegisterDeviceCredentialResponseBody(UnRegisterDeviceCredentialResponseBody &&) = default ;
    UnRegisterDeviceCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnRegisterDeviceCredentialResponseBody() = default ;
    UnRegisterDeviceCredentialResponseBody& operator=(const UnRegisterDeviceCredentialResponseBody &) = default ;
    UnRegisterDeviceCredentialResponseBody& operator=(UnRegisterDeviceCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnRegisterDeviceCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique ID that the system generates for the request. This parameter is a common parameter.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
