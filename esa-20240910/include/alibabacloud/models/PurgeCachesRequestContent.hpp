// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESREQUESTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESREQUESTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PurgeCachesRequestContentCacheKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurgeCachesRequestContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurgeCachesRequestContent& obj) { 
      DARABONBA_PTR_TO_JSON(CacheKeys, cacheKeys_);
      DARABONBA_PTR_TO_JSON(CacheTags, cacheTags_);
      DARABONBA_PTR_TO_JSON(Directories, directories_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(IgnoreParams, ignoreParams_);
      DARABONBA_PTR_TO_JSON(PurgeAll, purgeAll_);
    };
    friend void from_json(const Darabonba::Json& j, PurgeCachesRequestContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheKeys, cacheKeys_);
      DARABONBA_PTR_FROM_JSON(CacheTags, cacheTags_);
      DARABONBA_PTR_FROM_JSON(Directories, directories_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(IgnoreParams, ignoreParams_);
      DARABONBA_PTR_FROM_JSON(PurgeAll, purgeAll_);
    };
    PurgeCachesRequestContent() = default ;
    PurgeCachesRequestContent(const PurgeCachesRequestContent &) = default ;
    PurgeCachesRequestContent(PurgeCachesRequestContent &&) = default ;
    PurgeCachesRequestContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurgeCachesRequestContent() = default ;
    PurgeCachesRequestContent& operator=(const PurgeCachesRequestContent &) = default ;
    PurgeCachesRequestContent& operator=(PurgeCachesRequestContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheKeys_ == nullptr
        && return this->cacheTags_ == nullptr && return this->directories_ == nullptr && return this->files_ == nullptr && return this->hostnames_ == nullptr && return this->ignoreParams_ == nullptr
        && return this->purgeAll_ == nullptr; };
    // cacheKeys Field Functions 
    bool hasCacheKeys() const { return this->cacheKeys_ != nullptr;};
    void deleteCacheKeys() { this->cacheKeys_ = nullptr;};
    inline const vector<Models::PurgeCachesRequestContentCacheKeys> & cacheKeys() const { DARABONBA_PTR_GET_CONST(cacheKeys_, vector<Models::PurgeCachesRequestContentCacheKeys>) };
    inline vector<Models::PurgeCachesRequestContentCacheKeys> cacheKeys() { DARABONBA_PTR_GET(cacheKeys_, vector<Models::PurgeCachesRequestContentCacheKeys>) };
    inline PurgeCachesRequestContent& setCacheKeys(const vector<Models::PurgeCachesRequestContentCacheKeys> & cacheKeys) { DARABONBA_PTR_SET_VALUE(cacheKeys_, cacheKeys) };
    inline PurgeCachesRequestContent& setCacheKeys(vector<Models::PurgeCachesRequestContentCacheKeys> && cacheKeys) { DARABONBA_PTR_SET_RVALUE(cacheKeys_, cacheKeys) };


    // cacheTags Field Functions 
    bool hasCacheTags() const { return this->cacheTags_ != nullptr;};
    void deleteCacheTags() { this->cacheTags_ = nullptr;};
    inline const vector<string> & cacheTags() const { DARABONBA_PTR_GET_CONST(cacheTags_, vector<string>) };
    inline vector<string> cacheTags() { DARABONBA_PTR_GET(cacheTags_, vector<string>) };
    inline PurgeCachesRequestContent& setCacheTags(const vector<string> & cacheTags) { DARABONBA_PTR_SET_VALUE(cacheTags_, cacheTags) };
    inline PurgeCachesRequestContent& setCacheTags(vector<string> && cacheTags) { DARABONBA_PTR_SET_RVALUE(cacheTags_, cacheTags) };


    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<string> & directories() const { DARABONBA_PTR_GET_CONST(directories_, vector<string>) };
    inline vector<string> directories() { DARABONBA_PTR_GET(directories_, vector<string>) };
    inline PurgeCachesRequestContent& setDirectories(const vector<string> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline PurgeCachesRequestContent& setDirectories(vector<string> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<Darabonba::Json> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> files() { DARABONBA_PTR_GET(files_, vector<Darabonba::Json>) };
    inline PurgeCachesRequestContent& setFiles(const vector<Darabonba::Json> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline PurgeCachesRequestContent& setFiles(vector<Darabonba::Json> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<string> & hostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
    inline vector<string> hostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
    inline PurgeCachesRequestContent& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline PurgeCachesRequestContent& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // ignoreParams Field Functions 
    bool hasIgnoreParams() const { return this->ignoreParams_ != nullptr;};
    void deleteIgnoreParams() { this->ignoreParams_ = nullptr;};
    inline const vector<string> & ignoreParams() const { DARABONBA_PTR_GET_CONST(ignoreParams_, vector<string>) };
    inline vector<string> ignoreParams() { DARABONBA_PTR_GET(ignoreParams_, vector<string>) };
    inline PurgeCachesRequestContent& setIgnoreParams(const vector<string> & ignoreParams) { DARABONBA_PTR_SET_VALUE(ignoreParams_, ignoreParams) };
    inline PurgeCachesRequestContent& setIgnoreParams(vector<string> && ignoreParams) { DARABONBA_PTR_SET_RVALUE(ignoreParams_, ignoreParams) };


    // purgeAll Field Functions 
    bool hasPurgeAll() const { return this->purgeAll_ != nullptr;};
    void deletePurgeAll() { this->purgeAll_ = nullptr;};
    inline bool purgeAll() const { DARABONBA_PTR_GET_DEFAULT(purgeAll_, false) };
    inline PurgeCachesRequestContent& setPurgeAll(bool purgeAll) { DARABONBA_PTR_SET_VALUE(purgeAll_, purgeAll) };


  protected:
    // List of cachekeys to be refreshed, required when the type is cachekey.
    std::shared_ptr<vector<Models::PurgeCachesRequestContentCacheKeys>> cacheKeys_ = nullptr;
    // List of cachetags to be refreshed, required when the type is cachetag.
    std::shared_ptr<vector<string>> cacheTags_ = nullptr;
    // List of directories to be refreshed, required when the type is directory.
    std::shared_ptr<vector<string>> directories_ = nullptr;
    // List of files to be refreshed, required when the type is file.
    std::shared_ptr<vector<Darabonba::Json>> files_ = nullptr;
    // List of hostnames to be refreshed, required when the type is hostname.
    std::shared_ptr<vector<string>> hostnames_ = nullptr;
    // List of files with ignored parameters, required when the type is ignoreParams.
    std::shared_ptr<vector<string>> ignoreParams_ = nullptr;
    // Flag for purging all content. Default is false, set to true when the type is purgeall.
    std::shared_ptr<bool> purgeAll_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
