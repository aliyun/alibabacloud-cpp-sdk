// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESASLUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESASLUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeSaslUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSaslUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaslUserList, saslUserList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSaslUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaslUserList, saslUserList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSaslUsersResponseBody() = default ;
    DescribeSaslUsersResponseBody(const DescribeSaslUsersResponseBody &) = default ;
    DescribeSaslUsersResponseBody(DescribeSaslUsersResponseBody &&) = default ;
    DescribeSaslUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSaslUsersResponseBody() = default ;
    DescribeSaslUsersResponseBody& operator=(const DescribeSaslUsersResponseBody &) = default ;
    DescribeSaslUsersResponseBody& operator=(DescribeSaslUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaslUserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaslUserList& obj) { 
        DARABONBA_PTR_TO_JSON(SaslUserVO, saslUserVO_);
      };
      friend void from_json(const Darabonba::Json& j, SaslUserList& obj) { 
        DARABONBA_PTR_FROM_JSON(SaslUserVO, saslUserVO_);
      };
      SaslUserList() = default ;
      SaslUserList(const SaslUserList &) = default ;
      SaslUserList(SaslUserList &&) = default ;
      SaslUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaslUserList() = default ;
      SaslUserList& operator=(const SaslUserList &) = default ;
      SaslUserList& operator=(SaslUserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SaslUserVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SaslUserVO& obj) { 
          DARABONBA_PTR_TO_JSON(Mechanism, mechanism_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, SaslUserVO& obj) { 
          DARABONBA_PTR_FROM_JSON(Mechanism, mechanism_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        SaslUserVO() = default ;
        SaslUserVO(const SaslUserVO &) = default ;
        SaslUserVO(SaslUserVO &&) = default ;
        SaslUserVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SaslUserVO() = default ;
        SaslUserVO& operator=(const SaslUserVO &) = default ;
        SaslUserVO& operator=(SaslUserVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mechanism_ == nullptr
        && this->password_ == nullptr && this->type_ == nullptr && this->username_ == nullptr; };
        // mechanism Field Functions 
        bool hasMechanism() const { return this->mechanism_ != nullptr;};
        void deleteMechanism() { this->mechanism_ = nullptr;};
        inline string getMechanism() const { DARABONBA_PTR_GET_DEFAULT(mechanism_, "") };
        inline SaslUserVO& setMechanism(string mechanism) { DARABONBA_PTR_SET_VALUE(mechanism_, mechanism) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline SaslUserVO& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SaslUserVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline SaslUserVO& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> mechanism_ {};
        shared_ptr<string> password_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->saslUserVO_ == nullptr; };
      // saslUserVO Field Functions 
      bool hasSaslUserVO() const { return this->saslUserVO_ != nullptr;};
      void deleteSaslUserVO() { this->saslUserVO_ = nullptr;};
      inline const vector<SaslUserList::SaslUserVO> & getSaslUserVO() const { DARABONBA_PTR_GET_CONST(saslUserVO_, vector<SaslUserList::SaslUserVO>) };
      inline vector<SaslUserList::SaslUserVO> getSaslUserVO() { DARABONBA_PTR_GET(saslUserVO_, vector<SaslUserList::SaslUserVO>) };
      inline SaslUserList& setSaslUserVO(const vector<SaslUserList::SaslUserVO> & saslUserVO) { DARABONBA_PTR_SET_VALUE(saslUserVO_, saslUserVO) };
      inline SaslUserList& setSaslUserVO(vector<SaslUserList::SaslUserVO> && saslUserVO) { DARABONBA_PTR_SET_RVALUE(saslUserVO_, saslUserVO) };


    protected:
      shared_ptr<vector<SaslUserList::SaslUserVO>> saslUserVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->saslUserList_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeSaslUsersResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSaslUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSaslUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saslUserList Field Functions 
    bool hasSaslUserList() const { return this->saslUserList_ != nullptr;};
    void deleteSaslUserList() { this->saslUserList_ = nullptr;};
    inline const DescribeSaslUsersResponseBody::SaslUserList & getSaslUserList() const { DARABONBA_PTR_GET_CONST(saslUserList_, DescribeSaslUsersResponseBody::SaslUserList) };
    inline DescribeSaslUsersResponseBody::SaslUserList getSaslUserList() { DARABONBA_PTR_GET(saslUserList_, DescribeSaslUsersResponseBody::SaslUserList) };
    inline DescribeSaslUsersResponseBody& setSaslUserList(const DescribeSaslUsersResponseBody::SaslUserList & saslUserList) { DARABONBA_PTR_SET_VALUE(saslUserList_, saslUserList) };
    inline DescribeSaslUsersResponseBody& setSaslUserList(DescribeSaslUsersResponseBody::SaslUserList && saslUserList) { DARABONBA_PTR_SET_RVALUE(saslUserList_, saslUserList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSaslUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSaslUsersResponseBody::SaslUserList> saslUserList_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
