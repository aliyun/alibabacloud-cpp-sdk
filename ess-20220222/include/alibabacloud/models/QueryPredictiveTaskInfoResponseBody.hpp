// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPredictiveTaskInfoResponseBodyTaskInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfos, taskInfos_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfos, taskInfos_);
    };
    QueryPredictiveTaskInfoResponseBody() = default ;
    QueryPredictiveTaskInfoResponseBody(const QueryPredictiveTaskInfoResponseBody &) = default ;
    QueryPredictiveTaskInfoResponseBody(QueryPredictiveTaskInfoResponseBody &&) = default ;
    QueryPredictiveTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveTaskInfoResponseBody() = default ;
    QueryPredictiveTaskInfoResponseBody& operator=(const QueryPredictiveTaskInfoResponseBody &) = default ;
    QueryPredictiveTaskInfoResponseBody& operator=(QueryPredictiveTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPredictiveTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfos Field Functions 
    bool hasTaskInfos() const { return this->taskInfos_ != nullptr;};
    void deleteTaskInfos() { this->taskInfos_ = nullptr;};
    inline const QueryPredictiveTaskInfoResponseBodyTaskInfos & taskInfos() const { DARABONBA_PTR_GET_CONST(taskInfos_, QueryPredictiveTaskInfoResponseBodyTaskInfos) };
    inline QueryPredictiveTaskInfoResponseBodyTaskInfos taskInfos() { DARABONBA_PTR_GET(taskInfos_, QueryPredictiveTaskInfoResponseBodyTaskInfos) };
    inline QueryPredictiveTaskInfoResponseBody& setTaskInfos(const QueryPredictiveTaskInfoResponseBodyTaskInfos & taskInfos) { DARABONBA_PTR_SET_VALUE(taskInfos_, taskInfos) };
    inline QueryPredictiveTaskInfoResponseBody& setTaskInfos(QueryPredictiveTaskInfoResponseBodyTaskInfos && taskInfos) { DARABONBA_PTR_SET_RVALUE(taskInfos_, taskInfos) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<QueryPredictiveTaskInfoResponseBodyTaskInfos> taskInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
