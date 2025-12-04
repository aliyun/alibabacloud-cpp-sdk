// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRAFTVALIDATEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DRAFTVALIDATEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DraftValidateParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DraftValidateParams& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentDraftId, deploymentDraftId_);
      DARABONBA_PTR_TO_JSON(deploymentTargetName, deploymentTargetName_);
    };
    friend void from_json(const Darabonba::Json& j, DraftValidateParams& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentDraftId, deploymentDraftId_);
      DARABONBA_PTR_FROM_JSON(deploymentTargetName, deploymentTargetName_);
    };
    DraftValidateParams() = default ;
    DraftValidateParams(const DraftValidateParams &) = default ;
    DraftValidateParams(DraftValidateParams &&) = default ;
    DraftValidateParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DraftValidateParams() = default ;
    DraftValidateParams& operator=(const DraftValidateParams &) = default ;
    DraftValidateParams& operator=(DraftValidateParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentDraftId_ == nullptr
        && return this->deploymentTargetName_ == nullptr; };
    // deploymentDraftId Field Functions 
    bool hasDeploymentDraftId() const { return this->deploymentDraftId_ != nullptr;};
    void deleteDeploymentDraftId() { this->deploymentDraftId_ = nullptr;};
    inline string deploymentDraftId() const { DARABONBA_PTR_GET_DEFAULT(deploymentDraftId_, "") };
    inline DraftValidateParams& setDeploymentDraftId(string deploymentDraftId) { DARABONBA_PTR_SET_VALUE(deploymentDraftId_, deploymentDraftId) };


    // deploymentTargetName Field Functions 
    bool hasDeploymentTargetName() const { return this->deploymentTargetName_ != nullptr;};
    void deleteDeploymentTargetName() { this->deploymentTargetName_ = nullptr;};
    inline string deploymentTargetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetName_, "") };
    inline DraftValidateParams& setDeploymentTargetName(string deploymentTargetName) { DARABONBA_PTR_SET_VALUE(deploymentTargetName_, deploymentTargetName) };


  protected:
    std::shared_ptr<string> deploymentDraftId_ = nullptr;
    std::shared_ptr<string> deploymentTargetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
