// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMFYWORKFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMFYWORKFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeComfyWorkflowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComfyWorkflowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Workflows, workflows_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComfyWorkflowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Workflows, workflows_);
    };
    DescribeComfyWorkflowsResponseBody() = default ;
    DescribeComfyWorkflowsResponseBody(const DescribeComfyWorkflowsResponseBody &) = default ;
    DescribeComfyWorkflowsResponseBody(DescribeComfyWorkflowsResponseBody &&) = default ;
    DescribeComfyWorkflowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComfyWorkflowsResponseBody() = default ;
    DescribeComfyWorkflowsResponseBody& operator=(const DescribeComfyWorkflowsResponseBody &) = default ;
    DescribeComfyWorkflowsResponseBody& operator=(DescribeComfyWorkflowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workflows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workflows& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      };
      friend void from_json(const Darabonba::Json& j, Workflows& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      };
      Workflows() = default ;
      Workflows(const Workflows &) = default ;
      Workflows(Workflows &&) = default ;
      Workflows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workflows() = default ;
      Workflows& operator=(const Workflows &) = default ;
      Workflows& operator=(Workflows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->updatedTime_ == nullptr && this->workflowId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Workflows& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Workflows& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Workflows& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline Workflows& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
      inline Workflows& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    protected:
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> updatedTime_ {};
      shared_ptr<string> workflowId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr
        && this->workflows_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeComfyWorkflowsResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeComfyWorkflowsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeComfyWorkflowsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeComfyWorkflowsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComfyWorkflowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeComfyWorkflowsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workflows Field Functions 
    bool hasWorkflows() const { return this->workflows_ != nullptr;};
    void deleteWorkflows() { this->workflows_ = nullptr;};
    inline const vector<DescribeComfyWorkflowsResponseBody::Workflows> & getWorkflows() const { DARABONBA_PTR_GET_CONST(workflows_, vector<DescribeComfyWorkflowsResponseBody::Workflows>) };
    inline vector<DescribeComfyWorkflowsResponseBody::Workflows> getWorkflows() { DARABONBA_PTR_GET(workflows_, vector<DescribeComfyWorkflowsResponseBody::Workflows>) };
    inline DescribeComfyWorkflowsResponseBody& setWorkflows(const vector<DescribeComfyWorkflowsResponseBody::Workflows> & workflows) { DARABONBA_PTR_SET_VALUE(workflows_, workflows) };
    inline DescribeComfyWorkflowsResponseBody& setWorkflows(vector<DescribeComfyWorkflowsResponseBody::Workflows> && workflows) { DARABONBA_PTR_SET_RVALUE(workflows_, workflows) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeComfyWorkflowsResponseBody::Workflows>> workflows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
