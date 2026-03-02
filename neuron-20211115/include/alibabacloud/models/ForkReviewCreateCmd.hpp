// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORKREVIEWCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_FORKREVIEWCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ForkReviewCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForkReviewCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ForkReviewCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    ForkReviewCreateCmd() = default ;
    ForkReviewCreateCmd(const ForkReviewCreateCmd &) = default ;
    ForkReviewCreateCmd(ForkReviewCreateCmd &&) = default ;
    ForkReviewCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForkReviewCreateCmd() = default ;
    ForkReviewCreateCmd& operator=(const ForkReviewCreateCmd &) = default ;
    ForkReviewCreateCmd& operator=(ForkReviewCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->gitGroup_ == nullptr && this->marketId_ == nullptr && this->pbcId_ == nullptr && this->usage_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ForkReviewCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // gitGroup Field Functions 
    bool hasGitGroup() const { return this->gitGroup_ != nullptr;};
    void deleteGitGroup() { this->gitGroup_ = nullptr;};
    inline string getGitGroup() const { DARABONBA_PTR_GET_DEFAULT(gitGroup_, "") };
    inline ForkReviewCreateCmd& setGitGroup(string gitGroup) { DARABONBA_PTR_SET_VALUE(gitGroup_, gitGroup) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline ForkReviewCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline ForkReviewCreateCmd& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ForkReviewCreateCmd& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<string> gitGroup_ {};
    shared_ptr<int64_t> marketId_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcId_ {};
    // This parameter is required.
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
