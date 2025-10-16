// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetMemorySessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemorySessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemorySessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
    };
    GetMemorySessionResponseBodyData() = default ;
    GetMemorySessionResponseBodyData(const GetMemorySessionResponseBodyData &) = default ;
    GetMemorySessionResponseBodyData(GetMemorySessionResponseBodyData &&) = default ;
    GetMemorySessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemorySessionResponseBodyData() = default ;
    GetMemorySessionResponseBodyData& operator=(const GetMemorySessionResponseBodyData &) = default ;
    GetMemorySessionResponseBodyData& operator=(GetMemorySessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<Darabonba::Json> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> events() { DARABONBA_PTR_GET(events_, vector<Darabonba::Json>) };
    inline GetMemorySessionResponseBodyData& setEvents(const vector<Darabonba::Json> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetMemorySessionResponseBodyData& setEvents(vector<Darabonba::Json> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> events_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
