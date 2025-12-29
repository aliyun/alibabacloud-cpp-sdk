// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteAlertContactGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact_group_ids, contactGroupIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_group_ids, contactGroupIdsShrink_);
    };
    DeleteAlertContactGroupShrinkRequest() = default ;
    DeleteAlertContactGroupShrinkRequest(const DeleteAlertContactGroupShrinkRequest &) = default ;
    DeleteAlertContactGroupShrinkRequest(DeleteAlertContactGroupShrinkRequest &&) = default ;
    DeleteAlertContactGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactGroupShrinkRequest() = default ;
    DeleteAlertContactGroupShrinkRequest& operator=(const DeleteAlertContactGroupShrinkRequest &) = default ;
    DeleteAlertContactGroupShrinkRequest& operator=(DeleteAlertContactGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupIdsShrink_ == nullptr; };
    // contactGroupIdsShrink Field Functions 
    bool hasContactGroupIdsShrink() const { return this->contactGroupIdsShrink_ != nullptr;};
    void deleteContactGroupIdsShrink() { this->contactGroupIdsShrink_ = nullptr;};
    inline string getContactGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIdsShrink_, "") };
    inline DeleteAlertContactGroupShrinkRequest& setContactGroupIdsShrink(string contactGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(contactGroupIdsShrink_, contactGroupIdsShrink) };


  protected:
    // The list of alert contact group IDs.
    // 
    // This parameter is required.
    shared_ptr<string> contactGroupIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
