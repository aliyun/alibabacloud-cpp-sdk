// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowResponseBodyWorkflowInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowInfoList, workflowInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInfoList, workflowInfoList_);
    };
    ListWorkflowResponseBody() = default ;
    ListWorkflowResponseBody(const ListWorkflowResponseBody &) = default ;
    ListWorkflowResponseBody(ListWorkflowResponseBody &&) = default ;
    ListWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowResponseBody() = default ;
    ListWorkflowResponseBody& operator=(const ListWorkflowResponseBody &) = default ;
    ListWorkflowResponseBody& operator=(ListWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workflowInfoList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowInfoList Field Functions 
    bool hasWorkflowInfoList() const { return this->workflowInfoList_ != nullptr;};
    void deleteWorkflowInfoList() { this->workflowInfoList_ = nullptr;};
    inline const vector<ListWorkflowResponseBodyWorkflowInfoList> & workflowInfoList() const { DARABONBA_PTR_GET_CONST(workflowInfoList_, vector<ListWorkflowResponseBodyWorkflowInfoList>) };
    inline vector<ListWorkflowResponseBodyWorkflowInfoList> workflowInfoList() { DARABONBA_PTR_GET(workflowInfoList_, vector<ListWorkflowResponseBodyWorkflowInfoList>) };
    inline ListWorkflowResponseBody& setWorkflowInfoList(const vector<ListWorkflowResponseBodyWorkflowInfoList> & workflowInfoList) { DARABONBA_PTR_SET_VALUE(workflowInfoList_, workflowInfoList) };
    inline ListWorkflowResponseBody& setWorkflowInfoList(vector<ListWorkflowResponseBodyWorkflowInfoList> && workflowInfoList) { DARABONBA_PTR_SET_RVALUE(workflowInfoList_, workflowInfoList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListWorkflowResponseBodyWorkflowInfoList>> workflowInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
