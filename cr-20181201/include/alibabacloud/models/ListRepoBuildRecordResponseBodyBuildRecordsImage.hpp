// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODYBUILDRECORDSIMAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODYBUILDRECORDSIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRecordResponseBodyBuildRecordsImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRecordResponseBodyBuildRecordsImage& obj) { 
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRecordResponseBodyBuildRecordsImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    ListRepoBuildRecordResponseBodyBuildRecordsImage() = default ;
    ListRepoBuildRecordResponseBodyBuildRecordsImage(const ListRepoBuildRecordResponseBodyBuildRecordsImage &) = default ;
    ListRepoBuildRecordResponseBodyBuildRecordsImage(ListRepoBuildRecordResponseBodyBuildRecordsImage &&) = default ;
    ListRepoBuildRecordResponseBodyBuildRecordsImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRecordResponseBodyBuildRecordsImage() = default ;
    ListRepoBuildRecordResponseBodyBuildRecordsImage& operator=(const ListRepoBuildRecordResponseBodyBuildRecordsImage &) = default ;
    ListRepoBuildRecordResponseBodyBuildRecordsImage& operator=(ListRepoBuildRecordResponseBodyBuildRecordsImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageTag_ == nullptr
        && return this->repoId_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespaceName_ == nullptr; };
    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecordsImage& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecordsImage& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecordsImage& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecordsImage& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


  protected:
    // The tag of the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    // The ID of the repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace to which the repository belongs.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
