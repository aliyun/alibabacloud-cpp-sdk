// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTFILTER_HPP_
#define ALIBABACLOUD_MODELS_EVENTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EventFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class EventFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(SubFilters, subFilters_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, EventFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(SubFilters, subFilters_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    EventFilter() = default ;
    EventFilter(const EventFilter &) = default ;
    EventFilter(EventFilter &&) = default ;
    EventFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventFilter() = default ;
    EventFilter& operator=(const EventFilter &) = default ;
    EventFilter& operator=(EventFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->op_ != nullptr && this->subFilters_ != nullptr && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline EventFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline EventFilter& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // subFilters Field Functions 
    bool hasSubFilters() const { return this->subFilters_ != nullptr;};
    void deleteSubFilters() { this->subFilters_ = nullptr;};
    inline const vector<EventFilter> & subFilters() const { DARABONBA_PTR_GET_CONST(subFilters_, vector<EventFilter>) };
    inline vector<EventFilter> subFilters() { DARABONBA_PTR_GET(subFilters_, vector<EventFilter>) };
    inline EventFilter& setSubFilters(const vector<EventFilter> & subFilters) { DARABONBA_PTR_SET_VALUE(subFilters_, subFilters) };
    inline EventFilter& setSubFilters(vector<EventFilter> && subFilters) { DARABONBA_PTR_SET_RVALUE(subFilters_, subFilters) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline EventFilter& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline EventFilter& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> op_ = nullptr;
    std::shared_ptr<vector<EventFilter>> subFilters_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
