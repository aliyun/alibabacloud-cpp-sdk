// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTERCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTERCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class GetRegisterCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisterCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegisterCode, registerCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisterCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegisterCode, registerCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRegisterCodeResponseBody() = default ;
    GetRegisterCodeResponseBody(const GetRegisterCodeResponseBody &) = default ;
    GetRegisterCodeResponseBody(GetRegisterCodeResponseBody &&) = default ;
    GetRegisterCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisterCodeResponseBody() = default ;
    GetRegisterCodeResponseBody& operator=(const GetRegisterCodeResponseBody &) = default ;
    GetRegisterCodeResponseBody& operator=(GetRegisterCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registerCode_ == nullptr
        && this->requestId_ == nullptr; };
    // registerCode Field Functions 
    bool hasRegisterCode() const { return this->registerCode_ != nullptr;};
    void deleteRegisterCode() { this->registerCode_ = nullptr;};
    inline string getRegisterCode() const { DARABONBA_PTR_GET_DEFAULT(registerCode_, "") };
    inline GetRegisterCodeResponseBody& setRegisterCode(string registerCode) { DARABONBA_PTR_SET_VALUE(registerCode_, registerCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegisterCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The registration code of the CA certificate.
    shared_ptr<string> registerCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
