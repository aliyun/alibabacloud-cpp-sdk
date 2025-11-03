// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAbnormalEventsCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbnormalEventsCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(eventList, eventList_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbnormalEventsCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(eventList, eventList_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetAbnormalEventsCountResponseBodyData() = default ;
    GetAbnormalEventsCountResponseBodyData(const GetAbnormalEventsCountResponseBodyData &) = default ;
    GetAbnormalEventsCountResponseBodyData(GetAbnormalEventsCountResponseBodyData &&) = default ;
    GetAbnormalEventsCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbnormalEventsCountResponseBodyData() = default ;
    GetAbnormalEventsCountResponseBodyData& operator=(const GetAbnormalEventsCountResponseBodyData &) = default ;
    GetAbnormalEventsCountResponseBodyData& operator=(GetAbnormalEventsCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventList_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<string> & eventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<string>) };
    inline vector<string> eventList() { DARABONBA_PTR_GET(eventList_, vector<string>) };
    inline GetAbnormalEventsCountResponseBodyData& setEventList(const vector<string> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline GetAbnormalEventsCountResponseBodyData& setEventList(vector<string> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAbnormalEventsCountResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline GetAbnormalEventsCountResponseBodyData& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<vector<string>> eventList_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
