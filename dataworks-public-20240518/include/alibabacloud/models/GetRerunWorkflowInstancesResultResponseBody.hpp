// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRerunWorkflowInstancesResultResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRerunWorkflowInstancesResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRerunWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetRerunWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetRerunWorkflowInstancesResultResponseBody() = default ;
    GetRerunWorkflowInstancesResultResponseBody(const GetRerunWorkflowInstancesResultResponseBody &) = default ;
    GetRerunWorkflowInstancesResultResponseBody(GetRerunWorkflowInstancesResultResponseBody &&) = default ;
    GetRerunWorkflowInstancesResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRerunWorkflowInstancesResultResponseBody() = default ;
    GetRerunWorkflowInstancesResultResponseBody& operator=(const GetRerunWorkflowInstancesResultResponseBody &) = default ;
    GetRerunWorkflowInstancesResultResponseBody& operator=(GetRerunWorkflowInstancesResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRerunWorkflowInstancesResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetRerunWorkflowInstancesResultResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetRerunWorkflowInstancesResultResponseBodyResult) };
    inline GetRerunWorkflowInstancesResultResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetRerunWorkflowInstancesResultResponseBodyResult) };
    inline GetRerunWorkflowInstancesResultResponseBody& setResult(const GetRerunWorkflowInstancesResultResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetRerunWorkflowInstancesResultResponseBody& setResult(GetRerunWorkflowInstancesResultResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID, used for log tracing and troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the workflow instance rerun.
    std::shared_ptr<GetRerunWorkflowInstancesResultResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
