// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRoutineCodeDeploymentResponseBodyCodeVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineCodeDeploymentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineCodeDeploymentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineCodeDeploymentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateRoutineCodeDeploymentResponseBody() = default ;
    CreateRoutineCodeDeploymentResponseBody(const CreateRoutineCodeDeploymentResponseBody &) = default ;
    CreateRoutineCodeDeploymentResponseBody(CreateRoutineCodeDeploymentResponseBody &&) = default ;
    CreateRoutineCodeDeploymentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineCodeDeploymentResponseBody() = default ;
    CreateRoutineCodeDeploymentResponseBody& operator=(const CreateRoutineCodeDeploymentResponseBody &) = default ;
    CreateRoutineCodeDeploymentResponseBody& operator=(CreateRoutineCodeDeploymentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersions_ == nullptr
        && return this->deploymentId_ == nullptr && return this->requestId_ == nullptr && return this->strategy_ == nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions> & codeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions>) };
    inline vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions> codeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions>) };
    inline CreateRoutineCodeDeploymentResponseBody& setCodeVersions(const vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline CreateRoutineCodeDeploymentResponseBody& setCodeVersions(vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline CreateRoutineCodeDeploymentResponseBody& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoutineCodeDeploymentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateRoutineCodeDeploymentResponseBody& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The configuration list of the phased release version number.
    std::shared_ptr<vector<CreateRoutineCodeDeploymentResponseBodyCodeVersions>> codeVersions_ = nullptr;
    // The deployment record ID.
    std::shared_ptr<string> deploymentId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The phased release policy. The constant string is "percentage".
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
