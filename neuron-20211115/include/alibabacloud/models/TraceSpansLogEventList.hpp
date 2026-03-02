// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACESPANSLOGEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_TRACESPANSLOGEVENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class TraceSpansLogEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TraceSpansLogEventList& obj) { 
      DARABONBA_PTR_TO_JSON(logEventTagEntryList, logEventTagEntryList_);
    };
    friend void from_json(const Darabonba::Json& j, TraceSpansLogEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(logEventTagEntryList, logEventTagEntryList_);
    };
    TraceSpansLogEventList() = default ;
    TraceSpansLogEventList(const TraceSpansLogEventList &) = default ;
    TraceSpansLogEventList(TraceSpansLogEventList &&) = default ;
    TraceSpansLogEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TraceSpansLogEventList() = default ;
    TraceSpansLogEventList& operator=(const TraceSpansLogEventList &) = default ;
    TraceSpansLogEventList& operator=(TraceSpansLogEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logEventTagEntryList_ == nullptr; };
    // logEventTagEntryList Field Functions 
    bool hasLogEventTagEntryList() const { return this->logEventTagEntryList_ != nullptr;};
    void deleteLogEventTagEntryList() { this->logEventTagEntryList_ = nullptr;};
    inline const vector<TagEntry> & getLogEventTagEntryList() const { DARABONBA_PTR_GET_CONST(logEventTagEntryList_, vector<TagEntry>) };
    inline vector<TagEntry> getLogEventTagEntryList() { DARABONBA_PTR_GET(logEventTagEntryList_, vector<TagEntry>) };
    inline TraceSpansLogEventList& setLogEventTagEntryList(const vector<TagEntry> & logEventTagEntryList) { DARABONBA_PTR_SET_VALUE(logEventTagEntryList_, logEventTagEntryList) };
    inline TraceSpansLogEventList& setLogEventTagEntryList(vector<TagEntry> && logEventTagEntryList) { DARABONBA_PTR_SET_RVALUE(logEventTagEntryList_, logEventTagEntryList) };


  protected:
    shared_ptr<vector<TagEntry>> logEventTagEntryList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
