// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDUCTIONPROPOSALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREDUCTIONPROPOSALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetReductionProposalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReductionProposalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(reduction, reduction_);
      DARABONBA_PTR_TO_JSON(reductionEvaluation, reductionEvaluation_);
    };
    friend void from_json(const Darabonba::Json& j, GetReductionProposalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(reduction, reduction_);
      DARABONBA_PTR_FROM_JSON(reductionEvaluation, reductionEvaluation_);
    };
    GetReductionProposalResponseBodyData() = default ;
    GetReductionProposalResponseBodyData(const GetReductionProposalResponseBodyData &) = default ;
    GetReductionProposalResponseBodyData(GetReductionProposalResponseBodyData &&) = default ;
    GetReductionProposalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReductionProposalResponseBodyData() = default ;
    GetReductionProposalResponseBodyData& operator=(const GetReductionProposalResponseBodyData &) = default ;
    GetReductionProposalResponseBodyData& operator=(GetReductionProposalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reduction_ != nullptr
        && this->reductionEvaluation_ != nullptr; };
    // reduction Field Functions 
    bool hasReduction() const { return this->reduction_ != nullptr;};
    void deleteReduction() { this->reduction_ = nullptr;};
    inline string reduction() const { DARABONBA_PTR_GET_DEFAULT(reduction_, "") };
    inline GetReductionProposalResponseBodyData& setReduction(string reduction) { DARABONBA_PTR_SET_VALUE(reduction_, reduction) };


    // reductionEvaluation Field Functions 
    bool hasReductionEvaluation() const { return this->reductionEvaluation_ != nullptr;};
    void deleteReductionEvaluation() { this->reductionEvaluation_ = nullptr;};
    inline string reductionEvaluation() const { DARABONBA_PTR_GET_DEFAULT(reductionEvaluation_, "") };
    inline GetReductionProposalResponseBodyData& setReductionEvaluation(string reductionEvaluation) { DARABONBA_PTR_SET_VALUE(reductionEvaluation_, reductionEvaluation) };


  protected:
    // Proactive carbon reduction recommendations and advice.
    std::shared_ptr<string> reduction_ = nullptr;
    // Active carbon reduction assessment.
    std::shared_ptr<string> reductionEvaluation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
