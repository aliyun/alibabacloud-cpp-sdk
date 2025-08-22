// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateContactResponseBodyAlertContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertContact, alertContact_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertContact, alertContact_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateContactResponseBody() = default ;
    CreateOrUpdateContactResponseBody(const CreateOrUpdateContactResponseBody &) = default ;
    CreateOrUpdateContactResponseBody(CreateOrUpdateContactResponseBody &&) = default ;
    CreateOrUpdateContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateContactResponseBody() = default ;
    CreateOrUpdateContactResponseBody& operator=(const CreateOrUpdateContactResponseBody &) = default ;
    CreateOrUpdateContactResponseBody& operator=(CreateOrUpdateContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertContact_ != nullptr
        && this->requestId_ != nullptr; };
    // alertContact Field Functions 
    bool hasAlertContact() const { return this->alertContact_ != nullptr;};
    void deleteAlertContact() { this->alertContact_ = nullptr;};
    inline const CreateOrUpdateContactResponseBodyAlertContact & alertContact() const { DARABONBA_PTR_GET_CONST(alertContact_, CreateOrUpdateContactResponseBodyAlertContact) };
    inline CreateOrUpdateContactResponseBodyAlertContact alertContact() { DARABONBA_PTR_GET(alertContact_, CreateOrUpdateContactResponseBodyAlertContact) };
    inline CreateOrUpdateContactResponseBody& setAlertContact(const CreateOrUpdateContactResponseBodyAlertContact & alertContact) { DARABONBA_PTR_SET_VALUE(alertContact_, alertContact) };
    inline CreateOrUpdateContactResponseBody& setAlertContact(CreateOrUpdateContactResponseBodyAlertContact && alertContact) { DARABONBA_PTR_SET_RVALUE(alertContact_, alertContact) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object of the alert contact.
    std::shared_ptr<CreateOrUpdateContactResponseBodyAlertContact> alertContact_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
