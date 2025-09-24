// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateAgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAttr, accountAttr_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(EnterpriseName, enterpriseName_);
      DARABONBA_PTR_TO_JSON(FirstName, firstName_);
      DARABONBA_PTR_TO_JSON(LastName, lastName_);
      DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_TO_JSON(NationCode, nationCode_);
      DARABONBA_PTR_TO_JSON(Postcode, postcode_);
      DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAttr, accountAttr_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(EnterpriseName, enterpriseName_);
      DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
      DARABONBA_PTR_FROM_JSON(LastName, lastName_);
      DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_FROM_JSON(NationCode, nationCode_);
      DARABONBA_PTR_FROM_JSON(Postcode, postcode_);
      DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
    };
    CreateAgAccountRequest() = default ;
    CreateAgAccountRequest(const CreateAgAccountRequest &) = default ;
    CreateAgAccountRequest(CreateAgAccountRequest &&) = default ;
    CreateAgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgAccountRequest() = default ;
    CreateAgAccountRequest& operator=(const CreateAgAccountRequest &) = default ;
    CreateAgAccountRequest& operator=(CreateAgAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountAttr_ != nullptr
        && this->cityName_ != nullptr && this->enterpriseName_ != nullptr && this->firstName_ != nullptr && this->lastName_ != nullptr && this->loginEmail_ != nullptr
        && this->nationCode_ != nullptr && this->postcode_ != nullptr && this->provinceName_ != nullptr; };
    // accountAttr Field Functions 
    bool hasAccountAttr() const { return this->accountAttr_ != nullptr;};
    void deleteAccountAttr() { this->accountAttr_ = nullptr;};
    inline string accountAttr() const { DARABONBA_PTR_GET_DEFAULT(accountAttr_, "") };
    inline CreateAgAccountRequest& setAccountAttr(string accountAttr) { DARABONBA_PTR_SET_VALUE(accountAttr_, accountAttr) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline CreateAgAccountRequest& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string enterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline CreateAgAccountRequest& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // firstName Field Functions 
    bool hasFirstName() const { return this->firstName_ != nullptr;};
    void deleteFirstName() { this->firstName_ = nullptr;};
    inline string firstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
    inline CreateAgAccountRequest& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


    // lastName Field Functions 
    bool hasLastName() const { return this->lastName_ != nullptr;};
    void deleteLastName() { this->lastName_ = nullptr;};
    inline string lastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
    inline CreateAgAccountRequest& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    // loginEmail Field Functions 
    bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
    void deleteLoginEmail() { this->loginEmail_ = nullptr;};
    inline string loginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
    inline CreateAgAccountRequest& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


    // nationCode Field Functions 
    bool hasNationCode() const { return this->nationCode_ != nullptr;};
    void deleteNationCode() { this->nationCode_ = nullptr;};
    inline string nationCode() const { DARABONBA_PTR_GET_DEFAULT(nationCode_, "") };
    inline CreateAgAccountRequest& setNationCode(string nationCode) { DARABONBA_PTR_SET_VALUE(nationCode_, nationCode) };


    // postcode Field Functions 
    bool hasPostcode() const { return this->postcode_ != nullptr;};
    void deletePostcode() { this->postcode_ = nullptr;};
    inline string postcode() const { DARABONBA_PTR_GET_DEFAULT(postcode_, "") };
    inline CreateAgAccountRequest& setPostcode(string postcode) { DARABONBA_PTR_SET_VALUE(postcode_, postcode) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline CreateAgAccountRequest& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


  protected:
    // The attribute of the account. To view the attribute of the account, use the account to log on to the Alibaba Cloud Management Console, move the pointer over the profile picture in the upper-right corner, and then click **Security Settings**.
    std::shared_ptr<string> accountAttr_ = nullptr;
    // The name of the city.
    std::shared_ptr<string> cityName_ = nullptr;
    // The name of the enterprise.
    std::shared_ptr<string> enterpriseName_ = nullptr;
    // The first name.
    std::shared_ptr<string> firstName_ = nullptr;
    // The last name.
    // 
    // The last name can be up to 64 characters in length.
    std::shared_ptr<string> lastName_ = nullptr;
    // The email address used to log on to the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> loginEmail_ = nullptr;
    // The country code.
    std::shared_ptr<string> nationCode_ = nullptr;
    // The zip code.
    std::shared_ptr<string> postcode_ = nullptr;
    // The name of the province. This parameter is optional.
    std::shared_ptr<string> provinceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
