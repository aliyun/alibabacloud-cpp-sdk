// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    LoginInstanceResponseBody() = default ;
    LoginInstanceResponseBody(const LoginInstanceResponseBody &) = default ;
    LoginInstanceResponseBody(LoginInstanceResponseBody &&) = default ;
    LoginInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceResponseBody() = default ;
    LoginInstanceResponseBody& operator=(const LoginInstanceResponseBody &) = default ;
    LoginInstanceResponseBody& operator=(LoginInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(DisposableAccount, disposableAccount_);
        DARABONBA_PTR_TO_JSON(InstanceLoginInfoList, instanceLoginInfoList_);
        DARABONBA_PTR_TO_JSON(SessionControl, sessionControl_);
      };
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(DisposableAccount, disposableAccount_);
        DARABONBA_PTR_FROM_JSON(InstanceLoginInfoList, instanceLoginInfoList_);
        DARABONBA_PTR_FROM_JSON(SessionControl, sessionControl_);
      };
      Root() = default ;
      Root(const Root &) = default ;
      Root(Root &&) = default ;
      Root(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Root() = default ;
      Root& operator=(const Root &) = default ;
      Root& operator=(Root &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SessionControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionControl& obj) { 
          DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        };
        friend void from_json(const Darabonba::Json& j, SessionControl& obj) { 
          DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        };
        SessionControl() = default ;
        SessionControl(const SessionControl &) = default ;
        SessionControl(SessionControl &&) = default ;
        SessionControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionControl() = default ;
        SessionControl& operator=(const SessionControl &) = default ;
        SessionControl& operator=(SessionControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baseUrl_ == nullptr; };
        // baseUrl Field Functions 
        bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
        void deleteBaseUrl() { this->baseUrl_ = nullptr;};
        inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
        inline SessionControl& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      protected:
        shared_ptr<string> baseUrl_ {};
      };

      class InstanceLoginInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceLoginInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceLoginToken, instanceLoginToken_);
          DARABONBA_PTR_TO_JSON(InstanceLoginView, instanceLoginView_);
          DARABONBA_PTR_TO_JSON(LoginSuccess, loginSuccess_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceLoginInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceLoginToken, instanceLoginToken_);
          DARABONBA_PTR_FROM_JSON(InstanceLoginView, instanceLoginView_);
          DARABONBA_PTR_FROM_JSON(LoginSuccess, loginSuccess_);
        };
        InstanceLoginInfoList() = default ;
        InstanceLoginInfoList(const InstanceLoginInfoList &) = default ;
        InstanceLoginInfoList(InstanceLoginInfoList &&) = default ;
        InstanceLoginInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceLoginInfoList() = default ;
        InstanceLoginInfoList& operator=(const InstanceLoginInfoList &) = default ;
        InstanceLoginInfoList& operator=(InstanceLoginInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceLoginView : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceLoginView& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultViewUrl, defaultViewUrl_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceLoginView& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultViewUrl, defaultViewUrl_);
          };
          InstanceLoginView() = default ;
          InstanceLoginView(const InstanceLoginView &) = default ;
          InstanceLoginView(InstanceLoginView &&) = default ;
          InstanceLoginView(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceLoginView() = default ;
          InstanceLoginView& operator=(const InstanceLoginView &) = default ;
          InstanceLoginView& operator=(InstanceLoginView &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultViewUrl_ == nullptr; };
          // defaultViewUrl Field Functions 
          bool hasDefaultViewUrl() const { return this->defaultViewUrl_ != nullptr;};
          void deleteDefaultViewUrl() { this->defaultViewUrl_ = nullptr;};
          inline string getDefaultViewUrl() const { DARABONBA_PTR_GET_DEFAULT(defaultViewUrl_, "") };
          inline InstanceLoginView& setDefaultViewUrl(string defaultViewUrl) { DARABONBA_PTR_SET_VALUE(defaultViewUrl_, defaultViewUrl) };


        protected:
          shared_ptr<string> defaultViewUrl_ {};
        };

        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceLoginToken_ == nullptr && this->instanceLoginView_ == nullptr && this->loginSuccess_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceLoginInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceLoginToken Field Functions 
        bool hasInstanceLoginToken() const { return this->instanceLoginToken_ != nullptr;};
        void deleteInstanceLoginToken() { this->instanceLoginToken_ = nullptr;};
        inline string getInstanceLoginToken() const { DARABONBA_PTR_GET_DEFAULT(instanceLoginToken_, "") };
        inline InstanceLoginInfoList& setInstanceLoginToken(string instanceLoginToken) { DARABONBA_PTR_SET_VALUE(instanceLoginToken_, instanceLoginToken) };


        // instanceLoginView Field Functions 
        bool hasInstanceLoginView() const { return this->instanceLoginView_ != nullptr;};
        void deleteInstanceLoginView() { this->instanceLoginView_ = nullptr;};
        inline const InstanceLoginInfoList::InstanceLoginView & getInstanceLoginView() const { DARABONBA_PTR_GET_CONST(instanceLoginView_, InstanceLoginInfoList::InstanceLoginView) };
        inline InstanceLoginInfoList::InstanceLoginView getInstanceLoginView() { DARABONBA_PTR_GET(instanceLoginView_, InstanceLoginInfoList::InstanceLoginView) };
        inline InstanceLoginInfoList& setInstanceLoginView(const InstanceLoginInfoList::InstanceLoginView & instanceLoginView) { DARABONBA_PTR_SET_VALUE(instanceLoginView_, instanceLoginView) };
        inline InstanceLoginInfoList& setInstanceLoginView(InstanceLoginInfoList::InstanceLoginView && instanceLoginView) { DARABONBA_PTR_SET_RVALUE(instanceLoginView_, instanceLoginView) };


        // loginSuccess Field Functions 
        bool hasLoginSuccess() const { return this->loginSuccess_ != nullptr;};
        void deleteLoginSuccess() { this->loginSuccess_ = nullptr;};
        inline bool getLoginSuccess() const { DARABONBA_PTR_GET_DEFAULT(loginSuccess_, false) };
        inline InstanceLoginInfoList& setLoginSuccess(bool loginSuccess) { DARABONBA_PTR_SET_VALUE(loginSuccess_, loginSuccess) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceLoginToken_ {};
        shared_ptr<InstanceLoginInfoList::InstanceLoginView> instanceLoginView_ {};
        shared_ptr<bool> loginSuccess_ {};
      };

      class DisposableAccount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DisposableAccount& obj) { 
          DARABONBA_PTR_TO_JSON(LoginFormActionUrl, loginFormActionUrl_);
          DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
        };
        friend void from_json(const Darabonba::Json& j, DisposableAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(LoginFormActionUrl, loginFormActionUrl_);
          DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
        };
        DisposableAccount() = default ;
        DisposableAccount(const DisposableAccount &) = default ;
        DisposableAccount(DisposableAccount &&) = default ;
        DisposableAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DisposableAccount() = default ;
        DisposableAccount& operator=(const DisposableAccount &) = default ;
        DisposableAccount& operator=(DisposableAccount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->loginFormActionUrl_ == nullptr
        && this->loginUrl_ == nullptr; };
        // loginFormActionUrl Field Functions 
        bool hasLoginFormActionUrl() const { return this->loginFormActionUrl_ != nullptr;};
        void deleteLoginFormActionUrl() { this->loginFormActionUrl_ = nullptr;};
        inline string getLoginFormActionUrl() const { DARABONBA_PTR_GET_DEFAULT(loginFormActionUrl_, "") };
        inline DisposableAccount& setLoginFormActionUrl(string loginFormActionUrl) { DARABONBA_PTR_SET_VALUE(loginFormActionUrl_, loginFormActionUrl) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline DisposableAccount& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


      protected:
        shared_ptr<string> loginFormActionUrl_ {};
        shared_ptr<string> loginUrl_ {};
      };

      virtual bool empty() const override { return this->disposableAccount_ == nullptr
        && this->instanceLoginInfoList_ == nullptr && this->sessionControl_ == nullptr; };
      // disposableAccount Field Functions 
      bool hasDisposableAccount() const { return this->disposableAccount_ != nullptr;};
      void deleteDisposableAccount() { this->disposableAccount_ = nullptr;};
      inline const Root::DisposableAccount & getDisposableAccount() const { DARABONBA_PTR_GET_CONST(disposableAccount_, Root::DisposableAccount) };
      inline Root::DisposableAccount getDisposableAccount() { DARABONBA_PTR_GET(disposableAccount_, Root::DisposableAccount) };
      inline Root& setDisposableAccount(const Root::DisposableAccount & disposableAccount) { DARABONBA_PTR_SET_VALUE(disposableAccount_, disposableAccount) };
      inline Root& setDisposableAccount(Root::DisposableAccount && disposableAccount) { DARABONBA_PTR_SET_RVALUE(disposableAccount_, disposableAccount) };


      // instanceLoginInfoList Field Functions 
      bool hasInstanceLoginInfoList() const { return this->instanceLoginInfoList_ != nullptr;};
      void deleteInstanceLoginInfoList() { this->instanceLoginInfoList_ = nullptr;};
      inline const vector<Root::InstanceLoginInfoList> & getInstanceLoginInfoList() const { DARABONBA_PTR_GET_CONST(instanceLoginInfoList_, vector<Root::InstanceLoginInfoList>) };
      inline vector<Root::InstanceLoginInfoList> getInstanceLoginInfoList() { DARABONBA_PTR_GET(instanceLoginInfoList_, vector<Root::InstanceLoginInfoList>) };
      inline Root& setInstanceLoginInfoList(const vector<Root::InstanceLoginInfoList> & instanceLoginInfoList) { DARABONBA_PTR_SET_VALUE(instanceLoginInfoList_, instanceLoginInfoList) };
      inline Root& setInstanceLoginInfoList(vector<Root::InstanceLoginInfoList> && instanceLoginInfoList) { DARABONBA_PTR_SET_RVALUE(instanceLoginInfoList_, instanceLoginInfoList) };


      // sessionControl Field Functions 
      bool hasSessionControl() const { return this->sessionControl_ != nullptr;};
      void deleteSessionControl() { this->sessionControl_ = nullptr;};
      inline const Root::SessionControl & getSessionControl() const { DARABONBA_PTR_GET_CONST(sessionControl_, Root::SessionControl) };
      inline Root::SessionControl getSessionControl() { DARABONBA_PTR_GET(sessionControl_, Root::SessionControl) };
      inline Root& setSessionControl(const Root::SessionControl & sessionControl) { DARABONBA_PTR_SET_VALUE(sessionControl_, sessionControl) };
      inline Root& setSessionControl(Root::SessionControl && sessionControl) { DARABONBA_PTR_SET_RVALUE(sessionControl_, sessionControl) };


    protected:
      shared_ptr<Root::DisposableAccount> disposableAccount_ {};
      shared_ptr<vector<Root::InstanceLoginInfoList>> instanceLoginInfoList_ {};
      shared_ptr<Root::SessionControl> sessionControl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->root_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline LoginInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline LoginInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LoginInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const LoginInstanceResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, LoginInstanceResponseBody::Root) };
    inline LoginInstanceResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, LoginInstanceResponseBody::Root) };
    inline LoginInstanceResponseBody& setRoot(const LoginInstanceResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline LoginInstanceResponseBody& setRoot(LoginInstanceResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline LoginInstanceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<LoginInstanceResponseBody::Root> root_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
