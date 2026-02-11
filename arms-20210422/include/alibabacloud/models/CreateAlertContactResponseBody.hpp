// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateAlertContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAlertContactResponseBody() = default ;
    CreateAlertContactResponseBody(const CreateAlertContactResponseBody &) = default ;
    CreateAlertContactResponseBody(CreateAlertContactResponseBody &&) = default ;
    CreateAlertContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertContactResponseBody() = default ;
    CreateAlertContactResponseBody& operator=(const CreateAlertContactResponseBody &) = default ;
    CreateAlertContactResponseBody& operator=(CreateAlertContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->requestId_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline CreateAlertContactResponseBody& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlertContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> contactId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
