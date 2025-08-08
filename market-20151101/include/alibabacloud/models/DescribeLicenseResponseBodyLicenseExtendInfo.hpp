// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSEEXTENDINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSEEXTENDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseResponseBodyLicenseExtendInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseResponseBodyLicenseExtendInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountQuantity, accountQuantity_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseResponseBodyLicenseExtendInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountQuantity, accountQuantity_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
    };
    DescribeLicenseResponseBodyLicenseExtendInfo() = default ;
    DescribeLicenseResponseBodyLicenseExtendInfo(const DescribeLicenseResponseBodyLicenseExtendInfo &) = default ;
    DescribeLicenseResponseBodyLicenseExtendInfo(DescribeLicenseResponseBodyLicenseExtendInfo &&) = default ;
    DescribeLicenseResponseBodyLicenseExtendInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseResponseBodyLicenseExtendInfo() = default ;
    DescribeLicenseResponseBodyLicenseExtendInfo& operator=(const DescribeLicenseResponseBodyLicenseExtendInfo &) = default ;
    DescribeLicenseResponseBodyLicenseExtendInfo& operator=(DescribeLicenseResponseBodyLicenseExtendInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountQuantity_ != nullptr
        && this->aliUid_ != nullptr && this->email_ != nullptr && this->mobile_ != nullptr; };
    // accountQuantity Field Functions 
    bool hasAccountQuantity() const { return this->accountQuantity_ != nullptr;};
    void deleteAccountQuantity() { this->accountQuantity_ = nullptr;};
    inline int64_t accountQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountQuantity_, 0L) };
    inline DescribeLicenseResponseBodyLicenseExtendInfo& setAccountQuantity(int64_t accountQuantity) { DARABONBA_PTR_SET_VALUE(accountQuantity_, accountQuantity) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeLicenseResponseBodyLicenseExtendInfo& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeLicenseResponseBodyLicenseExtendInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline DescribeLicenseResponseBodyLicenseExtendInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


  protected:
    std::shared_ptr<int64_t> accountQuantity_ = nullptr;
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
