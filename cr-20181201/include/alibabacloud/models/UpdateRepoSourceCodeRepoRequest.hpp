// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSOURCECODEREPOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSOURCECODEREPOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateRepoSourceCodeRepoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepoSourceCodeRepoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_TO_JSON(CodeRepoId, codeRepoId_);
      DARABONBA_PTR_TO_JSON(CodeRepoName, codeRepoName_);
      DARABONBA_PTR_TO_JSON(CodeRepoNamespaceName, codeRepoNamespaceName_);
      DARABONBA_PTR_TO_JSON(CodeRepoType, codeRepoType_);
      DARABONBA_PTR_TO_JSON(DisableCacheBuild, disableCacheBuild_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OverseaBuild, overseaBuild_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepoSourceCodeRepoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_FROM_JSON(CodeRepoId, codeRepoId_);
      DARABONBA_PTR_FROM_JSON(CodeRepoName, codeRepoName_);
      DARABONBA_PTR_FROM_JSON(CodeRepoNamespaceName, codeRepoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(CodeRepoType, codeRepoType_);
      DARABONBA_PTR_FROM_JSON(DisableCacheBuild, disableCacheBuild_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OverseaBuild, overseaBuild_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    UpdateRepoSourceCodeRepoRequest() = default ;
    UpdateRepoSourceCodeRepoRequest(const UpdateRepoSourceCodeRepoRequest &) = default ;
    UpdateRepoSourceCodeRepoRequest(UpdateRepoSourceCodeRepoRequest &&) = default ;
    UpdateRepoSourceCodeRepoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepoSourceCodeRepoRequest() = default ;
    UpdateRepoSourceCodeRepoRequest& operator=(const UpdateRepoSourceCodeRepoRequest &) = default ;
    UpdateRepoSourceCodeRepoRequest& operator=(UpdateRepoSourceCodeRepoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBuild_ == nullptr
        && return this->codeRepoId_ == nullptr && return this->codeRepoName_ == nullptr && return this->codeRepoNamespaceName_ == nullptr && return this->codeRepoType_ == nullptr && return this->disableCacheBuild_ == nullptr
        && return this->instanceId_ == nullptr && return this->overseaBuild_ == nullptr && return this->repoId_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline string autoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setAutoBuild(string autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // codeRepoId Field Functions 
    bool hasCodeRepoId() const { return this->codeRepoId_ != nullptr;};
    void deleteCodeRepoId() { this->codeRepoId_ = nullptr;};
    inline string codeRepoId() const { DARABONBA_PTR_GET_DEFAULT(codeRepoId_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoId(string codeRepoId) { DARABONBA_PTR_SET_VALUE(codeRepoId_, codeRepoId) };


    // codeRepoName Field Functions 
    bool hasCodeRepoName() const { return this->codeRepoName_ != nullptr;};
    void deleteCodeRepoName() { this->codeRepoName_ = nullptr;};
    inline string codeRepoName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoName_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoName(string codeRepoName) { DARABONBA_PTR_SET_VALUE(codeRepoName_, codeRepoName) };


    // codeRepoNamespaceName Field Functions 
    bool hasCodeRepoNamespaceName() const { return this->codeRepoNamespaceName_ != nullptr;};
    void deleteCodeRepoNamespaceName() { this->codeRepoNamespaceName_ = nullptr;};
    inline string codeRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoNamespaceName_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoNamespaceName(string codeRepoNamespaceName) { DARABONBA_PTR_SET_VALUE(codeRepoNamespaceName_, codeRepoNamespaceName) };


    // codeRepoType Field Functions 
    bool hasCodeRepoType() const { return this->codeRepoType_ != nullptr;};
    void deleteCodeRepoType() { this->codeRepoType_ = nullptr;};
    inline string codeRepoType() const { DARABONBA_PTR_GET_DEFAULT(codeRepoType_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoType(string codeRepoType) { DARABONBA_PTR_SET_VALUE(codeRepoType_, codeRepoType) };


    // disableCacheBuild Field Functions 
    bool hasDisableCacheBuild() const { return this->disableCacheBuild_ != nullptr;};
    void deleteDisableCacheBuild() { this->disableCacheBuild_ = nullptr;};
    inline string disableCacheBuild() const { DARABONBA_PTR_GET_DEFAULT(disableCacheBuild_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setDisableCacheBuild(string disableCacheBuild) { DARABONBA_PTR_SET_VALUE(disableCacheBuild_, disableCacheBuild) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // overseaBuild Field Functions 
    bool hasOverseaBuild() const { return this->overseaBuild_ != nullptr;};
    void deleteOverseaBuild() { this->overseaBuild_ = nullptr;};
    inline string overseaBuild() const { DARABONBA_PTR_GET_DEFAULT(overseaBuild_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setOverseaBuild(string overseaBuild) { DARABONBA_PTR_SET_VALUE(overseaBuild_, overseaBuild) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // Specifies whether to enable automatic image building when code is committed. Valid values:
    // 
    // *   `true`: enables automatic image building when code is committed.
    // *   `false`: disables automatic image building when code is committed.
    std::shared_ptr<string> autoBuild_ = nullptr;
    // The ID of the source code repository.
    std::shared_ptr<string> codeRepoId_ = nullptr;
    // The name of the source code repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> codeRepoName_ = nullptr;
    // The namespace to which the source code repository belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> codeRepoNamespaceName_ = nullptr;
    // The type of the source code hosting platform. Valid values: GITHUB, GITLAB, GITEE, CODE, and CODEUP.
    // 
    // This parameter is required.
    std::shared_ptr<string> codeRepoType_ = nullptr;
    // Specifies whether to disable building caches. Valid values:
    // 
    // *   `true`: disables building caches.
    // *   `false`: enables building caches.
    std::shared_ptr<string> disableCacheBuild_ = nullptr;
    // The ID of the Container Registry Enterprise Edition instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to enable Build With Servers Deployed Outside Chinese Mainland. Valid values:
    // 
    // *   `true`: enables Build With Servers Deployed Outside Chinese Mainland.
    // *   `false`: disables Build With Servers Deployed Outside Chinese Mainland.
    std::shared_ptr<string> overseaBuild_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
