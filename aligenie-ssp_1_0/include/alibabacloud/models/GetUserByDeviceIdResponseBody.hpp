// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetUserByDeviceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserByDeviceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserByDeviceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetUserByDeviceIdResponseBody() = default ;
    GetUserByDeviceIdResponseBody(const GetUserByDeviceIdResponseBody &) = default ;
    GetUserByDeviceIdResponseBody(GetUserByDeviceIdResponseBody &&) = default ;
    GetUserByDeviceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserByDeviceIdResponseBody() = default ;
    GetUserByDeviceIdResponseBody& operator=(const GetUserByDeviceIdResponseBody &) = default ;
    GetUserByDeviceIdResponseBody& operator=(GetUserByDeviceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
        DARABONBA_PTR_TO_JSON(UserUnionIds, userUnionIds_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
        DARABONBA_PTR_FROM_JSON(UserUnionIds, userUnionIds_);
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
      class UserUnionIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserUnionIds& obj) { 
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_TO_JSON(UserUnionId, userUnionId_);
        };
        friend void from_json(const Darabonba::Json& j, UserUnionIds& obj) { 
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_FROM_JSON(UserUnionId, userUnionId_);
        };
        UserUnionIds() = default ;
        UserUnionIds(const UserUnionIds &) = default ;
        UserUnionIds(UserUnionIds &&) = default ;
        UserUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserUnionIds() = default ;
        UserUnionIds& operator=(const UserUnionIds &) = default ;
        UserUnionIds& operator=(UserUnionIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->organizationId_ == nullptr
        && this->userUnionId_ == nullptr; };
        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline UserUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


        // userUnionId Field Functions 
        bool hasUserUnionId() const { return this->userUnionId_ != nullptr;};
        void deleteUserUnionId() { this->userUnionId_ = nullptr;};
        inline string getUserUnionId() const { DARABONBA_PTR_GET_DEFAULT(userUnionId_, "") };
        inline UserUnionIds& setUserUnionId(string userUnionId) { DARABONBA_PTR_SET_VALUE(userUnionId_, userUnionId) };


      protected:
        // The organization ID.
        shared_ptr<string> organizationId_ {};
        // The user\\"s UnionID.
        shared_ptr<string> userUnionId_ {};
      };

      virtual bool empty() const override { return this->userOpenId_ == nullptr
        && this->userUnionIds_ == nullptr; };
      // userOpenId Field Functions 
      bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
      void deleteUserOpenId() { this->userOpenId_ = nullptr;};
      inline string getUserOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
      inline Result& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


      // userUnionIds Field Functions 
      bool hasUserUnionIds() const { return this->userUnionIds_ != nullptr;};
      void deleteUserUnionIds() { this->userUnionIds_ = nullptr;};
      inline const vector<Result::UserUnionIds> & getUserUnionIds() const { DARABONBA_PTR_GET_CONST(userUnionIds_, vector<Result::UserUnionIds>) };
      inline vector<Result::UserUnionIds> getUserUnionIds() { DARABONBA_PTR_GET(userUnionIds_, vector<Result::UserUnionIds>) };
      inline Result& setUserUnionIds(const vector<Result::UserUnionIds> & userUnionIds) { DARABONBA_PTR_SET_VALUE(userUnionIds_, userUnionIds) };
      inline Result& setUserUnionIds(vector<Result::UserUnionIds> && userUnionIds) { DARABONBA_PTR_SET_RVALUE(userUnionIds_, userUnionIds) };


    protected:
      // The openID corresponding to the user information.
      shared_ptr<string> userOpenId_ {};
      // The list of organization IDs and UnionIDs for the user.
      shared_ptr<vector<Result::UserUnionIds>> userUnionIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetUserByDeviceIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserByDeviceIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserByDeviceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetUserByDeviceIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetUserByDeviceIdResponseBody::Result) };
    inline GetUserByDeviceIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetUserByDeviceIdResponseBody::Result) };
    inline GetUserByDeviceIdResponseBody& setResult(const GetUserByDeviceIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetUserByDeviceIdResponseBody& setResult(GetUserByDeviceIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The error code returned. A value of 200 indicates that the call succeeded.
    shared_ptr<int32_t> code_ {};
    // The return result of invoking this API.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of user information returned.
    shared_ptr<GetUserByDeviceIdResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
