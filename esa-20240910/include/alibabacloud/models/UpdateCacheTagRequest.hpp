// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECACHETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECACHETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCacheTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCacheTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaseInsensitive, caseInsensitive_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCacheTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseInsensitive, caseInsensitive_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    UpdateCacheTagRequest() = default ;
    UpdateCacheTagRequest(const UpdateCacheTagRequest &) = default ;
    UpdateCacheTagRequest(UpdateCacheTagRequest &&) = default ;
    UpdateCacheTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCacheTagRequest() = default ;
    UpdateCacheTagRequest& operator=(const UpdateCacheTagRequest &) = default ;
    UpdateCacheTagRequest& operator=(UpdateCacheTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caseInsensitive_ == nullptr
        && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr && return this->tagName_ == nullptr; };
    // caseInsensitive Field Functions 
    bool hasCaseInsensitive() const { return this->caseInsensitive_ != nullptr;};
    void deleteCaseInsensitive() { this->caseInsensitive_ = nullptr;};
    inline string caseInsensitive() const { DARABONBA_PTR_GET_DEFAULT(caseInsensitive_, "") };
    inline UpdateCacheTagRequest& setCaseInsensitive(string caseInsensitive) { DARABONBA_PTR_SET_VALUE(caseInsensitive_, caseInsensitive) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateCacheTagRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline UpdateCacheTagRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline UpdateCacheTagRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // Specifies whether to ignore case sensitivity. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> caseInsensitive_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version number of the website configurations. You can use this parameter to specify a version of your website to apply the feature settings. By default, version 0 is used.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // The name of the custom cache tag.
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
