// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHQUOTARESPONSEBODYREFRESHCACHEQUOTA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHQUOTARESPONSEBODYREFRESHCACHEQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeRefreshQuotaResponseBodyRefreshCacheQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshQuotaResponseBodyRefreshCacheQuota& obj) { 
      DARABONBA_PTR_TO_JSON(DirQuota, dirQuota_);
      DARABONBA_PTR_TO_JSON(DirRemain, dirRemain_);
      DARABONBA_PTR_TO_JSON(UrlQuota, urlQuota_);
      DARABONBA_PTR_TO_JSON(UrlRemain, urlRemain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshQuotaResponseBodyRefreshCacheQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(DirQuota, dirQuota_);
      DARABONBA_PTR_FROM_JSON(DirRemain, dirRemain_);
      DARABONBA_PTR_FROM_JSON(UrlQuota, urlQuota_);
      DARABONBA_PTR_FROM_JSON(UrlRemain, urlRemain_);
    };
    DescribeRefreshQuotaResponseBodyRefreshCacheQuota() = default ;
    DescribeRefreshQuotaResponseBodyRefreshCacheQuota(const DescribeRefreshQuotaResponseBodyRefreshCacheQuota &) = default ;
    DescribeRefreshQuotaResponseBodyRefreshCacheQuota(DescribeRefreshQuotaResponseBodyRefreshCacheQuota &&) = default ;
    DescribeRefreshQuotaResponseBodyRefreshCacheQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshQuotaResponseBodyRefreshCacheQuota() = default ;
    DescribeRefreshQuotaResponseBodyRefreshCacheQuota& operator=(const DescribeRefreshQuotaResponseBodyRefreshCacheQuota &) = default ;
    DescribeRefreshQuotaResponseBodyRefreshCacheQuota& operator=(DescribeRefreshQuotaResponseBodyRefreshCacheQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dirQuota_ != nullptr
        && this->dirRemain_ != nullptr && this->urlQuota_ != nullptr && this->urlRemain_ != nullptr; };
    // dirQuota Field Functions 
    bool hasDirQuota() const { return this->dirQuota_ != nullptr;};
    void deleteDirQuota() { this->dirQuota_ = nullptr;};
    inline string dirQuota() const { DARABONBA_PTR_GET_DEFAULT(dirQuota_, "") };
    inline DescribeRefreshQuotaResponseBodyRefreshCacheQuota& setDirQuota(string dirQuota) { DARABONBA_PTR_SET_VALUE(dirQuota_, dirQuota) };


    // dirRemain Field Functions 
    bool hasDirRemain() const { return this->dirRemain_ != nullptr;};
    void deleteDirRemain() { this->dirRemain_ = nullptr;};
    inline string dirRemain() const { DARABONBA_PTR_GET_DEFAULT(dirRemain_, "") };
    inline DescribeRefreshQuotaResponseBodyRefreshCacheQuota& setDirRemain(string dirRemain) { DARABONBA_PTR_SET_VALUE(dirRemain_, dirRemain) };


    // urlQuota Field Functions 
    bool hasUrlQuota() const { return this->urlQuota_ != nullptr;};
    void deleteUrlQuota() { this->urlQuota_ = nullptr;};
    inline string urlQuota() const { DARABONBA_PTR_GET_DEFAULT(urlQuota_, "") };
    inline DescribeRefreshQuotaResponseBodyRefreshCacheQuota& setUrlQuota(string urlQuota) { DARABONBA_PTR_SET_VALUE(urlQuota_, urlQuota) };


    // urlRemain Field Functions 
    bool hasUrlRemain() const { return this->urlRemain_ != nullptr;};
    void deleteUrlRemain() { this->urlRemain_ = nullptr;};
    inline string urlRemain() const { DARABONBA_PTR_GET_DEFAULT(urlRemain_, "") };
    inline DescribeRefreshQuotaResponseBodyRefreshCacheQuota& setUrlRemain(string urlRemain) { DARABONBA_PTR_SET_VALUE(urlRemain_, urlRemain) };


  protected:
    std::shared_ptr<string> dirQuota_ = nullptr;
    std::shared_ptr<string> dirRemain_ = nullptr;
    std::shared_ptr<string> urlQuota_ = nullptr;
    std::shared_ptr<string> urlRemain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
