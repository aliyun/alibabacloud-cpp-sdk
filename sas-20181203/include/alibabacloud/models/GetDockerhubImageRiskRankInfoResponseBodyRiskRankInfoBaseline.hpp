// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODYRISKRANKINFOBASELINE_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODYRISKRANKINFOBASELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& obj) { 
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
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline() = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline(const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline &) = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline(GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline &&) = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline() = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& operator=(const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline &) = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& operator=(GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digest_ == nullptr
        && return this->hcCount_ == nullptr && return this->imageId_ == nullptr && return this->imageSize_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr
        && return this->riskLevelDetail_ == nullptr && return this->tag_ == nullptr && return this->uuid_ == nullptr && return this->vulCount_ == nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // hcCount Field Functions 
    bool hasHcCount() const { return this->hcCount_ != nullptr;};
    void deleteHcCount() { this->hcCount_ = nullptr;};
    inline int32_t hcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int64_t imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // riskLevelDetail Field Functions 
    bool hasRiskLevelDetail() const { return this->riskLevelDetail_ != nullptr;};
    void deleteRiskLevelDetail() { this->riskLevelDetail_ = nullptr;};
    inline string riskLevelDetail() const { DARABONBA_PTR_GET_DEFAULT(riskLevelDetail_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setRiskLevelDetail(string riskLevelDetail) { DARABONBA_PTR_SET_VALUE(riskLevelDetail_, riskLevelDetail) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The digest value of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The number of baseline risks detected on the image repository.
    std::shared_ptr<int32_t> hcCount_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image size.
    std::shared_ptr<int64_t> imageSize_ = nullptr;
    // The name of the Container Registry repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The risk statistics of all hosts, images, and containers.
    std::shared_ptr<string> riskLevelDetail_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The UUID of the record.
    std::shared_ptr<string> uuid_ = nullptr;
    // The number of detected vulnerabilities.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
