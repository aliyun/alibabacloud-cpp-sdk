// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODY_HPP_
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
  class ListTaskFlowCooperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowCooperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CooperatorList, cooperatorList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowCooperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CooperatorList, cooperatorList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskFlowCooperatorsResponseBody() = default ;
    ListTaskFlowCooperatorsResponseBody(const ListTaskFlowCooperatorsResponseBody &) = default ;
    ListTaskFlowCooperatorsResponseBody(ListTaskFlowCooperatorsResponseBody &&) = default ;
    ListTaskFlowCooperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowCooperatorsResponseBody() = default ;
    ListTaskFlowCooperatorsResponseBody& operator=(const ListTaskFlowCooperatorsResponseBody &) = default ;
    ListTaskFlowCooperatorsResponseBody& operator=(ListTaskFlowCooperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CooperatorList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CooperatorList& obj) { 
        DARABONBA_PTR_TO_JSON(Cooperator, cooperator_);
      };
      friend void from_json(const Darabonba::Json& j, CooperatorList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cooperator, cooperator_);
      };
      CooperatorList() = default ;
      CooperatorList(const CooperatorList &) = default ;
      CooperatorList(CooperatorList &&) = default ;
      CooperatorList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CooperatorList() = default ;
      CooperatorList& operator=(const CooperatorList &) = default ;
      CooperatorList& operator=(CooperatorList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cooperator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cooperator& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(LoginName, loginName_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Cooperator& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Cooperator() = default ;
        Cooperator(const Cooperator &) = default ;
        Cooperator(Cooperator &&) = default ;
        Cooperator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cooperator() = default ;
        Cooperator& operator=(const Cooperator &) = default ;
        Cooperator& operator=(Cooperator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->loginName_ == nullptr && this->nickName_ == nullptr && this->userId_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Cooperator& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // loginName Field Functions 
        bool hasLoginName() const { return this->loginName_ != nullptr;};
        void deleteLoginName() { this->loginName_ = nullptr;};
        inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
        inline Cooperator& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Cooperator& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Cooperator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The email address of the user.
        shared_ptr<string> email_ {};
        // The username.
        shared_ptr<string> loginName_ {};
        // The alias of the user.
        shared_ptr<string> nickName_ {};
        // userId.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->cooperator_ == nullptr; };
      // cooperator Field Functions 
      bool hasCooperator() const { return this->cooperator_ != nullptr;};
      void deleteCooperator() { this->cooperator_ = nullptr;};
      inline const vector<CooperatorList::Cooperator> & getCooperator() const { DARABONBA_PTR_GET_CONST(cooperator_, vector<CooperatorList::Cooperator>) };
      inline vector<CooperatorList::Cooperator> getCooperator() { DARABONBA_PTR_GET(cooperator_, vector<CooperatorList::Cooperator>) };
      inline CooperatorList& setCooperator(const vector<CooperatorList::Cooperator> & cooperator) { DARABONBA_PTR_SET_VALUE(cooperator_, cooperator) };
      inline CooperatorList& setCooperator(vector<CooperatorList::Cooperator> && cooperator) { DARABONBA_PTR_SET_RVALUE(cooperator_, cooperator) };


    protected:
      shared_ptr<vector<CooperatorList::Cooperator>> cooperator_ {};
    };

    virtual bool empty() const override { return this->cooperatorList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // cooperatorList Field Functions 
    bool hasCooperatorList() const { return this->cooperatorList_ != nullptr;};
    void deleteCooperatorList() { this->cooperatorList_ = nullptr;};
    inline const ListTaskFlowCooperatorsResponseBody::CooperatorList & getCooperatorList() const { DARABONBA_PTR_GET_CONST(cooperatorList_, ListTaskFlowCooperatorsResponseBody::CooperatorList) };
    inline ListTaskFlowCooperatorsResponseBody::CooperatorList getCooperatorList() { DARABONBA_PTR_GET(cooperatorList_, ListTaskFlowCooperatorsResponseBody::CooperatorList) };
    inline ListTaskFlowCooperatorsResponseBody& setCooperatorList(const ListTaskFlowCooperatorsResponseBody::CooperatorList & cooperatorList) { DARABONBA_PTR_SET_VALUE(cooperatorList_, cooperatorList) };
    inline ListTaskFlowCooperatorsResponseBody& setCooperatorList(ListTaskFlowCooperatorsResponseBody::CooperatorList && cooperatorList) { DARABONBA_PTR_SET_RVALUE(cooperatorList_, cooperatorList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowCooperatorsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowCooperatorsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowCooperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowCooperatorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The users that are involved in the task flow.
    shared_ptr<ListTaskFlowCooperatorsResponseBody::CooperatorList> cooperatorList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
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
