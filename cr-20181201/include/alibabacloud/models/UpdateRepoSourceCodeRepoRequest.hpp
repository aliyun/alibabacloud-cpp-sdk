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
        && this->codeRepoId_ == nullptr && this->codeRepoName_ == nullptr && this->codeRepoNamespaceName_ == nullptr && this->codeRepoType_ == nullptr && this->disableCacheBuild_ == nullptr
        && this->instanceId_ == nullptr && this->overseaBuild_ == nullptr && this->repoId_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline string getAutoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setAutoBuild(string autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // codeRepoId Field Functions 
    bool hasCodeRepoId() const { return this->codeRepoId_ != nullptr;};
    void deleteCodeRepoId() { this->codeRepoId_ = nullptr;};
    inline string getCodeRepoId() const { DARABONBA_PTR_GET_DEFAULT(codeRepoId_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoId(string codeRepoId) { DARABONBA_PTR_SET_VALUE(codeRepoId_, codeRepoId) };


    // codeRepoName Field Functions 
    bool hasCodeRepoName() const { return this->codeRepoName_ != nullptr;};
    void deleteCodeRepoName() { this->codeRepoName_ = nullptr;};
    inline string getCodeRepoName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoName_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoName(string codeRepoName) { DARABONBA_PTR_SET_VALUE(codeRepoName_, codeRepoName) };


    // codeRepoNamespaceName Field Functions 
    bool hasCodeRepoNamespaceName() const { return this->codeRepoNamespaceName_ != nullptr;};
    void deleteCodeRepoNamespaceName() { this->codeRepoNamespaceName_ = nullptr;};
    inline string getCodeRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoNamespaceName_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoNamespaceName(string codeRepoNamespaceName) { DARABONBA_PTR_SET_VALUE(codeRepoNamespaceName_, codeRepoNamespaceName) };


    // codeRepoType Field Functions 
    bool hasCodeRepoType() const { return this->codeRepoType_ != nullptr;};
    void deleteCodeRepoType() { this->codeRepoType_ = nullptr;};
    inline string getCodeRepoType() const { DARABONBA_PTR_GET_DEFAULT(codeRepoType_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setCodeRepoType(string codeRepoType) { DARABONBA_PTR_SET_VALUE(codeRepoType_, codeRepoType) };


    // disableCacheBuild Field Functions 
    bool hasDisableCacheBuild() const { return this->disableCacheBuild_ != nullptr;};
    void deleteDisableCacheBuild() { this->disableCacheBuild_ = nullptr;};
    inline string getDisableCacheBuild() const { DARABONBA_PTR_GET_DEFAULT(disableCacheBuild_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setDisableCacheBuild(string disableCacheBuild) { DARABONBA_PTR_SET_VALUE(disableCacheBuild_, disableCacheBuild) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // overseaBuild Field Functions 
    bool hasOverseaBuild() const { return this->overseaBuild_ != nullptr;};
    void deleteOverseaBuild() { this->overseaBuild_ = nullptr;};
    inline string getOverseaBuild() const { DARABONBA_PTR_GET_DEFAULT(overseaBuild_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setOverseaBuild(string overseaBuild) { DARABONBA_PTR_SET_VALUE(overseaBuild_, overseaBuild) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline UpdateRepoSourceCodeRepoRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // Specifies whether to enable automatic image building when code is committed. Valid values:
    // 
    // *   `true`: enables automatic image building when code is committed.
    // *   `false`: disables automatic image building when code is committed.
    shared_ptr<string> autoBuild_ {};
    // The ID of the source code repository.
    shared_ptr<string> codeRepoId_ {};
    // The name of the source code repository.
    // 
    // This parameter is required.
    shared_ptr<string> codeRepoName_ {};
    // The namespace to which the source code repository belongs.
    // 
    // This parameter is required.
    shared_ptr<string> codeRepoNamespaceName_ {};
    // The type of the source code hosting platform. Valid values: GITHUB, GITLAB, GITEE, CODE, and CODEUP.
    // 
    // This parameter is required.
    shared_ptr<string> codeRepoType_ {};
    // Specifies whether to disable building caches. Valid values:
    // 
    // *   `true`: disables building caches.
    // *   `false`: enables building caches.
    shared_ptr<string> disableCacheBuild_ {};
    // The ID of the Container Registry Enterprise Edition instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to enable Build With Servers Deployed Outside Chinese Mainland. Valid values:
    // 
    // *   `true`: enables Build With Servers Deployed Outside Chinese Mainland.
    // *   `false`: disables Build With Servers Deployed Outside Chinese Mainland.
    shared_ptr<string> overseaBuild_ {};
    // The ID of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
