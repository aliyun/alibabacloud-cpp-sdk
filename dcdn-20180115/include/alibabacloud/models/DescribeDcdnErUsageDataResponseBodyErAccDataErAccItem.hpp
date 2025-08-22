// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODYERACCDATAERACCITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODYERACCDATAERACCITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& obj) { 
      DARABONBA_PTR_TO_JSON(ErAcc, erAcc_);
      DARABONBA_PTR_TO_JSON(Routine, routine_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ErAcc, erAcc_);
      DARABONBA_PTR_FROM_JSON(Routine, routine_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem() = default ;
    DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem(const DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem &) = default ;
    DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem(DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem &&) = default ;
    DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem() = default ;
    DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& operator=(const DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem &) = default ;
    DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& operator=(DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->erAcc_ != nullptr
        && this->routine_ != nullptr && this->spec_ != nullptr && this->timeStamp_ != nullptr; };
    // erAcc Field Functions 
    bool hasErAcc() const { return this->erAcc_ != nullptr;};
    void deleteErAcc() { this->erAcc_ = nullptr;};
    inline int64_t erAcc() const { DARABONBA_PTR_GET_DEFAULT(erAcc_, 0L) };
    inline DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& setErAcc(int64_t erAcc) { DARABONBA_PTR_SET_VALUE(erAcc_, erAcc) };


    // routine Field Functions 
    bool hasRoutine() const { return this->routine_ != nullptr;};
    void deleteRoutine() { this->routine_ = nullptr;};
    inline string routine() const { DARABONBA_PTR_GET_DEFAULT(routine_, "") };
    inline DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& setRoutine(string routine) { DARABONBA_PTR_SET_VALUE(routine_, routine) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnErUsageDataResponseBodyErAccDataErAccItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of requests.
    std::shared_ptr<int64_t> erAcc_ = nullptr;
    // The ID of the routine. This parameter is returned only when SplitBy is set to routine.
    std::shared_ptr<string> routine_ = nullptr;
    // The specification of the routine. This parameter is returned only when SplitBy is set to spec.
    std::shared_ptr<string> spec_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
