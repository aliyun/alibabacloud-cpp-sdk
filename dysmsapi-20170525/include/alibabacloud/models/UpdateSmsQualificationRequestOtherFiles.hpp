// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUESTOTHERFILES_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUESTOTHERFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpdateSmsQualificationRequestOtherFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmsQualificationRequestOtherFiles& obj) { 
      DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmsQualificationRequestOtherFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
    };
    UpdateSmsQualificationRequestOtherFiles() = default ;
    UpdateSmsQualificationRequestOtherFiles(const UpdateSmsQualificationRequestOtherFiles &) = default ;
    UpdateSmsQualificationRequestOtherFiles(UpdateSmsQualificationRequestOtherFiles &&) = default ;
    UpdateSmsQualificationRequestOtherFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmsQualificationRequestOtherFiles() = default ;
    UpdateSmsQualificationRequestOtherFiles& operator=(const UpdateSmsQualificationRequestOtherFiles &) = default ;
    UpdateSmsQualificationRequestOtherFiles& operator=(UpdateSmsQualificationRequestOtherFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licensePic_ != nullptr; };
    // licensePic Field Functions 
    bool hasLicensePic() const { return this->licensePic_ != nullptr;};
    void deleteLicensePic() { this->licensePic_ = nullptr;};
    inline string licensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
    inline UpdateSmsQualificationRequestOtherFiles& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


  protected:
    std::shared_ptr<string> licensePic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
