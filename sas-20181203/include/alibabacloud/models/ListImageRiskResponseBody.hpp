// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODY_HPP_
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
  class ListImageRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRiskList, imageRiskList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRiskList, imageRiskList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImageRiskResponseBody() = default ;
    ListImageRiskResponseBody(const ListImageRiskResponseBody &) = default ;
    ListImageRiskResponseBody(ListImageRiskResponseBody &&) = default ;
    ListImageRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRiskResponseBody() = default ;
    ListImageRiskResponseBody& operator=(const ListImageRiskResponseBody &) = default ;
    ListImageRiskResponseBody& operator=(ListImageRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page in a paging query.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page in a paging query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of entries per page in a paging query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ImageRiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRiskList& obj) { 
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(EndPointList, endPointList_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImageAccessType, imageAccessType_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InternetURLs, internetURLs_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(RepoType, repoType_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TagImmutable, tagImmutable_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VpcURLs, vpcURLs_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(EndPointList, endPointList_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImageAccessType, imageAccessType_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InternetURLs, internetURLs_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TagImmutable, tagImmutable_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VpcURLs, vpcURLs_);
      };
      ImageRiskList() = default ;
      ImageRiskList(const ImageRiskList &) = default ;
      ImageRiskList(ImageRiskList &&) = default ;
      ImageRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRiskList() = default ;
      ImageRiskList& operator=(const ImageRiskList &) = default ;
      ImageRiskList& operator=(ImageRiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndPointList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndPointList& obj) { 
          DARABONBA_PTR_TO_JSON(Domains, domains_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EndPointList& obj) { 
          DARABONBA_PTR_FROM_JSON(Domains, domains_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        EndPointList() = default ;
        EndPointList(const EndPointList &) = default ;
        EndPointList(EndPointList &&) = default ;
        EndPointList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndPointList() = default ;
        EndPointList& operator=(const EndPointList &) = default ;
        EndPointList& operator=(EndPointList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domains_ == nullptr
        && this->type_ == nullptr; };
        // domains Field Functions 
        bool hasDomains() const { return this->domains_ != nullptr;};
        void deleteDomains() { this->domains_ = nullptr;};
        inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
        inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
        inline EndPointList& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
        inline EndPointList& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EndPointList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of endpoint domain names.
        shared_ptr<vector<string>> domains_ {};
        // The type of the endpoint domain name. Valid values:
        // - **internet**: public network
        // - **intranet**: private network.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->digest_ == nullptr
        && this->endPointList_ == nullptr && this->endpoints_ == nullptr && this->image_ == nullptr && this->imageAccessType_ == nullptr && this->imageId_ == nullptr
        && this->internetURLs_ == nullptr && this->regionId_ == nullptr && this->registryType_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespace_ == nullptr && this->repoType_ == nullptr && this->statistics_ == nullptr && this->tag_ == nullptr && this->tagImmutable_ == nullptr
        && this->uuid_ == nullptr && this->vpcURLs_ == nullptr; };
      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline ImageRiskList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // endPointList Field Functions 
      bool hasEndPointList() const { return this->endPointList_ != nullptr;};
      void deleteEndPointList() { this->endPointList_ = nullptr;};
      inline const vector<ImageRiskList::EndPointList> & getEndPointList() const { DARABONBA_PTR_GET_CONST(endPointList_, vector<ImageRiskList::EndPointList>) };
      inline vector<ImageRiskList::EndPointList> getEndPointList() { DARABONBA_PTR_GET(endPointList_, vector<ImageRiskList::EndPointList>) };
      inline ImageRiskList& setEndPointList(const vector<ImageRiskList::EndPointList> & endPointList) { DARABONBA_PTR_SET_VALUE(endPointList_, endPointList) };
      inline ImageRiskList& setEndPointList(vector<ImageRiskList::EndPointList> && endPointList) { DARABONBA_PTR_SET_RVALUE(endPointList_, endPointList) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline string getEndpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
      inline ImageRiskList& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline ImageRiskList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imageAccessType Field Functions 
      bool hasImageAccessType() const { return this->imageAccessType_ != nullptr;};
      void deleteImageAccessType() { this->imageAccessType_ = nullptr;};
      inline string getImageAccessType() const { DARABONBA_PTR_GET_DEFAULT(imageAccessType_, "") };
      inline ImageRiskList& setImageAccessType(string imageAccessType) { DARABONBA_PTR_SET_VALUE(imageAccessType_, imageAccessType) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ImageRiskList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // internetURLs Field Functions 
      bool hasInternetURLs() const { return this->internetURLs_ != nullptr;};
      void deleteInternetURLs() { this->internetURLs_ = nullptr;};
      inline string getInternetURLs() const { DARABONBA_PTR_GET_DEFAULT(internetURLs_, "") };
      inline ImageRiskList& setInternetURLs(string internetURLs) { DARABONBA_PTR_SET_VALUE(internetURLs_, internetURLs) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageRiskList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline ImageRiskList& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline ImageRiskList& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageRiskList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline ImageRiskList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline ImageRiskList& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline ImageRiskList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ImageRiskList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tagImmutable Field Functions 
      bool hasTagImmutable() const { return this->tagImmutable_ != nullptr;};
      void deleteTagImmutable() { this->tagImmutable_ = nullptr;};
      inline int32_t getTagImmutable() const { DARABONBA_PTR_GET_DEFAULT(tagImmutable_, 0) };
      inline ImageRiskList& setTagImmutable(int32_t tagImmutable) { DARABONBA_PTR_SET_VALUE(tagImmutable_, tagImmutable) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ImageRiskList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vpcURLs Field Functions 
      bool hasVpcURLs() const { return this->vpcURLs_ != nullptr;};
      void deleteVpcURLs() { this->vpcURLs_ = nullptr;};
      inline string getVpcURLs() const { DARABONBA_PTR_GET_DEFAULT(vpcURLs_, "") };
      inline ImageRiskList& setVpcURLs(string vpcURLs) { DARABONBA_PTR_SET_VALUE(vpcURLs_, vpcURLs) };


    protected:
      // The digest value of the image.
      shared_ptr<string> digest_ {};
      // The list of endpoint information.
      shared_ptr<vector<ImageRiskList::EndPointList>> endPointList_ {};
      // The list of endpoints for the image service.
      shared_ptr<string> endpoints_ {};
      // The image.
      shared_ptr<string> image_ {};
      // The registration status of the image repository. Valid values:
      // 
      // - **IN_SAS**: The repository is registered in Security Center.
      // - **NOT_IN_SAS**: The repository is not registered in Security Center.
      shared_ptr<string> imageAccessType_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The public network access URL of the image repository.
      shared_ptr<string> internetURLs_ {};
      // The region where the image repository resides.
      shared_ptr<string> regionId_ {};
      // The type of the image registry. Valid values:
      // 
      // - **acr**: ACR
      // - **harbor**: Harbor
      // - **quay**: Quay
      // - **CI/CD**: Jenkins.
      shared_ptr<string> registryType_ {};
      // The ID of the image repository.
      shared_ptr<string> repoId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The image namespace.
      shared_ptr<string> repoNamespace_ {};
      // The repository type. Valid values:
      // 
      // - `PUBLIC`: public
      // 
      // - `PRIVATE`: private.
      shared_ptr<string> repoType_ {};
      // The statistics of security events.
      shared_ptr<string> statistics_ {};
      // The image tag.
      shared_ptr<string> tag_ {};
      // The tag immutability setting. If immutability is enabled, image versions other than latest cannot be used to overwrite existing versions in this repository. Valid values:
      // - **0**: Mutable.
      // - **1**: Immutable.
      shared_ptr<int32_t> tagImmutable_ {};
      // The unique identifier of the image.
      shared_ptr<string> uuid_ {};
      // The VPC access URL of the image repository.
      shared_ptr<string> vpcURLs_ {};
    };

    virtual bool empty() const override { return this->imageRiskList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // imageRiskList Field Functions 
    bool hasImageRiskList() const { return this->imageRiskList_ != nullptr;};
    void deleteImageRiskList() { this->imageRiskList_ = nullptr;};
    inline const vector<ListImageRiskResponseBody::ImageRiskList> & getImageRiskList() const { DARABONBA_PTR_GET_CONST(imageRiskList_, vector<ListImageRiskResponseBody::ImageRiskList>) };
    inline vector<ListImageRiskResponseBody::ImageRiskList> getImageRiskList() { DARABONBA_PTR_GET(imageRiskList_, vector<ListImageRiskResponseBody::ImageRiskList>) };
    inline ListImageRiskResponseBody& setImageRiskList(const vector<ListImageRiskResponseBody::ImageRiskList> & imageRiskList) { DARABONBA_PTR_SET_VALUE(imageRiskList_, imageRiskList) };
    inline ListImageRiskResponseBody& setImageRiskList(vector<ListImageRiskResponseBody::ImageRiskList> && imageRiskList) { DARABONBA_PTR_SET_RVALUE(imageRiskList_, imageRiskList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListImageRiskResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListImageRiskResponseBody::PageInfo) };
    inline ListImageRiskResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListImageRiskResponseBody::PageInfo) };
    inline ListImageRiskResponseBody& setPageInfo(const ListImageRiskResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListImageRiskResponseBody& setPageInfo(ListImageRiskResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of image risk information.
    shared_ptr<vector<ListImageRiskResponseBody::ImageRiskList>> imageRiskList_ {};
    // The pagination information.
    shared_ptr<ListImageRiskResponseBody::PageInfo> pageInfo_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
