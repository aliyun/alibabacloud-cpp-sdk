// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKINFORESPONSEBODYTASKINFOUPSTREAMLISTDEPENDPERIOD_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKINFORESPONSEBODYTASKINFOUPSTREAMLISTDEPENDPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodOffset, periodOffset_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodOffset, periodOffset_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
    };
    GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod() = default ;
    GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod(const GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod &) = default ;
    GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod(GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod &&) = default ;
    GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod() = default ;
    GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod& operator=(const GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod &) = default ;
    GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod& operator=(GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->periodOffset_ == nullptr
        && return this->periodType_ == nullptr; };
    // periodOffset Field Functions 
    bool hasPeriodOffset() const { return this->periodOffset_ != nullptr;};
    void deletePeriodOffset() { this->periodOffset_ = nullptr;};
    inline int32_t periodOffset() const { DARABONBA_PTR_GET_DEFAULT(periodOffset_, 0) };
    inline GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod& setPeriodOffset(int32_t periodOffset) { DARABONBA_PTR_SET_VALUE(periodOffset_, periodOffset) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline GetBatchTaskInfoResponseBodyTaskInfoUpStreamListDependPeriod& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


  protected:
    std::shared_ptr<int32_t> periodOffset_ = nullptr;
    std::shared_ptr<string> periodType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
