// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEFAULTBUILDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEFAULTBUILDERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DefaultBuilderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DefaultBuilderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cache, cache_);
      DARABONBA_PTR_TO_JSON(languages, languages_);
      DARABONBA_PTR_TO_JSON(rootPath, rootPath_);
      DARABONBA_PTR_TO_JSON(steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, DefaultBuilderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cache, cache_);
      DARABONBA_PTR_FROM_JSON(languages, languages_);
      DARABONBA_PTR_FROM_JSON(rootPath, rootPath_);
      DARABONBA_PTR_FROM_JSON(steps, steps_);
    };
    DefaultBuilderConfig() = default ;
    DefaultBuilderConfig(const DefaultBuilderConfig &) = default ;
    DefaultBuilderConfig(DefaultBuilderConfig &&) = default ;
    DefaultBuilderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DefaultBuilderConfig() = default ;
    DefaultBuilderConfig& operator=(const DefaultBuilderConfig &) = default ;
    DefaultBuilderConfig& operator=(DefaultBuilderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cache_ != nullptr
        && this->languages_ != nullptr && this->rootPath_ != nullptr && this->steps_ != nullptr; };
    // cache Field Functions 
    bool hasCache() const { return this->cache_ != nullptr;};
    void deleteCache() { this->cache_ = nullptr;};
    inline const BuildCacheConfig & cache() const { DARABONBA_PTR_GET_CONST(cache_, BuildCacheConfig) };
    inline BuildCacheConfig cache() { DARABONBA_PTR_GET(cache_, BuildCacheConfig) };
    inline DefaultBuilderConfig& setCache(const BuildCacheConfig & cache) { DARABONBA_PTR_SET_VALUE(cache_, cache) };
    inline DefaultBuilderConfig& setCache(BuildCacheConfig && cache) { DARABONBA_PTR_SET_RVALUE(cache_, cache) };


    // languages Field Functions 
    bool hasLanguages() const { return this->languages_ != nullptr;};
    void deleteLanguages() { this->languages_ = nullptr;};
    inline const vector<string> & languages() const { DARABONBA_PTR_GET_CONST(languages_, vector<string>) };
    inline vector<string> languages() { DARABONBA_PTR_GET(languages_, vector<string>) };
    inline DefaultBuilderConfig& setLanguages(const vector<string> & languages) { DARABONBA_PTR_SET_VALUE(languages_, languages) };
    inline DefaultBuilderConfig& setLanguages(vector<string> && languages) { DARABONBA_PTR_SET_RVALUE(languages_, languages) };


    // rootPath Field Functions 
    bool hasRootPath() const { return this->rootPath_ != nullptr;};
    void deleteRootPath() { this->rootPath_ = nullptr;};
    inline string rootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
    inline DefaultBuilderConfig& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Darabonba::Json> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> steps() { DARABONBA_PTR_GET(steps_, vector<Darabonba::Json>) };
    inline DefaultBuilderConfig& setSteps(const vector<Darabonba::Json> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline DefaultBuilderConfig& setSteps(vector<Darabonba::Json> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    std::shared_ptr<BuildCacheConfig> cache_ = nullptr;
    std::shared_ptr<vector<string>> languages_ = nullptr;
    std::shared_ptr<string> rootPath_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
