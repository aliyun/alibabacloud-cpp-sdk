// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTBUILDRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTBUILDRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateArtifactBuildRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateArtifactBuildRuleResponseBody() = default ;
    CreateArtifactBuildRuleResponseBody(const CreateArtifactBuildRuleResponseBody &) = default ;
    CreateArtifactBuildRuleResponseBody(CreateArtifactBuildRuleResponseBody &&) = default ;
    CreateArtifactBuildRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactBuildRuleResponseBody() = default ;
    CreateArtifactBuildRuleResponseBody& operator=(const CreateArtifactBuildRuleResponseBody &) = default ;
    CreateArtifactBuildRuleResponseBody& operator=(CreateArtifactBuildRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildRuleId_ != nullptr
        && this->code_ != nullptr && this->isSuccess_ != nullptr && this->requestId_ != nullptr; };
    // buildRuleId Field Functions 
    bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
    void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
    inline string buildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
    inline CreateArtifactBuildRuleResponseBody& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateArtifactBuildRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline CreateArtifactBuildRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateArtifactBuildRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the accelerated image building rule.
    std::shared_ptr<string> buildRuleId_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
