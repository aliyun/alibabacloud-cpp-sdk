// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCreateWorkflowInstancesResultResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCreateWorkflowInstancesResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetCreateWorkflowInstancesResultResponseBody() = default ;
    GetCreateWorkflowInstancesResultResponseBody(const GetCreateWorkflowInstancesResultResponseBody &) = default ;
    GetCreateWorkflowInstancesResultResponseBody(GetCreateWorkflowInstancesResultResponseBody &&) = default ;
    GetCreateWorkflowInstancesResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateWorkflowInstancesResultResponseBody() = default ;
    GetCreateWorkflowInstancesResultResponseBody& operator=(const GetCreateWorkflowInstancesResultResponseBody &) = default ;
    GetCreateWorkflowInstancesResultResponseBody& operator=(GetCreateWorkflowInstancesResultResponseBody &&) = default ;
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
    inline GetCreateWorkflowInstancesResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetCreateWorkflowInstancesResultResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetCreateWorkflowInstancesResultResponseBodyResult) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetCreateWorkflowInstancesResultResponseBodyResult) };
    inline GetCreateWorkflowInstancesResultResponseBody& setResult(const GetCreateWorkflowInstancesResultResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetCreateWorkflowInstancesResultResponseBody& setResult(GetCreateWorkflowInstancesResultResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The creation result of the workflow instance.
    std::shared_ptr<GetCreateWorkflowInstancesResultResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
