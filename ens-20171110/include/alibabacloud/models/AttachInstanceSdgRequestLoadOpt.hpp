// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESDGREQUESTLOADOPT_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESDGREQUESTLOADOPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachInstanceSDGRequestLoadOpt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceSDGRequestLoadOpt& obj) { 
      DARABONBA_PTR_TO_JSON(BlockRwSplit, blockRwSplit_);
      DARABONBA_PTR_TO_JSON(BlockRwSplitSize, blockRwSplitSize_);
      DARABONBA_PTR_TO_JSON(Cache, cache_);
      DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceSDGRequestLoadOpt& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockRwSplit, blockRwSplit_);
      DARABONBA_PTR_FROM_JSON(BlockRwSplitSize, blockRwSplitSize_);
      DARABONBA_PTR_FROM_JSON(Cache, cache_);
      DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
    };
    AttachInstanceSDGRequestLoadOpt() = default ;
    AttachInstanceSDGRequestLoadOpt(const AttachInstanceSDGRequestLoadOpt &) = default ;
    AttachInstanceSDGRequestLoadOpt(AttachInstanceSDGRequestLoadOpt &&) = default ;
    AttachInstanceSDGRequestLoadOpt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceSDGRequestLoadOpt() = default ;
    AttachInstanceSDGRequestLoadOpt& operator=(const AttachInstanceSDGRequestLoadOpt &) = default ;
    AttachInstanceSDGRequestLoadOpt& operator=(AttachInstanceSDGRequestLoadOpt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockRwSplit_ == nullptr
        && return this->blockRwSplitSize_ == nullptr && return this->cache_ == nullptr && return this->cacheSize_ == nullptr; };
    // blockRwSplit Field Functions 
    bool hasBlockRwSplit() const { return this->blockRwSplit_ != nullptr;};
    void deleteBlockRwSplit() { this->blockRwSplit_ = nullptr;};
    inline bool blockRwSplit() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplit_, false) };
    inline AttachInstanceSDGRequestLoadOpt& setBlockRwSplit(bool blockRwSplit) { DARABONBA_PTR_SET_VALUE(blockRwSplit_, blockRwSplit) };


    // blockRwSplitSize Field Functions 
    bool hasBlockRwSplitSize() const { return this->blockRwSplitSize_ != nullptr;};
    void deleteBlockRwSplitSize() { this->blockRwSplitSize_ = nullptr;};
    inline int32_t blockRwSplitSize() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplitSize_, 0) };
    inline AttachInstanceSDGRequestLoadOpt& setBlockRwSplitSize(int32_t blockRwSplitSize) { DARABONBA_PTR_SET_VALUE(blockRwSplitSize_, blockRwSplitSize) };


    // cache Field Functions 
    bool hasCache() const { return this->cache_ != nullptr;};
    void deleteCache() { this->cache_ = nullptr;};
    inline bool cache() const { DARABONBA_PTR_GET_DEFAULT(cache_, false) };
    inline AttachInstanceSDGRequestLoadOpt& setCache(bool cache) { DARABONBA_PTR_SET_VALUE(cache_, cache) };


    // cacheSize Field Functions 
    bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
    void deleteCacheSize() { this->cacheSize_ = nullptr;};
    inline int32_t cacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
    inline AttachInstanceSDGRequestLoadOpt& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


  protected:
    std::shared_ptr<bool> blockRwSplit_ = nullptr;
    std::shared_ptr<int32_t> blockRwSplitSize_ = nullptr;
    std::shared_ptr<bool> cache_ = nullptr;
    std::shared_ptr<int32_t> cacheSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
