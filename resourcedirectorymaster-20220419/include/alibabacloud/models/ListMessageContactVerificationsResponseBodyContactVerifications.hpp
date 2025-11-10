// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECONTACTVERIFICATIONSRESPONSEBODYCONTACTVERIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECONTACTVERIFICATIONSRESPONSEBODYCONTACTVERIFICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListMessageContactVerificationsResponseBodyContactVerifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageContactVerificationsResponseBodyContactVerifications& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageContactVerificationsResponseBodyContactVerifications& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ListMessageContactVerificationsResponseBodyContactVerifications() = default ;
    ListMessageContactVerificationsResponseBodyContactVerifications(const ListMessageContactVerificationsResponseBodyContactVerifications &) = default ;
    ListMessageContactVerificationsResponseBodyContactVerifications(ListMessageContactVerificationsResponseBodyContactVerifications &&) = default ;
    ListMessageContactVerificationsResponseBodyContactVerifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageContactVerificationsResponseBodyContactVerifications() = default ;
    ListMessageContactVerificationsResponseBodyContactVerifications& operator=(const ListMessageContactVerificationsResponseBodyContactVerifications &) = default ;
    ListMessageContactVerificationsResponseBodyContactVerifications& operator=(ListMessageContactVerificationsResponseBodyContactVerifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->target_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListMessageContactVerificationsResponseBodyContactVerifications& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListMessageContactVerificationsResponseBodyContactVerifications& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The object that is used for verification. Valid values:
    // 
    // - Mobile phone number
    // - Email address
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
