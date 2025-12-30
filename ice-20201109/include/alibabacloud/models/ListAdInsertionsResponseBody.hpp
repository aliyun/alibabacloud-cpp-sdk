// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADINSERTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADINSERTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAdInsertionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdInsertionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdInsertionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAdInsertionsResponseBody() = default ;
    ListAdInsertionsResponseBody(const ListAdInsertionsResponseBody &) = default ;
    ListAdInsertionsResponseBody(ListAdInsertionsResponseBody &&) = default ;
    ListAdInsertionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdInsertionsResponseBody() = default ;
    ListAdInsertionsResponseBody& operator=(const ListAdInsertionsResponseBody &) = default ;
    ListAdInsertionsResponseBody& operator=(ListAdInsertionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
        DARABONBA_PTR_TO_JSON(AdsUrl, adsUrl_);
        DARABONBA_PTR_TO_JSON(CdnConfig, cdnConfig_);
        DARABONBA_PTR_TO_JSON(ConfigAliases, configAliases_);
        DARABONBA_PTR_TO_JSON(ContentUrlPrefix, contentUrlPrefix_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(ManifestEndpointConfig, manifestEndpointConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PersonalizationThreshold, personalizationThreshold_);
        DARABONBA_PTR_TO_JSON(SlateAdUrl, slateAdUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(AdMarkerPassthrough, adMarkerPassthrough_);
        DARABONBA_PTR_FROM_JSON(AdsUrl, adsUrl_);
        DARABONBA_PTR_FROM_JSON(CdnConfig, cdnConfig_);
        DARABONBA_PTR_FROM_JSON(ConfigAliases, configAliases_);
        DARABONBA_PTR_FROM_JSON(ContentUrlPrefix, contentUrlPrefix_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(ManifestEndpointConfig, manifestEndpointConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PersonalizationThreshold, personalizationThreshold_);
        DARABONBA_PTR_FROM_JSON(SlateAdUrl, slateAdUrl_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ManifestEndpointConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManifestEndpointConfig& obj) { 
          DARABONBA_PTR_TO_JSON(DashPrefix, dashPrefix_);
          DARABONBA_PTR_TO_JSON(HlsPrefix, hlsPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, ManifestEndpointConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(DashPrefix, dashPrefix_);
          DARABONBA_PTR_FROM_JSON(HlsPrefix, hlsPrefix_);
        };
        ManifestEndpointConfig() = default ;
        ManifestEndpointConfig(const ManifestEndpointConfig &) = default ;
        ManifestEndpointConfig(ManifestEndpointConfig &&) = default ;
        ManifestEndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManifestEndpointConfig() = default ;
        ManifestEndpointConfig& operator=(const ManifestEndpointConfig &) = default ;
        ManifestEndpointConfig& operator=(ManifestEndpointConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dashPrefix_ == nullptr
        && this->hlsPrefix_ == nullptr; };
        // dashPrefix Field Functions 
        bool hasDashPrefix() const { return this->dashPrefix_ != nullptr;};
        void deleteDashPrefix() { this->dashPrefix_ = nullptr;};
        inline string getDashPrefix() const { DARABONBA_PTR_GET_DEFAULT(dashPrefix_, "") };
        inline ManifestEndpointConfig& setDashPrefix(string dashPrefix) { DARABONBA_PTR_SET_VALUE(dashPrefix_, dashPrefix) };


        // hlsPrefix Field Functions 
        bool hasHlsPrefix() const { return this->hlsPrefix_ != nullptr;};
        void deleteHlsPrefix() { this->hlsPrefix_ = nullptr;};
        inline string getHlsPrefix() const { DARABONBA_PTR_GET_DEFAULT(hlsPrefix_, "") };
        inline ManifestEndpointConfig& setHlsPrefix(string hlsPrefix) { DARABONBA_PTR_SET_VALUE(hlsPrefix_, hlsPrefix) };


      protected:
        // DASH清单播放端点前缀
        shared_ptr<string> dashPrefix_ {};
        // The prefix of the playback endpoint for HLS manifests.
        shared_ptr<string> hlsPrefix_ {};
      };

      class CdnConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdnConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AdSegmentUrlPrefix, adSegmentUrlPrefix_);
          DARABONBA_PTR_TO_JSON(ContentSegmentUrlPrefix, contentSegmentUrlPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, CdnConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AdSegmentUrlPrefix, adSegmentUrlPrefix_);
          DARABONBA_PTR_FROM_JSON(ContentSegmentUrlPrefix, contentSegmentUrlPrefix_);
        };
        CdnConfig() = default ;
        CdnConfig(const CdnConfig &) = default ;
        CdnConfig(CdnConfig &&) = default ;
        CdnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdnConfig() = default ;
        CdnConfig& operator=(const CdnConfig &) = default ;
        CdnConfig& operator=(CdnConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adSegmentUrlPrefix_ == nullptr
        && this->contentSegmentUrlPrefix_ == nullptr; };
        // adSegmentUrlPrefix Field Functions 
        bool hasAdSegmentUrlPrefix() const { return this->adSegmentUrlPrefix_ != nullptr;};
        void deleteAdSegmentUrlPrefix() { this->adSegmentUrlPrefix_ = nullptr;};
        inline string getAdSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(adSegmentUrlPrefix_, "") };
        inline CdnConfig& setAdSegmentUrlPrefix(string adSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(adSegmentUrlPrefix_, adSegmentUrlPrefix) };


        // contentSegmentUrlPrefix Field Functions 
        bool hasContentSegmentUrlPrefix() const { return this->contentSegmentUrlPrefix_ != nullptr;};
        void deleteContentSegmentUrlPrefix() { this->contentSegmentUrlPrefix_ = nullptr;};
        inline string getContentSegmentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentSegmentUrlPrefix_, "") };
        inline CdnConfig& setContentSegmentUrlPrefix(string contentSegmentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentSegmentUrlPrefix_, contentSegmentUrlPrefix) };


      protected:
        // The CDN prefix for ad segments.
        shared_ptr<string> adSegmentUrlPrefix_ {};
        // The CDN prefix for content segments.
        shared_ptr<string> contentSegmentUrlPrefix_ {};
      };

      virtual bool empty() const override { return this->adMarkerPassthrough_ == nullptr
        && this->adsUrl_ == nullptr && this->cdnConfig_ == nullptr && this->configAliases_ == nullptr && this->contentUrlPrefix_ == nullptr && this->createTime_ == nullptr
        && this->lastModified_ == nullptr && this->manifestEndpointConfig_ == nullptr && this->name_ == nullptr && this->personalizationThreshold_ == nullptr && this->slateAdUrl_ == nullptr; };
      // adMarkerPassthrough Field Functions 
      bool hasAdMarkerPassthrough() const { return this->adMarkerPassthrough_ != nullptr;};
      void deleteAdMarkerPassthrough() { this->adMarkerPassthrough_ = nullptr;};
      inline string getAdMarkerPassthrough() const { DARABONBA_PTR_GET_DEFAULT(adMarkerPassthrough_, "") };
      inline Configs& setAdMarkerPassthrough(string adMarkerPassthrough) { DARABONBA_PTR_SET_VALUE(adMarkerPassthrough_, adMarkerPassthrough) };


      // adsUrl Field Functions 
      bool hasAdsUrl() const { return this->adsUrl_ != nullptr;};
      void deleteAdsUrl() { this->adsUrl_ = nullptr;};
      inline string getAdsUrl() const { DARABONBA_PTR_GET_DEFAULT(adsUrl_, "") };
      inline Configs& setAdsUrl(string adsUrl) { DARABONBA_PTR_SET_VALUE(adsUrl_, adsUrl) };


      // cdnConfig Field Functions 
      bool hasCdnConfig() const { return this->cdnConfig_ != nullptr;};
      void deleteCdnConfig() { this->cdnConfig_ = nullptr;};
      inline const Configs::CdnConfig & getCdnConfig() const { DARABONBA_PTR_GET_CONST(cdnConfig_, Configs::CdnConfig) };
      inline Configs::CdnConfig getCdnConfig() { DARABONBA_PTR_GET(cdnConfig_, Configs::CdnConfig) };
      inline Configs& setCdnConfig(const Configs::CdnConfig & cdnConfig) { DARABONBA_PTR_SET_VALUE(cdnConfig_, cdnConfig) };
      inline Configs& setCdnConfig(Configs::CdnConfig && cdnConfig) { DARABONBA_PTR_SET_RVALUE(cdnConfig_, cdnConfig) };


      // configAliases Field Functions 
      bool hasConfigAliases() const { return this->configAliases_ != nullptr;};
      void deleteConfigAliases() { this->configAliases_ = nullptr;};
      inline string getConfigAliases() const { DARABONBA_PTR_GET_DEFAULT(configAliases_, "") };
      inline Configs& setConfigAliases(string configAliases) { DARABONBA_PTR_SET_VALUE(configAliases_, configAliases) };


      // contentUrlPrefix Field Functions 
      bool hasContentUrlPrefix() const { return this->contentUrlPrefix_ != nullptr;};
      void deleteContentUrlPrefix() { this->contentUrlPrefix_ = nullptr;};
      inline string getContentUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(contentUrlPrefix_, "") };
      inline Configs& setContentUrlPrefix(string contentUrlPrefix) { DARABONBA_PTR_SET_VALUE(contentUrlPrefix_, contentUrlPrefix) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Configs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Configs& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // manifestEndpointConfig Field Functions 
      bool hasManifestEndpointConfig() const { return this->manifestEndpointConfig_ != nullptr;};
      void deleteManifestEndpointConfig() { this->manifestEndpointConfig_ = nullptr;};
      inline const Configs::ManifestEndpointConfig & getManifestEndpointConfig() const { DARABONBA_PTR_GET_CONST(manifestEndpointConfig_, Configs::ManifestEndpointConfig) };
      inline Configs::ManifestEndpointConfig getManifestEndpointConfig() { DARABONBA_PTR_GET(manifestEndpointConfig_, Configs::ManifestEndpointConfig) };
      inline Configs& setManifestEndpointConfig(const Configs::ManifestEndpointConfig & manifestEndpointConfig) { DARABONBA_PTR_SET_VALUE(manifestEndpointConfig_, manifestEndpointConfig) };
      inline Configs& setManifestEndpointConfig(Configs::ManifestEndpointConfig && manifestEndpointConfig) { DARABONBA_PTR_SET_RVALUE(manifestEndpointConfig_, manifestEndpointConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Configs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // personalizationThreshold Field Functions 
      bool hasPersonalizationThreshold() const { return this->personalizationThreshold_ != nullptr;};
      void deletePersonalizationThreshold() { this->personalizationThreshold_ = nullptr;};
      inline int32_t getPersonalizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(personalizationThreshold_, 0) };
      inline Configs& setPersonalizationThreshold(int32_t personalizationThreshold) { DARABONBA_PTR_SET_VALUE(personalizationThreshold_, personalizationThreshold) };


      // slateAdUrl Field Functions 
      bool hasSlateAdUrl() const { return this->slateAdUrl_ != nullptr;};
      void deleteSlateAdUrl() { this->slateAdUrl_ = nullptr;};
      inline string getSlateAdUrl() const { DARABONBA_PTR_GET_DEFAULT(slateAdUrl_, "") };
      inline Configs& setSlateAdUrl(string slateAdUrl) { DARABONBA_PTR_SET_VALUE(slateAdUrl_, slateAdUrl) };


    protected:
      // Indicates whether ad marker passthrough is enabled.
      shared_ptr<string> adMarkerPassthrough_ {};
      // The request URL of the ad decision server (ADS).
      shared_ptr<string> adsUrl_ {};
      // The CDN configurations.
      shared_ptr<Configs::CdnConfig> cdnConfig_ {};
      // The player parameter variables and aliases.
      shared_ptr<string> configAliases_ {};
      // The URL prefix for the source content.
      shared_ptr<string> contentUrlPrefix_ {};
      // The time when the configuration was created.
      shared_ptr<string> createTime_ {};
      // The time when the configuration was last modified.
      shared_ptr<string> lastModified_ {};
      // The playback endpoint configuration.
      shared_ptr<Configs::ManifestEndpointConfig> manifestEndpointConfig_ {};
      // The name of the ad insertion configuration.
      shared_ptr<string> name_ {};
      // The personalization threshold that defines the maximum duration of underfilled time allowed in an ad break.
      shared_ptr<int32_t> personalizationThreshold_ {};
      // The URL of the slate ad.
      shared_ptr<string> slateAdUrl_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListAdInsertionsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListAdInsertionsResponseBody::Configs>) };
    inline vector<ListAdInsertionsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListAdInsertionsResponseBody::Configs>) };
    inline ListAdInsertionsResponseBody& setConfigs(const vector<ListAdInsertionsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListAdInsertionsResponseBody& setConfigs(vector<ListAdInsertionsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAdInsertionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAdInsertionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListAdInsertionsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAdInsertionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAdInsertionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListAdInsertionsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAdInsertionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Array
    shared_ptr<vector<ListAdInsertionsResponseBody::Configs>> configs_ {};
    // The maximum number of entries to retrieve in a subsequent request. If this parameter is used, the pagination parameters become invalid.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used in the next request to retrieve a new page of results. If this parameter is used, the pagination parameters become invalid.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The sorting order of the configurations by creation time. asc: ascending. desc: descending.
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
