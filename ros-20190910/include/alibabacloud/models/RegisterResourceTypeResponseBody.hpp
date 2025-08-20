// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERRESOURCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERRESOURCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class RegisterResourceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterResourceTypeResponseBody() = default ;
    RegisterResourceTypeResponseBody(const RegisterResourceTypeResponseBody &) = default ;
    RegisterResourceTypeResponseBody(RegisterResourceTypeResponseBody &&) = default ;
    RegisterResourceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterResourceTypeResponseBody() = default ;
    RegisterResourceTypeResponseBody& operator=(const RegisterResourceTypeResponseBody &) = default ;
    RegisterResourceTypeResponseBody& operator=(RegisterResourceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->registrationId_ != nullptr
        && this->requestId_ != nullptr; };
    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string registrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline RegisterResourceTypeResponseBody& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterResourceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the registration record. You can call the [ListResourceTypeRegistrations](https://help.aliyun.com/document_detail/2330740.html) operation to query registration records.
    std::shared_ptr<string> registrationId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
