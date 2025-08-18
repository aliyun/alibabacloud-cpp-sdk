// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACHETAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACHETAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCacheTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCacheTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaseInsensitive, caseInsensitive_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCacheTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseInsensitive, caseInsensitive_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    GetCacheTagResponseBody() = default ;
    GetCacheTagResponseBody(const GetCacheTagResponseBody &) = default ;
    GetCacheTagResponseBody(GetCacheTagResponseBody &&) = default ;
    GetCacheTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCacheTagResponseBody() = default ;
    GetCacheTagResponseBody& operator=(const GetCacheTagResponseBody &) = default ;
    GetCacheTagResponseBody& operator=(GetCacheTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caseInsensitive_ != nullptr
        && this->requestId_ != nullptr && this->siteVersion_ != nullptr && this->tagName_ != nullptr; };
    // caseInsensitive Field Functions 
    bool hasCaseInsensitive() const { return this->caseInsensitive_ != nullptr;};
    void deleteCaseInsensitive() { this->caseInsensitive_ = nullptr;};
    inline string caseInsensitive() const { DARABONBA_PTR_GET_DEFAULT(caseInsensitive_, "") };
    inline GetCacheTagResponseBody& setCaseInsensitive(string caseInsensitive) { DARABONBA_PTR_SET_VALUE(caseInsensitive_, caseInsensitive) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCacheTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetCacheTagResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline GetCacheTagResponseBody& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // Whether to ignore case. Possible values:
    // - on: Enabled, ignores case.
    // - off: Disabled, does not ignore case.
    std::shared_ptr<string> caseInsensitive_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Version number of the site.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Custom CacheTag name.
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
