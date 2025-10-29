// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTask, dataQualityEvaluationTask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTask, dataQualityEvaluationTask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityEvaluationTaskResponseBody() = default ;
    GetDataQualityEvaluationTaskResponseBody(const GetDataQualityEvaluationTaskResponseBody &) = default ;
    GetDataQualityEvaluationTaskResponseBody(GetDataQualityEvaluationTaskResponseBody &&) = default ;
    GetDataQualityEvaluationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskResponseBody() = default ;
    GetDataQualityEvaluationTaskResponseBody& operator=(const GetDataQualityEvaluationTaskResponseBody &) = default ;
    GetDataQualityEvaluationTaskResponseBody& operator=(GetDataQualityEvaluationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityEvaluationTask_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataQualityEvaluationTask Field Functions 
    bool hasDataQualityEvaluationTask() const { return this->dataQualityEvaluationTask_ != nullptr;};
    void deleteDataQualityEvaluationTask() { this->dataQualityEvaluationTask_ = nullptr;};
    inline const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask & dataQualityEvaluationTask() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTask_, GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask dataQualityEvaluationTask() { DARABONBA_PTR_GET(dataQualityEvaluationTask_, GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask) };
    inline GetDataQualityEvaluationTaskResponseBody& setDataQualityEvaluationTask(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask & dataQualityEvaluationTask) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTask_, dataQualityEvaluationTask) };
    inline GetDataQualityEvaluationTaskResponseBody& setDataQualityEvaluationTask(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask && dataQualityEvaluationTask) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTask_, dataQualityEvaluationTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityEvaluationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the monitor.
    std::shared_ptr<GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask> dataQualityEvaluationTask_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
