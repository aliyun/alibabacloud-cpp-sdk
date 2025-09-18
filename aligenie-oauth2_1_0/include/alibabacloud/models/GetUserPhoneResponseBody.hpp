// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERPHONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERPHONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetUserPhoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserPhoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserPhoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserPhoneResponseBody() = default ;
    GetUserPhoneResponseBody(const GetUserPhoneResponseBody &) = default ;
    GetUserPhoneResponseBody(GetUserPhoneResponseBody &&) = default ;
    GetUserPhoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserPhoneResponseBody() = default ;
    GetUserPhoneResponseBody& operator=(const GetUserPhoneResponseBody &) = default ;
    GetUserPhoneResponseBody& operator=(GetUserPhoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phone_ != nullptr
        && this->requestId_ != nullptr; };
    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetUserPhoneResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserPhoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> phone_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
