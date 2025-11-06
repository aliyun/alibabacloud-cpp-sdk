// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationListRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetApplicationListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SentinelEnable, sentinelEnable_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SwitchEnable, switchEnable_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SentinelEnable, sentinelEnable_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SwitchEnable, switchEnable_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetApplicationListRequest() = default ;
    GetApplicationListRequest(const GetApplicationListRequest &) = default ;
    GetApplicationListRequest(GetApplicationListRequest &&) = default ;
    GetApplicationListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationListRequest() = default ;
    GetApplicationListRequest& operator=(const GetApplicationListRequest &) = default ;
    GetApplicationListRequest& operator=(GetApplicationListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->language_ == nullptr && return this->namespace_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->region_ == nullptr && return this->sentinelEnable_ == nullptr && return this->source_ == nullptr && return this->switchEnable_ == nullptr
        && return this->tags_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetApplicationListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetApplicationListRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApplicationListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetApplicationListRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetApplicationListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetApplicationListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetApplicationListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetApplicationListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sentinelEnable Field Functions 
    bool hasSentinelEnable() const { return this->sentinelEnable_ != nullptr;};
    void deleteSentinelEnable() { this->sentinelEnable_ = nullptr;};
    inline bool sentinelEnable() const { DARABONBA_PTR_GET_DEFAULT(sentinelEnable_, false) };
    inline GetApplicationListRequest& setSentinelEnable(bool sentinelEnable) { DARABONBA_PTR_SET_VALUE(sentinelEnable_, sentinelEnable) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetApplicationListRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // switchEnable Field Functions 
    bool hasSwitchEnable() const { return this->switchEnable_ != nullptr;};
    void deleteSwitchEnable() { this->switchEnable_ = nullptr;};
    inline bool switchEnable() const { DARABONBA_PTR_GET_DEFAULT(switchEnable_, false) };
    inline GetApplicationListRequest& setSwitchEnable(bool switchEnable) { DARABONBA_PTR_SET_VALUE(switchEnable_, switchEnable) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetApplicationListRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetApplicationListRequestTags>) };
    inline vector<GetApplicationListRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetApplicationListRequestTags>) };
    inline GetApplicationListRequest& setTags(const vector<GetApplicationListRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetApplicationListRequest& setTags(vector<GetApplicationListRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of an application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of an application.
    std::shared_ptr<string> appName_ = nullptr;
    // The programming language of the application, such as Java and Go.
    std::shared_ptr<string> language_ = nullptr;
    // The microservice namespace to which the application belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // Specifies whether to enable the Sentinel-compatible mode.
    std::shared_ptr<bool> sentinelEnable_ = nullptr;
    // The source of the application. The value is fixed as edasmsc.
    std::shared_ptr<string> source_ = nullptr;
    // Specifies whether to enable switching.
    std::shared_ptr<bool> switchEnable_ = nullptr;
    std::shared_ptr<vector<GetApplicationListRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
