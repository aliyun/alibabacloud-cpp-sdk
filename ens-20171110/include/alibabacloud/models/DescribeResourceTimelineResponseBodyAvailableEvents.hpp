// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODYAVAILABLEEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODYAVAILABLEEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeResourceTimelineResponseBodyAvailableEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceTimelineResponseBodyAvailableEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceTimelineResponseBodyAvailableEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeResourceTimelineResponseBodyAvailableEvents() = default ;
    DescribeResourceTimelineResponseBodyAvailableEvents(const DescribeResourceTimelineResponseBodyAvailableEvents &) = default ;
    DescribeResourceTimelineResponseBodyAvailableEvents(DescribeResourceTimelineResponseBodyAvailableEvents &&) = default ;
    DescribeResourceTimelineResponseBodyAvailableEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceTimelineResponseBodyAvailableEvents() = default ;
    DescribeResourceTimelineResponseBodyAvailableEvents& operator=(const DescribeResourceTimelineResponseBodyAvailableEvents &) = default ;
    DescribeResourceTimelineResponseBodyAvailableEvents& operator=(DescribeResourceTimelineResponseBodyAvailableEvents &&) = default ;
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
    inline DescribeResourceTimelineResponseBodyAvailableEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline string occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
    inline DescribeResourceTimelineResponseBodyAvailableEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeResourceTimelineResponseBodyAvailableEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeResourceTimelineResponseBodyAvailableEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
