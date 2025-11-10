// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMESSAGECONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMESSAGECONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddMessageContactResponseBodyContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AddMessageContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMessageContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMessageContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddMessageContactResponseBody() = default ;
    AddMessageContactResponseBody(const AddMessageContactResponseBody &) = default ;
    AddMessageContactResponseBody(AddMessageContactResponseBody &&) = default ;
    AddMessageContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMessageContactResponseBody() = default ;
    AddMessageContactResponseBody& operator=(const AddMessageContactResponseBody &) = default ;
    AddMessageContactResponseBody& operator=(AddMessageContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contact_ == nullptr
        && return this->requestId_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const AddMessageContactResponseBodyContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, AddMessageContactResponseBodyContact) };
    inline AddMessageContactResponseBodyContact contact() { DARABONBA_PTR_GET(contact_, AddMessageContactResponseBodyContact) };
    inline AddMessageContactResponseBody& setContact(const AddMessageContactResponseBodyContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline AddMessageContactResponseBody& setContact(AddMessageContactResponseBodyContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMessageContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the contact.
    std::shared_ptr<AddMessageContactResponseBodyContact> contact_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
