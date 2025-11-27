// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMSQUALIFICATIONREQUESTOTHERFILES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMSQUALIFICATIONREQUESTOTHERFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SubmitSmsQualificationRequestOtherFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmsQualificationRequestOtherFiles& obj) { 
      DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmsQualificationRequestOtherFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
    };
    SubmitSmsQualificationRequestOtherFiles() = default ;
    SubmitSmsQualificationRequestOtherFiles(const SubmitSmsQualificationRequestOtherFiles &) = default ;
    SubmitSmsQualificationRequestOtherFiles(SubmitSmsQualificationRequestOtherFiles &&) = default ;
    SubmitSmsQualificationRequestOtherFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmsQualificationRequestOtherFiles() = default ;
    SubmitSmsQualificationRequestOtherFiles& operator=(const SubmitSmsQualificationRequestOtherFiles &) = default ;
    SubmitSmsQualificationRequestOtherFiles& operator=(SubmitSmsQualificationRequestOtherFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->licensePic_ == nullptr; };
    // licensePic Field Functions 
    bool hasLicensePic() const { return this->licensePic_ != nullptr;};
    void deleteLicensePic() { this->licensePic_ = nullptr;};
    inline string licensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
    inline SubmitSmsQualificationRequestOtherFiles& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


  protected:
    std::shared_ptr<string> licensePic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
