// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPTBALANCESUMMARYDTO_HPP_
#define ALIBABACLOUD_MODELS_DEPTBALANCESUMMARYDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BalancePoolSummaryDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class DeptBalanceSummaryDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeptBalanceSummaryDTO& obj) { 
      DARABONBA_PTR_TO_JSON(monthly, monthly_);
      DARABONBA_PTR_TO_JSON(permanent, permanent_);
    };
    friend void from_json(const Darabonba::Json& j, DeptBalanceSummaryDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(monthly, monthly_);
      DARABONBA_PTR_FROM_JSON(permanent, permanent_);
    };
    DeptBalanceSummaryDTO() = default ;
    DeptBalanceSummaryDTO(const DeptBalanceSummaryDTO &) = default ;
    DeptBalanceSummaryDTO(DeptBalanceSummaryDTO &&) = default ;
    DeptBalanceSummaryDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeptBalanceSummaryDTO() = default ;
    DeptBalanceSummaryDTO& operator=(const DeptBalanceSummaryDTO &) = default ;
    DeptBalanceSummaryDTO& operator=(DeptBalanceSummaryDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monthly_ == nullptr
        && this->permanent_ == nullptr; };
    // monthly Field Functions 
    bool hasMonthly() const { return this->monthly_ != nullptr;};
    void deleteMonthly() { this->monthly_ = nullptr;};
    inline const BalancePoolSummaryDTO & getMonthly() const { DARABONBA_PTR_GET_CONST(monthly_, BalancePoolSummaryDTO) };
    inline BalancePoolSummaryDTO getMonthly() { DARABONBA_PTR_GET(monthly_, BalancePoolSummaryDTO) };
    inline DeptBalanceSummaryDTO& setMonthly(const BalancePoolSummaryDTO & monthly) { DARABONBA_PTR_SET_VALUE(monthly_, monthly) };
    inline DeptBalanceSummaryDTO& setMonthly(BalancePoolSummaryDTO && monthly) { DARABONBA_PTR_SET_RVALUE(monthly_, monthly) };


    // permanent Field Functions 
    bool hasPermanent() const { return this->permanent_ != nullptr;};
    void deletePermanent() { this->permanent_ = nullptr;};
    inline const BalancePoolSummaryDTO & getPermanent() const { DARABONBA_PTR_GET_CONST(permanent_, BalancePoolSummaryDTO) };
    inline BalancePoolSummaryDTO getPermanent() { DARABONBA_PTR_GET(permanent_, BalancePoolSummaryDTO) };
    inline DeptBalanceSummaryDTO& setPermanent(const BalancePoolSummaryDTO & permanent) { DARABONBA_PTR_SET_VALUE(permanent_, permanent) };
    inline DeptBalanceSummaryDTO& setPermanent(BalancePoolSummaryDTO && permanent) { DARABONBA_PTR_SET_RVALUE(permanent_, permanent) };


  protected:
    shared_ptr<BalancePoolSummaryDTO> monthly_ {};
    shared_ptr<BalancePoolSummaryDTO> permanent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
