// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKACCOUNTTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKACCOUNTTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class CheckAccountTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAccountTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAccountTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CheckAccountTypeResponseBody() = default ;
    CheckAccountTypeResponseBody(const CheckAccountTypeResponseBody &) = default ;
    CheckAccountTypeResponseBody(CheckAccountTypeResponseBody &&) = default ;
    CheckAccountTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAccountTypeResponseBody() = default ;
    CheckAccountTypeResponseBody& operator=(const CheckAccountTypeResponseBody &) = default ;
    CheckAccountTypeResponseBody& operator=(CheckAccountTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->link_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline CheckAccountTypeResponseBody& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAccountTypeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAccountTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckAccountTypeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> link_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
