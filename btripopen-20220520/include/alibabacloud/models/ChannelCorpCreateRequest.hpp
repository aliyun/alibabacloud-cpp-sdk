// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELCORPCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANNELCORPCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ChannelCorpCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelCorpCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(administrator_email, administratorEmail_);
      DARABONBA_PTR_TO_JSON(administrator_name, administratorName_);
      DARABONBA_PTR_TO_JSON(administrator_phone, administratorPhone_);
      DARABONBA_PTR_TO_JSON(base_currency, baseCurrency_);
      DARABONBA_PTR_TO_JSON(btrip_region, btripRegion_);
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(corp_name_en, corpNameEn_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(province, province_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(third_corp_id, thirdCorpId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelCorpCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(administrator_email, administratorEmail_);
      DARABONBA_PTR_FROM_JSON(administrator_name, administratorName_);
      DARABONBA_PTR_FROM_JSON(administrator_phone, administratorPhone_);
      DARABONBA_PTR_FROM_JSON(base_currency, baseCurrency_);
      DARABONBA_PTR_FROM_JSON(btrip_region, btripRegion_);
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(corp_name_en, corpNameEn_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(province, province_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(third_corp_id, thirdCorpId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    ChannelCorpCreateRequest() = default ;
    ChannelCorpCreateRequest(const ChannelCorpCreateRequest &) = default ;
    ChannelCorpCreateRequest(ChannelCorpCreateRequest &&) = default ;
    ChannelCorpCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelCorpCreateRequest() = default ;
    ChannelCorpCreateRequest& operator=(const ChannelCorpCreateRequest &) = default ;
    ChannelCorpCreateRequest& operator=(ChannelCorpCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->administratorEmail_ == nullptr
        && this->administratorName_ == nullptr && this->administratorPhone_ == nullptr && this->baseCurrency_ == nullptr && this->btripRegion_ == nullptr && this->city_ == nullptr
        && this->corpName_ == nullptr && this->corpNameEn_ == nullptr && this->extendField_ == nullptr && this->province_ == nullptr && this->scope_ == nullptr
        && this->thirdCorpId_ == nullptr && this->userId_ == nullptr; };
    // administratorEmail Field Functions 
    bool hasAdministratorEmail() const { return this->administratorEmail_ != nullptr;};
    void deleteAdministratorEmail() { this->administratorEmail_ = nullptr;};
    inline string getAdministratorEmail() const { DARABONBA_PTR_GET_DEFAULT(administratorEmail_, "") };
    inline ChannelCorpCreateRequest& setAdministratorEmail(string administratorEmail) { DARABONBA_PTR_SET_VALUE(administratorEmail_, administratorEmail) };


    // administratorName Field Functions 
    bool hasAdministratorName() const { return this->administratorName_ != nullptr;};
    void deleteAdministratorName() { this->administratorName_ = nullptr;};
    inline string getAdministratorName() const { DARABONBA_PTR_GET_DEFAULT(administratorName_, "") };
    inline ChannelCorpCreateRequest& setAdministratorName(string administratorName) { DARABONBA_PTR_SET_VALUE(administratorName_, administratorName) };


    // administratorPhone Field Functions 
    bool hasAdministratorPhone() const { return this->administratorPhone_ != nullptr;};
    void deleteAdministratorPhone() { this->administratorPhone_ = nullptr;};
    inline string getAdministratorPhone() const { DARABONBA_PTR_GET_DEFAULT(administratorPhone_, "") };
    inline ChannelCorpCreateRequest& setAdministratorPhone(string administratorPhone) { DARABONBA_PTR_SET_VALUE(administratorPhone_, administratorPhone) };


    // baseCurrency Field Functions 
    bool hasBaseCurrency() const { return this->baseCurrency_ != nullptr;};
    void deleteBaseCurrency() { this->baseCurrency_ = nullptr;};
    inline string getBaseCurrency() const { DARABONBA_PTR_GET_DEFAULT(baseCurrency_, "") };
    inline ChannelCorpCreateRequest& setBaseCurrency(string baseCurrency) { DARABONBA_PTR_SET_VALUE(baseCurrency_, baseCurrency) };


    // btripRegion Field Functions 
    bool hasBtripRegion() const { return this->btripRegion_ != nullptr;};
    void deleteBtripRegion() { this->btripRegion_ = nullptr;};
    inline string getBtripRegion() const { DARABONBA_PTR_GET_DEFAULT(btripRegion_, "") };
    inline ChannelCorpCreateRequest& setBtripRegion(string btripRegion) { DARABONBA_PTR_SET_VALUE(btripRegion_, btripRegion) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ChannelCorpCreateRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ChannelCorpCreateRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // corpNameEn Field Functions 
    bool hasCorpNameEn() const { return this->corpNameEn_ != nullptr;};
    void deleteCorpNameEn() { this->corpNameEn_ = nullptr;};
    inline string getCorpNameEn() const { DARABONBA_PTR_GET_DEFAULT(corpNameEn_, "") };
    inline ChannelCorpCreateRequest& setCorpNameEn(string corpNameEn) { DARABONBA_PTR_SET_VALUE(corpNameEn_, corpNameEn) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline ChannelCorpCreateRequest& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ChannelCorpCreateRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline int32_t getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0) };
    inline ChannelCorpCreateRequest& setScope(int32_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // thirdCorpId Field Functions 
    bool hasThirdCorpId() const { return this->thirdCorpId_ != nullptr;};
    void deleteThirdCorpId() { this->thirdCorpId_ = nullptr;};
    inline string getThirdCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdCorpId_, "") };
    inline ChannelCorpCreateRequest& setThirdCorpId(string thirdCorpId) { DARABONBA_PTR_SET_VALUE(thirdCorpId_, thirdCorpId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ChannelCorpCreateRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> administratorEmail_ {};
    // This parameter is required.
    shared_ptr<string> administratorName_ {};
    shared_ptr<string> administratorPhone_ {};
    shared_ptr<string> baseCurrency_ {};
    shared_ptr<string> btripRegion_ {};
    shared_ptr<string> city_ {};
    // This parameter is required.
    shared_ptr<string> corpName_ {};
    shared_ptr<string> corpNameEn_ {};
    shared_ptr<string> extendField_ {};
    shared_ptr<string> province_ {};
    shared_ptr<int32_t> scope_ {};
    // This parameter is required.
    shared_ptr<string> thirdCorpId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
