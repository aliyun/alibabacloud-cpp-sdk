// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEMEMORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEMEMORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RetrieveMemoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveMemoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(memories, memories_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveMemoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(memories, memories_);
    };
    RetrieveMemoryResponseBodyData() = default ;
    RetrieveMemoryResponseBodyData(const RetrieveMemoryResponseBodyData &) = default ;
    RetrieveMemoryResponseBodyData(RetrieveMemoryResponseBodyData &&) = default ;
    RetrieveMemoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveMemoryResponseBodyData() = default ;
    RetrieveMemoryResponseBodyData& operator=(const RetrieveMemoryResponseBodyData &) = default ;
    RetrieveMemoryResponseBodyData& operator=(RetrieveMemoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->memories_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<map<string, string>> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<map<string, string>>) };
    inline vector<map<string, string>> events() { DARABONBA_PTR_GET(events_, vector<map<string, string>>) };
    inline RetrieveMemoryResponseBodyData& setEvents(const vector<map<string, string>> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline RetrieveMemoryResponseBodyData& setEvents(vector<map<string, string>> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // memories Field Functions 
    bool hasMemories() const { return this->memories_ != nullptr;};
    void deleteMemories() { this->memories_ = nullptr;};
    inline const vector<map<string, string>> & memories() const { DARABONBA_PTR_GET_CONST(memories_, vector<map<string, string>>) };
    inline vector<map<string, string>> memories() { DARABONBA_PTR_GET(memories_, vector<map<string, string>>) };
    inline RetrieveMemoryResponseBodyData& setMemories(const vector<map<string, string>> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
    inline RetrieveMemoryResponseBodyData& setMemories(vector<map<string, string>> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


  protected:
    std::shared_ptr<vector<map<string, string>>> events_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> memories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
