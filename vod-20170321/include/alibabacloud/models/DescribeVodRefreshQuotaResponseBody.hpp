// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREFRESHQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREFRESHQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRefreshQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRefreshQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_TO_JSON(DirQuota, dirQuota_);
      DARABONBA_PTR_TO_JSON(DirRemain, dirRemain_);
      DARABONBA_PTR_TO_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_TO_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UrlQuota, urlQuota_);
      DARABONBA_PTR_TO_JSON(UrlRemain, urlRemain_);
      DARABONBA_PTR_TO_JSON(blockRemain, blockRemain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRefreshQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_FROM_JSON(DirQuota, dirQuota_);
      DARABONBA_PTR_FROM_JSON(DirRemain, dirRemain_);
      DARABONBA_PTR_FROM_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_FROM_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UrlQuota, urlQuota_);
      DARABONBA_PTR_FROM_JSON(UrlRemain, urlRemain_);
      DARABONBA_PTR_FROM_JSON(blockRemain, blockRemain_);
    };
    DescribeVodRefreshQuotaResponseBody() = default ;
    DescribeVodRefreshQuotaResponseBody(const DescribeVodRefreshQuotaResponseBody &) = default ;
    DescribeVodRefreshQuotaResponseBody(DescribeVodRefreshQuotaResponseBody &&) = default ;
    DescribeVodRefreshQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRefreshQuotaResponseBody() = default ;
    DescribeVodRefreshQuotaResponseBody& operator=(const DescribeVodRefreshQuotaResponseBody &) = default ;
    DescribeVodRefreshQuotaResponseBody& operator=(DescribeVodRefreshQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockQuota_ == nullptr
        && this->dirQuota_ == nullptr && this->dirRemain_ == nullptr && this->preloadQuota_ == nullptr && this->preloadRemain_ == nullptr && this->requestId_ == nullptr
        && this->urlQuota_ == nullptr && this->urlRemain_ == nullptr && this->blockRemain_ == nullptr; };
    // blockQuota Field Functions 
    bool hasBlockQuota() const { return this->blockQuota_ != nullptr;};
    void deleteBlockQuota() { this->blockQuota_ = nullptr;};
    inline string getBlockQuota() const { DARABONBA_PTR_GET_DEFAULT(blockQuota_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setBlockQuota(string blockQuota) { DARABONBA_PTR_SET_VALUE(blockQuota_, blockQuota) };


    // dirQuota Field Functions 
    bool hasDirQuota() const { return this->dirQuota_ != nullptr;};
    void deleteDirQuota() { this->dirQuota_ = nullptr;};
    inline string getDirQuota() const { DARABONBA_PTR_GET_DEFAULT(dirQuota_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setDirQuota(string dirQuota) { DARABONBA_PTR_SET_VALUE(dirQuota_, dirQuota) };


    // dirRemain Field Functions 
    bool hasDirRemain() const { return this->dirRemain_ != nullptr;};
    void deleteDirRemain() { this->dirRemain_ = nullptr;};
    inline string getDirRemain() const { DARABONBA_PTR_GET_DEFAULT(dirRemain_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setDirRemain(string dirRemain) { DARABONBA_PTR_SET_VALUE(dirRemain_, dirRemain) };


    // preloadQuota Field Functions 
    bool hasPreloadQuota() const { return this->preloadQuota_ != nullptr;};
    void deletePreloadQuota() { this->preloadQuota_ = nullptr;};
    inline string getPreloadQuota() const { DARABONBA_PTR_GET_DEFAULT(preloadQuota_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setPreloadQuota(string preloadQuota) { DARABONBA_PTR_SET_VALUE(preloadQuota_, preloadQuota) };


    // preloadRemain Field Functions 
    bool hasPreloadRemain() const { return this->preloadRemain_ != nullptr;};
    void deletePreloadRemain() { this->preloadRemain_ = nullptr;};
    inline string getPreloadRemain() const { DARABONBA_PTR_GET_DEFAULT(preloadRemain_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setPreloadRemain(string preloadRemain) { DARABONBA_PTR_SET_VALUE(preloadRemain_, preloadRemain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlQuota Field Functions 
    bool hasUrlQuota() const { return this->urlQuota_ != nullptr;};
    void deleteUrlQuota() { this->urlQuota_ = nullptr;};
    inline string getUrlQuota() const { DARABONBA_PTR_GET_DEFAULT(urlQuota_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setUrlQuota(string urlQuota) { DARABONBA_PTR_SET_VALUE(urlQuota_, urlQuota) };


    // urlRemain Field Functions 
    bool hasUrlRemain() const { return this->urlRemain_ != nullptr;};
    void deleteUrlRemain() { this->urlRemain_ = nullptr;};
    inline string getUrlRemain() const { DARABONBA_PTR_GET_DEFAULT(urlRemain_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setUrlRemain(string urlRemain) { DARABONBA_PTR_SET_VALUE(urlRemain_, urlRemain) };


    // blockRemain Field Functions 
    bool hasBlockRemain() const { return this->blockRemain_ != nullptr;};
    void deleteBlockRemain() { this->blockRemain_ = nullptr;};
    inline string getBlockRemain() const { DARABONBA_PTR_GET_DEFAULT(blockRemain_, "") };
    inline DescribeVodRefreshQuotaResponseBody& setBlockRemain(string blockRemain) { DARABONBA_PTR_SET_VALUE(blockRemain_, blockRemain) };


  protected:
    // The maximum number of Object Storage Service (OSS) buckets that can be refreshed each day.
    shared_ptr<string> blockQuota_ {};
    // The maximum number of directories of files that can be refreshed each day.
    shared_ptr<string> dirQuota_ {};
    // The remaining number of directories of files that can be refreshed on the current day.
    shared_ptr<string> dirRemain_ {};
    // The maximum number of URLs of files that can be prefetched each day.
    shared_ptr<string> preloadQuota_ {};
    // The remaining number of URLs of files that can be prefetched on the current day.
    shared_ptr<string> preloadRemain_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The maximum number of URLs of files that can be refreshed each day.
    shared_ptr<string> urlQuota_ {};
    // The remaining number of URLs of files that can be refreshed on the current day.
    shared_ptr<string> urlRemain_ {};
    // The remaining number of OSS buckets that can be refreshed on the current day.
    shared_ptr<string> blockRemain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
