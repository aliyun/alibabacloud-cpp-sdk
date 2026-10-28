// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContactsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactIds, contactIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactIds, contactIdsShrink_);
    };
    DeleteContactsShrinkRequest() = default ;
    DeleteContactsShrinkRequest(const DeleteContactsShrinkRequest &) = default ;
    DeleteContactsShrinkRequest(DeleteContactsShrinkRequest &&) = default ;
    DeleteContactsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactsShrinkRequest() = default ;
    DeleteContactsShrinkRequest& operator=(const DeleteContactsShrinkRequest &) = default ;
    DeleteContactsShrinkRequest& operator=(DeleteContactsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIdsShrink_ == nullptr; };
    // contactIdsShrink Field Functions 
    bool hasContactIdsShrink() const { return this->contactIdsShrink_ != nullptr;};
    void deleteContactIdsShrink() { this->contactIdsShrink_ = nullptr;};
    inline string getContactIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(contactIdsShrink_, "") };
    inline DeleteContactsShrinkRequest& setContactIdsShrink(string contactIdsShrink) { DARABONBA_PTR_SET_VALUE(contactIdsShrink_, contactIdsShrink) };


  protected:
    // The IDs of the contacts.
    shared_ptr<string> contactIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
