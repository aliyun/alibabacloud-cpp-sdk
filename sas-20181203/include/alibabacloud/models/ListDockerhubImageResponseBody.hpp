// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCKERHUBIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCKERHUBIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListDockerhubImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDockerhubImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDockerhubImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDockerhubImageResponseBody() = default ;
    ListDockerhubImageResponseBody(const ListDockerhubImageResponseBody &) = default ;
    ListDockerhubImageResponseBody(ListDockerhubImageResponseBody &&) = default ;
    ListDockerhubImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDockerhubImageResponseBody() = default ;
    ListDockerhubImageResponseBody& operator=(const ListDockerhubImageResponseBody &) = default ;
    ListDockerhubImageResponseBody& operator=(ListDockerhubImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageList& obj) { 
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(RiskLevelDetail, riskLevelDetail_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      };
      friend void from_json(const Darabonba::Json& j, ImageList& obj) { 
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(RiskLevelDetail, riskLevelDetail_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      };
      ImageList() = default ;
      ImageList(const ImageList &) = default ;
      ImageList(ImageList &&) = default ;
      ImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageList() = default ;
      ImageList& operator=(const ImageList &) = default ;
      ImageList& operator=(ImageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->digest_ == nullptr
        && this->hcCount_ == nullptr && this->imageId_ == nullptr && this->imageSize_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr
        && this->riskLevelDetail_ == nullptr && this->tag_ == nullptr && this->uuid_ == nullptr && this->vulCount_ == nullptr; };
      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline ImageList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // hcCount Field Functions 
      bool hasHcCount() const { return this->hcCount_ != nullptr;};
      void deleteHcCount() { this->hcCount_ = nullptr;};
      inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
      inline ImageList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ImageList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageSize Field Functions 
      bool hasImageSize() const { return this->imageSize_ != nullptr;};
      void deleteImageSize() { this->imageSize_ = nullptr;};
      inline int64_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
      inline ImageList& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline ImageList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // riskLevelDetail Field Functions 
      bool hasRiskLevelDetail() const { return this->riskLevelDetail_ != nullptr;};
      void deleteRiskLevelDetail() { this->riskLevelDetail_ = nullptr;};
      inline string getRiskLevelDetail() const { DARABONBA_PTR_GET_DEFAULT(riskLevelDetail_, "") };
      inline ImageList& setRiskLevelDetail(string riskLevelDetail) { DARABONBA_PTR_SET_VALUE(riskLevelDetail_, riskLevelDetail) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ImageList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ImageList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline ImageList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    protected:
      // The digest value of the image.
      shared_ptr<string> digest_ {};
      // The number of baseline risks.
      shared_ptr<int32_t> hcCount_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The size of the image. Unit: bytes.
      shared_ptr<int64_t> imageSize_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The risk details of the image.
      shared_ptr<string> riskLevelDetail_ {};
      // The tag of the image.
      shared_ptr<string> tag_ {};
      // The UUID of the image.
      shared_ptr<string> uuid_ {};
      // The number of detected vulnerabilities.
      shared_ptr<int32_t> vulCount_ {};
    };

    virtual bool empty() const override { return this->imageList_ == nullptr
        && this->requestId_ == nullptr; };
    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<ListDockerhubImageResponseBody::ImageList> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<ListDockerhubImageResponseBody::ImageList>) };
    inline vector<ListDockerhubImageResponseBody::ImageList> getImageList() { DARABONBA_PTR_GET(imageList_, vector<ListDockerhubImageResponseBody::ImageList>) };
    inline ListDockerhubImageResponseBody& setImageList(const vector<ListDockerhubImageResponseBody::ImageList> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline ListDockerhubImageResponseBody& setImageList(vector<ListDockerhubImageResponseBody::ImageList> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDockerhubImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the images.
    shared_ptr<vector<ListDockerhubImageResponseBody::ImageList>> imageList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
