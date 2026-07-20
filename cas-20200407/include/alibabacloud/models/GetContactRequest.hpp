// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
    };
    GetContactRequest() = default ;
    GetContactRequest(const GetContactRequest &) = default ;
    GetContactRequest(GetContactRequest &&) = default ;
    GetContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactRequest() = default ;
    GetContactRequest& operator=(const GetContactRequest &) = default ;
    GetContactRequest& operator=(GetContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline GetContactRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


  protected:
    // The contact ID.
    shared_ptr<int64_t> contactId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
