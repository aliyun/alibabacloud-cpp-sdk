// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_TO_JSON(BlockRemain, blockRemain_);
      DARABONBA_PTR_TO_JSON(DomainQuota, domainQuota_);
      DARABONBA_PTR_TO_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_TO_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_TO_JSON(RefreshDirQuota, refreshDirQuota_);
      DARABONBA_PTR_TO_JSON(RefreshDirRemain, refreshDirRemain_);
      DARABONBA_PTR_TO_JSON(RefreshUrlQuota, refreshUrlQuota_);
      DARABONBA_PTR_TO_JSON(RefreshUrlRemain, refreshUrlRemain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockQuota, blockQuota_);
      DARABONBA_PTR_FROM_JSON(BlockRemain, blockRemain_);
      DARABONBA_PTR_FROM_JSON(DomainQuota, domainQuota_);
      DARABONBA_PTR_FROM_JSON(PreloadQuota, preloadQuota_);
      DARABONBA_PTR_FROM_JSON(PreloadRemain, preloadRemain_);
      DARABONBA_PTR_FROM_JSON(RefreshDirQuota, refreshDirQuota_);
      DARABONBA_PTR_FROM_JSON(RefreshDirRemain, refreshDirRemain_);
      DARABONBA_PTR_FROM_JSON(RefreshUrlQuota, refreshUrlQuota_);
      DARABONBA_PTR_FROM_JSON(RefreshUrlRemain, refreshUrlRemain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodUserQuotaResponseBody() = default ;
    DescribeVodUserQuotaResponseBody(const DescribeVodUserQuotaResponseBody &) = default ;
    DescribeVodUserQuotaResponseBody(DescribeVodUserQuotaResponseBody &&) = default ;
    DescribeVodUserQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserQuotaResponseBody() = default ;
    DescribeVodUserQuotaResponseBody& operator=(const DescribeVodUserQuotaResponseBody &) = default ;
    DescribeVodUserQuotaResponseBody& operator=(DescribeVodUserQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockQuota_ != nullptr
        && this->blockRemain_ != nullptr && this->domainQuota_ != nullptr && this->preloadQuota_ != nullptr && this->preloadRemain_ != nullptr && this->refreshDirQuota_ != nullptr
        && this->refreshDirRemain_ != nullptr && this->refreshUrlQuota_ != nullptr && this->refreshUrlRemain_ != nullptr && this->requestId_ != nullptr; };
    // blockQuota Field Functions 
    bool hasBlockQuota() const { return this->blockQuota_ != nullptr;};
    void deleteBlockQuota() { this->blockQuota_ = nullptr;};
    inline int32_t blockQuota() const { DARABONBA_PTR_GET_DEFAULT(blockQuota_, 0) };
    inline DescribeVodUserQuotaResponseBody& setBlockQuota(int32_t blockQuota) { DARABONBA_PTR_SET_VALUE(blockQuota_, blockQuota) };


    // blockRemain Field Functions 
    bool hasBlockRemain() const { return this->blockRemain_ != nullptr;};
    void deleteBlockRemain() { this->blockRemain_ = nullptr;};
    inline int32_t blockRemain() const { DARABONBA_PTR_GET_DEFAULT(blockRemain_, 0) };
    inline DescribeVodUserQuotaResponseBody& setBlockRemain(int32_t blockRemain) { DARABONBA_PTR_SET_VALUE(blockRemain_, blockRemain) };


    // domainQuota Field Functions 
    bool hasDomainQuota() const { return this->domainQuota_ != nullptr;};
    void deleteDomainQuota() { this->domainQuota_ = nullptr;};
    inline int32_t domainQuota() const { DARABONBA_PTR_GET_DEFAULT(domainQuota_, 0) };
    inline DescribeVodUserQuotaResponseBody& setDomainQuota(int32_t domainQuota) { DARABONBA_PTR_SET_VALUE(domainQuota_, domainQuota) };


    // preloadQuota Field Functions 
    bool hasPreloadQuota() const { return this->preloadQuota_ != nullptr;};
    void deletePreloadQuota() { this->preloadQuota_ = nullptr;};
    inline int32_t preloadQuota() const { DARABONBA_PTR_GET_DEFAULT(preloadQuota_, 0) };
    inline DescribeVodUserQuotaResponseBody& setPreloadQuota(int32_t preloadQuota) { DARABONBA_PTR_SET_VALUE(preloadQuota_, preloadQuota) };


    // preloadRemain Field Functions 
    bool hasPreloadRemain() const { return this->preloadRemain_ != nullptr;};
    void deletePreloadRemain() { this->preloadRemain_ = nullptr;};
    inline int32_t preloadRemain() const { DARABONBA_PTR_GET_DEFAULT(preloadRemain_, 0) };
    inline DescribeVodUserQuotaResponseBody& setPreloadRemain(int32_t preloadRemain) { DARABONBA_PTR_SET_VALUE(preloadRemain_, preloadRemain) };


    // refreshDirQuota Field Functions 
    bool hasRefreshDirQuota() const { return this->refreshDirQuota_ != nullptr;};
    void deleteRefreshDirQuota() { this->refreshDirQuota_ = nullptr;};
    inline int32_t refreshDirQuota() const { DARABONBA_PTR_GET_DEFAULT(refreshDirQuota_, 0) };
    inline DescribeVodUserQuotaResponseBody& setRefreshDirQuota(int32_t refreshDirQuota) { DARABONBA_PTR_SET_VALUE(refreshDirQuota_, refreshDirQuota) };


    // refreshDirRemain Field Functions 
    bool hasRefreshDirRemain() const { return this->refreshDirRemain_ != nullptr;};
    void deleteRefreshDirRemain() { this->refreshDirRemain_ = nullptr;};
    inline int32_t refreshDirRemain() const { DARABONBA_PTR_GET_DEFAULT(refreshDirRemain_, 0) };
    inline DescribeVodUserQuotaResponseBody& setRefreshDirRemain(int32_t refreshDirRemain) { DARABONBA_PTR_SET_VALUE(refreshDirRemain_, refreshDirRemain) };


    // refreshUrlQuota Field Functions 
    bool hasRefreshUrlQuota() const { return this->refreshUrlQuota_ != nullptr;};
    void deleteRefreshUrlQuota() { this->refreshUrlQuota_ = nullptr;};
    inline int32_t refreshUrlQuota() const { DARABONBA_PTR_GET_DEFAULT(refreshUrlQuota_, 0) };
    inline DescribeVodUserQuotaResponseBody& setRefreshUrlQuota(int32_t refreshUrlQuota) { DARABONBA_PTR_SET_VALUE(refreshUrlQuota_, refreshUrlQuota) };


    // refreshUrlRemain Field Functions 
    bool hasRefreshUrlRemain() const { return this->refreshUrlRemain_ != nullptr;};
    void deleteRefreshUrlRemain() { this->refreshUrlRemain_ = nullptr;};
    inline int32_t refreshUrlRemain() const { DARABONBA_PTR_GET_DEFAULT(refreshUrlRemain_, 0) };
    inline DescribeVodUserQuotaResponseBody& setRefreshUrlRemain(int32_t refreshUrlRemain) { DARABONBA_PTR_SET_VALUE(refreshUrlRemain_, refreshUrlRemain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodUserQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> blockQuota_ = nullptr;
    std::shared_ptr<int32_t> blockRemain_ = nullptr;
    std::shared_ptr<int32_t> domainQuota_ = nullptr;
    std::shared_ptr<int32_t> preloadQuota_ = nullptr;
    std::shared_ptr<int32_t> preloadRemain_ = nullptr;
    std::shared_ptr<int32_t> refreshDirQuota_ = nullptr;
    std::shared_ptr<int32_t> refreshDirRemain_ = nullptr;
    std::shared_ptr<int32_t> refreshUrlQuota_ = nullptr;
    std::shared_ptr<int32_t> refreshUrlRemain_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
