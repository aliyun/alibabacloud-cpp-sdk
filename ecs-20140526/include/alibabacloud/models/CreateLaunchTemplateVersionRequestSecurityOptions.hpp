// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEVERSIONREQUESTSECURITYOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEVERSIONREQUESTSECURITYOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateLaunchTemplateVersionRequestSecurityOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLaunchTemplateVersionRequestSecurityOptions& obj) { 
      DARABONBA_PTR_TO_JSON(TrustedSystemMode, trustedSystemMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLaunchTemplateVersionRequestSecurityOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(TrustedSystemMode, trustedSystemMode_);
    };
    CreateLaunchTemplateVersionRequestSecurityOptions() = default ;
    CreateLaunchTemplateVersionRequestSecurityOptions(const CreateLaunchTemplateVersionRequestSecurityOptions &) = default ;
    CreateLaunchTemplateVersionRequestSecurityOptions(CreateLaunchTemplateVersionRequestSecurityOptions &&) = default ;
    CreateLaunchTemplateVersionRequestSecurityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLaunchTemplateVersionRequestSecurityOptions() = default ;
    CreateLaunchTemplateVersionRequestSecurityOptions& operator=(const CreateLaunchTemplateVersionRequestSecurityOptions &) = default ;
    CreateLaunchTemplateVersionRequestSecurityOptions& operator=(CreateLaunchTemplateVersionRequestSecurityOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trustedSystemMode_ == nullptr; };
    // trustedSystemMode Field Functions 
    bool hasTrustedSystemMode() const { return this->trustedSystemMode_ != nullptr;};
    void deleteTrustedSystemMode() { this->trustedSystemMode_ = nullptr;};
    inline string trustedSystemMode() const { DARABONBA_PTR_GET_DEFAULT(trustedSystemMode_, "") };
    inline CreateLaunchTemplateVersionRequestSecurityOptions& setTrustedSystemMode(string trustedSystemMode) { DARABONBA_PTR_SET_VALUE(trustedSystemMode_, trustedSystemMode) };


  protected:
    std::shared_ptr<string> trustedSystemMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
