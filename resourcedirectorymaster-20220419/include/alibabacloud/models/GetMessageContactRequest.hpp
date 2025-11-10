// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetMessageContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
    };
    GetMessageContactRequest() = default ;
    GetMessageContactRequest(const GetMessageContactRequest &) = default ;
    GetMessageContactRequest(GetMessageContactRequest &&) = default ;
    GetMessageContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactRequest() = default ;
    GetMessageContactRequest& operator=(const GetMessageContactRequest &) = default ;
    GetMessageContactRequest& operator=(GetMessageContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetMessageContactRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


  protected:
    // The ID of the contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
