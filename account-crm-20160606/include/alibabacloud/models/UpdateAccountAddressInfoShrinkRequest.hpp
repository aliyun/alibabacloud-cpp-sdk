// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTADDRESSINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTADDRESSINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class UpdateAccountAddressInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountAddressInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Address2, address2_);
      DARABONBA_PTR_TO_JSON(CityJsonString, cityJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(DistrictJsonString, districtJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(PostCode, postCode_);
      DARABONBA_PTR_TO_JSON(ProvinceJsonString, provinceJsonStringShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountAddressInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Address2, address2_);
      DARABONBA_PTR_FROM_JSON(CityJsonString, cityJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(DistrictJsonString, districtJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
      DARABONBA_PTR_FROM_JSON(ProvinceJsonString, provinceJsonStringShrink_);
    };
    UpdateAccountAddressInfoShrinkRequest() = default ;
    UpdateAccountAddressInfoShrinkRequest(const UpdateAccountAddressInfoShrinkRequest &) = default ;
    UpdateAccountAddressInfoShrinkRequest(UpdateAccountAddressInfoShrinkRequest &&) = default ;
    UpdateAccountAddressInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountAddressInfoShrinkRequest() = default ;
    UpdateAccountAddressInfoShrinkRequest& operator=(const UpdateAccountAddressInfoShrinkRequest &) = default ;
    UpdateAccountAddressInfoShrinkRequest& operator=(UpdateAccountAddressInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->address2_ == nullptr && this->cityJsonStringShrink_ == nullptr && this->districtJsonStringShrink_ == nullptr && this->PK_ == nullptr && this->postCode_ == nullptr
        && this->provinceJsonStringShrink_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // address2 Field Functions 
    bool hasAddress2() const { return this->address2_ != nullptr;};
    void deleteAddress2() { this->address2_ = nullptr;};
    inline string getAddress2() const { DARABONBA_PTR_GET_DEFAULT(address2_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setAddress2(string address2) { DARABONBA_PTR_SET_VALUE(address2_, address2) };


    // cityJsonStringShrink Field Functions 
    bool hasCityJsonStringShrink() const { return this->cityJsonStringShrink_ != nullptr;};
    void deleteCityJsonStringShrink() { this->cityJsonStringShrink_ = nullptr;};
    inline string getCityJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(cityJsonStringShrink_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setCityJsonStringShrink(string cityJsonStringShrink) { DARABONBA_PTR_SET_VALUE(cityJsonStringShrink_, cityJsonStringShrink) };


    // districtJsonStringShrink Field Functions 
    bool hasDistrictJsonStringShrink() const { return this->districtJsonStringShrink_ != nullptr;};
    void deleteDistrictJsonStringShrink() { this->districtJsonStringShrink_ = nullptr;};
    inline string getDistrictJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(districtJsonStringShrink_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setDistrictJsonStringShrink(string districtJsonStringShrink) { DARABONBA_PTR_SET_VALUE(districtJsonStringShrink_, districtJsonStringShrink) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // postCode Field Functions 
    bool hasPostCode() const { return this->postCode_ != nullptr;};
    void deletePostCode() { this->postCode_ = nullptr;};
    inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


    // provinceJsonStringShrink Field Functions 
    bool hasProvinceJsonStringShrink() const { return this->provinceJsonStringShrink_ != nullptr;};
    void deleteProvinceJsonStringShrink() { this->provinceJsonStringShrink_ = nullptr;};
    inline string getProvinceJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(provinceJsonStringShrink_, "") };
    inline UpdateAccountAddressInfoShrinkRequest& setProvinceJsonStringShrink(string provinceJsonStringShrink) { DARABONBA_PTR_SET_VALUE(provinceJsonStringShrink_, provinceJsonStringShrink) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> address2_ {};
    shared_ptr<string> cityJsonStringShrink_ {};
    shared_ptr<string> districtJsonStringShrink_ {};
    shared_ptr<string> PK_ {};
    shared_ptr<string> postCode_ {};
    shared_ptr<string> provinceJsonStringShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
