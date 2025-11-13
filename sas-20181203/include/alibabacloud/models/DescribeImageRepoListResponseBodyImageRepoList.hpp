// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTRESPONSEBODYIMAGEREPOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTRESPONSEBODYIMAGEREPOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoListResponseBodyImageRepoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoListResponseBodyImageRepoList& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoListResponseBodyImageRepoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
    };
    DescribeImageRepoListResponseBodyImageRepoList() = default ;
    DescribeImageRepoListResponseBodyImageRepoList(const DescribeImageRepoListResponseBodyImageRepoList &) = default ;
    DescribeImageRepoListResponseBodyImageRepoList(DescribeImageRepoListResponseBodyImageRepoList &&) = default ;
    DescribeImageRepoListResponseBodyImageRepoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoListResponseBodyImageRepoList() = default ;
    DescribeImageRepoListResponseBodyImageRepoList& operator=(const DescribeImageRepoListResponseBodyImageRepoList &) = default ;
    DescribeImageRepoListResponseBodyImageRepoList& operator=(DescribeImageRepoListResponseBodyImageRepoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flag_ == nullptr
        && return this->imageCount_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr; };
    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeImageRepoListResponseBodyImageRepoList& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline DescribeImageRepoListResponseBodyImageRepoList& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageRepoListResponseBodyImageRepoList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageRepoListResponseBodyImageRepoList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


  protected:
    // Indicates whether the feature takes effect on the image repository. Valid values:
    // 
    // *   **add**: yes
    // *   **del**: no
    std::shared_ptr<string> flag_ = nullptr;
    // Number of images.
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
