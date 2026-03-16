// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODY_HPP_
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
  class LockUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LockUsersResult, lockUsersResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LockUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LockUsersResult, lockUsersResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LockUsersResponseBody() = default ;
    LockUsersResponseBody(const LockUsersResponseBody &) = default ;
    LockUsersResponseBody(LockUsersResponseBody &&) = default ;
    LockUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockUsersResponseBody() = default ;
    LockUsersResponseBody& operator=(const LockUsersResponseBody &) = default ;
    LockUsersResponseBody& operator=(LockUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LockUsersResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LockUsersResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_TO_JSON(LockedUsers, lockedUsers_);
      };
      friend void from_json(const Darabonba::Json& j, LockUsersResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_FROM_JSON(LockedUsers, lockedUsers_);
      };
      LockUsersResult() = default ;
      LockUsersResult(const LockUsersResult &) = default ;
      LockUsersResult(LockUsersResult &&) = default ;
      LockUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LockUsersResult() = default ;
      LockUsersResult& operator=(const LockUsersResult &) = default ;
      LockUsersResult& operator=(LockUsersResult &&) = default ;
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
        // The ID of the convenience user that failed to be locked.
        shared_ptr<string> endUserId_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
      };

      virtual bool empty() const override { return this->failedUsers_ == nullptr
        && this->lockedUsers_ == nullptr; };
      // failedUsers Field Functions 
      bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
      void deleteFailedUsers() { this->failedUsers_ = nullptr;};
      inline const vector<LockUsersResult::FailedUsers> & getFailedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<LockUsersResult::FailedUsers>) };
      inline vector<LockUsersResult::FailedUsers> getFailedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<LockUsersResult::FailedUsers>) };
      inline LockUsersResult& setFailedUsers(const vector<LockUsersResult::FailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
      inline LockUsersResult& setFailedUsers(vector<LockUsersResult::FailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


      // lockedUsers Field Functions 
      bool hasLockedUsers() const { return this->lockedUsers_ != nullptr;};
      void deleteLockedUsers() { this->lockedUsers_ = nullptr;};
      inline const vector<string> & getLockedUsers() const { DARABONBA_PTR_GET_CONST(lockedUsers_, vector<string>) };
      inline vector<string> getLockedUsers() { DARABONBA_PTR_GET(lockedUsers_, vector<string>) };
      inline LockUsersResult& setLockedUsers(const vector<string> & lockedUsers) { DARABONBA_PTR_SET_VALUE(lockedUsers_, lockedUsers) };
      inline LockUsersResult& setLockedUsers(vector<string> && lockedUsers) { DARABONBA_PTR_SET_RVALUE(lockedUsers_, lockedUsers) };


    protected:
      // The convenience users that failed to be locked.
      shared_ptr<vector<LockUsersResult::FailedUsers>> failedUsers_ {};
      // The convenience users that were locked.
      shared_ptr<vector<string>> lockedUsers_ {};
    };

    virtual bool empty() const override { return this->lockUsersResult_ == nullptr
        && this->requestId_ == nullptr; };
    // lockUsersResult Field Functions 
    bool hasLockUsersResult() const { return this->lockUsersResult_ != nullptr;};
    void deleteLockUsersResult() { this->lockUsersResult_ = nullptr;};
    inline const LockUsersResponseBody::LockUsersResult & getLockUsersResult() const { DARABONBA_PTR_GET_CONST(lockUsersResult_, LockUsersResponseBody::LockUsersResult) };
    inline LockUsersResponseBody::LockUsersResult getLockUsersResult() { DARABONBA_PTR_GET(lockUsersResult_, LockUsersResponseBody::LockUsersResult) };
    inline LockUsersResponseBody& setLockUsersResult(const LockUsersResponseBody::LockUsersResult & lockUsersResult) { DARABONBA_PTR_SET_VALUE(lockUsersResult_, lockUsersResult) };
    inline LockUsersResponseBody& setLockUsersResult(LockUsersResponseBody::LockUsersResult && lockUsersResult) { DARABONBA_PTR_SET_RVALUE(lockUsersResult_, lockUsersResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LockUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of the locking the convenience user.
    shared_ptr<LockUsersResponseBody::LockUsersResult> lockUsersResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
