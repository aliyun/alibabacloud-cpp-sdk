// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSINSTANCESTORECONFIG_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSINSTANCESTORECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusInstanceStoreConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusInstanceStoreConfig& obj) { 
      DARABONBA_PTR_TO_JSON(parallelCountPerHost, parallelCountPerHost_);
      DARABONBA_PTR_TO_JSON(parallelEnable, parallelEnable_);
      DARABONBA_PTR_TO_JSON(parallelMode, parallelMode_);
      DARABONBA_PTR_TO_JSON(queryCacheEnable, queryCacheEnable_);
      DARABONBA_PTR_TO_JSON(totalParallelCount, totalParallelCount_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusInstanceStoreConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(parallelCountPerHost, parallelCountPerHost_);
      DARABONBA_PTR_FROM_JSON(parallelEnable, parallelEnable_);
      DARABONBA_PTR_FROM_JSON(parallelMode, parallelMode_);
      DARABONBA_PTR_FROM_JSON(queryCacheEnable, queryCacheEnable_);
      DARABONBA_PTR_FROM_JSON(totalParallelCount, totalParallelCount_);
    };
    PrometheusInstanceStoreConfig() = default ;
    PrometheusInstanceStoreConfig(const PrometheusInstanceStoreConfig &) = default ;
    PrometheusInstanceStoreConfig(PrometheusInstanceStoreConfig &&) = default ;
    PrometheusInstanceStoreConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusInstanceStoreConfig() = default ;
    PrometheusInstanceStoreConfig& operator=(const PrometheusInstanceStoreConfig &) = default ;
    PrometheusInstanceStoreConfig& operator=(PrometheusInstanceStoreConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parallelCountPerHost_ == nullptr
        && this->parallelEnable_ == nullptr && this->parallelMode_ == nullptr && this->queryCacheEnable_ == nullptr && this->totalParallelCount_ == nullptr; };
    // parallelCountPerHost Field Functions 
    bool hasParallelCountPerHost() const { return this->parallelCountPerHost_ != nullptr;};
    void deleteParallelCountPerHost() { this->parallelCountPerHost_ = nullptr;};
    inline int32_t getParallelCountPerHost() const { DARABONBA_PTR_GET_DEFAULT(parallelCountPerHost_, 0) };
    inline PrometheusInstanceStoreConfig& setParallelCountPerHost(int32_t parallelCountPerHost) { DARABONBA_PTR_SET_VALUE(parallelCountPerHost_, parallelCountPerHost) };


    // parallelEnable Field Functions 
    bool hasParallelEnable() const { return this->parallelEnable_ != nullptr;};
    void deleteParallelEnable() { this->parallelEnable_ = nullptr;};
    inline bool getParallelEnable() const { DARABONBA_PTR_GET_DEFAULT(parallelEnable_, false) };
    inline PrometheusInstanceStoreConfig& setParallelEnable(bool parallelEnable) { DARABONBA_PTR_SET_VALUE(parallelEnable_, parallelEnable) };


    // parallelMode Field Functions 
    bool hasParallelMode() const { return this->parallelMode_ != nullptr;};
    void deleteParallelMode() { this->parallelMode_ = nullptr;};
    inline string getParallelMode() const { DARABONBA_PTR_GET_DEFAULT(parallelMode_, "") };
    inline PrometheusInstanceStoreConfig& setParallelMode(string parallelMode) { DARABONBA_PTR_SET_VALUE(parallelMode_, parallelMode) };


    // queryCacheEnable Field Functions 
    bool hasQueryCacheEnable() const { return this->queryCacheEnable_ != nullptr;};
    void deleteQueryCacheEnable() { this->queryCacheEnable_ = nullptr;};
    inline bool getQueryCacheEnable() const { DARABONBA_PTR_GET_DEFAULT(queryCacheEnable_, false) };
    inline PrometheusInstanceStoreConfig& setQueryCacheEnable(bool queryCacheEnable) { DARABONBA_PTR_SET_VALUE(queryCacheEnable_, queryCacheEnable) };


    // totalParallelCount Field Functions 
    bool hasTotalParallelCount() const { return this->totalParallelCount_ != nullptr;};
    void deleteTotalParallelCount() { this->totalParallelCount_ = nullptr;};
    inline int32_t getTotalParallelCount() const { DARABONBA_PTR_GET_DEFAULT(totalParallelCount_, 0) };
    inline PrometheusInstanceStoreConfig& setTotalParallelCount(int32_t totalParallelCount) { DARABONBA_PTR_SET_VALUE(totalParallelCount_, totalParallelCount) };


  protected:
    // The concurrency per host. If this parameter is not specified, the default value is 2. Valid values: 1 to 8.
    shared_ptr<int32_t> parallelCountPerHost_ {};
    // Specifies whether to enable parallel query. If this parameter is not specified, the value is considered as false.
    shared_ptr<bool> parallelEnable_ {};
    // The parallel query mode. Valid values:
    // 
    // - auto
    // - static
    // 
    // If this parameter is not specified, the default value is auto.
    shared_ptr<string> parallelMode_ {};
    // Specifies whether to enable query cache. If this parameter is not specified, the value is considered as false.
    shared_ptr<bool> queryCacheEnable_ {};
    // The global concurrency. If this parameter is not specified, the default value is 8. Valid values: 2 to 64.
    shared_ptr<int32_t> totalParallelCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
