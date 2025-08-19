// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMessageContactResponseBodyContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetMessageContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageContactResponseBody() = default ;
    GetMessageContactResponseBody(const GetMessageContactResponseBody &) = default ;
    GetMessageContactResponseBody(GetMessageContactResponseBody &&) = default ;
    GetMessageContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactResponseBody() = default ;
    GetMessageContactResponseBody& operator=(const GetMessageContactResponseBody &) = default ;
    GetMessageContactResponseBody& operator=(GetMessageContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contact_ != nullptr
        && this->requestId_ != nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const GetMessageContactResponseBodyContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, GetMessageContactResponseBodyContact) };
    inline GetMessageContactResponseBodyContact contact() { DARABONBA_PTR_GET(contact_, GetMessageContactResponseBodyContact) };
    inline GetMessageContactResponseBody& setContact(const GetMessageContactResponseBodyContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline GetMessageContactResponseBody& setContact(GetMessageContactResponseBodyContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the contact.
    std::shared_ptr<GetMessageContactResponseBodyContact> contact_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
