// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class ListContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListContactsResponseBody() = default ;
    ListContactsResponseBody(const ListContactsResponseBody &) = default ;
    ListContactsResponseBody(ListContactsResponseBody &&) = default ;
    ListContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactsResponseBody() = default ;
    ListContactsResponseBody& operator=(const ListContactsResponseBody &) = default ;
    ListContactsResponseBody& operator=(ListContactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ContactName, contactName_);
        DARABONBA_PTR_TO_JSON(ContactPhone, contactPhone_);
        DARABONBA_PTR_TO_JSON(MailStatus, mailStatus_);
        DARABONBA_PTR_TO_JSON(Main, main_);
        DARABONBA_PTR_TO_JSON(OpenStatusWarning, openStatusWarning_);
        DARABONBA_PTR_TO_JSON(OpentAttributionWarning, opentAttributionWarning_);
        DARABONBA_PTR_TO_JSON(PhoneStatus, phoneStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
        DARABONBA_PTR_FROM_JSON(ContactPhone, contactPhone_);
        DARABONBA_PTR_FROM_JSON(MailStatus, mailStatus_);
        DARABONBA_PTR_FROM_JSON(Main, main_);
        DARABONBA_PTR_FROM_JSON(OpenStatusWarning, openStatusWarning_);
        DARABONBA_PTR_FROM_JSON(OpentAttributionWarning, opentAttributionWarning_);
        DARABONBA_PTR_FROM_JSON(PhoneStatus, phoneStatus_);
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
      virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactId_ == nullptr && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->mailStatus_ == nullptr && this->main_ == nullptr
        && this->openStatusWarning_ == nullptr && this->opentAttributionWarning_ == nullptr && this->phoneStatus_ == nullptr; };
      // contactEmail Field Functions 
      bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
      void deleteContactEmail() { this->contactEmail_ = nullptr;};
      inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
      inline Data& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
      inline Data& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Data& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // contactPhone Field Functions 
      bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
      void deleteContactPhone() { this->contactPhone_ = nullptr;};
      inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
      inline Data& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


      // mailStatus Field Functions 
      bool hasMailStatus() const { return this->mailStatus_ != nullptr;};
      void deleteMailStatus() { this->mailStatus_ = nullptr;};
      inline int32_t getMailStatus() const { DARABONBA_PTR_GET_DEFAULT(mailStatus_, 0) };
      inline Data& setMailStatus(int32_t mailStatus) { DARABONBA_PTR_SET_VALUE(mailStatus_, mailStatus) };


      // main Field Functions 
      bool hasMain() const { return this->main_ != nullptr;};
      void deleteMain() { this->main_ = nullptr;};
      inline int32_t getMain() const { DARABONBA_PTR_GET_DEFAULT(main_, 0) };
      inline Data& setMain(int32_t main) { DARABONBA_PTR_SET_VALUE(main_, main) };


      // openStatusWarning Field Functions 
      bool hasOpenStatusWarning() const { return this->openStatusWarning_ != nullptr;};
      void deleteOpenStatusWarning() { this->openStatusWarning_ = nullptr;};
      inline bool getOpenStatusWarning() const { DARABONBA_PTR_GET_DEFAULT(openStatusWarning_, false) };
      inline Data& setOpenStatusWarning(bool openStatusWarning) { DARABONBA_PTR_SET_VALUE(openStatusWarning_, openStatusWarning) };


      // opentAttributionWarning Field Functions 
      bool hasOpentAttributionWarning() const { return this->opentAttributionWarning_ != nullptr;};
      void deleteOpentAttributionWarning() { this->opentAttributionWarning_ = nullptr;};
      inline bool getOpentAttributionWarning() const { DARABONBA_PTR_GET_DEFAULT(opentAttributionWarning_, false) };
      inline Data& setOpentAttributionWarning(bool opentAttributionWarning) { DARABONBA_PTR_SET_VALUE(opentAttributionWarning_, opentAttributionWarning) };


      // phoneStatus Field Functions 
      bool hasPhoneStatus() const { return this->phoneStatus_ != nullptr;};
      void deletePhoneStatus() { this->phoneStatus_ = nullptr;};
      inline int32_t getPhoneStatus() const { DARABONBA_PTR_GET_DEFAULT(phoneStatus_, 0) };
      inline Data& setPhoneStatus(int32_t phoneStatus) { DARABONBA_PTR_SET_VALUE(phoneStatus_, phoneStatus) };


    protected:
      shared_ptr<string> contactEmail_ {};
      shared_ptr<int64_t> contactId_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<string> contactPhone_ {};
      shared_ptr<int32_t> mailStatus_ {};
      shared_ptr<int32_t> main_ {};
      shared_ptr<bool> openStatusWarning_ {};
      shared_ptr<bool> opentAttributionWarning_ {};
      shared_ptr<int32_t> phoneStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContactsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListContactsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListContactsResponseBody::Data>) };
    inline vector<ListContactsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListContactsResponseBody::Data>) };
    inline ListContactsResponseBody& setData(const vector<ListContactsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContactsResponseBody& setData(vector<ListContactsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContactsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListContactsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
