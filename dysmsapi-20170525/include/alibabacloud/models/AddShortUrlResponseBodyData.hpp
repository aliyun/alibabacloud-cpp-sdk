// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHORTURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDSHORTURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class AddShortUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShortUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddShortUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
    };
    AddShortUrlResponseBodyData() = default ;
    AddShortUrlResponseBodyData(const AddShortUrlResponseBodyData &) = default ;
    AddShortUrlResponseBodyData(AddShortUrlResponseBodyData &&) = default ;
    AddShortUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShortUrlResponseBodyData() = default ;
    AddShortUrlResponseBodyData& operator=(const AddShortUrlResponseBodyData &) = default ;
    AddShortUrlResponseBodyData& operator=(AddShortUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireDate_ == nullptr
        && return this->shortUrl_ == nullptr && return this->sourceUrl_ == nullptr; };
    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline AddShortUrlResponseBodyData& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // shortUrl Field Functions 
    bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
    void deleteShortUrl() { this->shortUrl_ = nullptr;};
    inline string shortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
    inline AddShortUrlResponseBodyData& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline AddShortUrlResponseBodyData& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


  protected:
    // The time when the short URL expires.
    // 
    // > The value of **ExpireDate** is on the hour.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The short URL.
    std::shared_ptr<string> shortUrl_ = nullptr;
    // The source URL.
    std::shared_ptr<string> sourceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
