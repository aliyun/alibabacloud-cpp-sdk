// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODY_HPP_
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
  class CreateUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllSucceed, allSucceed_);
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllSucceed, allSucceed_);
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateUsersResponseBody() = default ;
    CreateUsersResponseBody(const CreateUsersResponseBody &) = default ;
    CreateUsersResponseBody(CreateUsersResponseBody &&) = default ;
    CreateUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersResponseBody() = default ;
    CreateUsersResponseBody& operator=(const CreateUsersResponseBody &) = default ;
    CreateUsersResponseBody& operator=(CreateUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateResult& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedUsers, createdUsers_);
        DARABONBA_PTR_TO_JSON(FailedUsers, failedUsers_);
      };
      friend void from_json(const Darabonba::Json& j, CreateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedUsers, createdUsers_);
        DARABONBA_PTR_FROM_JSON(FailedUsers, failedUsers_);
      };
      CreateResult() = default ;
      CreateResult(const CreateResult &) = default ;
      CreateResult(CreateResult &&) = default ;
      CreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateResult() = default ;
      CreateResult& operator=(const CreateResult &) = default ;
      CreateResult& operator=(CreateResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailedUsers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedUsers& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
        };
        friend void from_json(const Darabonba::Json& j, FailedUsers& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
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
        virtual bool empty() const override { return this->email_ == nullptr
        && this->endUserId_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->phone_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline FailedUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


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


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline FailedUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      protected:
        // The email address of the end user.
        shared_ptr<string> email_ {};
        // The name of the end user.
        shared_ptr<string> endUserId_ {};
        // The error code returned if the request failed.
        shared_ptr<string> errorCode_ {};
        // The error message returned.
        shared_ptr<string> errorMessage_ {};
        // The mobile number of the end user.
        shared_ptr<string> phone_ {};
      };

      class CreatedUsers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreatedUsers& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, CreatedUsers& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        CreatedUsers() = default ;
        CreatedUsers(const CreatedUsers &) = default ;
        CreatedUsers(CreatedUsers &&) = default ;
        CreatedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreatedUsers() = default ;
        CreatedUsers& operator=(const CreatedUsers &) = default ;
        CreatedUsers& operator=(CreatedUsers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->endUserId_ == nullptr && this->phone_ == nullptr && this->realNickName_ == nullptr && this->remark_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline CreatedUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline CreatedUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline CreatedUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // realNickName Field Functions 
        bool hasRealNickName() const { return this->realNickName_ != nullptr;};
        void deleteRealNickName() { this->realNickName_ = nullptr;};
        inline string getRealNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
        inline CreatedUsers& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline CreatedUsers& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        // The email address of the end user.
        shared_ptr<string> email_ {};
        // The name of the end user.
        shared_ptr<string> endUserId_ {};
        // The mobile number of the end user.
        shared_ptr<string> phone_ {};
        // The display name of the end user.
        shared_ptr<string> realNickName_ {};
        // The remarks of the end user.
        shared_ptr<string> remark_ {};
      };

      virtual bool empty() const override { return this->createdUsers_ == nullptr
        && this->failedUsers_ == nullptr; };
      // createdUsers Field Functions 
      bool hasCreatedUsers() const { return this->createdUsers_ != nullptr;};
      void deleteCreatedUsers() { this->createdUsers_ = nullptr;};
      inline const vector<CreateResult::CreatedUsers> & getCreatedUsers() const { DARABONBA_PTR_GET_CONST(createdUsers_, vector<CreateResult::CreatedUsers>) };
      inline vector<CreateResult::CreatedUsers> getCreatedUsers() { DARABONBA_PTR_GET(createdUsers_, vector<CreateResult::CreatedUsers>) };
      inline CreateResult& setCreatedUsers(const vector<CreateResult::CreatedUsers> & createdUsers) { DARABONBA_PTR_SET_VALUE(createdUsers_, createdUsers) };
      inline CreateResult& setCreatedUsers(vector<CreateResult::CreatedUsers> && createdUsers) { DARABONBA_PTR_SET_RVALUE(createdUsers_, createdUsers) };


      // failedUsers Field Functions 
      bool hasFailedUsers() const { return this->failedUsers_ != nullptr;};
      void deleteFailedUsers() { this->failedUsers_ = nullptr;};
      inline const vector<CreateResult::FailedUsers> & getFailedUsers() const { DARABONBA_PTR_GET_CONST(failedUsers_, vector<CreateResult::FailedUsers>) };
      inline vector<CreateResult::FailedUsers> getFailedUsers() { DARABONBA_PTR_GET(failedUsers_, vector<CreateResult::FailedUsers>) };
      inline CreateResult& setFailedUsers(const vector<CreateResult::FailedUsers> & failedUsers) { DARABONBA_PTR_SET_VALUE(failedUsers_, failedUsers) };
      inline CreateResult& setFailedUsers(vector<CreateResult::FailedUsers> && failedUsers) { DARABONBA_PTR_SET_RVALUE(failedUsers_, failedUsers) };


    protected:
      // Details of the created convenience users.
      shared_ptr<vector<CreateResult::CreatedUsers>> createdUsers_ {};
      // Details of the convenience users that failed to be created.
      shared_ptr<vector<CreateResult::FailedUsers>> failedUsers_ {};
    };

    virtual bool empty() const override { return this->allSucceed_ == nullptr
        && this->createResult_ == nullptr && this->requestId_ == nullptr; };
    // allSucceed Field Functions 
    bool hasAllSucceed() const { return this->allSucceed_ != nullptr;};
    void deleteAllSucceed() { this->allSucceed_ = nullptr;};
    inline bool getAllSucceed() const { DARABONBA_PTR_GET_DEFAULT(allSucceed_, false) };
    inline CreateUsersResponseBody& setAllSucceed(bool allSucceed) { DARABONBA_PTR_SET_VALUE(allSucceed_, allSucceed) };


    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const CreateUsersResponseBody::CreateResult & getCreateResult() const { DARABONBA_PTR_GET_CONST(createResult_, CreateUsersResponseBody::CreateResult) };
    inline CreateUsersResponseBody::CreateResult getCreateResult() { DARABONBA_PTR_GET(createResult_, CreateUsersResponseBody::CreateResult) };
    inline CreateUsersResponseBody& setCreateResult(const CreateUsersResponseBody::CreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline CreateUsersResponseBody& setCreateResult(CreateUsersResponseBody::CreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> allSucceed_ {};
    // The result of user creation.
    shared_ptr<CreateUsersResponseBody::CreateResult> createResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
