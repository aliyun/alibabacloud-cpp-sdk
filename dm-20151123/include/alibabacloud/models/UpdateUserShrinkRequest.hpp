// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class UpdateUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(User, userShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(User, userShrink_);
    };
    UpdateUserShrinkRequest() = default ;
    UpdateUserShrinkRequest(const UpdateUserShrinkRequest &) = default ;
    UpdateUserShrinkRequest(UpdateUserShrinkRequest &&) = default ;
    UpdateUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserShrinkRequest() = default ;
    UpdateUserShrinkRequest& operator=(const UpdateUserShrinkRequest &) = default ;
    UpdateUserShrinkRequest& operator=(UpdateUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userShrink_ == nullptr; };
    // userShrink Field Functions 
    bool hasUserShrink() const { return this->userShrink_ != nullptr;};
    void deleteUserShrink() { this->userShrink_ = nullptr;};
    inline string getUserShrink() const { DARABONBA_PTR_GET_DEFAULT(userShrink_, "") };
    inline UpdateUserShrinkRequest& setUserShrink(string userShrink) { DARABONBA_PTR_SET_VALUE(userShrink_, userShrink) };


  protected:
    // User Information
    shared_ptr<string> userShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
