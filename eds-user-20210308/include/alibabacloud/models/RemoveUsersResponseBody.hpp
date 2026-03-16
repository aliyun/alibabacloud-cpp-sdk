// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemoveUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemoveUsersResult, removeUsersResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemoveUsersResult, removeUsersResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveUsersResponseBody() = default ;
    RemoveUsersResponseBody(const RemoveUsersResponseBody &) = default ;
    RemoveUsersResponseBody(RemoveUsersResponseBody &&) = default ;
    RemoveUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersResponseBody() = default ;
    RemoveUsersResponseBody& operator=(const RemoveUsersResponseBody &) = default ;
    RemoveUsersResponseBody& operator=(RemoveUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveUsersResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveUsersResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_TO_JSON(RemovedUsers, removedUsers_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveUsersResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_FROM_JSON(RemovedUsers, removedUsers_);
      };
      RemoveUsersResult() = default ;
      RemoveUsersResult(const RemoveUsersResult &) = default ;
      RemoveUsersResult(RemoveUsersResult &&) = default ;
      RemoveUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveUsersResult() = default ;
      RemoveUsersResult& operator=(const RemoveUsersResult &) = default ;
      RemoveUsersResult& operator=(RemoveUsersResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailedUsers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedUsers& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        };
        friend void from_json(const Darabonba::Json& j, FailedUsers& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        };
        FailedUsers() = default ;
        FailedUsers(const FailedUsers &) = default ;
        FailedUsers(FailedUsers &&) = default ;
        FailedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedUsers() = default ;
        FailedUsers& operator=(const FailedUsers &) = default ;
        FailedUsers& operator=(FailedUsers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline FailedUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline FailedUsers& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline FailedUsers& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      protected:
        // The ID of the convenience user that failed to be removed.
        shared_ptr<string> endUserId_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
      };

      virtual bool empty() const override { return this->failedUsers_ == nullptr
        && this->removedUsers_ == nullptr; };
      // failedUsers Field Functions 
      bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
      void deleteFailedUsers() { this->failedUsers_ = nullptr;};
      inline const vector<RemoveUsersResult::FailedUsers> & getFailedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<RemoveUsersResult::FailedUsers>) };
      inline vector<RemoveUsersResult::FailedUsers> getFailedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<RemoveUsersResult::FailedUsers>) };
      inline RemoveUsersResult& setFailedUsers(const vector<RemoveUsersResult::FailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
      inline RemoveUsersResult& setFailedUsers(vector<RemoveUsersResult::FailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


      // removedUsers Field Functions 
      bool hasRemovedUsers() const { return this->removedUsers_ != nullptr;};
      void deleteRemovedUsers() { this->removedUsers_ = nullptr;};
      inline const vector<string> & getRemovedUsers() const { DARABONBA_PTR_GET_CONST(removedUsers_, vector<string>) };
      inline vector<string> getRemovedUsers() { DARABONBA_PTR_GET(removedUsers_, vector<string>) };
      inline RemoveUsersResult& setRemovedUsers(const vector<string> & removedUsers) { DARABONBA_PTR_SET_VALUE(removedUsers_, removedUsers) };
      inline RemoveUsersResult& setRemovedUsers(vector<string> && removedUsers) { DARABONBA_PTR_SET_RVALUE(removedUsers_, removedUsers) };


    protected:
      // The convenience users that failed to be removed.
      shared_ptr<vector<RemoveUsersResult::FailedUsers>> failedUsers_ {};
      // The convenience users that were removed.
      shared_ptr<vector<string>> removedUsers_ {};
    };

    virtual bool empty() const override { return this->removeUsersResult_ == nullptr
        && this->requestId_ == nullptr; };
    // removeUsersResult Field Functions 
    bool hasRemoveUsersResult() const { return this->removeUsersResult_ != nullptr;};
    void deleteRemoveUsersResult() { this->removeUsersResult_ = nullptr;};
    inline const RemoveUsersResponseBody::RemoveUsersResult & getRemoveUsersResult() const { DARABONBA_PTR_GET_CONST(removeUsersResult_, RemoveUsersResponseBody::RemoveUsersResult) };
    inline RemoveUsersResponseBody::RemoveUsersResult getRemoveUsersResult() { DARABONBA_PTR_GET(removeUsersResult_, RemoveUsersResponseBody::RemoveUsersResult) };
    inline RemoveUsersResponseBody& setRemoveUsersResult(const RemoveUsersResponseBody::RemoveUsersResult & removeUsersResult) { DARABONBA_PTR_SET_VALUE(removeUsersResult_, removeUsersResult) };
    inline RemoveUsersResponseBody& setRemoveUsersResult(RemoveUsersResponseBody::RemoveUsersResult && removeUsersResult) { DARABONBA_PTR_SET_RVALUE(removeUsersResult_, removeUsersResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of removing the convenience user.
    shared_ptr<RemoveUsersResponseBody::RemoveUsersResult> removeUsersResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
