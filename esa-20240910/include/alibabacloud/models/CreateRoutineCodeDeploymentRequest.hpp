// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINECODEDEPLOYMENTREQUEST_HPP_
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
  class CreateRoutineCodeDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineCodeDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineCodeDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateRoutineCodeDeploymentRequest() = default ;
    CreateRoutineCodeDeploymentRequest(const CreateRoutineCodeDeploymentRequest &) = default ;
    CreateRoutineCodeDeploymentRequest(CreateRoutineCodeDeploymentRequest &&) = default ;
    CreateRoutineCodeDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineCodeDeploymentRequest() = default ;
    CreateRoutineCodeDeploymentRequest& operator=(const CreateRoutineCodeDeploymentRequest &) = default ;
    CreateRoutineCodeDeploymentRequest& operator=(CreateRoutineCodeDeploymentRequest &&) = default ;
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
      // 
      // This parameter is required.
      shared_ptr<string> codeVersion_ {};
      // The phased release ratio of the code version. Valid values: 1 to 100.
      // 
      // This parameter is required.
      shared_ptr<int64_t> percentage_ {};
    };

    virtual bool empty() const override { return this->codeVersions_ == nullptr
        && this->env_ == nullptr && this->name_ == nullptr && this->strategy_ == nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<CreateRoutineCodeDeploymentRequest::CodeVersions> & getCodeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<CreateRoutineCodeDeploymentRequest::CodeVersions>) };
    inline vector<CreateRoutineCodeDeploymentRequest::CodeVersions> getCodeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<CreateRoutineCodeDeploymentRequest::CodeVersions>) };
    inline CreateRoutineCodeDeploymentRequest& setCodeVersions(const vector<CreateRoutineCodeDeploymentRequest::CodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline CreateRoutineCodeDeploymentRequest& setCodeVersions(vector<CreateRoutineCodeDeploymentRequest::CodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateRoutineCodeDeploymentRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRoutineCodeDeploymentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateRoutineCodeDeploymentRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The configuration list of phased release version numbers. A maximum of two versions are supported, and the sum of the total proportions is equal to 100.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateRoutineCodeDeploymentRequest::CodeVersions>> codeVersions_ {};
    // The name of the environment. Only supports test environment `staging` or production environment `production`.
    // 
    // This parameter is required.
    shared_ptr<string> env_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The deployment policy. Valid value: percentage.
    // 
    // This parameter is required.
    shared_ptr<string> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
