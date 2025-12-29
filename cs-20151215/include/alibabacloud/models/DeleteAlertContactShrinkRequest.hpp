// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteAlertContactShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact_ids, contactIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_ids, contactIdsShrink_);
    };
    DeleteAlertContactShrinkRequest() = default ;
    DeleteAlertContactShrinkRequest(const DeleteAlertContactShrinkRequest &) = default ;
    DeleteAlertContactShrinkRequest(DeleteAlertContactShrinkRequest &&) = default ;
    DeleteAlertContactShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactShrinkRequest() = default ;
    DeleteAlertContactShrinkRequest& operator=(const DeleteAlertContactShrinkRequest &) = default ;
    DeleteAlertContactShrinkRequest& operator=(DeleteAlertContactShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIdsShrink_ == nullptr; };
    // contactIdsShrink Field Functions 
    bool hasContactIdsShrink() const { return this->contactIdsShrink_ != nullptr;};
    void deleteContactIdsShrink() { this->contactIdsShrink_ = nullptr;};
    inline string getContactIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(contactIdsShrink_, "") };
    inline DeleteAlertContactShrinkRequest& setContactIdsShrink(string contactIdsShrink) { DARABONBA_PTR_SET_VALUE(contactIdsShrink_, contactIdsShrink) };


  protected:
    // The list of alert contact IDs.
    // 
    // This parameter is required.
    shared_ptr<string> contactIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
