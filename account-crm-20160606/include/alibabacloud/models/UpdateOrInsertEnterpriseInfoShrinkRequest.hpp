// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORINSERTENTERPRISEINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORINSERTENTERPRISEINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class UpdateOrInsertEnterpriseInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOrInsertEnterpriseInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CityJsonString, cityJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(EnterpriseSize, enterpriseSize_);
      DARABONBA_PTR_TO_JSON(Fax, fax_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ProvinceJsonString, provinceJsonStringShrink_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOrInsertEnterpriseInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CityJsonString, cityJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(EnterpriseSize, enterpriseSize_);
      DARABONBA_PTR_FROM_JSON(Fax, fax_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ProvinceJsonString, provinceJsonStringShrink_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    UpdateOrInsertEnterpriseInfoShrinkRequest() = default ;
    UpdateOrInsertEnterpriseInfoShrinkRequest(const UpdateOrInsertEnterpriseInfoShrinkRequest &) = default ;
    UpdateOrInsertEnterpriseInfoShrinkRequest(UpdateOrInsertEnterpriseInfoShrinkRequest &&) = default ;
    UpdateOrInsertEnterpriseInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOrInsertEnterpriseInfoShrinkRequest() = default ;
    UpdateOrInsertEnterpriseInfoShrinkRequest& operator=(const UpdateOrInsertEnterpriseInfoShrinkRequest &) = default ;
    UpdateOrInsertEnterpriseInfoShrinkRequest& operator=(UpdateOrInsertEnterpriseInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->alias_ == nullptr && this->cityJsonStringShrink_ == nullptr && this->enterpriseSize_ == nullptr && this->fax_ == nullptr && this->name_ == nullptr
        && this->PK_ == nullptr && this->phone_ == nullptr && this->provinceJsonStringShrink_ == nullptr && this->years_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // cityJsonStringShrink Field Functions 
    bool hasCityJsonStringShrink() const { return this->cityJsonStringShrink_ != nullptr;};
    void deleteCityJsonStringShrink() { this->cityJsonStringShrink_ = nullptr;};
    inline string getCityJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(cityJsonStringShrink_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setCityJsonStringShrink(string cityJsonStringShrink) { DARABONBA_PTR_SET_VALUE(cityJsonStringShrink_, cityJsonStringShrink) };


    // enterpriseSize Field Functions 
    bool hasEnterpriseSize() const { return this->enterpriseSize_ != nullptr;};
    void deleteEnterpriseSize() { this->enterpriseSize_ = nullptr;};
    inline string getEnterpriseSize() const { DARABONBA_PTR_GET_DEFAULT(enterpriseSize_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setEnterpriseSize(string enterpriseSize) { DARABONBA_PTR_SET_VALUE(enterpriseSize_, enterpriseSize) };


    // fax Field Functions 
    bool hasFax() const { return this->fax_ != nullptr;};
    void deleteFax() { this->fax_ = nullptr;};
    inline string getFax() const { DARABONBA_PTR_GET_DEFAULT(fax_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setFax(string fax) { DARABONBA_PTR_SET_VALUE(fax_, fax) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // provinceJsonStringShrink Field Functions 
    bool hasProvinceJsonStringShrink() const { return this->provinceJsonStringShrink_ != nullptr;};
    void deleteProvinceJsonStringShrink() { this->provinceJsonStringShrink_ = nullptr;};
    inline string getProvinceJsonStringShrink() const { DARABONBA_PTR_GET_DEFAULT(provinceJsonStringShrink_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setProvinceJsonStringShrink(string provinceJsonStringShrink) { DARABONBA_PTR_SET_VALUE(provinceJsonStringShrink_, provinceJsonStringShrink) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline string getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, "") };
    inline UpdateOrInsertEnterpriseInfoShrinkRequest& setYears(string years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> alias_ {};
    shared_ptr<string> cityJsonStringShrink_ {};
    shared_ptr<string> enterpriseSize_ {};
    shared_ptr<string> fax_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> PK_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> provinceJsonStringShrink_ {};
    shared_ptr<string> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
