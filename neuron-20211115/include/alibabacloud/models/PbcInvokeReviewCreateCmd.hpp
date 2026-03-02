// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCINVOKEREVIEWCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCINVOKEREVIEWCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcInvokeReviewCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcInvokeReviewCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(invokePbcId, invokePbcId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, PbcInvokeReviewCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(invokePbcId, invokePbcId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    PbcInvokeReviewCreateCmd() = default ;
    PbcInvokeReviewCreateCmd(const PbcInvokeReviewCreateCmd &) = default ;
    PbcInvokeReviewCreateCmd(PbcInvokeReviewCreateCmd &&) = default ;
    PbcInvokeReviewCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcInvokeReviewCreateCmd() = default ;
    PbcInvokeReviewCreateCmd& operator=(const PbcInvokeReviewCreateCmd &) = default ;
    PbcInvokeReviewCreateCmd& operator=(PbcInvokeReviewCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->invokePbcId_ == nullptr && this->marketId_ == nullptr && this->pbcId_ == nullptr && this->usage_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcInvokeReviewCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // invokePbcId Field Functions 
    bool hasInvokePbcId() const { return this->invokePbcId_ != nullptr;};
    void deleteInvokePbcId() { this->invokePbcId_ = nullptr;};
    inline int64_t getInvokePbcId() const { DARABONBA_PTR_GET_DEFAULT(invokePbcId_, 0L) };
    inline PbcInvokeReviewCreateCmd& setInvokePbcId(int64_t invokePbcId) { DARABONBA_PTR_SET_VALUE(invokePbcId_, invokePbcId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcInvokeReviewCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PbcInvokeReviewCreateCmd& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline PbcInvokeReviewCreateCmd& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> invokePbcId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
