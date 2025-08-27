// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVUSERSAVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISVUSERSAVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IsvUserSaveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvUserSaveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(user_list, userListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, IsvUserSaveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(user_list, userListShrink_);
    };
    IsvUserSaveShrinkRequest() = default ;
    IsvUserSaveShrinkRequest(const IsvUserSaveShrinkRequest &) = default ;
    IsvUserSaveShrinkRequest(IsvUserSaveShrinkRequest &&) = default ;
    IsvUserSaveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvUserSaveShrinkRequest() = default ;
    IsvUserSaveShrinkRequest& operator=(const IsvUserSaveShrinkRequest &) = default ;
    IsvUserSaveShrinkRequest& operator=(IsvUserSaveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userListShrink_ != nullptr; };
    // userListShrink Field Functions 
    bool hasUserListShrink() const { return this->userListShrink_ != nullptr;};
    void deleteUserListShrink() { this->userListShrink_ = nullptr;};
    inline string userListShrink() const { DARABONBA_PTR_GET_DEFAULT(userListShrink_, "") };
    inline IsvUserSaveShrinkRequest& setUserListShrink(string userListShrink) { DARABONBA_PTR_SET_VALUE(userListShrink_, userListShrink) };


  protected:
    std::shared_ptr<string> userListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
