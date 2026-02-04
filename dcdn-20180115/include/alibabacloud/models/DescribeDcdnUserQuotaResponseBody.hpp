// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_TO_JSON(BlockRemain, blockRemain_);
      DARABONBA_PTR_TO_JSON(DomainQuota, domainQuota_);
      DARABONBA_PTR_TO_JSON(IgnoreParamsQuota, ignoreParamsQuota_);
      DARABONBA_PTR_TO_JSON(IgnoreParamsRemain, ignoreParamsRemain_);
      DARABONBA_PTR_TO_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_TO_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_TO_JSON(RefreshDirQuota, refreshDirQuota_);
      DARABONBA_PTR_TO_JSON(RefreshDirRemain, refreshDirRemain_);
      DARABONBA_PTR_TO_JSON(RefreshUrlQuota, refreshUrlQuota_);
      DARABONBA_PTR_TO_JSON(RefreshUrlRemain, refreshUrlRemain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_FROM_JSON(BlockRemain, blockRemain_);
      DARABONBA_PTR_FROM_JSON(DomainQuota, domainQuota_);
      DARABONBA_PTR_FROM_JSON(IgnoreParamsQuota, ignoreParamsQuota_);
      DARABONBA_PTR_FROM_JSON(IgnoreParamsRemain, ignoreParamsRemain_);
      DARABONBA_PTR_FROM_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_FROM_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_FROM_JSON(RefreshDirQuota, refreshDirQuota_);
      DARABONBA_PTR_FROM_JSON(RefreshDirRemain, refreshDirRemain_);
      DARABONBA_PTR_FROM_JSON(RefreshUrlQuota, refreshUrlQuota_);
      DARABONBA_PTR_FROM_JSON(RefreshUrlRemain, refreshUrlRemain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserQuotaResponseBody() = default ;
    DescribeDcdnUserQuotaResponseBody(const DescribeDcdnUserQuotaResponseBody &) = default ;
    DescribeDcdnUserQuotaResponseBody(DescribeDcdnUserQuotaResponseBody &&) = default ;
    DescribeDcdnUserQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserQuotaResponseBody() = default ;
    DescribeDcdnUserQuotaResponseBody& operator=(const DescribeDcdnUserQuotaResponseBody &) = default ;
    DescribeDcdnUserQuotaResponseBody& operator=(DescribeDcdnUserQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockQuota_ == nullptr
        && this->blockRemain_ == nullptr && this->domainQuota_ == nullptr && this->ignoreParamsQuota_ == nullptr && this->ignoreParamsRemain_ == nullptr && this->preloadQuota_ == nullptr
        && this->preloadRemain_ == nullptr && this->refreshDirQuota_ == nullptr && this->refreshDirRemain_ == nullptr && this->refreshUrlQuota_ == nullptr && this->refreshUrlRemain_ == nullptr
        && this->requestId_ == nullptr; };
    // blockQuota Field Functions 
    bool hasBlockQuota() const { return this->blockQuota_ != nullptr;};
    void deleteBlockQuota() { this->blockQuota_ = nullptr;};
    inline int32_t getBlockQuota() const { DARABONBA_PTR_GET_DEFAULT(blockQuota_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setBlockQuota(int32_t blockQuota) { DARABONBA_PTR_SET_VALUE(blockQuota_, blockQuota) };


    // blockRemain Field Functions 
    bool hasBlockRemain() const { return this->blockRemain_ != nullptr;};
    void deleteBlockRemain() { this->blockRemain_ = nullptr;};
    inline int32_t getBlockRemain() const { DARABONBA_PTR_GET_DEFAULT(blockRemain_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setBlockRemain(int32_t blockRemain) { DARABONBA_PTR_SET_VALUE(blockRemain_, blockRemain) };


    // domainQuota Field Functions 
    bool hasDomainQuota() const { return this->domainQuota_ != nullptr;};
    void deleteDomainQuota() { this->domainQuota_ = nullptr;};
    inline int32_t getDomainQuota() const { DARABONBA_PTR_GET_DEFAULT(domainQuota_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setDomainQuota(int32_t domainQuota) { DARABONBA_PTR_SET_VALUE(domainQuota_, domainQuota) };


    // ignoreParamsQuota Field Functions 
    bool hasIgnoreParamsQuota() const { return this->ignoreParamsQuota_ != nullptr;};
    void deleteIgnoreParamsQuota() { this->ignoreParamsQuota_ = nullptr;};
    inline int32_t getIgnoreParamsQuota() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamsQuota_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setIgnoreParamsQuota(int32_t ignoreParamsQuota) { DARABONBA_PTR_SET_VALUE(ignoreParamsQuota_, ignoreParamsQuota) };


    // ignoreParamsRemain Field Functions 
    bool hasIgnoreParamsRemain() const { return this->ignoreParamsRemain_ != nullptr;};
    void deleteIgnoreParamsRemain() { this->ignoreParamsRemain_ = nullptr;};
    inline int32_t getIgnoreParamsRemain() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamsRemain_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setIgnoreParamsRemain(int32_t ignoreParamsRemain) { DARABONBA_PTR_SET_VALUE(ignoreParamsRemain_, ignoreParamsRemain) };


    // preloadQuota Field Functions 
    bool hasPreloadQuota() const { return this->preloadQuota_ != nullptr;};
    void deletePreloadQuota() { this->preloadQuota_ = nullptr;};
    inline int32_t getPreloadQuota() const { DARABONBA_PTR_GET_DEFAULT(preloadQuota_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setPreloadQuota(int32_t preloadQuota) { DARABONBA_PTR_SET_VALUE(preloadQuota_, preloadQuota) };


    // preloadRemain Field Functions 
    bool hasPreloadRemain() const { return this->preloadRemain_ != nullptr;};
    void deletePreloadRemain() { this->preloadRemain_ = nullptr;};
    inline int32_t getPreloadRemain() const { DARABONBA_PTR_GET_DEFAULT(preloadRemain_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setPreloadRemain(int32_t preloadRemain) { DARABONBA_PTR_SET_VALUE(preloadRemain_, preloadRemain) };


    // refreshDirQuota Field Functions 
    bool hasRefreshDirQuota() const { return this->refreshDirQuota_ != nullptr;};
    void deleteRefreshDirQuota() { this->refreshDirQuota_ = nullptr;};
    inline int32_t getRefreshDirQuota() const { DARABONBA_PTR_GET_DEFAULT(refreshDirQuota_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setRefreshDirQuota(int32_t refreshDirQuota) { DARABONBA_PTR_SET_VALUE(refreshDirQuota_, refreshDirQuota) };


    // refreshDirRemain Field Functions 
    bool hasRefreshDirRemain() const { return this->refreshDirRemain_ != nullptr;};
    void deleteRefreshDirRemain() { this->refreshDirRemain_ = nullptr;};
    inline int32_t getRefreshDirRemain() const { DARABONBA_PTR_GET_DEFAULT(refreshDirRemain_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setRefreshDirRemain(int32_t refreshDirRemain) { DARABONBA_PTR_SET_VALUE(refreshDirRemain_, refreshDirRemain) };


    // refreshUrlQuota Field Functions 
    bool hasRefreshUrlQuota() const { return this->refreshUrlQuota_ != nullptr;};
    void deleteRefreshUrlQuota() { this->refreshUrlQuota_ = nullptr;};
    inline int32_t getRefreshUrlQuota() const { DARABONBA_PTR_GET_DEFAULT(refreshUrlQuota_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setRefreshUrlQuota(int32_t refreshUrlQuota) { DARABONBA_PTR_SET_VALUE(refreshUrlQuota_, refreshUrlQuota) };


    // refreshUrlRemain Field Functions 
    bool hasRefreshUrlRemain() const { return this->refreshUrlRemain_ != nullptr;};
    void deleteRefreshUrlRemain() { this->refreshUrlRemain_ = nullptr;};
    inline int32_t getRefreshUrlRemain() const { DARABONBA_PTR_GET_DEFAULT(refreshUrlRemain_, 0) };
    inline DescribeDcdnUserQuotaResponseBody& setRefreshUrlRemain(int32_t refreshUrlRemain) { DARABONBA_PTR_SET_VALUE(refreshUrlRemain_, refreshUrlRemain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of URLs that can be blocked.
    shared_ptr<int32_t> blockQuota_ {};
    // The remaining number of URLs that can be blocked.
    shared_ptr<int32_t> blockRemain_ {};
    // The maximum number of accelerated domains.
    shared_ptr<int32_t> domainQuota_ {};
    // The maximum number of URLs or directories with parameters ignored that can be refreshed.
    shared_ptr<int32_t> ignoreParamsQuota_ {};
    // The number of remaining URLs or directories with parameters ignored that can be refreshed.
    shared_ptr<int32_t> ignoreParamsRemain_ {};
    // The maximum number of URLs that can be prefetched.
    shared_ptr<int32_t> preloadQuota_ {};
    // The remaining number of URLs that can be prefetched.
    shared_ptr<int32_t> preloadRemain_ {};
    // The maximum number of directories that can be refreshed.
    shared_ptr<int32_t> refreshDirQuota_ {};
    // The remaining number of directories that can be refreshed.
    shared_ptr<int32_t> refreshDirRemain_ {};
    // The maximum number of URLs that can be refreshed.
    shared_ptr<int32_t> refreshUrlQuota_ {};
    // The remaining number of URLs that can be refreshed.
    shared_ptr<int32_t> refreshUrlRemain_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
