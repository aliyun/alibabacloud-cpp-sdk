// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUESTBUSINESSLICENSEPICS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUESTBUSINESSLICENSEPICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpdateSmsQualificationRequestBusinessLicensePics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmsQualificationRequestBusinessLicensePics& obj) { 
      DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmsQualificationRequestBusinessLicensePics& obj) { 
      DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateSmsQualificationRequestBusinessLicensePics() = default ;
    UpdateSmsQualificationRequestBusinessLicensePics(const UpdateSmsQualificationRequestBusinessLicensePics &) = default ;
    UpdateSmsQualificationRequestBusinessLicensePics(UpdateSmsQualificationRequestBusinessLicensePics &&) = default ;
    UpdateSmsQualificationRequestBusinessLicensePics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmsQualificationRequestBusinessLicensePics() = default ;
    UpdateSmsQualificationRequestBusinessLicensePics& operator=(const UpdateSmsQualificationRequestBusinessLicensePics &) = default ;
    UpdateSmsQualificationRequestBusinessLicensePics& operator=(UpdateSmsQualificationRequestBusinessLicensePics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->licensePic_ == nullptr
        && return this->type_ == nullptr; };
    // licensePic Field Functions 
    bool hasLicensePic() const { return this->licensePic_ != nullptr;};
    void deleteLicensePic() { this->licensePic_ = nullptr;};
    inline string licensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
    inline UpdateSmsQualificationRequestBusinessLicensePics& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateSmsQualificationRequestBusinessLicensePics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 证件图片标识的osskey
    std::shared_ptr<string> licensePic_ = nullptr;
    // 企业证件类型，businessLicense:营业执照;organizationCodeLicense:组织机构代码证;taxRegistrationLicense:税务登记证;socialCreditLicense:社会信用代码证书;newStyleBusinessLicense:三证合一;signLegalLicense:签名归属方的事业单位法人证书;otherLicense:其他类型执照证书
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
