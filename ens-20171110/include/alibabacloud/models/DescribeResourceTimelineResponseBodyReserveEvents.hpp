// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODYRESERVEEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODYRESERVEEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeResourceTimelineResponseBodyReserveEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceTimelineResponseBodyReserveEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceTimelineResponseBodyReserveEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeResourceTimelineResponseBodyReserveEvents() = default ;
    DescribeResourceTimelineResponseBodyReserveEvents(const DescribeResourceTimelineResponseBodyReserveEvents &) = default ;
    DescribeResourceTimelineResponseBodyReserveEvents(DescribeResourceTimelineResponseBodyReserveEvents &&) = default ;
    DescribeResourceTimelineResponseBodyReserveEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceTimelineResponseBodyReserveEvents() = default ;
    DescribeResourceTimelineResponseBodyReserveEvents& operator=(const DescribeResourceTimelineResponseBodyReserveEvents &) = default ;
    DescribeResourceTimelineResponseBodyReserveEvents& operator=(DescribeResourceTimelineResponseBodyReserveEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->occurrenceTime_ == nullptr && return this->reason_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourceTimelineResponseBodyReserveEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline string occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
    inline DescribeResourceTimelineResponseBodyReserveEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeResourceTimelineResponseBodyReserveEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeResourceTimelineResponseBodyReserveEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> occurrenceTime_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
