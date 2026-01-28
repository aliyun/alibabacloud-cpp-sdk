// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMAXYEAROFSERVERLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKMAXYEAROFSERVERLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckMaxYearOfServerLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMaxYearOfServerLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckAction, checkAction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMaxYearOfServerLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckAction, checkAction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    CheckMaxYearOfServerLockRequest() = default ;
    CheckMaxYearOfServerLockRequest(const CheckMaxYearOfServerLockRequest &) = default ;
    CheckMaxYearOfServerLockRequest(CheckMaxYearOfServerLockRequest &&) = default ;
    CheckMaxYearOfServerLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMaxYearOfServerLockRequest() = default ;
    CheckMaxYearOfServerLockRequest& operator=(const CheckMaxYearOfServerLockRequest &) = default ;
    CheckMaxYearOfServerLockRequest& operator=(CheckMaxYearOfServerLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkAction_ == nullptr
        && this->domainName_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // checkAction Field Functions 
    bool hasCheckAction() const { return this->checkAction_ != nullptr;};
    void deleteCheckAction() { this->checkAction_ = nullptr;};
    inline string getCheckAction() const { DARABONBA_PTR_GET_DEFAULT(checkAction_, "") };
    inline CheckMaxYearOfServerLockRequest& setCheckAction(string checkAction) { DARABONBA_PTR_SET_VALUE(checkAction_, checkAction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CheckMaxYearOfServerLockRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckMaxYearOfServerLockRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline CheckMaxYearOfServerLockRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> checkAction_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
