// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TagImmutability, tagImmutability_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TagImmutability, tagImmutability_);
    };
    CreateRepositoryRequest() = default ;
    CreateRepositoryRequest(const CreateRepositoryRequest &) = default ;
    CreateRepositoryRequest(CreateRepositoryRequest &&) = default ;
    CreateRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepositoryRequest() = default ;
    CreateRepositoryRequest& operator=(const CreateRepositoryRequest &) = default ;
    CreateRepositoryRequest& operator=(CreateRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->instanceId_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr && this->repoType_ == nullptr && this->summary_ == nullptr
        && this->tagImmutability_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline CreateRepositoryRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepositoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateRepositoryRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline CreateRepositoryRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline CreateRepositoryRequest& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateRepositoryRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tagImmutability Field Functions 
    bool hasTagImmutability() const { return this->tagImmutability_ != nullptr;};
    void deleteTagImmutability() { this->tagImmutability_ = nullptr;};
    inline bool getTagImmutability() const { DARABONBA_PTR_GET_DEFAULT(tagImmutability_, false) };
    inline CreateRepositoryRequest& setTagImmutability(bool tagImmutability) { DARABONBA_PTR_SET_VALUE(tagImmutability_, tagImmutability) };


  protected:
    // The description of the repository.
    shared_ptr<string> detail_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoName_ {};
    // The name of the namespace to which the image repository belongs.
    // 
    // This parameter is required.
    shared_ptr<string> repoNamespaceName_ {};
    // The type of the repository. Valid values:
    // 
    // *   `PUBLIC`: The repository is a public repository.
    // *   `PRIVATE`: The repository is a private repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoType_ {};
    // The summary about the repository.
    // 
    // This parameter is required.
    shared_ptr<string> summary_ {};
    // Specifies whether to enable the feature of image tag immutability. Valid values:
    // 
    // *   `true`: enables the feature of image tag immutability.
    // *   `false`: disables the feature of image tag immutability.
    shared_ptr<bool> tagImmutability_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
