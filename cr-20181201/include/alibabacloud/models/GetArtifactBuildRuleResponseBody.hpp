// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTBUILDRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTBUILDRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactBuildRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    GetArtifactBuildRuleResponseBody() = default ;
    GetArtifactBuildRuleResponseBody(const GetArtifactBuildRuleResponseBody &) = default ;
    GetArtifactBuildRuleResponseBody(GetArtifactBuildRuleResponseBody &&) = default ;
    GetArtifactBuildRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactBuildRuleResponseBody() = default ;
    GetArtifactBuildRuleResponseBody& operator=(const GetArtifactBuildRuleResponseBody &) = default ;
    GetArtifactBuildRuleResponseBody& operator=(GetArtifactBuildRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ImageIndexOnly, imageIndexOnly_);
        DARABONBA_PTR_TO_JSON(PriorityFile, priorityFile_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageIndexOnly, imageIndexOnly_);
        DARABONBA_PTR_FROM_JSON(PriorityFile, priorityFile_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageIndexOnly_ == nullptr
        && this->priorityFile_ == nullptr; };
      // imageIndexOnly Field Functions 
      bool hasImageIndexOnly() const { return this->imageIndexOnly_ != nullptr;};
      void deleteImageIndexOnly() { this->imageIndexOnly_ = nullptr;};
      inline bool getImageIndexOnly() const { DARABONBA_PTR_GET_DEFAULT(imageIndexOnly_, false) };
      inline Parameters& setImageIndexOnly(bool imageIndexOnly) { DARABONBA_PTR_SET_VALUE(imageIndexOnly_, imageIndexOnly) };


      // priorityFile Field Functions 
      bool hasPriorityFile() const { return this->priorityFile_ != nullptr;};
      void deletePriorityFile() { this->priorityFile_ = nullptr;};
      inline string getPriorityFile() const { DARABONBA_PTR_GET_DEFAULT(priorityFile_, "") };
      inline Parameters& setPriorityFile(string priorityFile) { DARABONBA_PTR_SET_VALUE(priorityFile_, priorityFile) };


    protected:
      // Indicates whether the index-only mode is enabled.
      shared_ptr<bool> imageIndexOnly_ {};
      // The list of files that you want to prefetch when you use the image acceleration feature. Each entry contains the Base64-encoded absolute path of a file.
      shared_ptr<string> priorityFile_ {};
    };

    virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->buildRuleId_ == nullptr && this->code_ == nullptr && this->isSuccess_ == nullptr && this->parameters_ == nullptr && this->requestId_ == nullptr
        && this->scopeId_ == nullptr && this->scopeType_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactBuildRuleResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // buildRuleId Field Functions 
    bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
    void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
    inline string getBuildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
    inline GetArtifactBuildRuleResponseBody& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactBuildRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactBuildRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const GetArtifactBuildRuleResponseBody::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, GetArtifactBuildRuleResponseBody::Parameters) };
    inline GetArtifactBuildRuleResponseBody::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, GetArtifactBuildRuleResponseBody::Parameters) };
    inline GetArtifactBuildRuleResponseBody& setParameters(const GetArtifactBuildRuleResponseBody::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetArtifactBuildRuleResponseBody& setParameters(GetArtifactBuildRuleResponseBody::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactBuildRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string getScopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline GetArtifactBuildRuleResponseBody& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline GetArtifactBuildRuleResponseBody& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The type of the artifact. Valid values:
    // 
    // *   `ACCELERATED_IMAGE`: accelerated images.
    shared_ptr<string> artifactType_ {};
    // The ID of the artifact building rule.
    shared_ptr<string> buildRuleId_ {};
    shared_ptr<string> code_ {};
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // Additional parameters.
    shared_ptr<GetArtifactBuildRuleResponseBody::Parameters> parameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the effective range of the artifact building rule.
    // 
    // *   The parameter value is the ID of the image repository.
    shared_ptr<string> scopeId_ {};
    // The effective range of the artifact building rule. Valid values:
    // 
    // *   `REPOSITORY`: The artifact building rule is effective in the repository level.
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
