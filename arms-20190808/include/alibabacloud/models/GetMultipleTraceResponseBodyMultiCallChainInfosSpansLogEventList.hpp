// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODYMULTICALLCHAININFOSSPANSLOGEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODYMULTICALLCHAININFOSSPANSLOGEVENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& obj) { 
      DARABONBA_PTR_TO_JSON(TagEntryList, tagEntryList_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(TagEntryList, tagEntryList_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList() = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList(const GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList &) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList(GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList &&) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList() = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& operator=(const GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList &) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& operator=(GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagEntryList_ != nullptr
        && this->timestamp_ != nullptr; };
    // tagEntryList Field Functions 
    bool hasTagEntryList() const { return this->tagEntryList_ != nullptr;};
    void deleteTagEntryList() { this->tagEntryList_ = nullptr;};
    inline const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList> & tagEntryList() const { DARABONBA_PTR_GET_CONST(tagEntryList_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList>) };
    inline vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList> tagEntryList() { DARABONBA_PTR_GET(tagEntryList_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList>) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& setTagEntryList(const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList> & tagEntryList) { DARABONBA_PTR_SET_VALUE(tagEntryList_, tagEntryList) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& setTagEntryList(vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList> && tagEntryList) { DARABONBA_PTR_SET_RVALUE(tagEntryList_, tagEntryList) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The tags of the trace.
    std::shared_ptr<vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList>> tagEntryList_ = nullptr;
    // The time when the log was generated. The value is a timestamp.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
