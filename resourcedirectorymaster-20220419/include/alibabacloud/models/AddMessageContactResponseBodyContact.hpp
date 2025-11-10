// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMESSAGECONTACTRESPONSEBODYCONTACT_HPP_
#define ALIBABACLOUD_MODELS_ADDMESSAGECONTACTRESPONSEBODYCONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AddMessageContactResponseBodyContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMessageContactResponseBodyContact& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
    };
    friend void from_json(const Darabonba::Json& j, AddMessageContactResponseBodyContact& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
    };
    AddMessageContactResponseBodyContact() = default ;
    AddMessageContactResponseBodyContact(const AddMessageContactResponseBodyContact &) = default ;
    AddMessageContactResponseBodyContact(AddMessageContactResponseBodyContact &&) = default ;
    AddMessageContactResponseBodyContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMessageContactResponseBodyContact() = default ;
    AddMessageContactResponseBodyContact& operator=(const AddMessageContactResponseBodyContact &) = default ;
    AddMessageContactResponseBodyContact& operator=(AddMessageContactResponseBodyContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->createDate_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline AddMessageContactResponseBodyContact& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline AddMessageContactResponseBodyContact& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The time when the contact was created.
    std::shared_ptr<string> createDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
