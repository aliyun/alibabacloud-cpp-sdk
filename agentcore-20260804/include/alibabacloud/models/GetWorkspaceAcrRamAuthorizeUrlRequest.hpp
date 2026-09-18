// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEACRRAMAUTHORIZEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEACRRAMAUTHORIZEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetWorkspaceAcrRamAuthorizeUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceAcrRamAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(repository, repository_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceAcrRamAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(repository, repository_);
    };
    GetWorkspaceAcrRamAuthorizeUrlRequest() = default ;
    GetWorkspaceAcrRamAuthorizeUrlRequest(const GetWorkspaceAcrRamAuthorizeUrlRequest &) = default ;
    GetWorkspaceAcrRamAuthorizeUrlRequest(GetWorkspaceAcrRamAuthorizeUrlRequest &&) = default ;
    GetWorkspaceAcrRamAuthorizeUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceAcrRamAuthorizeUrlRequest() = default ;
    GetWorkspaceAcrRamAuthorizeUrlRequest& operator=(const GetWorkspaceAcrRamAuthorizeUrlRequest &) = default ;
    GetWorkspaceAcrRamAuthorizeUrlRequest& operator=(GetWorkspaceAcrRamAuthorizeUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->namespace_ == nullptr && this->repository_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline GetWorkspaceAcrRamAuthorizeUrlRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetWorkspaceAcrRamAuthorizeUrlRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline GetWorkspaceAcrRamAuthorizeUrlRequest& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


  protected:
    // The ACR Enterprise instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> acrInstanceId_ {};
    // The target ACR namespace, which corresponds to Agent artifact.container.namespace. This is not a Kubernetes namespace. Together with the instance and repository, this parameter determines the authorization scope.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The target repository name, which corresponds to Agent artifact.container.repo. Do not include a tag, namespace, or path separator. Wildcards are not accepted.
    // 
    // This parameter is required.
    shared_ptr<string> repository_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
