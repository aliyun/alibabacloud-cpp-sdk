// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRAFTDEPLOYPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DRAFTDEPLOYPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BriefDeploymentTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DraftDeployParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DraftDeployParams& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentDraftId, deploymentDraftId_);
      DARABONBA_PTR_TO_JSON(deploymentTarget, deploymentTarget_);
      DARABONBA_PTR_TO_JSON(skipValidate, skipValidate_);
    };
    friend void from_json(const Darabonba::Json& j, DraftDeployParams& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentDraftId, deploymentDraftId_);
      DARABONBA_PTR_FROM_JSON(deploymentTarget, deploymentTarget_);
      DARABONBA_PTR_FROM_JSON(skipValidate, skipValidate_);
    };
    DraftDeployParams() = default ;
    DraftDeployParams(const DraftDeployParams &) = default ;
    DraftDeployParams(DraftDeployParams &&) = default ;
    DraftDeployParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DraftDeployParams() = default ;
    DraftDeployParams& operator=(const DraftDeployParams &) = default ;
    DraftDeployParams& operator=(DraftDeployParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentDraftId_ == nullptr
        && return this->deploymentTarget_ == nullptr && return this->skipValidate_ == nullptr; };
    // deploymentDraftId Field Functions 
    bool hasDeploymentDraftId() const { return this->deploymentDraftId_ != nullptr;};
    void deleteDeploymentDraftId() { this->deploymentDraftId_ = nullptr;};
    inline string deploymentDraftId() const { DARABONBA_PTR_GET_DEFAULT(deploymentDraftId_, "") };
    inline DraftDeployParams& setDeploymentDraftId(string deploymentDraftId) { DARABONBA_PTR_SET_VALUE(deploymentDraftId_, deploymentDraftId) };


    // deploymentTarget Field Functions 
    bool hasDeploymentTarget() const { return this->deploymentTarget_ != nullptr;};
    void deleteDeploymentTarget() { this->deploymentTarget_ = nullptr;};
    inline const BriefDeploymentTarget & deploymentTarget() const { DARABONBA_PTR_GET_CONST(deploymentTarget_, BriefDeploymentTarget) };
    inline BriefDeploymentTarget deploymentTarget() { DARABONBA_PTR_GET(deploymentTarget_, BriefDeploymentTarget) };
    inline DraftDeployParams& setDeploymentTarget(const BriefDeploymentTarget & deploymentTarget) { DARABONBA_PTR_SET_VALUE(deploymentTarget_, deploymentTarget) };
    inline DraftDeployParams& setDeploymentTarget(BriefDeploymentTarget && deploymentTarget) { DARABONBA_PTR_SET_RVALUE(deploymentTarget_, deploymentTarget) };


    // skipValidate Field Functions 
    bool hasSkipValidate() const { return this->skipValidate_ != nullptr;};
    void deleteSkipValidate() { this->skipValidate_ = nullptr;};
    inline bool skipValidate() const { DARABONBA_PTR_GET_DEFAULT(skipValidate_, false) };
    inline DraftDeployParams& setSkipValidate(bool skipValidate) { DARABONBA_PTR_SET_VALUE(skipValidate_, skipValidate) };


  protected:
    std::shared_ptr<string> deploymentDraftId_ = nullptr;
    std::shared_ptr<BriefDeploymentTarget> deploymentTarget_ = nullptr;
    std::shared_ptr<bool> skipValidate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
