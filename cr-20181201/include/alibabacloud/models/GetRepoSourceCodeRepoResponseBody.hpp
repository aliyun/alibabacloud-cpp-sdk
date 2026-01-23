// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSOURCECODEREPORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSOURCECODEREPORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoSourceCodeRepoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoSourceCodeRepoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeRepoDomain, codeRepoDomain_);
      DARABONBA_PTR_TO_JSON(CodeRepoName, codeRepoName_);
      DARABONBA_PTR_TO_JSON(CodeRepoNamespaceName, codeRepoNamespaceName_);
      DARABONBA_PTR_TO_JSON(CodeRepoType, codeRepoType_);
      DARABONBA_PTR_TO_JSON(DisableCacheBuild, disableCacheBuild_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(OverseaBuild, overseaBuild_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoSourceCodeRepoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBuild, autoBuild_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeRepoDomain, codeRepoDomain_);
      DARABONBA_PTR_FROM_JSON(CodeRepoName, codeRepoName_);
      DARABONBA_PTR_FROM_JSON(CodeRepoNamespaceName, codeRepoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(CodeRepoType, codeRepoType_);
      DARABONBA_PTR_FROM_JSON(DisableCacheBuild, disableCacheBuild_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(OverseaBuild, overseaBuild_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRepoSourceCodeRepoResponseBody() = default ;
    GetRepoSourceCodeRepoResponseBody(const GetRepoSourceCodeRepoResponseBody &) = default ;
    GetRepoSourceCodeRepoResponseBody(GetRepoSourceCodeRepoResponseBody &&) = default ;
    GetRepoSourceCodeRepoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoSourceCodeRepoResponseBody() = default ;
    GetRepoSourceCodeRepoResponseBody& operator=(const GetRepoSourceCodeRepoResponseBody &) = default ;
    GetRepoSourceCodeRepoResponseBody& operator=(GetRepoSourceCodeRepoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBuild_ == nullptr
        && this->code_ == nullptr && this->codeRepoDomain_ == nullptr && this->codeRepoName_ == nullptr && this->codeRepoNamespaceName_ == nullptr && this->codeRepoType_ == nullptr
        && this->disableCacheBuild_ == nullptr && this->isSuccess_ == nullptr && this->overseaBuild_ == nullptr && this->repoId_ == nullptr && this->requestId_ == nullptr; };
    // autoBuild Field Functions 
    bool hasAutoBuild() const { return this->autoBuild_ != nullptr;};
    void deleteAutoBuild() { this->autoBuild_ = nullptr;};
    inline string getAutoBuild() const { DARABONBA_PTR_GET_DEFAULT(autoBuild_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setAutoBuild(string autoBuild) { DARABONBA_PTR_SET_VALUE(autoBuild_, autoBuild) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeRepoDomain Field Functions 
    bool hasCodeRepoDomain() const { return this->codeRepoDomain_ != nullptr;};
    void deleteCodeRepoDomain() { this->codeRepoDomain_ = nullptr;};
    inline string getCodeRepoDomain() const { DARABONBA_PTR_GET_DEFAULT(codeRepoDomain_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setCodeRepoDomain(string codeRepoDomain) { DARABONBA_PTR_SET_VALUE(codeRepoDomain_, codeRepoDomain) };


    // codeRepoName Field Functions 
    bool hasCodeRepoName() const { return this->codeRepoName_ != nullptr;};
    void deleteCodeRepoName() { this->codeRepoName_ = nullptr;};
    inline string getCodeRepoName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoName_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setCodeRepoName(string codeRepoName) { DARABONBA_PTR_SET_VALUE(codeRepoName_, codeRepoName) };


    // codeRepoNamespaceName Field Functions 
    bool hasCodeRepoNamespaceName() const { return this->codeRepoNamespaceName_ != nullptr;};
    void deleteCodeRepoNamespaceName() { this->codeRepoNamespaceName_ = nullptr;};
    inline string getCodeRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoNamespaceName_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setCodeRepoNamespaceName(string codeRepoNamespaceName) { DARABONBA_PTR_SET_VALUE(codeRepoNamespaceName_, codeRepoNamespaceName) };


    // codeRepoType Field Functions 
    bool hasCodeRepoType() const { return this->codeRepoType_ != nullptr;};
    void deleteCodeRepoType() { this->codeRepoType_ = nullptr;};
    inline string getCodeRepoType() const { DARABONBA_PTR_GET_DEFAULT(codeRepoType_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setCodeRepoType(string codeRepoType) { DARABONBA_PTR_SET_VALUE(codeRepoType_, codeRepoType) };


    // disableCacheBuild Field Functions 
    bool hasDisableCacheBuild() const { return this->disableCacheBuild_ != nullptr;};
    void deleteDisableCacheBuild() { this->disableCacheBuild_ = nullptr;};
    inline string getDisableCacheBuild() const { DARABONBA_PTR_GET_DEFAULT(disableCacheBuild_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setDisableCacheBuild(string disableCacheBuild) { DARABONBA_PTR_SET_VALUE(disableCacheBuild_, disableCacheBuild) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoSourceCodeRepoResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // overseaBuild Field Functions 
    bool hasOverseaBuild() const { return this->overseaBuild_ != nullptr;};
    void deleteOverseaBuild() { this->overseaBuild_ = nullptr;};
    inline string getOverseaBuild() const { DARABONBA_PTR_GET_DEFAULT(overseaBuild_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setOverseaBuild(string overseaBuild) { DARABONBA_PTR_SET_VALUE(overseaBuild_, overseaBuild) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoSourceCodeRepoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether image building is automatically triggered when source code is committed. Valid values:
    // 
    // *   `true`: Image building is automatically triggered when source code is committed.
    // *   `false`: Image building is not triggered when source code is committed.
    shared_ptr<string> autoBuild_ {};
    // The response code.
    shared_ptr<string> code_ {};
    // The address of the source code repository.
    shared_ptr<string> codeRepoDomain_ {};
    // The name of the source code repository.
    shared_ptr<string> codeRepoName_ {};
    // The namespace to which the source code repository belongs.
    shared_ptr<string> codeRepoNamespaceName_ {};
    // The type of the code hosting platform. Valid values: `GITHUB`, `GITLAB`, `GITEE`, `CODE`, and `CODEUP`.
    shared_ptr<string> codeRepoType_ {};
    // Indicates whether build cache is disabled. Valid values:
    // 
    // *   `true`: Build cache is disabled.
    // *   `false`: Build cache is enabled.
    shared_ptr<string> disableCacheBuild_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    shared_ptr<bool> isSuccess_ {};
    // Indicates whether image building is accelerated for servers outside the Chinese mainland. Valid values:
    // 
    // *   `true`: Image building is accelerated for servers outside the Chinese mainland.
    // *   `false`: Image building is not accelerated for servers outside the Chinese mainland.
    shared_ptr<string> overseaBuild_ {};
    // The ID of the repository.
    shared_ptr<string> repoId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
