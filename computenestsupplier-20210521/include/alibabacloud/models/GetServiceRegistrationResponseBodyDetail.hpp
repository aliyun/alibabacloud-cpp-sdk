// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODYDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODYDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceRegistrationResponseBodyDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRegistrationResponseBodyDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AtRisk, atRisk_);
      DARABONBA_PTR_TO_JSON(HasRelatedArtifact, hasRelatedArtifact_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(TemplateDiffUrl, templateDiffUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRegistrationResponseBodyDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AtRisk, atRisk_);
      DARABONBA_PTR_FROM_JSON(HasRelatedArtifact, hasRelatedArtifact_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(TemplateDiffUrl, templateDiffUrl_);
    };
    GetServiceRegistrationResponseBodyDetail() = default ;
    GetServiceRegistrationResponseBodyDetail(const GetServiceRegistrationResponseBodyDetail &) = default ;
    GetServiceRegistrationResponseBodyDetail(GetServiceRegistrationResponseBodyDetail &&) = default ;
    GetServiceRegistrationResponseBodyDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRegistrationResponseBodyDetail() = default ;
    GetServiceRegistrationResponseBodyDetail& operator=(const GetServiceRegistrationResponseBodyDetail &) = default ;
    GetServiceRegistrationResponseBodyDetail& operator=(GetServiceRegistrationResponseBodyDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->atRisk_ != nullptr
        && this->hasRelatedArtifact_ != nullptr && this->reports_ != nullptr && this->templateDiffUrl_ != nullptr; };
    // atRisk Field Functions 
    bool hasAtRisk() const { return this->atRisk_ != nullptr;};
    void deleteAtRisk() { this->atRisk_ = nullptr;};
    inline bool atRisk() const { DARABONBA_PTR_GET_DEFAULT(atRisk_, false) };
    inline GetServiceRegistrationResponseBodyDetail& setAtRisk(bool atRisk) { DARABONBA_PTR_SET_VALUE(atRisk_, atRisk) };


    // hasRelatedArtifact Field Functions 
    bool hasHasRelatedArtifact() const { return this->hasRelatedArtifact_ != nullptr;};
    void deleteHasRelatedArtifact() { this->hasRelatedArtifact_ = nullptr;};
    inline bool hasRelatedArtifact() const { DARABONBA_PTR_GET_DEFAULT(hasRelatedArtifact_, false) };
    inline GetServiceRegistrationResponseBodyDetail& setHasRelatedArtifact(bool hasRelatedArtifact) { DARABONBA_PTR_SET_VALUE(hasRelatedArtifact_, hasRelatedArtifact) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline string reports() const { DARABONBA_PTR_GET_DEFAULT(reports_, "") };
    inline GetServiceRegistrationResponseBodyDetail& setReports(string reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };


    // templateDiffUrl Field Functions 
    bool hasTemplateDiffUrl() const { return this->templateDiffUrl_ != nullptr;};
    void deleteTemplateDiffUrl() { this->templateDiffUrl_ = nullptr;};
    inline string templateDiffUrl() const { DARABONBA_PTR_GET_DEFAULT(templateDiffUrl_, "") };
    inline GetServiceRegistrationResponseBodyDetail& setTemplateDiffUrl(string templateDiffUrl) { DARABONBA_PTR_SET_VALUE(templateDiffUrl_, templateDiffUrl) };


  protected:
    // Whether risk exists.
    std::shared_ptr<bool> atRisk_ = nullptr;
    // Whether service is associated with artifact.
    std::shared_ptr<bool> hasRelatedArtifact_ = nullptr;
    // The reports.
    std::shared_ptr<string> reports_ = nullptr;
    // The url of template diff file.
    std::shared_ptr<string> templateDiffUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
