// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELFQUOTAPREEMPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SELFQUOTAPREEMPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SelfQuotaPreemptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelfQuotaPreemptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PreemptedPriorities, preemptedPriorities_);
      DARABONBA_PTR_TO_JSON(PreemptedProducts, preemptedProducts_);
      DARABONBA_PTR_TO_JSON(PreemptorPriorities, preemptorPriorities_);
    };
    friend void from_json(const Darabonba::Json& j, SelfQuotaPreemptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PreemptedPriorities, preemptedPriorities_);
      DARABONBA_PTR_FROM_JSON(PreemptedProducts, preemptedProducts_);
      DARABONBA_PTR_FROM_JSON(PreemptorPriorities, preemptorPriorities_);
    };
    SelfQuotaPreemptionConfig() = default ;
    SelfQuotaPreemptionConfig(const SelfQuotaPreemptionConfig &) = default ;
    SelfQuotaPreemptionConfig(SelfQuotaPreemptionConfig &&) = default ;
    SelfQuotaPreemptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelfQuotaPreemptionConfig() = default ;
    SelfQuotaPreemptionConfig& operator=(const SelfQuotaPreemptionConfig &) = default ;
    SelfQuotaPreemptionConfig& operator=(SelfQuotaPreemptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preemptedPriorities_ != nullptr
        && this->preemptedProducts_ != nullptr && this->preemptorPriorities_ != nullptr; };
    // preemptedPriorities Field Functions 
    bool hasPreemptedPriorities() const { return this->preemptedPriorities_ != nullptr;};
    void deletePreemptedPriorities() { this->preemptedPriorities_ = nullptr;};
    inline const vector<int32_t> & preemptedPriorities() const { DARABONBA_PTR_GET_CONST(preemptedPriorities_, vector<int32_t>) };
    inline vector<int32_t> preemptedPriorities() { DARABONBA_PTR_GET(preemptedPriorities_, vector<int32_t>) };
    inline SelfQuotaPreemptionConfig& setPreemptedPriorities(const vector<int32_t> & preemptedPriorities) { DARABONBA_PTR_SET_VALUE(preemptedPriorities_, preemptedPriorities) };
    inline SelfQuotaPreemptionConfig& setPreemptedPriorities(vector<int32_t> && preemptedPriorities) { DARABONBA_PTR_SET_RVALUE(preemptedPriorities_, preemptedPriorities) };


    // preemptedProducts Field Functions 
    bool hasPreemptedProducts() const { return this->preemptedProducts_ != nullptr;};
    void deletePreemptedProducts() { this->preemptedProducts_ = nullptr;};
    inline const vector<string> & preemptedProducts() const { DARABONBA_PTR_GET_CONST(preemptedProducts_, vector<string>) };
    inline vector<string> preemptedProducts() { DARABONBA_PTR_GET(preemptedProducts_, vector<string>) };
    inline SelfQuotaPreemptionConfig& setPreemptedProducts(const vector<string> & preemptedProducts) { DARABONBA_PTR_SET_VALUE(preemptedProducts_, preemptedProducts) };
    inline SelfQuotaPreemptionConfig& setPreemptedProducts(vector<string> && preemptedProducts) { DARABONBA_PTR_SET_RVALUE(preemptedProducts_, preemptedProducts) };


    // preemptorPriorities Field Functions 
    bool hasPreemptorPriorities() const { return this->preemptorPriorities_ != nullptr;};
    void deletePreemptorPriorities() { this->preemptorPriorities_ = nullptr;};
    inline const vector<int32_t> & preemptorPriorities() const { DARABONBA_PTR_GET_CONST(preemptorPriorities_, vector<int32_t>) };
    inline vector<int32_t> preemptorPriorities() { DARABONBA_PTR_GET(preemptorPriorities_, vector<int32_t>) };
    inline SelfQuotaPreemptionConfig& setPreemptorPriorities(const vector<int32_t> & preemptorPriorities) { DARABONBA_PTR_SET_VALUE(preemptorPriorities_, preemptorPriorities) };
    inline SelfQuotaPreemptionConfig& setPreemptorPriorities(vector<int32_t> && preemptorPriorities) { DARABONBA_PTR_SET_RVALUE(preemptorPriorities_, preemptorPriorities) };


  protected:
    std::shared_ptr<vector<int32_t>> preemptedPriorities_ = nullptr;
    std::shared_ptr<vector<string>> preemptedProducts_ = nullptr;
    std::shared_ptr<vector<int32_t>> preemptorPriorities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
