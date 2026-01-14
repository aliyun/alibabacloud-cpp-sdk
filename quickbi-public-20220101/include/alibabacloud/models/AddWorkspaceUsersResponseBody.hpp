// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddWorkspaceUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddWorkspaceUsersResponseBody() = default ;
    AddWorkspaceUsersResponseBody(const AddWorkspaceUsersResponseBody &) = default ;
    AddWorkspaceUsersResponseBody(AddWorkspaceUsersResponseBody &&) = default ;
    AddWorkspaceUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceUsersResponseBody() = default ;
    AddWorkspaceUsersResponseBody& operator=(const AddWorkspaceUsersResponseBody &) = default ;
    AddWorkspaceUsersResponseBody& operator=(AddWorkspaceUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Failure, failure_);
        DARABONBA_ANY_TO_JSON(FailureDetail, failureDetail_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Failure, failure_);
        DARABONBA_ANY_FROM_JSON(FailureDetail, failureDetail_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failure_ == nullptr
        && this->failureDetail_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
      // failure Field Functions 
      bool hasFailure() const { return this->failure_ != nullptr;};
      void deleteFailure() { this->failure_ = nullptr;};
      inline int32_t getFailure() const { DARABONBA_PTR_GET_DEFAULT(failure_, 0) };
      inline Result& setFailure(int32_t failure) { DARABONBA_PTR_SET_VALUE(failure_, failure) };


      // failureDetail Field Functions 
      bool hasFailureDetail() const { return this->failureDetail_ != nullptr;};
      void deleteFailureDetail() { this->failureDetail_ = nullptr;};
      inline       const Darabonba::Json & getFailureDetail() const { DARABONBA_GET(failureDetail_) };
      Darabonba::Json & getFailureDetail() { DARABONBA_GET(failureDetail_) };
      inline Result& setFailureDetail(const Darabonba::Json & failureDetail) { DARABONBA_SET_VALUE(failureDetail_, failureDetail) };
      inline Result& setFailureDetail(Darabonba::Json && failureDetail) { DARABONBA_SET_RVALUE(failureDetail_, failureDetail) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline int32_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
      inline Result& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Result& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Number of users that failed to be added.
      shared_ptr<int32_t> failure_ {};
      // Reasons for the failures.
      Darabonba::Json failureDetail_ {};
      // Number of users that were added successfully.
      shared_ptr<int32_t> success_ {};
      // Total number of users being added.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddWorkspaceUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AddWorkspaceUsersResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, AddWorkspaceUsersResponseBody::Result) };
    inline AddWorkspaceUsersResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, AddWorkspaceUsersResponseBody::Result) };
    inline AddWorkspaceUsersResponseBody& setResult(const AddWorkspaceUsersResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AddWorkspaceUsersResponseBody& setResult(AddWorkspaceUsersResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddWorkspaceUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returns the result of the API execution.
    shared_ptr<AddWorkspaceUsersResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Value range:
    // - true: The request was successful. There may be cases where some members are added successfully and others fail. For the reasons of failure, refer to the FailureDetail in the response.
    // - false: The request failed, and no data will be persisted.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
