// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CodeVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeVersions& obj) { 
        DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
        DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      };
      friend void from_json(const Darabonba::Json& j, CodeVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      };
      CodeVersions() = default ;
      CodeVersions(const CodeVersions &) = default ;
      CodeVersions(CodeVersions &&) = default ;
      CodeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeVersions() = default ;
      CodeVersions& operator=(const CodeVersions &) = default ;
      CodeVersions& operator=(CodeVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->codeVersion_ == nullptr
        && this->percentage_ == nullptr; };
      // codeVersion Field Functions 
      bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
      void deleteCodeVersion() { this->codeVersion_ = nullptr;};
      inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
      inline CodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline int64_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0L) };
      inline CodeVersions& setPercentage(int64_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    protected:
      // The version of the code.
      shared_ptr<string> codeVersion_ {};
      // The phased release ratio.
      shared_ptr<int64_t> percentage_ {};
    };

    virtual bool empty() const override { return this->codeVersions_ == nullptr
        && this->deploymentId_ == nullptr && this->requestId_ == nullptr && this->strategy_ == nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions> & getCodeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions>) };
    inline vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions> getCodeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions>) };
    inline CreateRoutineCodeDeploymentResponseBody& setCodeVersions(const vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline CreateRoutineCodeDeploymentResponseBody& setCodeVersions(vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline CreateRoutineCodeDeploymentResponseBody& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoutineCodeDeploymentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateRoutineCodeDeploymentResponseBody& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The configuration list of the phased release version number.
    shared_ptr<vector<CreateRoutineCodeDeploymentResponseBody::CodeVersions>> codeVersions_ {};
    // The deployment record ID.
    shared_ptr<string> deploymentId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The phased release policy. The constant string is "percentage".
    shared_ptr<string> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
