// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowInfo, workflowInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInfo, workflowInfo_);
    };
    GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody(GetWorkflowResponseBody &&) = default ;
    GetWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody& operator=(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody& operator=(GetWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workflowInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowInfo Field Functions 
    bool hasWorkflowInfo() const { return this->workflowInfo_ != nullptr;};
    void deleteWorkflowInfo() { this->workflowInfo_ = nullptr;};
    inline const GetWorkflowResponseBodyWorkflowInfo & workflowInfo() const { DARABONBA_PTR_GET_CONST(workflowInfo_, GetWorkflowResponseBodyWorkflowInfo) };
    inline GetWorkflowResponseBodyWorkflowInfo workflowInfo() { DARABONBA_PTR_GET(workflowInfo_, GetWorkflowResponseBodyWorkflowInfo) };
    inline GetWorkflowResponseBody& setWorkflowInfo(const GetWorkflowResponseBodyWorkflowInfo & workflowInfo) { DARABONBA_PTR_SET_VALUE(workflowInfo_, workflowInfo) };
    inline GetWorkflowResponseBody& setWorkflowInfo(GetWorkflowResponseBodyWorkflowInfo && workflowInfo) { DARABONBA_PTR_SET_RVALUE(workflowInfo_, workflowInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetWorkflowResponseBodyWorkflowInfo> workflowInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
