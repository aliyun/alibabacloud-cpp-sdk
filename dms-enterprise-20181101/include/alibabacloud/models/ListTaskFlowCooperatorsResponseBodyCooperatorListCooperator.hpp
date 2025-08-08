// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODYCOOPERATORLISTCOOPERATOR_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODYCOOPERATORLISTCOOPERATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator() = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator(const ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator &) = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator(ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator &&) = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator() = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& operator=(const ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator &) = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& operator=(ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->loginName_ != nullptr && this->nickName_ != nullptr && this->userId_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The email address of the user.
    std::shared_ptr<string> email_ = nullptr;
    // The username.
    std::shared_ptr<string> loginName_ = nullptr;
    // The alias of the user.
    std::shared_ptr<string> nickName_ = nullptr;
    // userId.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
