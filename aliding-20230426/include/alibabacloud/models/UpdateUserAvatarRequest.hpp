// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERAVATARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERAVATARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateUserAvatarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserAvatarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarMediaId, avatarMediaId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserAvatarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarMediaId, avatarMediaId_);
    };
    UpdateUserAvatarRequest() = default ;
    UpdateUserAvatarRequest(const UpdateUserAvatarRequest &) = default ;
    UpdateUserAvatarRequest(UpdateUserAvatarRequest &&) = default ;
    UpdateUserAvatarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserAvatarRequest() = default ;
    UpdateUserAvatarRequest& operator=(const UpdateUserAvatarRequest &) = default ;
    UpdateUserAvatarRequest& operator=(UpdateUserAvatarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarMediaId_ == nullptr; };
    // avatarMediaId Field Functions 
    bool hasAvatarMediaId() const { return this->avatarMediaId_ != nullptr;};
    void deleteAvatarMediaId() { this->avatarMediaId_ = nullptr;};
    inline string avatarMediaId() const { DARABONBA_PTR_GET_DEFAULT(avatarMediaId_, "") };
    inline UpdateUserAvatarRequest& setAvatarMediaId(string avatarMediaId) { DARABONBA_PTR_SET_VALUE(avatarMediaId_, avatarMediaId) };


  protected:
    std::shared_ptr<string> avatarMediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
