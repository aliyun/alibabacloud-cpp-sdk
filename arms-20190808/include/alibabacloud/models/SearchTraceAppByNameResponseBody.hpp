// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTraceAppByNameResponseBodyTraceApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTraceAppByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceApps, traceApps_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceApps, traceApps_);
    };
    SearchTraceAppByNameResponseBody() = default ;
    SearchTraceAppByNameResponseBody(const SearchTraceAppByNameResponseBody &) = default ;
    SearchTraceAppByNameResponseBody(SearchTraceAppByNameResponseBody &&) = default ;
    SearchTraceAppByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByNameResponseBody() = default ;
    SearchTraceAppByNameResponseBody& operator=(const SearchTraceAppByNameResponseBody &) = default ;
    SearchTraceAppByNameResponseBody& operator=(SearchTraceAppByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->traceApps_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTraceAppByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceApps Field Functions 
    bool hasTraceApps() const { return this->traceApps_ != nullptr;};
    void deleteTraceApps() { this->traceApps_ = nullptr;};
    inline const vector<SearchTraceAppByNameResponseBodyTraceApps> & traceApps() const { DARABONBA_PTR_GET_CONST(traceApps_, vector<SearchTraceAppByNameResponseBodyTraceApps>) };
    inline vector<SearchTraceAppByNameResponseBodyTraceApps> traceApps() { DARABONBA_PTR_GET(traceApps_, vector<SearchTraceAppByNameResponseBodyTraceApps>) };
    inline SearchTraceAppByNameResponseBody& setTraceApps(const vector<SearchTraceAppByNameResponseBodyTraceApps> & traceApps) { DARABONBA_PTR_SET_VALUE(traceApps_, traceApps) };
    inline SearchTraceAppByNameResponseBody& setTraceApps(vector<SearchTraceAppByNameResponseBodyTraceApps> && traceApps) { DARABONBA_PTR_SET_RVALUE(traceApps_, traceApps) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the monitoring task.
    std::shared_ptr<vector<SearchTraceAppByNameResponseBodyTraceApps>> traceApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
