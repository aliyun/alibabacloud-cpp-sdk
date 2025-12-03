// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMCOMMENTRESPONSEBODYCOMMENTUSER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMCOMMENTRESPONSEBODYCOMMENTUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateWorkitemCommentResponseBodyCommentUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkitemCommentResponseBodyCommentUser& obj) { 
      DARABONBA_PTR_TO_JSON(account, account_);
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(realName, realName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkitemCommentResponseBodyCommentUser& obj) { 
      DARABONBA_PTR_FROM_JSON(account, account_);
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(realName, realName_);
    };
    UpdateWorkitemCommentResponseBodyCommentUser() = default ;
    UpdateWorkitemCommentResponseBodyCommentUser(const UpdateWorkitemCommentResponseBodyCommentUser &) = default ;
    UpdateWorkitemCommentResponseBodyCommentUser(UpdateWorkitemCommentResponseBodyCommentUser &&) = default ;
    UpdateWorkitemCommentResponseBodyCommentUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkitemCommentResponseBodyCommentUser() = default ;
    UpdateWorkitemCommentResponseBodyCommentUser& operator=(const UpdateWorkitemCommentResponseBodyCommentUser &) = default ;
    UpdateWorkitemCommentResponseBodyCommentUser& operator=(UpdateWorkitemCommentResponseBodyCommentUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->avatar_ == nullptr && return this->displayName_ == nullptr && return this->identifier_ == nullptr && return this->nickName_ == nullptr && return this->realName_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline UpdateWorkitemCommentResponseBodyCommentUser& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline UpdateWorkitemCommentResponseBodyCommentUser& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateWorkitemCommentResponseBodyCommentUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline UpdateWorkitemCommentResponseBodyCommentUser& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline UpdateWorkitemCommentResponseBodyCommentUser& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline UpdateWorkitemCommentResponseBodyCommentUser& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


  protected:
    std::shared_ptr<string> account_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
