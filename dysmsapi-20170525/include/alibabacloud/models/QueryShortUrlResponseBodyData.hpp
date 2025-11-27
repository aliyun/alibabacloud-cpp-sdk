// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHORTURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHORTURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryShortUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryShortUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(PageViewCount, pageViewCount_);
      DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
      DARABONBA_PTR_TO_JSON(ShortUrlName, shortUrlName_);
      DARABONBA_PTR_TO_JSON(ShortUrlStatus, shortUrlStatus_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_TO_JSON(UniqueVisitorCount, uniqueVisitorCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryShortUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(PageViewCount, pageViewCount_);
      DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
      DARABONBA_PTR_FROM_JSON(ShortUrlName, shortUrlName_);
      DARABONBA_PTR_FROM_JSON(ShortUrlStatus, shortUrlStatus_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_FROM_JSON(UniqueVisitorCount, uniqueVisitorCount_);
    };
    QueryShortUrlResponseBodyData() = default ;
    QueryShortUrlResponseBodyData(const QueryShortUrlResponseBodyData &) = default ;
    QueryShortUrlResponseBodyData(QueryShortUrlResponseBodyData &&) = default ;
    QueryShortUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryShortUrlResponseBodyData() = default ;
    QueryShortUrlResponseBodyData& operator=(const QueryShortUrlResponseBodyData &) = default ;
    QueryShortUrlResponseBodyData& operator=(QueryShortUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && return this->expireDate_ == nullptr && return this->pageViewCount_ == nullptr && return this->shortUrl_ == nullptr && return this->shortUrlName_ == nullptr && return this->shortUrlStatus_ == nullptr
        && return this->sourceUrl_ == nullptr && return this->uniqueVisitorCount_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QueryShortUrlResponseBodyData& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline QueryShortUrlResponseBodyData& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // pageViewCount Field Functions 
    bool hasPageViewCount() const { return this->pageViewCount_ != nullptr;};
    void deletePageViewCount() { this->pageViewCount_ = nullptr;};
    inline string pageViewCount() const { DARABONBA_PTR_GET_DEFAULT(pageViewCount_, "") };
    inline QueryShortUrlResponseBodyData& setPageViewCount(string pageViewCount) { DARABONBA_PTR_SET_VALUE(pageViewCount_, pageViewCount) };


    // shortUrl Field Functions 
    bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
    void deleteShortUrl() { this->shortUrl_ = nullptr;};
    inline string shortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
    inline QueryShortUrlResponseBodyData& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


    // shortUrlName Field Functions 
    bool hasShortUrlName() const { return this->shortUrlName_ != nullptr;};
    void deleteShortUrlName() { this->shortUrlName_ = nullptr;};
    inline string shortUrlName() const { DARABONBA_PTR_GET_DEFAULT(shortUrlName_, "") };
    inline QueryShortUrlResponseBodyData& setShortUrlName(string shortUrlName) { DARABONBA_PTR_SET_VALUE(shortUrlName_, shortUrlName) };


    // shortUrlStatus Field Functions 
    bool hasShortUrlStatus() const { return this->shortUrlStatus_ != nullptr;};
    void deleteShortUrlStatus() { this->shortUrlStatus_ = nullptr;};
    inline string shortUrlStatus() const { DARABONBA_PTR_GET_DEFAULT(shortUrlStatus_, "") };
    inline QueryShortUrlResponseBodyData& setShortUrlStatus(string shortUrlStatus) { DARABONBA_PTR_SET_VALUE(shortUrlStatus_, shortUrlStatus) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline QueryShortUrlResponseBodyData& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    // uniqueVisitorCount Field Functions 
    bool hasUniqueVisitorCount() const { return this->uniqueVisitorCount_ != nullptr;};
    void deleteUniqueVisitorCount() { this->uniqueVisitorCount_ = nullptr;};
    inline string uniqueVisitorCount() const { DARABONBA_PTR_GET_DEFAULT(uniqueVisitorCount_, "") };
    inline QueryShortUrlResponseBodyData& setUniqueVisitorCount(string uniqueVisitorCount) { DARABONBA_PTR_SET_VALUE(uniqueVisitorCount_, uniqueVisitorCount) };


  protected:
    // The time when the short URL was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The time when the short URL expires.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The PV.
    std::shared_ptr<string> pageViewCount_ = nullptr;
    // The short URL.
    std::shared_ptr<string> shortUrl_ = nullptr;
    // The service name of the short URL.
    std::shared_ptr<string> shortUrlName_ = nullptr;
    // The status of the short URL. Valid values:
    // 
    // *   **expired**
    // *   **effective**
    // *   **audit**
    // *   **reject**
    std::shared_ptr<string> shortUrlStatus_ = nullptr;
    // The source address.
    std::shared_ptr<string> sourceUrl_ = nullptr;
    // The UV.
    std::shared_ptr<string> uniqueVisitorCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
