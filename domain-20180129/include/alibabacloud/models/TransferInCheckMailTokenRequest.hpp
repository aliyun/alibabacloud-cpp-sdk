// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class TransferInCheckMailTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferInCheckMailTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, TransferInCheckMailTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    TransferInCheckMailTokenRequest() = default ;
    TransferInCheckMailTokenRequest(const TransferInCheckMailTokenRequest &) = default ;
    TransferInCheckMailTokenRequest(TransferInCheckMailTokenRequest &&) = default ;
    TransferInCheckMailTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferInCheckMailTokenRequest() = default ;
    TransferInCheckMailTokenRequest& operator=(const TransferInCheckMailTokenRequest &) = default ;
    TransferInCheckMailTokenRequest& operator=(TransferInCheckMailTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->token_ == nullptr && this->userClientIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline TransferInCheckMailTokenRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline TransferInCheckMailTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline TransferInCheckMailTokenRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> token_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
