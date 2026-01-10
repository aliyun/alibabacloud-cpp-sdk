// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddTaskFlowEdgesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTaskFlowEdgesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeIds, edgeIds_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddTaskFlowEdgesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeIds, edgeIds_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddTaskFlowEdgesResponseBody() = default ;
    AddTaskFlowEdgesResponseBody(const AddTaskFlowEdgesResponseBody &) = default ;
    AddTaskFlowEdgesResponseBody(AddTaskFlowEdgesResponseBody &&) = default ;
    AddTaskFlowEdgesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTaskFlowEdgesResponseBody() = default ;
    AddTaskFlowEdgesResponseBody& operator=(const AddTaskFlowEdgesResponseBody &) = default ;
    AddTaskFlowEdgesResponseBody& operator=(AddTaskFlowEdgesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EdgeIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EdgeIds& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeId, edgeId_);
      };
      friend void from_json(const Darabonba::Json& j, EdgeIds& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeId, edgeId_);
      };
      EdgeIds() = default ;
      EdgeIds(const EdgeIds &) = default ;
      EdgeIds(EdgeIds &&) = default ;
      EdgeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EdgeIds() = default ;
      EdgeIds& operator=(const EdgeIds &) = default ;
      EdgeIds& operator=(EdgeIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->edgeId_ == nullptr; };
      // edgeId Field Functions 
      bool hasEdgeId() const { return this->edgeId_ != nullptr;};
      void deleteEdgeId() { this->edgeId_ = nullptr;};
      inline const vector<int64_t> & getEdgeId() const { DARABONBA_PTR_GET_CONST(edgeId_, vector<int64_t>) };
      inline vector<int64_t> getEdgeId() { DARABONBA_PTR_GET(edgeId_, vector<int64_t>) };
      inline EdgeIds& setEdgeId(const vector<int64_t> & edgeId) { DARABONBA_PTR_SET_VALUE(edgeId_, edgeId) };
      inline EdgeIds& setEdgeId(vector<int64_t> && edgeId) { DARABONBA_PTR_SET_RVALUE(edgeId_, edgeId) };


    protected:
      shared_ptr<vector<int64_t>> edgeId_ {};
    };

    virtual bool empty() const override { return this->edgeIds_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // edgeIds Field Functions 
    bool hasEdgeIds() const { return this->edgeIds_ != nullptr;};
    void deleteEdgeIds() { this->edgeIds_ = nullptr;};
    inline const AddTaskFlowEdgesResponseBody::EdgeIds & getEdgeIds() const { DARABONBA_PTR_GET_CONST(edgeIds_, AddTaskFlowEdgesResponseBody::EdgeIds) };
    inline AddTaskFlowEdgesResponseBody::EdgeIds getEdgeIds() { DARABONBA_PTR_GET(edgeIds_, AddTaskFlowEdgesResponseBody::EdgeIds) };
    inline AddTaskFlowEdgesResponseBody& setEdgeIds(const AddTaskFlowEdgesResponseBody::EdgeIds & edgeIds) { DARABONBA_PTR_SET_VALUE(edgeIds_, edgeIds) };
    inline AddTaskFlowEdgesResponseBody& setEdgeIds(AddTaskFlowEdgesResponseBody::EdgeIds && edgeIds) { DARABONBA_PTR_SET_RVALUE(edgeIds_, edgeIds) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AddTaskFlowEdgesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AddTaskFlowEdgesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddTaskFlowEdgesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddTaskFlowEdgesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of task flow edge IDs.
    shared_ptr<AddTaskFlowEdgesResponseBody::EdgeIds> edgeIds_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
