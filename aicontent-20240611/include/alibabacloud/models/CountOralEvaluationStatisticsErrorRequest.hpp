// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTORALEVALUATIONSTATISTICSERRORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COUNTORALEVALUATIONSTATISTICSERRORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OralEvaluationStatisticsErrorCountRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CountOralEvaluationStatisticsErrorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountOralEvaluationStatisticsErrorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CountOralEvaluationStatisticsErrorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CountOralEvaluationStatisticsErrorRequest() = default ;
    CountOralEvaluationStatisticsErrorRequest(const CountOralEvaluationStatisticsErrorRequest &) = default ;
    CountOralEvaluationStatisticsErrorRequest(CountOralEvaluationStatisticsErrorRequest &&) = default ;
    CountOralEvaluationStatisticsErrorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountOralEvaluationStatisticsErrorRequest() = default ;
    CountOralEvaluationStatisticsErrorRequest& operator=(const CountOralEvaluationStatisticsErrorRequest &) = default ;
    CountOralEvaluationStatisticsErrorRequest& operator=(CountOralEvaluationStatisticsErrorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OralEvaluationStatisticsErrorCountRequest & getBody() const { DARABONBA_PTR_GET_CONST(body_, OralEvaluationStatisticsErrorCountRequest) };
    inline OralEvaluationStatisticsErrorCountRequest getBody() { DARABONBA_PTR_GET(body_, OralEvaluationStatisticsErrorCountRequest) };
    inline CountOralEvaluationStatisticsErrorRequest& setBody(const OralEvaluationStatisticsErrorCountRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CountOralEvaluationStatisticsErrorRequest& setBody(OralEvaluationStatisticsErrorCountRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<OralEvaluationStatisticsErrorCountRequest> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
