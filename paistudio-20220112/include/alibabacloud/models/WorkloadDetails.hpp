// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKLOADDETAILS_HPP_
#define ALIBABACLOUD_MODELS_WORKLOADDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuotaJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class WorkloadDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkloadDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DLC, DLC_);
      DARABONBA_PTR_TO_JSON(DSW, DSW_);
      DARABONBA_PTR_TO_JSON(EAS, EAS_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, WorkloadDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DLC, DLC_);
      DARABONBA_PTR_FROM_JSON(DSW, DSW_);
      DARABONBA_PTR_FROM_JSON(EAS, EAS_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    WorkloadDetails() = default ;
    WorkloadDetails(const WorkloadDetails &) = default ;
    WorkloadDetails(WorkloadDetails &&) = default ;
    WorkloadDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkloadDetails() = default ;
    WorkloadDetails& operator=(const WorkloadDetails &) = default ;
    WorkloadDetails& operator=(WorkloadDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DLC_ == nullptr
        && this->DSW_ == nullptr && this->EAS_ == nullptr && this->summary_ == nullptr; };
    // DLC Field Functions 
    bool hasDLC() const { return this->DLC_ != nullptr;};
    void deleteDLC() { this->DLC_ = nullptr;};
    inline const QuotaJob & getDLC() const { DARABONBA_PTR_GET_CONST(DLC_, QuotaJob) };
    inline QuotaJob getDLC() { DARABONBA_PTR_GET(DLC_, QuotaJob) };
    inline WorkloadDetails& setDLC(const QuotaJob & DLC) { DARABONBA_PTR_SET_VALUE(DLC_, DLC) };
    inline WorkloadDetails& setDLC(QuotaJob && DLC) { DARABONBA_PTR_SET_RVALUE(DLC_, DLC) };


    // DSW Field Functions 
    bool hasDSW() const { return this->DSW_ != nullptr;};
    void deleteDSW() { this->DSW_ = nullptr;};
    inline const QuotaJob & getDSW() const { DARABONBA_PTR_GET_CONST(DSW_, QuotaJob) };
    inline QuotaJob getDSW() { DARABONBA_PTR_GET(DSW_, QuotaJob) };
    inline WorkloadDetails& setDSW(const QuotaJob & DSW) { DARABONBA_PTR_SET_VALUE(DSW_, DSW) };
    inline WorkloadDetails& setDSW(QuotaJob && DSW) { DARABONBA_PTR_SET_RVALUE(DSW_, DSW) };


    // EAS Field Functions 
    bool hasEAS() const { return this->EAS_ != nullptr;};
    void deleteEAS() { this->EAS_ = nullptr;};
    inline const QuotaJob & getEAS() const { DARABONBA_PTR_GET_CONST(EAS_, QuotaJob) };
    inline QuotaJob getEAS() { DARABONBA_PTR_GET(EAS_, QuotaJob) };
    inline WorkloadDetails& setEAS(const QuotaJob & EAS) { DARABONBA_PTR_SET_VALUE(EAS_, EAS) };
    inline WorkloadDetails& setEAS(QuotaJob && EAS) { DARABONBA_PTR_SET_RVALUE(EAS_, EAS) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const QuotaJob & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, QuotaJob) };
    inline QuotaJob getSummary() { DARABONBA_PTR_GET(summary_, QuotaJob) };
    inline WorkloadDetails& setSummary(const QuotaJob & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline WorkloadDetails& setSummary(QuotaJob && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    shared_ptr<QuotaJob> DLC_ {};
    shared_ptr<QuotaJob> DSW_ {};
    shared_ptr<QuotaJob> EAS_ {};
    shared_ptr<QuotaJob> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
