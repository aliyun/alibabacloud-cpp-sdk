// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYSPANSLOGEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYSPANSLOGEVENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodySpansLogEventListTagEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTraceResponseBodySpansLogEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodySpansLogEventList& obj) { 
      DARABONBA_PTR_TO_JSON(TagEntryList, tagEntryList_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodySpansLogEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(TagEntryList, tagEntryList_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetTraceResponseBodySpansLogEventList() = default ;
    GetTraceResponseBodySpansLogEventList(const GetTraceResponseBodySpansLogEventList &) = default ;
    GetTraceResponseBodySpansLogEventList(GetTraceResponseBodySpansLogEventList &&) = default ;
    GetTraceResponseBodySpansLogEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodySpansLogEventList() = default ;
    GetTraceResponseBodySpansLogEventList& operator=(const GetTraceResponseBodySpansLogEventList &) = default ;
    GetTraceResponseBodySpansLogEventList& operator=(GetTraceResponseBodySpansLogEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagEntryList_ != nullptr
        && this->timestamp_ != nullptr; };
    // tagEntryList Field Functions 
    bool hasTagEntryList() const { return this->tagEntryList_ != nullptr;};
    void deleteTagEntryList() { this->tagEntryList_ = nullptr;};
    inline const vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList> & tagEntryList() const { DARABONBA_PTR_GET_CONST(tagEntryList_, vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList>) };
    inline vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList> tagEntryList() { DARABONBA_PTR_GET(tagEntryList_, vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList>) };
    inline GetTraceResponseBodySpansLogEventList& setTagEntryList(const vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList> & tagEntryList) { DARABONBA_PTR_SET_VALUE(tagEntryList_, tagEntryList) };
    inline GetTraceResponseBodySpansLogEventList& setTagEntryList(vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList> && tagEntryList) { DARABONBA_PTR_SET_RVALUE(tagEntryList_, tagEntryList) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetTraceResponseBodySpansLogEventList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The tags of the trace.
    std::shared_ptr<vector<Models::GetTraceResponseBodySpansLogEventListTagEntryList>> tagEntryList_ = nullptr;
    // The timestamp when the log event was generated.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
