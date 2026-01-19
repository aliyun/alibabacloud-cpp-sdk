// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINERESPONSEBODY_HPP_
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
  class GetRoutineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRoutineResponseBody() = default ;
    GetRoutineResponseBody(const GetRoutineResponseBody &) = default ;
    GetRoutineResponseBody(GetRoutineResponseBody &&) = default ;
    GetRoutineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineResponseBody() = default ;
    GetRoutineResponseBody& operator=(const GetRoutineResponseBody &) = default ;
    GetRoutineResponseBody& operator=(GetRoutineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Envs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Envs& obj) { 
        DARABONBA_PTR_TO_JSON(CodeDeploy, codeDeploy_);
        DARABONBA_PTR_TO_JSON(Env, env_);
      };
      friend void from_json(const Darabonba::Json& j, Envs& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeDeploy, codeDeploy_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
      };
      Envs() = default ;
      Envs(const Envs &) = default ;
      Envs(Envs &&) = default ;
      Envs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Envs() = default ;
      Envs& operator=(const Envs &) = default ;
      Envs& operator=(Envs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CodeDeploy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodeDeploy& obj) { 
          DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeployId, deployId_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
        };
        friend void from_json(const Darabonba::Json& j, CodeDeploy& obj) { 
          DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
        };
        CodeDeploy() = default ;
        CodeDeploy(const CodeDeploy &) = default ;
        CodeDeploy(CodeDeploy &&) = default ;
        CodeDeploy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodeDeploy() = default ;
        CodeDeploy& operator=(const CodeDeploy &) = default ;
        CodeDeploy& operator=(CodeDeploy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CodeVersions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CodeVersions& obj) { 
            DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          };
          friend void from_json(const Darabonba::Json& j, CodeVersions& obj) { 
            DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
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
        && this->createTime_ == nullptr && this->description_ == nullptr && this->percentage_ == nullptr; };
          // codeVersion Field Functions 
          bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
          void deleteCodeVersion() { this->codeVersion_ = nullptr;};
          inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
          inline CodeVersions& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline CodeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline CodeVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // percentage Field Functions 
          bool hasPercentage() const { return this->percentage_ != nullptr;};
          void deletePercentage() { this->percentage_ = nullptr;};
          inline int64_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0L) };
          inline CodeVersions& setPercentage(int64_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        protected:
          shared_ptr<string> codeVersion_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> description_ {};
          shared_ptr<int64_t> percentage_ {};
        };

        virtual bool empty() const override { return this->codeVersions_ == nullptr
        && this->creationTime_ == nullptr && this->deployId_ == nullptr && this->strategy_ == nullptr; };
        // codeVersions Field Functions 
        bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
        void deleteCodeVersions() { this->codeVersions_ = nullptr;};
        inline const vector<CodeDeploy::CodeVersions> & getCodeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<CodeDeploy::CodeVersions>) };
        inline vector<CodeDeploy::CodeVersions> getCodeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<CodeDeploy::CodeVersions>) };
        inline CodeDeploy& setCodeVersions(const vector<CodeDeploy::CodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
        inline CodeDeploy& setCodeVersions(vector<CodeDeploy::CodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline CodeDeploy& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deployId Field Functions 
        bool hasDeployId() const { return this->deployId_ != nullptr;};
        void deleteDeployId() { this->deployId_ = nullptr;};
        inline string getDeployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, "") };
        inline CodeDeploy& setDeployId(string deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline CodeDeploy& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


      protected:
        shared_ptr<vector<CodeDeploy::CodeVersions>> codeVersions_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> deployId_ {};
        shared_ptr<string> strategy_ {};
      };

      virtual bool empty() const override { return this->codeDeploy_ == nullptr
        && this->env_ == nullptr; };
      // codeDeploy Field Functions 
      bool hasCodeDeploy() const { return this->codeDeploy_ != nullptr;};
      void deleteCodeDeploy() { this->codeDeploy_ = nullptr;};
      inline const Envs::CodeDeploy & getCodeDeploy() const { DARABONBA_PTR_GET_CONST(codeDeploy_, Envs::CodeDeploy) };
      inline Envs::CodeDeploy getCodeDeploy() { DARABONBA_PTR_GET(codeDeploy_, Envs::CodeDeploy) };
      inline Envs& setCodeDeploy(const Envs::CodeDeploy & codeDeploy) { DARABONBA_PTR_SET_VALUE(codeDeploy_, codeDeploy) };
      inline Envs& setCodeDeploy(Envs::CodeDeploy && codeDeploy) { DARABONBA_PTR_SET_RVALUE(codeDeploy_, codeDeploy) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Envs& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    protected:
      shared_ptr<Envs::CodeDeploy> codeDeploy_ {};
      // The environment type.
      shared_ptr<string> env_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultRelatedRecord_ == nullptr && this->description_ == nullptr && this->envs_ == nullptr && this->hasAssets_ == nullptr && this->requestId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultRelatedRecord Field Functions 
    bool hasDefaultRelatedRecord() const { return this->defaultRelatedRecord_ != nullptr;};
    void deleteDefaultRelatedRecord() { this->defaultRelatedRecord_ = nullptr;};
    inline string getDefaultRelatedRecord() const { DARABONBA_PTR_GET_DEFAULT(defaultRelatedRecord_, "") };
    inline GetRoutineResponseBody& setDefaultRelatedRecord(string defaultRelatedRecord) { DARABONBA_PTR_SET_VALUE(defaultRelatedRecord_, defaultRelatedRecord) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRoutineResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<GetRoutineResponseBody::Envs> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<GetRoutineResponseBody::Envs>) };
    inline vector<GetRoutineResponseBody::Envs> getEnvs() { DARABONBA_PTR_GET(envs_, vector<GetRoutineResponseBody::Envs>) };
    inline GetRoutineResponseBody& setEnvs(const vector<GetRoutineResponseBody::Envs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline GetRoutineResponseBody& setEnvs(vector<GetRoutineResponseBody::Envs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // hasAssets Field Functions 
    bool hasHasAssets() const { return this->hasAssets_ != nullptr;};
    void deleteHasAssets() { this->hasAssets_ = nullptr;};
    inline bool getHasAssets() const { DARABONBA_PTR_GET_DEFAULT(hasAssets_, false) };
    inline GetRoutineResponseBody& setHasAssets(bool hasAssets) { DARABONBA_PTR_SET_VALUE(hasAssets_, hasAssets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the routine was created.
    shared_ptr<string> createTime_ {};
    // The default record name to access.
    shared_ptr<string> defaultRelatedRecord_ {};
    // The description of the routine.
    shared_ptr<string> description_ {};
    // The information about the environments.
    shared_ptr<vector<GetRoutineResponseBody::Envs>> envs_ {};
    shared_ptr<bool> hasAssets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
