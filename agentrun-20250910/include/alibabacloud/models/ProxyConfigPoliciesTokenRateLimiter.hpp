// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROXYCONFIGPOLICIESTOKENRATELIMITER_HPP_
#define ALIBABACLOUD_MODELS_PROXYCONFIGPOLICIESTOKENRATELIMITER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProxyConfigPoliciesTokenRateLimiter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProxyConfigPoliciesTokenRateLimiter& obj) { 
      DARABONBA_PTR_TO_JSON(tpd, tpd_);
      DARABONBA_PTR_TO_JSON(tph, tph_);
      DARABONBA_PTR_TO_JSON(tpm, tpm_);
      DARABONBA_PTR_TO_JSON(tps, tps_);
    };
    friend void from_json(const Darabonba::Json& j, ProxyConfigPoliciesTokenRateLimiter& obj) { 
      DARABONBA_PTR_FROM_JSON(tpd, tpd_);
      DARABONBA_PTR_FROM_JSON(tph, tph_);
      DARABONBA_PTR_FROM_JSON(tpm, tpm_);
      DARABONBA_PTR_FROM_JSON(tps, tps_);
    };
    ProxyConfigPoliciesTokenRateLimiter() = default ;
    ProxyConfigPoliciesTokenRateLimiter(const ProxyConfigPoliciesTokenRateLimiter &) = default ;
    ProxyConfigPoliciesTokenRateLimiter(ProxyConfigPoliciesTokenRateLimiter &&) = default ;
    ProxyConfigPoliciesTokenRateLimiter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProxyConfigPoliciesTokenRateLimiter() = default ;
    ProxyConfigPoliciesTokenRateLimiter& operator=(const ProxyConfigPoliciesTokenRateLimiter &) = default ;
    ProxyConfigPoliciesTokenRateLimiter& operator=(ProxyConfigPoliciesTokenRateLimiter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tpd_ == nullptr
        && return this->tph_ == nullptr && return this->tpm_ == nullptr && return this->tps_ == nullptr; };
    // tpd Field Functions 
    bool hasTpd() const { return this->tpd_ != nullptr;};
    void deleteTpd() { this->tpd_ = nullptr;};
    inline int32_t tpd() const { DARABONBA_PTR_GET_DEFAULT(tpd_, 0) };
    inline ProxyConfigPoliciesTokenRateLimiter& setTpd(int32_t tpd) { DARABONBA_PTR_SET_VALUE(tpd_, tpd) };


    // tph Field Functions 
    bool hasTph() const { return this->tph_ != nullptr;};
    void deleteTph() { this->tph_ = nullptr;};
    inline int32_t tph() const { DARABONBA_PTR_GET_DEFAULT(tph_, 0) };
    inline ProxyConfigPoliciesTokenRateLimiter& setTph(int32_t tph) { DARABONBA_PTR_SET_VALUE(tph_, tph) };


    // tpm Field Functions 
    bool hasTpm() const { return this->tpm_ != nullptr;};
    void deleteTpm() { this->tpm_ = nullptr;};
    inline int32_t tpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0) };
    inline ProxyConfigPoliciesTokenRateLimiter& setTpm(int32_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


    // tps Field Functions 
    bool hasTps() const { return this->tps_ != nullptr;};
    void deleteTps() { this->tps_ = nullptr;};
    inline int32_t tps() const { DARABONBA_PTR_GET_DEFAULT(tps_, 0) };
    inline ProxyConfigPoliciesTokenRateLimiter& setTps(int32_t tps) { DARABONBA_PTR_SET_VALUE(tps_, tps) };


  protected:
    std::shared_ptr<int32_t> tpd_ = nullptr;
    std::shared_ptr<int32_t> tph_ = nullptr;
    std::shared_ptr<int32_t> tpm_ = nullptr;
    std::shared_ptr<int32_t> tps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
