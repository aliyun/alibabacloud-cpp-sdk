// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPPMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPPMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceAppMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAppMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAppMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceAppMembersResponseBody() = default ;
    GetDataServiceAppMembersResponseBody(const GetDataServiceAppMembersResponseBody &) = default ;
    GetDataServiceAppMembersResponseBody(GetDataServiceAppMembersResponseBody &&) = default ;
    GetDataServiceAppMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAppMembersResponseBody() = default ;
    GetDataServiceAppMembersResponseBody& operator=(const GetDataServiceAppMembersResponseBody &) = default ;
    GetDataServiceAppMembersResponseBody& operator=(GetDataServiceAppMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
          DARABONBA_PTR_TO_JSON(EffectiveEnd, effectiveEnd_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(EffectiveEnd, effectiveEnd_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        MemberList() = default ;
        MemberList(const MemberList &) = default ;
        MemberList(MemberList &&) = default ;
        MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemberList() = default ;
        MemberList& operator=(const MemberList &) = default ;
        MemberList& operator=(MemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->effectiveEnd_ == nullptr
        && this->role_ == nullptr && this->userId_ == nullptr; };
        // effectiveEnd Field Functions 
        bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
        void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
        inline string getEffectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
        inline MemberList& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline MemberList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline MemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The authorization expiration time.
        shared_ptr<string> effectiveEnd_ {};
        // The role of the user. Valid values:
        // 
        // - general: regular member.
        // - owner: application owner.
        shared_ptr<string> role_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->memberList_ == nullptr; };
      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<Data::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<Data::MemberList>) };
      inline vector<Data::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<Data::MemberList>) };
      inline Data& setMemberList(const vector<Data::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline Data& setMemberList(vector<Data::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    protected:
      // The application member list.
      shared_ptr<vector<Data::MemberList>> memberList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceAppMembersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceAppMembersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceAppMembersResponseBody::Data) };
    inline GetDataServiceAppMembersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataServiceAppMembersResponseBody::Data) };
    inline GetDataServiceAppMembersResponseBody& setData(const GetDataServiceAppMembersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceAppMembersResponseBody& setData(GetDataServiceAppMembersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceAppMembersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceAppMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceAppMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceAppMembersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The member list of the data service application.
    shared_ptr<GetDataServiceAppMembersResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned from the backend.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
