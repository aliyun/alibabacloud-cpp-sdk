// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRAFTDEPLOYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DRAFTDEPLOYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ValidateStatementResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DraftDeployResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DraftDeployResult& obj) { 
      DARABONBA_PTR_TO_JSON(artifactValidationDetail, artifactValidationDetail_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DraftDeployResult& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactValidationDetail, artifactValidationDetail_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DraftDeployResult() = default ;
    DraftDeployResult(const DraftDeployResult &) = default ;
    DraftDeployResult(DraftDeployResult &&) = default ;
    DraftDeployResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DraftDeployResult() = default ;
    DraftDeployResult& operator=(const DraftDeployResult &) = default ;
    DraftDeployResult& operator=(DraftDeployResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactValidationDetail_ == nullptr
        && return this->deploymentId_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // artifactValidationDetail Field Functions 
    bool hasArtifactValidationDetail() const { return this->artifactValidationDetail_ != nullptr;};
    void deleteArtifactValidationDetail() { this->artifactValidationDetail_ = nullptr;};
    inline const ValidateStatementResult & artifactValidationDetail() const { DARABONBA_PTR_GET_CONST(artifactValidationDetail_, ValidateStatementResult) };
    inline ValidateStatementResult artifactValidationDetail() { DARABONBA_PTR_GET(artifactValidationDetail_, ValidateStatementResult) };
    inline DraftDeployResult& setArtifactValidationDetail(const ValidateStatementResult & artifactValidationDetail) { DARABONBA_PTR_SET_VALUE(artifactValidationDetail_, artifactValidationDetail) };
    inline DraftDeployResult& setArtifactValidationDetail(ValidateStatementResult && artifactValidationDetail) { DARABONBA_PTR_SET_RVALUE(artifactValidationDetail_, artifactValidationDetail) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline DraftDeployResult& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DraftDeployResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DraftDeployResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<ValidateStatementResult> artifactValidationDetail_ = nullptr;
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
