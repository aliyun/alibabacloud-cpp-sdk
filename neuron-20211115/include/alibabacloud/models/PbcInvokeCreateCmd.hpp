// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCINVOKECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCINVOKECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcInvokeCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcInvokeCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(invokePbcId, invokePbcId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(reviewer, reviewer_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
      DARABONBA_PTR_TO_JSON(visible, visible_);
    };
    friend void from_json(const Darabonba::Json& j, PbcInvokeCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(invokePbcId, invokePbcId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(reviewer, reviewer_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
      DARABONBA_PTR_FROM_JSON(visible, visible_);
    };
    PbcInvokeCreateCmd() = default ;
    PbcInvokeCreateCmd(const PbcInvokeCreateCmd &) = default ;
    PbcInvokeCreateCmd(PbcInvokeCreateCmd &&) = default ;
    PbcInvokeCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcInvokeCreateCmd() = default ;
    PbcInvokeCreateCmd& operator=(const PbcInvokeCreateCmd &) = default ;
    PbcInvokeCreateCmd& operator=(PbcInvokeCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->companyId_ == nullptr && this->invokePbcId_ == nullptr && this->marketId_ == nullptr && this->pbcId_ == nullptr && this->reviewer_ == nullptr
        && this->usage_ == nullptr && this->visible_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline PbcInvokeCreateCmd& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcInvokeCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // invokePbcId Field Functions 
    bool hasInvokePbcId() const { return this->invokePbcId_ != nullptr;};
    void deleteInvokePbcId() { this->invokePbcId_ = nullptr;};
    inline int64_t getInvokePbcId() const { DARABONBA_PTR_GET_DEFAULT(invokePbcId_, 0L) };
    inline PbcInvokeCreateCmd& setInvokePbcId(int64_t invokePbcId) { DARABONBA_PTR_SET_VALUE(invokePbcId_, invokePbcId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcInvokeCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PbcInvokeCreateCmd& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline PbcInvokeCreateCmd& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline PbcInvokeCreateCmd& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline PbcInvokeCreateCmd& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    shared_ptr<string> applicant_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> invokePbcId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> reviewer_ {};
    shared_ptr<string> usage_ {};
    shared_ptr<bool> visible_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
