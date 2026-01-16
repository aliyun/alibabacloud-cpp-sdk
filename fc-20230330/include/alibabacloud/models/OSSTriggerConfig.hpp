// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_OSSTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Filter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class OSSTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OSSTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
    };
    friend void from_json(const Darabonba::Json& j, OSSTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
    };
    OSSTriggerConfig() = default ;
    OSSTriggerConfig(const OSSTriggerConfig &) = default ;
    OSSTriggerConfig(OSSTriggerConfig &&) = default ;
    OSSTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OSSTriggerConfig() = default ;
    OSSTriggerConfig& operator=(const OSSTriggerConfig &) = default ;
    OSSTriggerConfig& operator=(OSSTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && this->filter_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> getEvents() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline OSSTriggerConfig& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline OSSTriggerConfig& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, Filter) };
    inline Filter getFilter() { DARABONBA_PTR_GET(filter_, Filter) };
    inline OSSTriggerConfig& setFilter(const Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline OSSTriggerConfig& setFilter(Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


  protected:
    shared_ptr<vector<string>> events_ {};
    shared_ptr<Filter> filter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
