// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRefreshQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_TO_JSON(BlockRemain, blockRemain_);
      DARABONBA_PTR_TO_JSON(DirQuota, dirQuota_);
      DARABONBA_PTR_TO_JSON(DirRemain, dirRemain_);
      DARABONBA_PTR_TO_JSON(IgnoreParamsQuota, ignoreParamsQuota_);
      DARABONBA_PTR_TO_JSON(IgnoreParamsRemain, ignoreParamsRemain_);
      DARABONBA_PTR_TO_JSON(PreloadEdgeQuota, preloadEdgeQuota_);
      DARABONBA_PTR_TO_JSON(PreloadEdgeRemain, preloadEdgeRemain_);
      DARABONBA_PTR_TO_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_TO_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_TO_JSON(RegexQuota, regexQuota_);
      DARABONBA_PTR_TO_JSON(RegexRemain, regexRemain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UrlQuota, urlQuota_);
      DARABONBA_PTR_TO_JSON(UrlRemain, urlRemain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_FROM_JSON(BlockRemain, blockRemain_);
      DARABONBA_PTR_FROM_JSON(DirQuota, dirQuota_);
      DARABONBA_PTR_FROM_JSON(DirRemain, dirRemain_);
      DARABONBA_PTR_FROM_JSON(IgnoreParamsQuota, ignoreParamsQuota_);
      DARABONBA_PTR_FROM_JSON(IgnoreParamsRemain, ignoreParamsRemain_);
      DARABONBA_PTR_FROM_JSON(PreloadEdgeQuota, preloadEdgeQuota_);
      DARABONBA_PTR_FROM_JSON(PreloadEdgeRemain, preloadEdgeRemain_);
      DARABONBA_PTR_FROM_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_FROM_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_FROM_JSON(RegexQuota, regexQuota_);
      DARABONBA_PTR_FROM_JSON(RegexRemain, regexRemain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UrlQuota, urlQuota_);
      DARABONBA_PTR_FROM_JSON(UrlRemain, urlRemain_);
    };
    DescribeRefreshQuotaResponseBody() = default ;
    DescribeRefreshQuotaResponseBody(const DescribeRefreshQuotaResponseBody &) = default ;
    DescribeRefreshQuotaResponseBody(DescribeRefreshQuotaResponseBody &&) = default ;
    DescribeRefreshQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshQuotaResponseBody() = default ;
    DescribeRefreshQuotaResponseBody& operator=(const DescribeRefreshQuotaResponseBody &) = default ;
    DescribeRefreshQuotaResponseBody& operator=(DescribeRefreshQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockQuota_ != nullptr
        && this->blockRemain_ != nullptr && this->dirQuota_ != nullptr && this->dirRemain_ != nullptr && this->ignoreParamsQuota_ != nullptr && this->ignoreParamsRemain_ != nullptr
        && this->preloadEdgeQuota_ != nullptr && this->preloadEdgeRemain_ != nullptr && this->preloadQuota_ != nullptr && this->preloadRemain_ != nullptr && this->regexQuota_ != nullptr
        && this->regexRemain_ != nullptr && this->requestId_ != nullptr && this->urlQuota_ != nullptr && this->urlRemain_ != nullptr; };
    // blockQuota Field Functions 
    bool hasBlockQuota() const { return this->blockQuota_ != nullptr;};
    void deleteBlockQuota() { this->blockQuota_ = nullptr;};
    inline string blockQuota() const { DARABONBA_PTR_GET_DEFAULT(blockQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setBlockQuota(string blockQuota) { DARABONBA_PTR_SET_VALUE(blockQuota_, blockQuota) };


    // blockRemain Field Functions 
    bool hasBlockRemain() const { return this->blockRemain_ != nullptr;};
    void deleteBlockRemain() { this->blockRemain_ = nullptr;};
    inline string blockRemain() const { DARABONBA_PTR_GET_DEFAULT(blockRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setBlockRemain(string blockRemain) { DARABONBA_PTR_SET_VALUE(blockRemain_, blockRemain) };


    // dirQuota Field Functions 
    bool hasDirQuota() const { return this->dirQuota_ != nullptr;};
    void deleteDirQuota() { this->dirQuota_ = nullptr;};
    inline string dirQuota() const { DARABONBA_PTR_GET_DEFAULT(dirQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setDirQuota(string dirQuota) { DARABONBA_PTR_SET_VALUE(dirQuota_, dirQuota) };


    // dirRemain Field Functions 
    bool hasDirRemain() const { return this->dirRemain_ != nullptr;};
    void deleteDirRemain() { this->dirRemain_ = nullptr;};
    inline string dirRemain() const { DARABONBA_PTR_GET_DEFAULT(dirRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setDirRemain(string dirRemain) { DARABONBA_PTR_SET_VALUE(dirRemain_, dirRemain) };


    // ignoreParamsQuota Field Functions 
    bool hasIgnoreParamsQuota() const { return this->ignoreParamsQuota_ != nullptr;};
    void deleteIgnoreParamsQuota() { this->ignoreParamsQuota_ = nullptr;};
    inline string ignoreParamsQuota() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamsQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setIgnoreParamsQuota(string ignoreParamsQuota) { DARABONBA_PTR_SET_VALUE(ignoreParamsQuota_, ignoreParamsQuota) };


    // ignoreParamsRemain Field Functions 
    bool hasIgnoreParamsRemain() const { return this->ignoreParamsRemain_ != nullptr;};
    void deleteIgnoreParamsRemain() { this->ignoreParamsRemain_ = nullptr;};
    inline string ignoreParamsRemain() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamsRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setIgnoreParamsRemain(string ignoreParamsRemain) { DARABONBA_PTR_SET_VALUE(ignoreParamsRemain_, ignoreParamsRemain) };


    // preloadEdgeQuota Field Functions 
    bool hasPreloadEdgeQuota() const { return this->preloadEdgeQuota_ != nullptr;};
    void deletePreloadEdgeQuota() { this->preloadEdgeQuota_ = nullptr;};
    inline string preloadEdgeQuota() const { DARABONBA_PTR_GET_DEFAULT(preloadEdgeQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setPreloadEdgeQuota(string preloadEdgeQuota) { DARABONBA_PTR_SET_VALUE(preloadEdgeQuota_, preloadEdgeQuota) };


    // preloadEdgeRemain Field Functions 
    bool hasPreloadEdgeRemain() const { return this->preloadEdgeRemain_ != nullptr;};
    void deletePreloadEdgeRemain() { this->preloadEdgeRemain_ = nullptr;};
    inline string preloadEdgeRemain() const { DARABONBA_PTR_GET_DEFAULT(preloadEdgeRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setPreloadEdgeRemain(string preloadEdgeRemain) { DARABONBA_PTR_SET_VALUE(preloadEdgeRemain_, preloadEdgeRemain) };


    // preloadQuota Field Functions 
    bool hasPreloadQuota() const { return this->preloadQuota_ != nullptr;};
    void deletePreloadQuota() { this->preloadQuota_ = nullptr;};
    inline string preloadQuota() const { DARABONBA_PTR_GET_DEFAULT(preloadQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setPreloadQuota(string preloadQuota) { DARABONBA_PTR_SET_VALUE(preloadQuota_, preloadQuota) };


    // preloadRemain Field Functions 
    bool hasPreloadRemain() const { return this->preloadRemain_ != nullptr;};
    void deletePreloadRemain() { this->preloadRemain_ = nullptr;};
    inline string preloadRemain() const { DARABONBA_PTR_GET_DEFAULT(preloadRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setPreloadRemain(string preloadRemain) { DARABONBA_PTR_SET_VALUE(preloadRemain_, preloadRemain) };


    // regexQuota Field Functions 
    bool hasRegexQuota() const { return this->regexQuota_ != nullptr;};
    void deleteRegexQuota() { this->regexQuota_ = nullptr;};
    inline string regexQuota() const { DARABONBA_PTR_GET_DEFAULT(regexQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setRegexQuota(string regexQuota) { DARABONBA_PTR_SET_VALUE(regexQuota_, regexQuota) };


    // regexRemain Field Functions 
    bool hasRegexRemain() const { return this->regexRemain_ != nullptr;};
    void deleteRegexRemain() { this->regexRemain_ = nullptr;};
    inline string regexRemain() const { DARABONBA_PTR_GET_DEFAULT(regexRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setRegexRemain(string regexRemain) { DARABONBA_PTR_SET_VALUE(regexRemain_, regexRemain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRefreshQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urlQuota Field Functions 
    bool hasUrlQuota() const { return this->urlQuota_ != nullptr;};
    void deleteUrlQuota() { this->urlQuota_ = nullptr;};
    inline string urlQuota() const { DARABONBA_PTR_GET_DEFAULT(urlQuota_, "") };
    inline DescribeRefreshQuotaResponseBody& setUrlQuota(string urlQuota) { DARABONBA_PTR_SET_VALUE(urlQuota_, urlQuota) };


    // urlRemain Field Functions 
    bool hasUrlRemain() const { return this->urlRemain_ != nullptr;};
    void deleteUrlRemain() { this->urlRemain_ = nullptr;};
    inline string urlRemain() const { DARABONBA_PTR_GET_DEFAULT(urlRemain_, "") };
    inline DescribeRefreshQuotaResponseBody& setUrlRemain(string urlRemain) { DARABONBA_PTR_SET_VALUE(urlRemain_, urlRemain) };


  protected:
    // The maximum number of URLs that can be refreshed on the current day.
    std::shared_ptr<string> blockQuota_ = nullptr;
    // The remaining number of times that you can prefetch content to L2 points of presence (POPs) on the current day.
    std::shared_ptr<string> blockRemain_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> dirQuota_ = nullptr;
    // The remaining number of URLs that can be refreshed on the current day.
    std::shared_ptr<string> dirRemain_ = nullptr;
    // The maximum number of URLs or directories with parameters ignored that can be refreshed on the current day.
    std::shared_ptr<string> ignoreParamsQuota_ = nullptr;
    // The number of remaining URLs or directories that can be refreshed with parameters ignored on the current day.
    std::shared_ptr<string> ignoreParamsRemain_ = nullptr;
    // The maximum number of directories that can be refreshed on the current day.
    std::shared_ptr<string> preloadEdgeQuota_ = nullptr;
    // The maximum number of times that you can prefetch content to L1 POPs on the current day.
    std::shared_ptr<string> preloadEdgeRemain_ = nullptr;
    // The remaining number of times that you can prefetch content to L1 POPs on the current day.
    std::shared_ptr<string> preloadQuota_ = nullptr;
    // The maximum number of times that you can prefetch content to L1 nodes on the current day.
    std::shared_ptr<string> preloadRemain_ = nullptr;
    // The maximum number of times that you can prefetch content to L2 POPs on the current day.
    std::shared_ptr<string> regexQuota_ = nullptr;
    // The remaining number of URLs that can be blocked on the current day.
    std::shared_ptr<string> regexRemain_ = nullptr;
    // The maximum number of URLs and directories that can be blocked on the current day.
    std::shared_ptr<string> requestId_ = nullptr;
    // The remaining number of directories that can be refreshed on the current day.
    std::shared_ptr<string> urlQuota_ = nullptr;
    // The remaining number of URLs or directories that can be refreshed by using regular expressions on the current day.
    std::shared_ptr<string> urlRemain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
