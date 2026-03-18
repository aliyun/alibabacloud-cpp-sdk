// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTORALEVALUATIONSTATISTICSCONCURRENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COUNTORALEVALUATIONSTATISTICSCONCURRENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OralEvaluationStatisticsConcurrentCountRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CountOralEvaluationStatisticsConcurrentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountOralEvaluationStatisticsConcurrentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CountOralEvaluationStatisticsConcurrentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CountOralEvaluationStatisticsConcurrentRequest() = default ;
    CountOralEvaluationStatisticsConcurrentRequest(const CountOralEvaluationStatisticsConcurrentRequest &) = default ;
    CountOralEvaluationStatisticsConcurrentRequest(CountOralEvaluationStatisticsConcurrentRequest &&) = default ;
    CountOralEvaluationStatisticsConcurrentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountOralEvaluationStatisticsConcurrentRequest() = default ;
    CountOralEvaluationStatisticsConcurrentRequest& operator=(const CountOralEvaluationStatisticsConcurrentRequest &) = default ;
    CountOralEvaluationStatisticsConcurrentRequest& operator=(CountOralEvaluationStatisticsConcurrentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OralEvaluationStatisticsConcurrentCountRequest & getBody() const { DARABONBA_PTR_GET_CONST(body_, OralEvaluationStatisticsConcurrentCountRequest) };
    inline OralEvaluationStatisticsConcurrentCountRequest getBody() { DARABONBA_PTR_GET(body_, OralEvaluationStatisticsConcurrentCountRequest) };
    inline CountOralEvaluationStatisticsConcurrentRequest& setBody(const OralEvaluationStatisticsConcurrentCountRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CountOralEvaluationStatisticsConcurrentRequest& setBody(OralEvaluationStatisticsConcurrentCountRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<OralEvaluationStatisticsConcurrentCountRequest> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
