// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromTag, fromTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(ToTag, toTag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromTag, fromTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(ToTag, toTag_);
    };
    CreateRepoTagRequest() = default ;
    CreateRepoTagRequest(const CreateRepoTagRequest &) = default ;
    CreateRepoTagRequest(CreateRepoTagRequest &&) = default ;
    CreateRepoTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoTagRequest() = default ;
    CreateRepoTagRequest& operator=(const CreateRepoTagRequest &) = default ;
    CreateRepoTagRequest& operator=(CreateRepoTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromTag_ != nullptr
        && this->instanceId_ != nullptr && this->namespaceName_ != nullptr && this->repoName_ != nullptr && this->toTag_ != nullptr; };
    // fromTag Field Functions 
    bool hasFromTag() const { return this->fromTag_ != nullptr;};
    void deleteFromTag() { this->fromTag_ = nullptr;};
    inline string fromTag() const { DARABONBA_PTR_GET_DEFAULT(fromTag_, "") };
    inline CreateRepoTagRequest& setFromTag(string fromTag) { DARABONBA_PTR_SET_VALUE(fromTag_, fromTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateRepoTagRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateRepoTagRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // toTag Field Functions 
    bool hasToTag() const { return this->toTag_ != nullptr;};
    void deleteToTag() { this->toTag_ = nullptr;};
    inline string toTag() const { DARABONBA_PTR_GET_DEFAULT(toTag_, "") };
    inline CreateRepoTagRequest& setToTag(string toTag) { DARABONBA_PTR_SET_VALUE(toTag_, toTag) };


  protected:
    // The source image tag.
    // 
    // This parameter is required.
    std::shared_ptr<string> fromTag_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The name of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoName_ = nullptr;
    // The image tag that you want to create.
    // 
    // This parameter is required.
    std::shared_ptr<string> toTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
