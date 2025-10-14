// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESREQUESTCONTENTCACHEKEYS_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESREQUESTCONTENTCACHEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurgeCachesRequestContentCacheKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurgeCachesRequestContentCacheKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PurgeCachesRequestContentCacheKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    PurgeCachesRequestContentCacheKeys() = default ;
    PurgeCachesRequestContentCacheKeys(const PurgeCachesRequestContentCacheKeys &) = default ;
    PurgeCachesRequestContentCacheKeys(PurgeCachesRequestContentCacheKeys &&) = default ;
    PurgeCachesRequestContentCacheKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurgeCachesRequestContentCacheKeys() = default ;
    PurgeCachesRequestContentCacheKeys& operator=(const PurgeCachesRequestContentCacheKeys &) = default ;
    PurgeCachesRequestContentCacheKeys& operator=(PurgeCachesRequestContentCacheKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->url_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline PurgeCachesRequestContentCacheKeys& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline PurgeCachesRequestContentCacheKeys& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PurgeCachesRequestContentCacheKeys& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // When refreshing, specify the header information corresponding to the cache key. When the custom cache key feature switch is enabled, the cache key will be generated based on the specified header for refreshing.
    // 
    // **UserGeo: Country/Region**
    // - Country/region codes follow the ISO 3166-2 standard.
    // 
    // **UserDeviceType: Device Type, currently there are three enum values**
    // - desktop
    //  - tablet
    //  - mobile
    // 
    // **UserLanguage: Language**
    // - Language codes follow the ISO 639-1 or BCP47 standards. For example, input \\"zh\\" to refresh content in Chinese.
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    // URL address to be refreshed.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
