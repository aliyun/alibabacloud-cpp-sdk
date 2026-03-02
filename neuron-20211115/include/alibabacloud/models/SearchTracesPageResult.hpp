// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TraceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SearchTracesPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(traceInfos, traceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(traceInfos, traceInfos_);
    };
    SearchTracesPageResult() = default ;
    SearchTracesPageResult(const SearchTracesPageResult &) = default ;
    SearchTracesPageResult(SearchTracesPageResult &&) = default ;
    SearchTracesPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesPageResult() = default ;
    SearchTracesPageResult& operator=(const SearchTracesPageResult &) = default ;
    SearchTracesPageResult& operator=(SearchTracesPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->traceInfos_ == nullptr; };
    // traceInfos Field Functions 
    bool hasTraceInfos() const { return this->traceInfos_ != nullptr;};
    void deleteTraceInfos() { this->traceInfos_ = nullptr;};
    inline const vector<TraceInfo> & getTraceInfos() const { DARABONBA_PTR_GET_CONST(traceInfos_, vector<TraceInfo>) };
    inline vector<TraceInfo> getTraceInfos() { DARABONBA_PTR_GET(traceInfos_, vector<TraceInfo>) };
    inline SearchTracesPageResult& setTraceInfos(const vector<TraceInfo> & traceInfos) { DARABONBA_PTR_SET_VALUE(traceInfos_, traceInfos) };
    inline SearchTracesPageResult& setTraceInfos(vector<TraceInfo> && traceInfos) { DARABONBA_PTR_SET_RVALUE(traceInfos_, traceInfos) };


  protected:
    shared_ptr<vector<TraceInfo>> traceInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
