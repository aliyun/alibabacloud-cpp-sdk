// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHILDACCOUNTAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHILDACCOUNTAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ChildAccountAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChildAccountAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(TbOpenId, tbOpenId_);
    };
    friend void from_json(const Darabonba::Json& j, ChildAccountAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(TbOpenId, tbOpenId_);
    };
    ChildAccountAuthRequest() = default ;
    ChildAccountAuthRequest(const ChildAccountAuthRequest &) = default ;
    ChildAccountAuthRequest(ChildAccountAuthRequest &&) = default ;
    ChildAccountAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChildAccountAuthRequest() = default ;
    ChildAccountAuthRequest& operator=(const ChildAccountAuthRequest &) = default ;
    ChildAccountAuthRequest& operator=(ChildAccountAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->appKey_ == nullptr && this->hotelId_ == nullptr && this->tbOpenId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ChildAccountAuthRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ChildAccountAuthRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ChildAccountAuthRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // tbOpenId Field Functions 
    bool hasTbOpenId() const { return this->tbOpenId_ != nullptr;};
    void deleteTbOpenId() { this->tbOpenId_ = nullptr;};
    inline string getTbOpenId() const { DARABONBA_PTR_GET_DEFAULT(tbOpenId_, "") };
    inline ChildAccountAuthRequest& setTbOpenId(string tbOpenId) { DARABONBA_PTR_SET_VALUE(tbOpenId_, tbOpenId) };


  protected:
    // This parameter is required.
    shared_ptr<string> account_ {};
    // This parameter is required.
    shared_ptr<string> appKey_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> tbOpenId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
