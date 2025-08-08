// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUECACHERULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUECACHERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueCacheRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueCacheRule& obj) { 
      DARABONBA_PTR_TO_JSON(CacheKey, cacheKey_);
      DARABONBA_PTR_TO_JSON(NeedCache, needCache_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueCacheRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheKey, cacheKey_);
      DARABONBA_PTR_FROM_JSON(NeedCache, needCache_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    QueryMgsApirestResponseBodyResultContentValueCacheRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueCacheRule(const QueryMgsApirestResponseBodyResultContentValueCacheRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueCacheRule(QueryMgsApirestResponseBodyResultContentValueCacheRule &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueCacheRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueCacheRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueCacheRule& operator=(const QueryMgsApirestResponseBodyResultContentValueCacheRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueCacheRule& operator=(QueryMgsApirestResponseBodyResultContentValueCacheRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheKey_ != nullptr
        && this->needCache_ != nullptr && this->ttl_ != nullptr; };
    // cacheKey Field Functions 
    bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
    void deleteCacheKey() { this->cacheKey_ = nullptr;};
    inline string cacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueCacheRule& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


    // needCache Field Functions 
    bool hasNeedCache() const { return this->needCache_ != nullptr;};
    void deleteNeedCache() { this->needCache_ = nullptr;};
    inline bool needCache() const { DARABONBA_PTR_GET_DEFAULT(needCache_, false) };
    inline QueryMgsApirestResponseBodyResultContentValueCacheRule& setNeedCache(bool needCache) { DARABONBA_PTR_SET_VALUE(needCache_, needCache) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValueCacheRule& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    std::shared_ptr<string> cacheKey_ = nullptr;
    std::shared_ptr<bool> needCache_ = nullptr;
    std::shared_ptr<int64_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
