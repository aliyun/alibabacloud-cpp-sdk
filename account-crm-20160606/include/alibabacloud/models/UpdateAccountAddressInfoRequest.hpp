// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTADDRESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTADDRESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class UpdateAccountAddressInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountAddressInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Address2, address2_);
      DARABONBA_ANY_TO_JSON(CityJsonString, cityJsonString_);
      DARABONBA_ANY_TO_JSON(DistrictJsonString, districtJsonString_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(PostCode, postCode_);
      DARABONBA_ANY_TO_JSON(ProvinceJsonString, provinceJsonString_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountAddressInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Address2, address2_);
      DARABONBA_ANY_FROM_JSON(CityJsonString, cityJsonString_);
      DARABONBA_ANY_FROM_JSON(DistrictJsonString, districtJsonString_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
      DARABONBA_ANY_FROM_JSON(ProvinceJsonString, provinceJsonString_);
    };
    UpdateAccountAddressInfoRequest() = default ;
    UpdateAccountAddressInfoRequest(const UpdateAccountAddressInfoRequest &) = default ;
    UpdateAccountAddressInfoRequest(UpdateAccountAddressInfoRequest &&) = default ;
    UpdateAccountAddressInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountAddressInfoRequest() = default ;
    UpdateAccountAddressInfoRequest& operator=(const UpdateAccountAddressInfoRequest &) = default ;
    UpdateAccountAddressInfoRequest& operator=(UpdateAccountAddressInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->address2_ == nullptr && this->cityJsonString_ == nullptr && this->districtJsonString_ == nullptr && this->PK_ == nullptr && this->postCode_ == nullptr
        && this->provinceJsonString_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateAccountAddressInfoRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // address2 Field Functions 
    bool hasAddress2() const { return this->address2_ != nullptr;};
    void deleteAddress2() { this->address2_ = nullptr;};
    inline string getAddress2() const { DARABONBA_PTR_GET_DEFAULT(address2_, "") };
    inline UpdateAccountAddressInfoRequest& setAddress2(string address2) { DARABONBA_PTR_SET_VALUE(address2_, address2) };


    // cityJsonString Field Functions 
    bool hasCityJsonString() const { return this->cityJsonString_ != nullptr;};
    void deleteCityJsonString() { this->cityJsonString_ = nullptr;};
    inline     const Darabonba::Json & getCityJsonString() const { DARABONBA_GET(cityJsonString_) };
    Darabonba::Json & getCityJsonString() { DARABONBA_GET(cityJsonString_) };
    inline UpdateAccountAddressInfoRequest& setCityJsonString(const Darabonba::Json & cityJsonString) { DARABONBA_SET_VALUE(cityJsonString_, cityJsonString) };
    inline UpdateAccountAddressInfoRequest& setCityJsonString(Darabonba::Json && cityJsonString) { DARABONBA_SET_RVALUE(cityJsonString_, cityJsonString) };


    // districtJsonString Field Functions 
    bool hasDistrictJsonString() const { return this->districtJsonString_ != nullptr;};
    void deleteDistrictJsonString() { this->districtJsonString_ = nullptr;};
    inline     const Darabonba::Json & getDistrictJsonString() const { DARABONBA_GET(districtJsonString_) };
    Darabonba::Json & getDistrictJsonString() { DARABONBA_GET(districtJsonString_) };
    inline UpdateAccountAddressInfoRequest& setDistrictJsonString(const Darabonba::Json & districtJsonString) { DARABONBA_SET_VALUE(districtJsonString_, districtJsonString) };
    inline UpdateAccountAddressInfoRequest& setDistrictJsonString(Darabonba::Json && districtJsonString) { DARABONBA_SET_RVALUE(districtJsonString_, districtJsonString) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline UpdateAccountAddressInfoRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // postCode Field Functions 
    bool hasPostCode() const { return this->postCode_ != nullptr;};
    void deletePostCode() { this->postCode_ = nullptr;};
    inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
    inline UpdateAccountAddressInfoRequest& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


    // provinceJsonString Field Functions 
    bool hasProvinceJsonString() const { return this->provinceJsonString_ != nullptr;};
    void deleteProvinceJsonString() { this->provinceJsonString_ = nullptr;};
    inline     const Darabonba::Json & getProvinceJsonString() const { DARABONBA_GET(provinceJsonString_) };
    Darabonba::Json & getProvinceJsonString() { DARABONBA_GET(provinceJsonString_) };
    inline UpdateAccountAddressInfoRequest& setProvinceJsonString(const Darabonba::Json & provinceJsonString) { DARABONBA_SET_VALUE(provinceJsonString_, provinceJsonString) };
    inline UpdateAccountAddressInfoRequest& setProvinceJsonString(Darabonba::Json && provinceJsonString) { DARABONBA_SET_RVALUE(provinceJsonString_, provinceJsonString) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> address2_ {};
    Darabonba::Json cityJsonString_ {};
    Darabonba::Json districtJsonString_ {};
    shared_ptr<string> PK_ {};
    shared_ptr<string> postCode_ {};
    Darabonba::Json provinceJsonString_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
