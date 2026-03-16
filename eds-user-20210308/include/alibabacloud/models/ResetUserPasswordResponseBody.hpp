// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETUSERPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETUSERPASSWORDRESPONSEBODY_HPP_
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
  class ResetUserPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetUserPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResetUsersResult, resetUsersResult_);
    };
    friend void from_json(const Darabonba::Json& j, ResetUserPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResetUsersResult, resetUsersResult_);
    };
    ResetUserPasswordResponseBody() = default ;
    ResetUserPasswordResponseBody(const ResetUserPasswordResponseBody &) = default ;
    ResetUserPasswordResponseBody(ResetUserPasswordResponseBody &&) = default ;
    ResetUserPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetUserPasswordResponseBody() = default ;
    ResetUserPasswordResponseBody& operator=(const ResetUserPasswordResponseBody &) = default ;
    ResetUserPasswordResponseBody& operator=(ResetUserPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResetUsersResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResetUsersResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_TO_JSON(ResetUsers, resetUsers_);
      };
      friend void from_json(const Darabonba::Json& j, ResetUsersResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
        DARABONBA_PTR_FROM_JSON(ResetUsers, resetUsers_);
      };
      ResetUsersResult() = default ;
      ResetUsersResult(const ResetUsersResult &) = default ;
      ResetUsersResult(ResetUsersResult &&) = default ;
      ResetUsersResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResetUsersResult() = default ;
      ResetUsersResult& operator=(const ResetUsersResult &) = default ;
      ResetUsersResult& operator=(ResetUsersResult &&) = default ;
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
        // The ID of the convenience user whose password failed to be reset.
        shared_ptr<string> endUserId_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
      };

      virtual bool empty() const override { return this->failedUsers_ == nullptr
        && this->resetUsers_ == nullptr; };
      // failedUsers Field Functions 
      bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
      void deleteFailedUsers() { this->failedUsers_ = nullptr;};
      inline const vector<ResetUsersResult::FailedUsers> & getFailedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<ResetUsersResult::FailedUsers>) };
      inline vector<ResetUsersResult::FailedUsers> getFailedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<ResetUsersResult::FailedUsers>) };
      inline ResetUsersResult& setFailedUsers(const vector<ResetUsersResult::FailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
      inline ResetUsersResult& setFailedUsers(vector<ResetUsersResult::FailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


      // resetUsers Field Functions 
      bool hasResetUsers() const { return this->resetUsers_ != nullptr;};
      void deleteResetUsers() { this->resetUsers_ = nullptr;};
      inline const vector<string> & getResetUsers() const { DARABONBA_PTR_GET_CONST(resetUsers_, vector<string>) };
      inline vector<string> getResetUsers() { DARABONBA_PTR_GET(resetUsers_, vector<string>) };
      inline ResetUsersResult& setResetUsers(const vector<string> & resetUsers) { DARABONBA_PTR_SET_VALUE(resetUsers_, resetUsers) };
      inline ResetUsersResult& setResetUsers(vector<string> && resetUsers) { DARABONBA_PTR_SET_RVALUE(resetUsers_, resetUsers) };


    protected:
      // The information about the convenience users whose passwords failed to be reset.
      shared_ptr<vector<ResetUsersResult::FailedUsers>> failedUsers_ {};
      // The convenience users to which the system sent a password reset email.
      shared_ptr<vector<string>> resetUsers_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resetUsersResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetUserPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resetUsersResult Field Functions 
    bool hasResetUsersResult() const { return this->resetUsersResult_ != nullptr;};
    void deleteResetUsersResult() { this->resetUsersResult_ = nullptr;};
    inline const ResetUserPasswordResponseBody::ResetUsersResult & getResetUsersResult() const { DARABONBA_PTR_GET_CONST(resetUsersResult_, ResetUserPasswordResponseBody::ResetUsersResult) };
    inline ResetUserPasswordResponseBody::ResetUsersResult getResetUsersResult() { DARABONBA_PTR_GET(resetUsersResult_, ResetUserPasswordResponseBody::ResetUsersResult) };
    inline ResetUserPasswordResponseBody& setResetUsersResult(const ResetUserPasswordResponseBody::ResetUsersResult & resetUsersResult) { DARABONBA_PTR_SET_VALUE(resetUsersResult_, resetUsersResult) };
    inline ResetUserPasswordResponseBody& setResetUsersResult(ResetUserPasswordResponseBody::ResetUsersResult && resetUsersResult) { DARABONBA_PTR_SET_RVALUE(resetUsersResult_, resetUsersResult) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result of resetting the password of the convenience user.
    shared_ptr<ResetUserPasswordResponseBody::ResetUsersResult> resetUsersResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
