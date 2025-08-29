// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTargetItemReportDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTargetItemReportDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetItemReportDetail, trafficControlTargetItemReportDetail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTargetItemReportDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetItemReportDetail, trafficControlTargetItemReportDetail_);
    };
    QueryTrafficControlTargetItemReportDetailResponseBody() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody(const QueryTrafficControlTargetItemReportDetailResponseBody &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody(QueryTrafficControlTargetItemReportDetailResponseBody &&) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTargetItemReportDetailResponseBody() = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody& operator=(const QueryTrafficControlTargetItemReportDetailResponseBody &) = default ;
    QueryTrafficControlTargetItemReportDetailResponseBody& operator=(QueryTrafficControlTargetItemReportDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trafficControlTargetItemReportDetail_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTrafficControlTargetItemReportDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTargetItemReportDetail Field Functions 
    bool hasTrafficControlTargetItemReportDetail() const { return this->trafficControlTargetItemReportDetail_ != nullptr;};
    void deleteTrafficControlTargetItemReportDetail() { this->trafficControlTargetItemReportDetail_ = nullptr;};
    inline const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail & trafficControlTargetItemReportDetail() const { DARABONBA_PTR_GET_CONST(trafficControlTargetItemReportDetail_, QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail) };
    inline QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail trafficControlTargetItemReportDetail() { DARABONBA_PTR_GET(trafficControlTargetItemReportDetail_, QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail) };
    inline QueryTrafficControlTargetItemReportDetailResponseBody& setTrafficControlTargetItemReportDetail(const QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail & trafficControlTargetItemReportDetail) { DARABONBA_PTR_SET_VALUE(trafficControlTargetItemReportDetail_, trafficControlTargetItemReportDetail) };
    inline QueryTrafficControlTargetItemReportDetailResponseBody& setTrafficControlTargetItemReportDetail(QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail && trafficControlTargetItemReportDetail) { DARABONBA_PTR_SET_RVALUE(trafficControlTargetItemReportDetail_, trafficControlTargetItemReportDetail) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<QueryTrafficControlTargetItemReportDetailResponseBodyTrafficControlTargetItemReportDetail> trafficControlTargetItemReportDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
