// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMAILADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMAILADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CreateMailAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMailAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMailAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMailAddressResponseBody() = default ;
    CreateMailAddressResponseBody(const CreateMailAddressResponseBody &) = default ;
    CreateMailAddressResponseBody(CreateMailAddressResponseBody &&) = default ;
    CreateMailAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMailAddressResponseBody() = default ;
    CreateMailAddressResponseBody& operator=(const CreateMailAddressResponseBody &) = default ;
    CreateMailAddressResponseBody& operator=(CreateMailAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mailAddressId_ == nullptr
        && this->requestId_ == nullptr; };
    // mailAddressId Field Functions 
    bool hasMailAddressId() const { return this->mailAddressId_ != nullptr;};
    void deleteMailAddressId() { this->mailAddressId_ = nullptr;};
    inline string getMailAddressId() const { DARABONBA_PTR_GET_DEFAULT(mailAddressId_, "") };
    inline CreateMailAddressResponseBody& setMailAddressId(string mailAddressId) { DARABONBA_PTR_SET_VALUE(mailAddressId_, mailAddressId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMailAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Mail address ID
    shared_ptr<string> mailAddressId_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
