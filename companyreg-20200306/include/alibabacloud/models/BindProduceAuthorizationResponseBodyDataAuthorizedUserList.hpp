// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONRESPONSEBODYDATAAUTHORIZEDUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONRESPONSEBODYDATAAUTHORIZEDUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class BindProduceAuthorizationResponseBodyDataAuthorizedUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindProduceAuthorizationResponseBodyDataAuthorizedUserList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountValidType, accountValidType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, BindProduceAuthorizationResponseBodyDataAuthorizedUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountValidType, accountValidType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    BindProduceAuthorizationResponseBodyDataAuthorizedUserList() = default ;
    BindProduceAuthorizationResponseBodyDataAuthorizedUserList(const BindProduceAuthorizationResponseBodyDataAuthorizedUserList &) = default ;
    BindProduceAuthorizationResponseBodyDataAuthorizedUserList(BindProduceAuthorizationResponseBodyDataAuthorizedUserList &&) = default ;
    BindProduceAuthorizationResponseBodyDataAuthorizedUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindProduceAuthorizationResponseBodyDataAuthorizedUserList() = default ;
    BindProduceAuthorizationResponseBodyDataAuthorizedUserList& operator=(const BindProduceAuthorizationResponseBodyDataAuthorizedUserList &) = default ;
    BindProduceAuthorizationResponseBodyDataAuthorizedUserList& operator=(BindProduceAuthorizationResponseBodyDataAuthorizedUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountValidType_ == nullptr
        && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // accountValidType Field Functions 
    bool hasAccountValidType() const { return this->accountValidType_ != nullptr;};
    void deleteAccountValidType() { this->accountValidType_ = nullptr;};
    inline int32_t accountValidType() const { DARABONBA_PTR_GET_DEFAULT(accountValidType_, 0) };
    inline BindProduceAuthorizationResponseBodyDataAuthorizedUserList& setAccountValidType(int32_t accountValidType) { DARABONBA_PTR_SET_VALUE(accountValidType_, accountValidType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BindProduceAuthorizationResponseBodyDataAuthorizedUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline BindProduceAuthorizationResponseBodyDataAuthorizedUserList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int32_t> accountValidType_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
