// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDALLCONTACTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDALLCONTACTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindAllContacterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindAllContacterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindAllContacterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindAllContacterResponseBody() = default ;
    FindAllContacterResponseBody(const FindAllContacterResponseBody &) = default ;
    FindAllContacterResponseBody(FindAllContacterResponseBody &&) = default ;
    FindAllContacterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindAllContacterResponseBody() = default ;
    FindAllContacterResponseBody& operator=(const FindAllContacterResponseBody &) = default ;
    FindAllContacterResponseBody& operator=(FindAllContacterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContacterInfo, contacterInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContacterInfo, contacterInfo_);
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
      class ContacterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContacterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ContacterAddress, contacterAddress_);
          DARABONBA_PTR_TO_JSON(ContacterDingding, contacterDingding_);
          DARABONBA_PTR_TO_JSON(ContacterEmail, contacterEmail_);
          DARABONBA_PTR_TO_JSON(ContacterId, contacterId_);
          DARABONBA_PTR_TO_JSON(ContacterMobile, contacterMobile_);
          DARABONBA_PTR_TO_JSON(ContacterName, contacterName_);
          DARABONBA_PTR_TO_JSON(ContacterPosition, contacterPosition_);
          DARABONBA_PTR_TO_JSON(ContacterStaffNo, contacterStaffNo_);
          DARABONBA_PTR_TO_JSON(ContacterType, contacterType_);
          DARABONBA_PTR_TO_JSON(ContacterWangwang, contacterWangwang_);
          DARABONBA_PTR_TO_JSON(EmailConfirmed, emailConfirmed_);
          DARABONBA_PTR_TO_JSON(MobileConfirmed, mobileConfirmed_);
        };
        friend void from_json(const Darabonba::Json& j, ContacterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ContacterAddress, contacterAddress_);
          DARABONBA_PTR_FROM_JSON(ContacterDingding, contacterDingding_);
          DARABONBA_PTR_FROM_JSON(ContacterEmail, contacterEmail_);
          DARABONBA_PTR_FROM_JSON(ContacterId, contacterId_);
          DARABONBA_PTR_FROM_JSON(ContacterMobile, contacterMobile_);
          DARABONBA_PTR_FROM_JSON(ContacterName, contacterName_);
          DARABONBA_PTR_FROM_JSON(ContacterPosition, contacterPosition_);
          DARABONBA_PTR_FROM_JSON(ContacterStaffNo, contacterStaffNo_);
          DARABONBA_PTR_FROM_JSON(ContacterType, contacterType_);
          DARABONBA_PTR_FROM_JSON(ContacterWangwang, contacterWangwang_);
          DARABONBA_PTR_FROM_JSON(EmailConfirmed, emailConfirmed_);
          DARABONBA_PTR_FROM_JSON(MobileConfirmed, mobileConfirmed_);
        };
        ContacterInfo() = default ;
        ContacterInfo(const ContacterInfo &) = default ;
        ContacterInfo(ContacterInfo &&) = default ;
        ContacterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContacterInfo() = default ;
        ContacterInfo& operator=(const ContacterInfo &) = default ;
        ContacterInfo& operator=(ContacterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contacterAddress_ == nullptr
        && this->contacterDingding_ == nullptr && this->contacterEmail_ == nullptr && this->contacterId_ == nullptr && this->contacterMobile_ == nullptr && this->contacterName_ == nullptr
        && this->contacterPosition_ == nullptr && this->contacterStaffNo_ == nullptr && this->contacterType_ == nullptr && this->contacterWangwang_ == nullptr && this->emailConfirmed_ == nullptr
        && this->mobileConfirmed_ == nullptr; };
        // contacterAddress Field Functions 
        bool hasContacterAddress() const { return this->contacterAddress_ != nullptr;};
        void deleteContacterAddress() { this->contacterAddress_ = nullptr;};
        inline string getContacterAddress() const { DARABONBA_PTR_GET_DEFAULT(contacterAddress_, "") };
        inline ContacterInfo& setContacterAddress(string contacterAddress) { DARABONBA_PTR_SET_VALUE(contacterAddress_, contacterAddress) };


        // contacterDingding Field Functions 
        bool hasContacterDingding() const { return this->contacterDingding_ != nullptr;};
        void deleteContacterDingding() { this->contacterDingding_ = nullptr;};
        inline string getContacterDingding() const { DARABONBA_PTR_GET_DEFAULT(contacterDingding_, "") };
        inline ContacterInfo& setContacterDingding(string contacterDingding) { DARABONBA_PTR_SET_VALUE(contacterDingding_, contacterDingding) };


        // contacterEmail Field Functions 
        bool hasContacterEmail() const { return this->contacterEmail_ != nullptr;};
        void deleteContacterEmail() { this->contacterEmail_ = nullptr;};
        inline string getContacterEmail() const { DARABONBA_PTR_GET_DEFAULT(contacterEmail_, "") };
        inline ContacterInfo& setContacterEmail(string contacterEmail) { DARABONBA_PTR_SET_VALUE(contacterEmail_, contacterEmail) };


        // contacterId Field Functions 
        bool hasContacterId() const { return this->contacterId_ != nullptr;};
        void deleteContacterId() { this->contacterId_ = nullptr;};
        inline int64_t getContacterId() const { DARABONBA_PTR_GET_DEFAULT(contacterId_, 0L) };
        inline ContacterInfo& setContacterId(int64_t contacterId) { DARABONBA_PTR_SET_VALUE(contacterId_, contacterId) };


        // contacterMobile Field Functions 
        bool hasContacterMobile() const { return this->contacterMobile_ != nullptr;};
        void deleteContacterMobile() { this->contacterMobile_ = nullptr;};
        inline string getContacterMobile() const { DARABONBA_PTR_GET_DEFAULT(contacterMobile_, "") };
        inline ContacterInfo& setContacterMobile(string contacterMobile) { DARABONBA_PTR_SET_VALUE(contacterMobile_, contacterMobile) };


        // contacterName Field Functions 
        bool hasContacterName() const { return this->contacterName_ != nullptr;};
        void deleteContacterName() { this->contacterName_ = nullptr;};
        inline string getContacterName() const { DARABONBA_PTR_GET_DEFAULT(contacterName_, "") };
        inline ContacterInfo& setContacterName(string contacterName) { DARABONBA_PTR_SET_VALUE(contacterName_, contacterName) };


        // contacterPosition Field Functions 
        bool hasContacterPosition() const { return this->contacterPosition_ != nullptr;};
        void deleteContacterPosition() { this->contacterPosition_ = nullptr;};
        inline string getContacterPosition() const { DARABONBA_PTR_GET_DEFAULT(contacterPosition_, "") };
        inline ContacterInfo& setContacterPosition(string contacterPosition) { DARABONBA_PTR_SET_VALUE(contacterPosition_, contacterPosition) };


        // contacterStaffNo Field Functions 
        bool hasContacterStaffNo() const { return this->contacterStaffNo_ != nullptr;};
        void deleteContacterStaffNo() { this->contacterStaffNo_ = nullptr;};
        inline string getContacterStaffNo() const { DARABONBA_PTR_GET_DEFAULT(contacterStaffNo_, "") };
        inline ContacterInfo& setContacterStaffNo(string contacterStaffNo) { DARABONBA_PTR_SET_VALUE(contacterStaffNo_, contacterStaffNo) };


        // contacterType Field Functions 
        bool hasContacterType() const { return this->contacterType_ != nullptr;};
        void deleteContacterType() { this->contacterType_ = nullptr;};
        inline string getContacterType() const { DARABONBA_PTR_GET_DEFAULT(contacterType_, "") };
        inline ContacterInfo& setContacterType(string contacterType) { DARABONBA_PTR_SET_VALUE(contacterType_, contacterType) };


        // contacterWangwang Field Functions 
        bool hasContacterWangwang() const { return this->contacterWangwang_ != nullptr;};
        void deleteContacterWangwang() { this->contacterWangwang_ = nullptr;};
        inline string getContacterWangwang() const { DARABONBA_PTR_GET_DEFAULT(contacterWangwang_, "") };
        inline ContacterInfo& setContacterWangwang(string contacterWangwang) { DARABONBA_PTR_SET_VALUE(contacterWangwang_, contacterWangwang) };


        // emailConfirmed Field Functions 
        bool hasEmailConfirmed() const { return this->emailConfirmed_ != nullptr;};
        void deleteEmailConfirmed() { this->emailConfirmed_ = nullptr;};
        inline bool getEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(emailConfirmed_, false) };
        inline ContacterInfo& setEmailConfirmed(bool emailConfirmed) { DARABONBA_PTR_SET_VALUE(emailConfirmed_, emailConfirmed) };


        // mobileConfirmed Field Functions 
        bool hasMobileConfirmed() const { return this->mobileConfirmed_ != nullptr;};
        void deleteMobileConfirmed() { this->mobileConfirmed_ = nullptr;};
        inline bool getMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(mobileConfirmed_, false) };
        inline ContacterInfo& setMobileConfirmed(bool mobileConfirmed) { DARABONBA_PTR_SET_VALUE(mobileConfirmed_, mobileConfirmed) };


      protected:
        shared_ptr<string> contacterAddress_ {};
        shared_ptr<string> contacterDingding_ {};
        shared_ptr<string> contacterEmail_ {};
        shared_ptr<int64_t> contacterId_ {};
        shared_ptr<string> contacterMobile_ {};
        shared_ptr<string> contacterName_ {};
        shared_ptr<string> contacterPosition_ {};
        shared_ptr<string> contacterStaffNo_ {};
        shared_ptr<string> contacterType_ {};
        shared_ptr<string> contacterWangwang_ {};
        shared_ptr<bool> emailConfirmed_ {};
        shared_ptr<bool> mobileConfirmed_ {};
      };

      virtual bool empty() const override { return this->contacterInfo_ == nullptr; };
      // contacterInfo Field Functions 
      bool hasContacterInfo() const { return this->contacterInfo_ != nullptr;};
      void deleteContacterInfo() { this->contacterInfo_ = nullptr;};
      inline const vector<Data::ContacterInfo> & getContacterInfo() const { DARABONBA_PTR_GET_CONST(contacterInfo_, vector<Data::ContacterInfo>) };
      inline vector<Data::ContacterInfo> getContacterInfo() { DARABONBA_PTR_GET(contacterInfo_, vector<Data::ContacterInfo>) };
      inline Data& setContacterInfo(const vector<Data::ContacterInfo> & contacterInfo) { DARABONBA_PTR_SET_VALUE(contacterInfo_, contacterInfo) };
      inline Data& setContacterInfo(vector<Data::ContacterInfo> && contacterInfo) { DARABONBA_PTR_SET_RVALUE(contacterInfo_, contacterInfo) };


    protected:
      shared_ptr<vector<Data::ContacterInfo>> contacterInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FindAllContacterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FindAllContacterResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, FindAllContacterResponseBody::Data) };
    inline FindAllContacterResponseBody::Data getData() { DARABONBA_PTR_GET(data_, FindAllContacterResponseBody::Data) };
    inline FindAllContacterResponseBody& setData(const FindAllContacterResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FindAllContacterResponseBody& setData(FindAllContacterResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindAllContacterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindAllContacterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindAllContacterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FindAllContacterResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
