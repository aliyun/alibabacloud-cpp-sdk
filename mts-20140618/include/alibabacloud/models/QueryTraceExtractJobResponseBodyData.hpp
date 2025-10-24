// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEEXTRACTJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEEXTRACTJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTraceExtractJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceExtractJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Trace, trace_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceExtractJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
    };
    QueryTraceExtractJobResponseBodyData() = default ;
    QueryTraceExtractJobResponseBodyData(const QueryTraceExtractJobResponseBodyData &) = default ;
    QueryTraceExtractJobResponseBodyData(QueryTraceExtractJobResponseBodyData &&) = default ;
    QueryTraceExtractJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceExtractJobResponseBodyData() = default ;
    QueryTraceExtractJobResponseBodyData& operator=(const QueryTraceExtractJobResponseBodyData &) = default ;
    QueryTraceExtractJobResponseBodyData& operator=(QueryTraceExtractJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trace_ == nullptr; };
    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string trace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline QueryTraceExtractJobResponseBodyData& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


  protected:
    std::shared_ptr<string> trace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
