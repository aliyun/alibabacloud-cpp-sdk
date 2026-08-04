// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGACCOUNTADDRESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGACCOUNTADDRESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class UpdateAgAccountAddressInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgAccountAddressInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Address2, address2_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(PostCode, postCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgAccountAddressInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Address2, address2_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    UpdateAgAccountAddressInfoRequest() = default ;
    UpdateAgAccountAddressInfoRequest(const UpdateAgAccountAddressInfoRequest &) = default ;
    UpdateAgAccountAddressInfoRequest(UpdateAgAccountAddressInfoRequest &&) = default ;
    UpdateAgAccountAddressInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgAccountAddressInfoRequest() = default ;
    UpdateAgAccountAddressInfoRequest& operator=(const UpdateAgAccountAddressInfoRequest &) = default ;
    UpdateAgAccountAddressInfoRequest& operator=(UpdateAgAccountAddressInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->address2_ == nullptr && this->appName_ == nullptr && this->city_ == nullptr && this->mpk_ == nullptr && this->PK_ == nullptr
        && this->postCode_ == nullptr && this->province_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateAgAccountAddressInfoRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // address2 Field Functions 
    bool hasAddress2() const { return this->address2_ != nullptr;};
    void deleteAddress2() { this->address2_ = nullptr;};
    inline string getAddress2() const { DARABONBA_PTR_GET_DEFAULT(address2_, "") };
    inline UpdateAgAccountAddressInfoRequest& setAddress2(string address2) { DARABONBA_PTR_SET_VALUE(address2_, address2) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateAgAccountAddressInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline UpdateAgAccountAddressInfoRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline UpdateAgAccountAddressInfoRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline UpdateAgAccountAddressInfoRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // postCode Field Functions 
    bool hasPostCode() const { return this->postCode_ != nullptr;};
    void deletePostCode() { this->postCode_ = nullptr;};
    inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
    inline UpdateAgAccountAddressInfoRequest& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline UpdateAgAccountAddressInfoRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> address2_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> city_ {};
    shared_ptr<string> mpk_ {};
    shared_ptr<string> PK_ {};
    shared_ptr<string> postCode_ {};
    shared_ptr<string> province_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
