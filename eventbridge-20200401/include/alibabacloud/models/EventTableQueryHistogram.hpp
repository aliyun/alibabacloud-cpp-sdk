// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTTABLEQUERYHISTOGRAM_HPP_
#define ALIBABACLOUD_MODELS_EVENTTABLEQUERYHISTOGRAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventTableQueryHistogram : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventTableQueryHistogram& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, EventTableQueryHistogram& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    EventTableQueryHistogram() = default ;
    EventTableQueryHistogram(const EventTableQueryHistogram &) = default ;
    EventTableQueryHistogram(EventTableQueryHistogram &&) = default ;
    EventTableQueryHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventTableQueryHistogram() = default ;
    EventTableQueryHistogram& operator=(const EventTableQueryHistogram &) = default ;
    EventTableQueryHistogram& operator=(EventTableQueryHistogram &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline EventTableQueryHistogram& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline EventTableQueryHistogram& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline EventTableQueryHistogram& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<int64_t> from_ {};
    shared_ptr<int64_t> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
