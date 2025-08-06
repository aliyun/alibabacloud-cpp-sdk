// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBQUOTAPREEMPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBQUOTAPREEMPTIONCONFIG_HPP_
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
  class SubQuotaPreemptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubQuotaPreemptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PreemptedPriorityUpperBound, preemptedPriorityUpperBound_);
      DARABONBA_PTR_TO_JSON(PreemptedProducts, preemptedProducts_);
    };
    friend void from_json(const Darabonba::Json& j, SubQuotaPreemptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PreemptedPriorityUpperBound, preemptedPriorityUpperBound_);
      DARABONBA_PTR_FROM_JSON(PreemptedProducts, preemptedProducts_);
    };
    SubQuotaPreemptionConfig() = default ;
    SubQuotaPreemptionConfig(const SubQuotaPreemptionConfig &) = default ;
    SubQuotaPreemptionConfig(SubQuotaPreemptionConfig &&) = default ;
    SubQuotaPreemptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubQuotaPreemptionConfig() = default ;
    SubQuotaPreemptionConfig& operator=(const SubQuotaPreemptionConfig &) = default ;
    SubQuotaPreemptionConfig& operator=(SubQuotaPreemptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preemptedPriorityUpperBound_ != nullptr
        && this->preemptedProducts_ != nullptr; };
    // preemptedPriorityUpperBound Field Functions 
    bool hasPreemptedPriorityUpperBound() const { return this->preemptedPriorityUpperBound_ != nullptr;};
    void deletePreemptedPriorityUpperBound() { this->preemptedPriorityUpperBound_ = nullptr;};
    inline int64_t preemptedPriorityUpperBound() const { DARABONBA_PTR_GET_DEFAULT(preemptedPriorityUpperBound_, 0L) };
    inline SubQuotaPreemptionConfig& setPreemptedPriorityUpperBound(int64_t preemptedPriorityUpperBound) { DARABONBA_PTR_SET_VALUE(preemptedPriorityUpperBound_, preemptedPriorityUpperBound) };


    // preemptedProducts Field Functions 
    bool hasPreemptedProducts() const { return this->preemptedProducts_ != nullptr;};
    void deletePreemptedProducts() { this->preemptedProducts_ = nullptr;};
    inline const vector<string> & preemptedProducts() const { DARABONBA_PTR_GET_CONST(preemptedProducts_, vector<string>) };
    inline vector<string> preemptedProducts() { DARABONBA_PTR_GET(preemptedProducts_, vector<string>) };
    inline SubQuotaPreemptionConfig& setPreemptedProducts(const vector<string> & preemptedProducts) { DARABONBA_PTR_SET_VALUE(preemptedProducts_, preemptedProducts) };
    inline SubQuotaPreemptionConfig& setPreemptedProducts(vector<string> && preemptedProducts) { DARABONBA_PTR_SET_RVALUE(preemptedProducts_, preemptedProducts) };


  protected:
    std::shared_ptr<int64_t> preemptedPriorityUpperBound_ = nullptr;
    std::shared_ptr<vector<string>> preemptedProducts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
