// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSSTEP_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSSTEP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressStep& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(EtaSec, etaSec_);
      DARABONBA_PTR_TO_JSON(PaceSec, paceSec_);
      DARABONBA_PTR_TO_JSON(Pct, pct_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressStep& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(EtaSec, etaSec_);
      DARABONBA_PTR_FROM_JSON(PaceSec, paceSec_);
      DARABONBA_PTR_FROM_JSON(Pct, pct_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RLProgressStep() = default ;
    RLProgressStep(const RLProgressStep &) = default ;
    RLProgressStep(RLProgressStep &&) = default ;
    RLProgressStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressStep() = default ;
    RLProgressStep& operator=(const RLProgressStep &) = default ;
    RLProgressStep& operator=(RLProgressStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->etaSec_ == nullptr && this->paceSec_ == nullptr && this->pct_ == nullptr && this->time_ == nullptr && this->total_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline RLProgressStep& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // etaSec Field Functions 
    bool hasEtaSec() const { return this->etaSec_ != nullptr;};
    void deleteEtaSec() { this->etaSec_ = nullptr;};
    inline int64_t getEtaSec() const { DARABONBA_PTR_GET_DEFAULT(etaSec_, 0L) };
    inline RLProgressStep& setEtaSec(int64_t etaSec) { DARABONBA_PTR_SET_VALUE(etaSec_, etaSec) };


    // paceSec Field Functions 
    bool hasPaceSec() const { return this->paceSec_ != nullptr;};
    void deletePaceSec() { this->paceSec_ = nullptr;};
    inline double getPaceSec() const { DARABONBA_PTR_GET_DEFAULT(paceSec_, 0.0) };
    inline RLProgressStep& setPaceSec(double paceSec) { DARABONBA_PTR_SET_VALUE(paceSec_, paceSec) };


    // pct Field Functions 
    bool hasPct() const { return this->pct_ != nullptr;};
    void deletePct() { this->pct_ = nullptr;};
    inline double getPct() const { DARABONBA_PTR_GET_DEFAULT(pct_, 0.0) };
    inline RLProgressStep& setPct(double pct) { DARABONBA_PTR_SET_VALUE(pct_, pct) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline RLProgressStep& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RLProgressStep& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The current step.
    shared_ptr<int32_t> current_ {};
    // The estimated remaining seconds, calculated as (Total - Current) × PaceSec.
    shared_ptr<int64_t> etaSec_ {};
    // The per-step duration, calculated as the differential between contiguous step marks, in seconds.
    shared_ptr<double> paceSec_ {};
    // The progress percentage, which is the ratio of Current to Total.
    shared_ptr<double> pct_ {};
    // The latest step mark time, in UNIX seconds.
    shared_ptr<int64_t> time_ {};
    // The total number of steps, obtained from the configuration dump.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
