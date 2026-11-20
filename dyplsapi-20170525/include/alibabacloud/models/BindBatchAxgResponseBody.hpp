// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretBindList, secretBindList_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretBindList, secretBindList_);
    };
    BindBatchAxgResponseBody() = default ;
    BindBatchAxgResponseBody(const BindBatchAxgResponseBody &) = default ;
    BindBatchAxgResponseBody(BindBatchAxgResponseBody &&) = default ;
    BindBatchAxgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgResponseBody() = default ;
    BindBatchAxgResponseBody& operator=(const BindBatchAxgResponseBody &) = default ;
    BindBatchAxgResponseBody& operator=(BindBatchAxgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretBindList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretBindList& obj) { 
        DARABONBA_PTR_TO_JSON(SecretBind, secretBind_);
      };
      friend void from_json(const Darabonba::Json& j, SecretBindList& obj) { 
        DARABONBA_PTR_FROM_JSON(SecretBind, secretBind_);
      };
      SecretBindList() = default ;
      SecretBindList(const SecretBindList &) = default ;
      SecretBindList(SecretBindList &&) = default ;
      SecretBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretBindList() = default ;
      SecretBindList& operator=(const SecretBindList &) = default ;
      SecretBindList& operator=(SecretBindList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecretBind : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecretBind& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
          DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
          DARABONBA_PTR_TO_JSON(SubsId, subsId_);
        };
        friend void from_json(const Darabonba::Json& j, SecretBind& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
          DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
          DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
        };
        SecretBind() = default ;
        SecretBind(const SecretBind &) = default ;
        SecretBind(SecretBind &&) = default ;
        SecretBind(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecretBind() = default ;
        SecretBind& operator=(const SecretBind &) = default ;
        SecretBind& operator=(SecretBind &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->extension_ == nullptr && this->groupId_ == nullptr && this->message_ == nullptr && this->phoneNoA_ == nullptr && this->secretNo_ == nullptr
        && this->subsId_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SecretBind& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline SecretBind& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline SecretBind& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline SecretBind& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // phoneNoA Field Functions 
        bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
        void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
        inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
        inline SecretBind& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


        // secretNo Field Functions 
        bool hasSecretNo() const { return this->secretNo_ != nullptr;};
        void deleteSecretNo() { this->secretNo_ = nullptr;};
        inline string getSecretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
        inline SecretBind& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


        // subsId Field Functions 
        bool hasSubsId() const { return this->subsId_ != nullptr;};
        void deleteSubsId() { this->subsId_ = nullptr;};
        inline string getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
        inline SecretBind& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> phoneNoA_ {};
        shared_ptr<string> secretNo_ {};
        shared_ptr<string> subsId_ {};
      };

      virtual bool empty() const override { return this->secretBind_ == nullptr; };
      // secretBind Field Functions 
      bool hasSecretBind() const { return this->secretBind_ != nullptr;};
      void deleteSecretBind() { this->secretBind_ = nullptr;};
      inline const vector<SecretBindList::SecretBind> & getSecretBind() const { DARABONBA_PTR_GET_CONST(secretBind_, vector<SecretBindList::SecretBind>) };
      inline vector<SecretBindList::SecretBind> getSecretBind() { DARABONBA_PTR_GET(secretBind_, vector<SecretBindList::SecretBind>) };
      inline SecretBindList& setSecretBind(const vector<SecretBindList::SecretBind> & secretBind) { DARABONBA_PTR_SET_VALUE(secretBind_, secretBind) };
      inline SecretBindList& setSecretBind(vector<SecretBindList::SecretBind> && secretBind) { DARABONBA_PTR_SET_RVALUE(secretBind_, secretBind) };


    protected:
      shared_ptr<vector<SecretBindList::SecretBind>> secretBind_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secretBindList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindBatchAxgResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindBatchAxgResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindBatchAxgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretBindList Field Functions 
    bool hasSecretBindList() const { return this->secretBindList_ != nullptr;};
    void deleteSecretBindList() { this->secretBindList_ = nullptr;};
    inline const BindBatchAxgResponseBody::SecretBindList & getSecretBindList() const { DARABONBA_PTR_GET_CONST(secretBindList_, BindBatchAxgResponseBody::SecretBindList) };
    inline BindBatchAxgResponseBody::SecretBindList getSecretBindList() { DARABONBA_PTR_GET(secretBindList_, BindBatchAxgResponseBody::SecretBindList) };
    inline BindBatchAxgResponseBody& setSecretBindList(const BindBatchAxgResponseBody::SecretBindList & secretBindList) { DARABONBA_PTR_SET_VALUE(secretBindList_, secretBindList) };
    inline BindBatchAxgResponseBody& setSecretBindList(BindBatchAxgResponseBody::SecretBindList && secretBindList) { DARABONBA_PTR_SET_RVALUE(secretBindList_, secretBindList) };


  protected:
    // The request status code.
    // 
    // - A value of `OK` indicates that the request succeeded.
    // 
    // - For a list of other error codes, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // A unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // The returned data.
    shared_ptr<BindBatchAxgResponseBody::SecretBindList> secretBindList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
