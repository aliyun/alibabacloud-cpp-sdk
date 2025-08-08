// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATESTATUS_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATESTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TemplateStatusLatestDeployment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateStatus& obj) { 
      DARABONBA_PTR_TO_JSON(latestDeployment, latestDeployment_);
      DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(packageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(templateUrl, templateUrl_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(latestDeployment, latestDeployment_);
      DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(packageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(templateUrl, templateUrl_);
    };
    TemplateStatus() = default ;
    TemplateStatus(const TemplateStatus &) = default ;
    TemplateStatus(TemplateStatus &&) = default ;
    TemplateStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateStatus() = default ;
    TemplateStatus& operator=(const TemplateStatus &) = default ;
    TemplateStatus& operator=(TemplateStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->latestDeployment_ != nullptr
        && this->latestVersion_ != nullptr && this->packageUrl_ != nullptr && this->phase_ != nullptr && this->templateUrl_ != nullptr; };
    // latestDeployment Field Functions 
    bool hasLatestDeployment() const { return this->latestDeployment_ != nullptr;};
    void deleteLatestDeployment() { this->latestDeployment_ = nullptr;};
    inline const TemplateStatusLatestDeployment & latestDeployment() const { DARABONBA_PTR_GET_CONST(latestDeployment_, TemplateStatusLatestDeployment) };
    inline TemplateStatusLatestDeployment latestDeployment() { DARABONBA_PTR_GET(latestDeployment_, TemplateStatusLatestDeployment) };
    inline TemplateStatus& setLatestDeployment(const TemplateStatusLatestDeployment & latestDeployment) { DARABONBA_PTR_SET_VALUE(latestDeployment_, latestDeployment) };
    inline TemplateStatus& setLatestDeployment(TemplateStatusLatestDeployment && latestDeployment) { DARABONBA_PTR_SET_RVALUE(latestDeployment_, latestDeployment) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline TemplateStatus& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline TemplateStatus& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline TemplateStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // templateUrl Field Functions 
    bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
    void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
    inline string templateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
    inline TemplateStatus& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


  protected:
    std::shared_ptr<TemplateStatusLatestDeployment> latestDeployment_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<string> packageUrl_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> templateUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
