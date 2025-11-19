// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROXYCONFIGPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_PROXYCONFIGPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProxyConfigPoliciesFallbacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProxyConfigPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProxyConfigPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(cache, cache_);
      DARABONBA_PTR_TO_JSON(concurrencyLimit, concurrencyLimit_);
      DARABONBA_PTR_TO_JSON(fallbacks, fallbacks_);
      DARABONBA_PTR_TO_JSON(numRetries, numRetries_);
      DARABONBA_PTR_TO_JSON(requestTimeout, requestTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, ProxyConfigPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(cache, cache_);
      DARABONBA_PTR_FROM_JSON(concurrencyLimit, concurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(fallbacks, fallbacks_);
      DARABONBA_PTR_FROM_JSON(numRetries, numRetries_);
      DARABONBA_PTR_FROM_JSON(requestTimeout, requestTimeout_);
    };
    ProxyConfigPolicies() = default ;
    ProxyConfigPolicies(const ProxyConfigPolicies &) = default ;
    ProxyConfigPolicies(ProxyConfigPolicies &&) = default ;
    ProxyConfigPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProxyConfigPolicies() = default ;
    ProxyConfigPolicies& operator=(const ProxyConfigPolicies &) = default ;
    ProxyConfigPolicies& operator=(ProxyConfigPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cache_ == nullptr
        && return this->concurrencyLimit_ == nullptr && return this->fallbacks_ == nullptr && return this->numRetries_ == nullptr && return this->requestTimeout_ == nullptr; };
    // cache Field Functions 
    bool hasCache() const { return this->cache_ != nullptr;};
    void deleteCache() { this->cache_ = nullptr;};
    inline bool cache() const { DARABONBA_PTR_GET_DEFAULT(cache_, false) };
    inline ProxyConfigPolicies& setCache(bool cache) { DARABONBA_PTR_SET_VALUE(cache_, cache) };


    // concurrencyLimit Field Functions 
    bool hasConcurrencyLimit() const { return this->concurrencyLimit_ != nullptr;};
    void deleteConcurrencyLimit() { this->concurrencyLimit_ = nullptr;};
    inline int32_t concurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(concurrencyLimit_, 0) };
    inline ProxyConfigPolicies& setConcurrencyLimit(int32_t concurrencyLimit) { DARABONBA_PTR_SET_VALUE(concurrencyLimit_, concurrencyLimit) };


    // fallbacks Field Functions 
    bool hasFallbacks() const { return this->fallbacks_ != nullptr;};
    void deleteFallbacks() { this->fallbacks_ = nullptr;};
    inline const vector<Models::ProxyConfigPoliciesFallbacks> & fallbacks() const { DARABONBA_PTR_GET_CONST(fallbacks_, vector<Models::ProxyConfigPoliciesFallbacks>) };
    inline vector<Models::ProxyConfigPoliciesFallbacks> fallbacks() { DARABONBA_PTR_GET(fallbacks_, vector<Models::ProxyConfigPoliciesFallbacks>) };
    inline ProxyConfigPolicies& setFallbacks(const vector<Models::ProxyConfigPoliciesFallbacks> & fallbacks) { DARABONBA_PTR_SET_VALUE(fallbacks_, fallbacks) };
    inline ProxyConfigPolicies& setFallbacks(vector<Models::ProxyConfigPoliciesFallbacks> && fallbacks) { DARABONBA_PTR_SET_RVALUE(fallbacks_, fallbacks) };


    // numRetries Field Functions 
    bool hasNumRetries() const { return this->numRetries_ != nullptr;};
    void deleteNumRetries() { this->numRetries_ = nullptr;};
    inline int32_t numRetries() const { DARABONBA_PTR_GET_DEFAULT(numRetries_, 0) };
    inline ProxyConfigPolicies& setNumRetries(int32_t numRetries) { DARABONBA_PTR_SET_VALUE(numRetries_, numRetries) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline ProxyConfigPolicies& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


  protected:
    std::shared_ptr<bool> cache_ = nullptr;
    std::shared_ptr<int32_t> concurrencyLimit_ = nullptr;
    std::shared_ptr<vector<Models::ProxyConfigPoliciesFallbacks>> fallbacks_ = nullptr;
    std::shared_ptr<int32_t> numRetries_ = nullptr;
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
