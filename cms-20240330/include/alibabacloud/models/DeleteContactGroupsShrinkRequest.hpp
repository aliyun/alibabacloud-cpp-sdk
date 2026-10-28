// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTGROUPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTGROUPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContactGroupsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroupIds, contactGroupIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroupIds, contactGroupIdsShrink_);
    };
    DeleteContactGroupsShrinkRequest() = default ;
    DeleteContactGroupsShrinkRequest(const DeleteContactGroupsShrinkRequest &) = default ;
    DeleteContactGroupsShrinkRequest(DeleteContactGroupsShrinkRequest &&) = default ;
    DeleteContactGroupsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactGroupsShrinkRequest() = default ;
    DeleteContactGroupsShrinkRequest& operator=(const DeleteContactGroupsShrinkRequest &) = default ;
    DeleteContactGroupsShrinkRequest& operator=(DeleteContactGroupsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupIdsShrink_ == nullptr; };
    // contactGroupIdsShrink Field Functions 
    bool hasContactGroupIdsShrink() const { return this->contactGroupIdsShrink_ != nullptr;};
    void deleteContactGroupIdsShrink() { this->contactGroupIdsShrink_ = nullptr;};
    inline string getContactGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIdsShrink_, "") };
    inline DeleteContactGroupsShrinkRequest& setContactGroupIdsShrink(string contactGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(contactGroupIdsShrink_, contactGroupIdsShrink) };


  protected:
    // The IDs of the contact groups.
    // 
    // This parameter is required.
    shared_ptr<string> contactGroupIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
