// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDCACHECONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDCACHECONFIG_HPP_
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
  class BuildCacheConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildCacheConfig& obj) { 
      DARABONBA_ANY_TO_JSON(keyPath, keyPath_);
      DARABONBA_PTR_TO_JSON(paths, paths_);
    };
    friend void from_json(const Darabonba::Json& j, BuildCacheConfig& obj) { 
      DARABONBA_ANY_FROM_JSON(keyPath, keyPath_);
      DARABONBA_PTR_FROM_JSON(paths, paths_);
    };
    BuildCacheConfig() = default ;
    BuildCacheConfig(const BuildCacheConfig &) = default ;
    BuildCacheConfig(BuildCacheConfig &&) = default ;
    BuildCacheConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildCacheConfig() = default ;
    BuildCacheConfig& operator=(const BuildCacheConfig &) = default ;
    BuildCacheConfig& operator=(BuildCacheConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPath_ != nullptr
        && this->paths_ != nullptr; };
    // keyPath Field Functions 
    bool hasKeyPath() const { return this->keyPath_ != nullptr;};
    void deleteKeyPath() { this->keyPath_ = nullptr;};
    inline     const Darabonba::Json & keyPath() const { DARABONBA_GET(keyPath_) };
    Darabonba::Json & keyPath() { DARABONBA_GET(keyPath_) };
    inline BuildCacheConfig& setKeyPath(const Darabonba::Json & keyPath) { DARABONBA_SET_VALUE(keyPath_, keyPath) };
    inline BuildCacheConfig& setKeyPath(Darabonba::Json & keyPath) { DARABONBA_SET_RVALUE(keyPath_, keyPath) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline BuildCacheConfig& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline BuildCacheConfig& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


  protected:
    Darabonba::Json keyPath_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
