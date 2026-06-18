// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class DeleteWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(failReasons, failReasons_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(failReasons, failReasons_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteWorkspaceResponseBody() = default ;
    DeleteWorkspaceResponseBody(const DeleteWorkspaceResponseBody &) = default ;
    DeleteWorkspaceResponseBody(DeleteWorkspaceResponseBody &&) = default ;
    DeleteWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceResponseBody() = default ;
    DeleteWorkspaceResponseBody& operator=(const DeleteWorkspaceResponseBody &) = default ;
    DeleteWorkspaceResponseBody& operator=(DeleteWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailReasons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailReasons& obj) { 
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, FailReasons& obj) { 
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      FailReasons() = default ;
      FailReasons(const FailReasons &) = default ;
      FailReasons(FailReasons &&) = default ;
      FailReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailReasons() = default ;
      FailReasons& operator=(const FailReasons &) = default ;
      FailReasons& operator=(FailReasons &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reason_ == nullptr
        && this->resourceType_ == nullptr; };
      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline FailReasons& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline FailReasons& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The specific reason.
      shared_ptr<string> reason_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->failReasons_ == nullptr && this->httpStatusCode_ == nullptr && this->isDeleted_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteWorkspaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failReasons Field Functions 
    bool hasFailReasons() const { return this->failReasons_ != nullptr;};
    void deleteFailReasons() { this->failReasons_ = nullptr;};
    inline const vector<DeleteWorkspaceResponseBody::FailReasons> & getFailReasons() const { DARABONBA_PTR_GET_CONST(failReasons_, vector<DeleteWorkspaceResponseBody::FailReasons>) };
    inline vector<DeleteWorkspaceResponseBody::FailReasons> getFailReasons() { DARABONBA_PTR_GET(failReasons_, vector<DeleteWorkspaceResponseBody::FailReasons>) };
    inline DeleteWorkspaceResponseBody& setFailReasons(const vector<DeleteWorkspaceResponseBody::FailReasons> & failReasons) { DARABONBA_PTR_SET_VALUE(failReasons_, failReasons) };
    inline DeleteWorkspaceResponseBody& setFailReasons(vector<DeleteWorkspaceResponseBody::FailReasons> && failReasons) { DARABONBA_PTR_SET_RVALUE(failReasons_, failReasons) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteWorkspaceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline DeleteWorkspaceResponseBody& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteWorkspaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The list of failure reasons.
    shared_ptr<vector<DeleteWorkspaceResponseBody::FailReasons>> failReasons_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Indicates whether the workspace is successfully deleted. Valid values:
    // 
    // - true: Succeeded.
    // 
    // - false: Failed.
    shared_ptr<bool> isDeleted_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - true: Succeeded.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
