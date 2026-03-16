// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODY_HPP_
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
  class UnlockUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnlockUsersResult, unlockUsersResult_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnlockUsersResult, unlockUsersResult_);
    };
    UnlockUsersResponseBody() = default ;
    UnlockUsersResponseBody(const UnlockUsersResponseBody &) = default ;
    UnlockUsersResponseBody(UnlockUsersResponseBody &&) = default ;
    UnlockUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockUsersResponseBody() = default ;
    UnlockUsersResponseBody& operator=(const UnlockUsersResponseBody &) = default ;
    UnlockUsersResponseBody& operator=(UnlockUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnlockUsersResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnlockUsersResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_TO_JSON(UnlockedUsers, unlockedUsers_);
      };
      friend void from_json(const Darabonba::Json& j, UnlockUsersResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_FROM_JSON(UnlockedUsers, unlockedUsers_);
      };
      UnlockUsersResult() = default ;
      UnlockUsersResult(const UnlockUsersResult &) = default ;
      UnlockUsersResult(UnlockUsersResult &&) = default ;
      UnlockUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnlockUsersResult() = default ;
      UnlockUsersResult& operator=(const UnlockUsersResult &) = default ;
      UnlockUsersResult& operator=(UnlockUsersResult &&) = default ;
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
        // The ID of the convenience user that failed to be unlocked.
        shared_ptr<string> endUserId_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
      };

      virtual bool empty() const override { return this->failedUsers_ == nullptr
        && this->unlockedUsers_ == nullptr; };
      // failedUsers Field Functions 
      bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
      void deleteFailedUsers() { this->failedUsers_ = nullptr;};
      inline const vector<UnlockUsersResult::FailedUsers> & getFailedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<UnlockUsersResult::FailedUsers>) };
      inline vector<UnlockUsersResult::FailedUsers> getFailedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<UnlockUsersResult::FailedUsers>) };
      inline UnlockUsersResult& setFailedUsers(const vector<UnlockUsersResult::FailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
      inline UnlockUsersResult& setFailedUsers(vector<UnlockUsersResult::FailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


      // unlockedUsers Field Functions 
      bool hasUnlockedUsers() const { return this->unlockedUsers_ != nullptr;};
      void deleteUnlockedUsers() { this->unlockedUsers_ = nullptr;};
      inline const vector<string> & getUnlockedUsers() const { DARABONBA_PTR_GET_CONST(unlockedUsers_, vector<string>) };
      inline vector<string> getUnlockedUsers() { DARABONBA_PTR_GET(unlockedUsers_, vector<string>) };
      inline UnlockUsersResult& setUnlockedUsers(const vector<string> & unlockedUsers) { DARABONBA_PTR_SET_VALUE(unlockedUsers_, unlockedUsers) };
      inline UnlockUsersResult& setUnlockedUsers(vector<string> && unlockedUsers) { DARABONBA_PTR_SET_RVALUE(unlockedUsers_, unlockedUsers) };


    protected:
      // The convenience users that failed to be unlocked.
      shared_ptr<vector<UnlockUsersResult::FailedUsers>> failedUsers_ {};
      // The convenience users that were unlocked.
      shared_ptr<vector<string>> unlockedUsers_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->unlockUsersResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnlockUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unlockUsersResult Field Functions 
    bool hasUnlockUsersResult() const { return this->unlockUsersResult_ != nullptr;};
    void deleteUnlockUsersResult() { this->unlockUsersResult_ = nullptr;};
    inline const UnlockUsersResponseBody::UnlockUsersResult & getUnlockUsersResult() const { DARABONBA_PTR_GET_CONST(unlockUsersResult_, UnlockUsersResponseBody::UnlockUsersResult) };
    inline UnlockUsersResponseBody::UnlockUsersResult getUnlockUsersResult() { DARABONBA_PTR_GET(unlockUsersResult_, UnlockUsersResponseBody::UnlockUsersResult) };
    inline UnlockUsersResponseBody& setUnlockUsersResult(const UnlockUsersResponseBody::UnlockUsersResult & unlockUsersResult) { DARABONBA_PTR_SET_VALUE(unlockUsersResult_, unlockUsersResult) };
    inline UnlockUsersResponseBody& setUnlockUsersResult(UnlockUsersResponseBody::UnlockUsersResult && unlockUsersResult) { DARABONBA_PTR_SET_RVALUE(unlockUsersResult_, unlockUsersResult) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result of unlocking the convenience user.
    shared_ptr<UnlockUsersResponseBody::UnlockUsersResult> unlockUsersResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
