// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODY_HPP_
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
  class GetDockerhubImageRiskRankInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskRankInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskRankInfo, riskRankInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskRankInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskRankInfo, riskRankInfo_);
    };
    GetDockerhubImageRiskRankInfoResponseBody() = default ;
    GetDockerhubImageRiskRankInfoResponseBody(const GetDockerhubImageRiskRankInfoResponseBody &) = default ;
    GetDockerhubImageRiskRankInfoResponseBody(GetDockerhubImageRiskRankInfoResponseBody &&) = default ;
    GetDockerhubImageRiskRankInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskRankInfoResponseBody() = default ;
    GetDockerhubImageRiskRankInfoResponseBody& operator=(const GetDockerhubImageRiskRankInfoResponseBody &) = default ;
    GetDockerhubImageRiskRankInfoResponseBody& operator=(GetDockerhubImageRiskRankInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskRankInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskRankInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Baseline, baseline_);
        DARABONBA_PTR_TO_JSON(VulAsap, vulAsap_);
      };
      friend void from_json(const Darabonba::Json& j, RiskRankInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
        DARABONBA_PTR_FROM_JSON(VulAsap, vulAsap_);
      };
      RiskRankInfo() = default ;
      RiskRankInfo(const RiskRankInfo &) = default ;
      RiskRankInfo(RiskRankInfo &&) = default ;
      RiskRankInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskRankInfo() = default ;
      RiskRankInfo& operator=(const RiskRankInfo &) = default ;
      RiskRankInfo& operator=(RiskRankInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VulAsap : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VulAsap& obj) { 
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
        friend void from_json(const Darabonba::Json& j, VulAsap& obj) { 
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
        VulAsap() = default ;
        VulAsap(const VulAsap &) = default ;
        VulAsap(VulAsap &&) = default ;
        VulAsap(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VulAsap() = default ;
        VulAsap& operator=(const VulAsap &) = default ;
        VulAsap& operator=(VulAsap &&) = default ;
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
        inline VulAsap& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


        // hcCount Field Functions 
        bool hasHcCount() const { return this->hcCount_ != nullptr;};
        void deleteHcCount() { this->hcCount_ = nullptr;};
        inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
        inline VulAsap& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline VulAsap& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageSize Field Functions 
        bool hasImageSize() const { return this->imageSize_ != nullptr;};
        void deleteImageSize() { this->imageSize_ = nullptr;};
        inline int64_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
        inline VulAsap& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


        // repoName Field Functions 
        bool hasRepoName() const { return this->repoName_ != nullptr;};
        void deleteRepoName() { this->repoName_ = nullptr;};
        inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
        inline VulAsap& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


        // repoNamespace Field Functions 
        bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
        void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
        inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
        inline VulAsap& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


        // riskLevelDetail Field Functions 
        bool hasRiskLevelDetail() const { return this->riskLevelDetail_ != nullptr;};
        void deleteRiskLevelDetail() { this->riskLevelDetail_ = nullptr;};
        inline string getRiskLevelDetail() const { DARABONBA_PTR_GET_DEFAULT(riskLevelDetail_, "") };
        inline VulAsap& setRiskLevelDetail(string riskLevelDetail) { DARABONBA_PTR_SET_VALUE(riskLevelDetail_, riskLevelDetail) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline VulAsap& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline VulAsap& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        // vulCount Field Functions 
        bool hasVulCount() const { return this->vulCount_ != nullptr;};
        void deleteVulCount() { this->vulCount_ = nullptr;};
        inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
        inline VulAsap& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      protected:
        // The digest value of the image.
        shared_ptr<string> digest_ {};
        // The number of risks detected on the image repository.
        shared_ptr<int32_t> hcCount_ {};
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The image size.
        shared_ptr<int64_t> imageSize_ {};
        // The name of the image repository.
        shared_ptr<string> repoName_ {};
        // The namespace to which the image repository belongs.
        shared_ptr<string> repoNamespace_ {};
        // The risk statistics of all hosts, images, and containers.
        shared_ptr<string> riskLevelDetail_ {};
        // The tag of the image.
        shared_ptr<string> tag_ {};
        // The UUID of the record.
        shared_ptr<string> uuid_ {};
        // The number of vulnerabilities.
        shared_ptr<int32_t> vulCount_ {};
      };

      class Baseline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Baseline& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Baseline& obj) { 
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
        Baseline() = default ;
        Baseline(const Baseline &) = default ;
        Baseline(Baseline &&) = default ;
        Baseline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Baseline() = default ;
        Baseline& operator=(const Baseline &) = default ;
        Baseline& operator=(Baseline &&) = default ;
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
        inline Baseline& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


        // hcCount Field Functions 
        bool hasHcCount() const { return this->hcCount_ != nullptr;};
        void deleteHcCount() { this->hcCount_ = nullptr;};
        inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
        inline Baseline& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Baseline& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageSize Field Functions 
        bool hasImageSize() const { return this->imageSize_ != nullptr;};
        void deleteImageSize() { this->imageSize_ = nullptr;};
        inline int64_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
        inline Baseline& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


        // repoName Field Functions 
        bool hasRepoName() const { return this->repoName_ != nullptr;};
        void deleteRepoName() { this->repoName_ = nullptr;};
        inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
        inline Baseline& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


        // repoNamespace Field Functions 
        bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
        void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
        inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
        inline Baseline& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


        // riskLevelDetail Field Functions 
        bool hasRiskLevelDetail() const { return this->riskLevelDetail_ != nullptr;};
        void deleteRiskLevelDetail() { this->riskLevelDetail_ = nullptr;};
        inline string getRiskLevelDetail() const { DARABONBA_PTR_GET_DEFAULT(riskLevelDetail_, "") };
        inline Baseline& setRiskLevelDetail(string riskLevelDetail) { DARABONBA_PTR_SET_VALUE(riskLevelDetail_, riskLevelDetail) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Baseline& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline Baseline& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        // vulCount Field Functions 
        bool hasVulCount() const { return this->vulCount_ != nullptr;};
        void deleteVulCount() { this->vulCount_ = nullptr;};
        inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
        inline Baseline& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      protected:
        // The digest value of the image.
        shared_ptr<string> digest_ {};
        // The number of baseline risks detected on the image repository.
        shared_ptr<int32_t> hcCount_ {};
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The image size.
        shared_ptr<int64_t> imageSize_ {};
        // The name of the Container Registry repository.
        shared_ptr<string> repoName_ {};
        // The namespace to which the repository belongs.
        shared_ptr<string> repoNamespace_ {};
        // The risk statistics of all hosts, images, and containers.
        shared_ptr<string> riskLevelDetail_ {};
        // The tag of the image.
        shared_ptr<string> tag_ {};
        // The UUID of the record.
        shared_ptr<string> uuid_ {};
        // The number of detected vulnerabilities.
        shared_ptr<int32_t> vulCount_ {};
      };

      virtual bool empty() const override { return this->baseline_ == nullptr
        && this->vulAsap_ == nullptr; };
      // baseline Field Functions 
      bool hasBaseline() const { return this->baseline_ != nullptr;};
      void deleteBaseline() { this->baseline_ = nullptr;};
      inline const vector<RiskRankInfo::Baseline> & getBaseline() const { DARABONBA_PTR_GET_CONST(baseline_, vector<RiskRankInfo::Baseline>) };
      inline vector<RiskRankInfo::Baseline> getBaseline() { DARABONBA_PTR_GET(baseline_, vector<RiskRankInfo::Baseline>) };
      inline RiskRankInfo& setBaseline(const vector<RiskRankInfo::Baseline> & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
      inline RiskRankInfo& setBaseline(vector<RiskRankInfo::Baseline> && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


      // vulAsap Field Functions 
      bool hasVulAsap() const { return this->vulAsap_ != nullptr;};
      void deleteVulAsap() { this->vulAsap_ = nullptr;};
      inline const vector<RiskRankInfo::VulAsap> & getVulAsap() const { DARABONBA_PTR_GET_CONST(vulAsap_, vector<RiskRankInfo::VulAsap>) };
      inline vector<RiskRankInfo::VulAsap> getVulAsap() { DARABONBA_PTR_GET(vulAsap_, vector<RiskRankInfo::VulAsap>) };
      inline RiskRankInfo& setVulAsap(const vector<RiskRankInfo::VulAsap> & vulAsap) { DARABONBA_PTR_SET_VALUE(vulAsap_, vulAsap) };
      inline RiskRankInfo& setVulAsap(vector<RiskRankInfo::VulAsap> && vulAsap) { DARABONBA_PTR_SET_RVALUE(vulAsap_, vulAsap) };


    protected:
      // The baseline risks.
      shared_ptr<vector<RiskRankInfo::Baseline>> baseline_ {};
      // The risk information of high-risk vulnerabilities.
      shared_ptr<vector<RiskRankInfo::VulAsap>> vulAsap_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskRankInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDockerhubImageRiskRankInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskRankInfo Field Functions 
    bool hasRiskRankInfo() const { return this->riskRankInfo_ != nullptr;};
    void deleteRiskRankInfo() { this->riskRankInfo_ = nullptr;};
    inline const GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo & getRiskRankInfo() const { DARABONBA_PTR_GET_CONST(riskRankInfo_, GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo) };
    inline GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo getRiskRankInfo() { DARABONBA_PTR_GET(riskRankInfo_, GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo) };
    inline GetDockerhubImageRiskRankInfoResponseBody& setRiskRankInfo(const GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo & riskRankInfo) { DARABONBA_PTR_SET_VALUE(riskRankInfo_, riskRankInfo) };
    inline GetDockerhubImageRiskRankInfoResponseBody& setRiskRankInfo(GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo && riskRankInfo) { DARABONBA_PTR_SET_RVALUE(riskRankInfo_, riskRankInfo) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The risk information.
    shared_ptr<GetDockerhubImageRiskRankInfoResponseBody::RiskRankInfo> riskRankInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
