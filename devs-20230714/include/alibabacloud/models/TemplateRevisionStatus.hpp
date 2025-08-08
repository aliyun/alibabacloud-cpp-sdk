// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEREVISIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEREVISIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateRevisionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateRevisionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(packageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(templateUrl, templateUrl_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateRevisionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(packageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(templateUrl, templateUrl_);
    };
    TemplateRevisionStatus() = default ;
    TemplateRevisionStatus(const TemplateRevisionStatus &) = default ;
    TemplateRevisionStatus(TemplateRevisionStatus &&) = default ;
    TemplateRevisionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateRevisionStatus() = default ;
    TemplateRevisionStatus& operator=(const TemplateRevisionStatus &) = default ;
    TemplateRevisionStatus& operator=(TemplateRevisionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->packageUrl_ != nullptr
        && this->phase_ != nullptr && this->pipelineName_ != nullptr && this->templateUrl_ != nullptr; };
    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline TemplateRevisionStatus& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline TemplateRevisionStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline TemplateRevisionStatus& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // templateUrl Field Functions 
    bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
    void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
    inline string templateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
    inline TemplateRevisionStatus& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


  protected:
    std::shared_ptr<string> packageUrl_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<string> templateUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
