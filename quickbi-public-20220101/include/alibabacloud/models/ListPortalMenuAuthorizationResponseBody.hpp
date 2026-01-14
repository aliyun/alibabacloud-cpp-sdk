// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListPortalMenuAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalMenuAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalMenuAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListPortalMenuAuthorizationResponseBody() = default ;
    ListPortalMenuAuthorizationResponseBody(const ListPortalMenuAuthorizationResponseBody &) = default ;
    ListPortalMenuAuthorizationResponseBody(ListPortalMenuAuthorizationResponseBody &&) = default ;
    ListPortalMenuAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalMenuAuthorizationResponseBody() = default ;
    ListPortalMenuAuthorizationResponseBody& operator=(const ListPortalMenuAuthorizationResponseBody &) = default ;
    ListPortalMenuAuthorizationResponseBody& operator=(ListPortalMenuAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(MenuId, menuId_);
        DARABONBA_PTR_TO_JSON(Receivers, receivers_);
        DARABONBA_PTR_TO_JSON(ShowOnlyWithAccess, showOnlyWithAccess_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(MenuId, menuId_);
        DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
        DARABONBA_PTR_FROM_JSON(ShowOnlyWithAccess, showOnlyWithAccess_);
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
      class Receivers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Receivers& obj) { 
          DARABONBA_PTR_TO_JSON(AuthPointsValue, authPointsValue_);
          DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
          DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
        };
        friend void from_json(const Darabonba::Json& j, Receivers& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthPointsValue, authPointsValue_);
          DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
          DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
        };
        Receivers() = default ;
        Receivers(const Receivers &) = default ;
        Receivers(Receivers &&) = default ;
        Receivers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Receivers() = default ;
        Receivers& operator=(const Receivers &) = default ;
        Receivers& operator=(Receivers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authPointsValue_ == nullptr
        && this->receiverId_ == nullptr && this->receiverType_ == nullptr; };
        // authPointsValue Field Functions 
        bool hasAuthPointsValue() const { return this->authPointsValue_ != nullptr;};
        void deleteAuthPointsValue() { this->authPointsValue_ = nullptr;};
        inline int32_t getAuthPointsValue() const { DARABONBA_PTR_GET_DEFAULT(authPointsValue_, 0) };
        inline Receivers& setAuthPointsValue(int32_t authPointsValue) { DARABONBA_PTR_SET_VALUE(authPointsValue_, authPointsValue) };


        // receiverId Field Functions 
        bool hasReceiverId() const { return this->receiverId_ != nullptr;};
        void deleteReceiverId() { this->receiverId_ = nullptr;};
        inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
        inline Receivers& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


        // receiverType Field Functions 
        bool hasReceiverType() const { return this->receiverType_ != nullptr;};
        void deleteReceiverType() { this->receiverType_ = nullptr;};
        inline int32_t getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, 0) };
        inline Receivers& setReceiverType(int32_t receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


      protected:
        shared_ptr<int32_t> authPointsValue_ {};
        // The ID of the authorization object.
        shared_ptr<string> receiverId_ {};
        // The type of the authorization object. Valid values:
        // 
        // *   0: user
        // *   1: user group
        shared_ptr<int32_t> receiverType_ {};
      };

      virtual bool empty() const override { return this->menuId_ == nullptr
        && this->receivers_ == nullptr && this->showOnlyWithAccess_ == nullptr; };
      // menuId Field Functions 
      bool hasMenuId() const { return this->menuId_ != nullptr;};
      void deleteMenuId() { this->menuId_ = nullptr;};
      inline string getMenuId() const { DARABONBA_PTR_GET_DEFAULT(menuId_, "") };
      inline Result& setMenuId(string menuId) { DARABONBA_PTR_SET_VALUE(menuId_, menuId) };


      // receivers Field Functions 
      bool hasReceivers() const { return this->receivers_ != nullptr;};
      void deleteReceivers() { this->receivers_ = nullptr;};
      inline const vector<Result::Receivers> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Result::Receivers>) };
      inline vector<Result::Receivers> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<Result::Receivers>) };
      inline Result& setReceivers(const vector<Result::Receivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
      inline Result& setReceivers(vector<Result::Receivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


      // showOnlyWithAccess Field Functions 
      bool hasShowOnlyWithAccess() const { return this->showOnlyWithAccess_ != nullptr;};
      void deleteShowOnlyWithAccess() { this->showOnlyWithAccess_ = nullptr;};
      inline bool getShowOnlyWithAccess() const { DARABONBA_PTR_GET_DEFAULT(showOnlyWithAccess_, false) };
      inline Result& setShowOnlyWithAccess(bool showOnlyWithAccess) { DARABONBA_PTR_SET_VALUE(showOnlyWithAccess_, showOnlyWithAccess) };


    protected:
      // The menu ID of the BI portal leaf node.
      shared_ptr<string> menuId_ {};
      // The details of the object to which the menu is authorized.
      shared_ptr<vector<Result::Receivers>> receivers_ {};
      // Whether only authorization is visible. Valid values:
      // 
      // *   true: Only the authorization is visible.
      // *   false: Both are visible.
      shared_ptr<bool> showOnlyWithAccess_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPortalMenuAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListPortalMenuAuthorizationResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListPortalMenuAuthorizationResponseBody::Result>) };
    inline vector<ListPortalMenuAuthorizationResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListPortalMenuAuthorizationResponseBody::Result>) };
    inline ListPortalMenuAuthorizationResponseBody& setResult(const vector<ListPortalMenuAuthorizationResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPortalMenuAuthorizationResponseBody& setResult(vector<ListPortalMenuAuthorizationResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPortalMenuAuthorizationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of authorization details of the portal menu.
    shared_ptr<vector<ListPortalMenuAuthorizationResponseBody::Result>> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
