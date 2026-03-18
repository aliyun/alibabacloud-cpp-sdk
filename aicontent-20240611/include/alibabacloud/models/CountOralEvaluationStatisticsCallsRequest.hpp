// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTORALEVALUATIONSTATISTICSCALLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COUNTORALEVALUATIONSTATISTICSCALLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OralEvaluationStatisticsCallsCountRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CountOralEvaluationStatisticsCallsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountOralEvaluationStatisticsCallsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CountOralEvaluationStatisticsCallsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CountOralEvaluationStatisticsCallsRequest() = default ;
    CountOralEvaluationStatisticsCallsRequest(const CountOralEvaluationStatisticsCallsRequest &) = default ;
    CountOralEvaluationStatisticsCallsRequest(CountOralEvaluationStatisticsCallsRequest &&) = default ;
    CountOralEvaluationStatisticsCallsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountOralEvaluationStatisticsCallsRequest() = default ;
    CountOralEvaluationStatisticsCallsRequest& operator=(const CountOralEvaluationStatisticsCallsRequest &) = default ;
    CountOralEvaluationStatisticsCallsRequest& operator=(CountOralEvaluationStatisticsCallsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OralEvaluationStatisticsCallsCountRequest & getBody() const { DARABONBA_PTR_GET_CONST(body_, OralEvaluationStatisticsCallsCountRequest) };
    inline OralEvaluationStatisticsCallsCountRequest getBody() { DARABONBA_PTR_GET(body_, OralEvaluationStatisticsCallsCountRequest) };
    inline CountOralEvaluationStatisticsCallsRequest& setBody(const OralEvaluationStatisticsCallsCountRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CountOralEvaluationStatisticsCallsRequest& setBody(OralEvaluationStatisticsCallsCountRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<OralEvaluationStatisticsCallsCountRequest> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
