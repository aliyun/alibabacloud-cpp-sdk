// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENICACHECONFIG_HPP_
#define ALIBABACLOUD_MODELS_ENICACHECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class EniCacheConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EniCacheConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CachePoolSize, cachePoolSize_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, EniCacheConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CachePoolSize, cachePoolSize_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    EniCacheConfig() = default ;
    EniCacheConfig(const EniCacheConfig &) = default ;
    EniCacheConfig(EniCacheConfig &&) = default ;
    EniCacheConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EniCacheConfig() = default ;
    EniCacheConfig& operator=(const EniCacheConfig &) = default ;
    EniCacheConfig& operator=(EniCacheConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cachePoolSize_ == nullptr
        && return this->enabled_ == nullptr; };
    // cachePoolSize Field Functions 
    bool hasCachePoolSize() const { return this->cachePoolSize_ != nullptr;};
    void deleteCachePoolSize() { this->cachePoolSize_ = nullptr;};
    inline int32_t cachePoolSize() const { DARABONBA_PTR_GET_DEFAULT(cachePoolSize_, 0) };
    inline EniCacheConfig& setCachePoolSize(int32_t cachePoolSize) { DARABONBA_PTR_SET_VALUE(cachePoolSize_, cachePoolSize) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline EniCacheConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<int32_t> cachePoolSize_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
