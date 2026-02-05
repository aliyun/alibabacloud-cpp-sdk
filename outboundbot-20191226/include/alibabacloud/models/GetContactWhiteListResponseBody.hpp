// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetContactWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContactWhitelistList, contactWhitelistList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContactWhitelistList, contactWhitelistList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetContactWhiteListResponseBody() = default ;
    GetContactWhiteListResponseBody(const GetContactWhiteListResponseBody &) = default ;
    GetContactWhiteListResponseBody(GetContactWhiteListResponseBody &&) = default ;
    GetContactWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactWhiteListResponseBody() = default ;
    GetContactWhiteListResponseBody& operator=(const GetContactWhiteListResponseBody &) = default ;
    GetContactWhiteListResponseBody& operator=(GetContactWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactWhitelistList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactWhitelistList& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ContactWhitelistList& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ContactWhitelistList() = default ;
      ContactWhitelistList(const ContactWhitelistList &) = default ;
      ContactWhitelistList(ContactWhitelistList &&) = default ;
      ContactWhitelistList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactWhitelistList() = default ;
      ContactWhitelistList& operator=(const ContactWhitelistList &) = default ;
      ContactWhitelistList& operator=(ContactWhitelistList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ContactWhiteListId, contactWhiteListId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactWhiteListId, contactWhiteListId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactWhiteListId_ == nullptr
        && this->creationTime_ == nullptr && this->creator_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->operator_ == nullptr
        && this->phoneNumber_ == nullptr && this->remark_ == nullptr; };
        // contactWhiteListId Field Functions 
        bool hasContactWhiteListId() const { return this->contactWhiteListId_ != nullptr;};
        void deleteContactWhiteListId() { this->contactWhiteListId_ = nullptr;};
        inline string getContactWhiteListId() const { DARABONBA_PTR_GET_DEFAULT(contactWhiteListId_, "") };
        inline List& setContactWhiteListId(string contactWhiteListId) { DARABONBA_PTR_SET_VALUE(contactWhiteListId_, contactWhiteListId) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
        inline List& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline List& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline List& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline List& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline List& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> contactWhiteListId_ {};
        shared_ptr<int64_t> creationTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> phoneNumber_ {};
        shared_ptr<string> remark_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<ContactWhitelistList::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ContactWhitelistList::List>) };
      inline vector<ContactWhitelistList::List> getList() { DARABONBA_PTR_GET(list_, vector<ContactWhitelistList::List>) };
      inline ContactWhitelistList& setList(const vector<ContactWhitelistList::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline ContactWhitelistList& setList(vector<ContactWhitelistList::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ContactWhitelistList& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ContactWhitelistList& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ContactWhitelistList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<ContactWhitelistList::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->contactWhitelistList_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetContactWhiteListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contactWhitelistList Field Functions 
    bool hasContactWhitelistList() const { return this->contactWhitelistList_ != nullptr;};
    void deleteContactWhitelistList() { this->contactWhitelistList_ = nullptr;};
    inline const GetContactWhiteListResponseBody::ContactWhitelistList & getContactWhitelistList() const { DARABONBA_PTR_GET_CONST(contactWhitelistList_, GetContactWhiteListResponseBody::ContactWhitelistList) };
    inline GetContactWhiteListResponseBody::ContactWhitelistList getContactWhitelistList() { DARABONBA_PTR_GET(contactWhitelistList_, GetContactWhiteListResponseBody::ContactWhitelistList) };
    inline GetContactWhiteListResponseBody& setContactWhitelistList(const GetContactWhiteListResponseBody::ContactWhitelistList & contactWhitelistList) { DARABONBA_PTR_SET_VALUE(contactWhitelistList_, contactWhitelistList) };
    inline GetContactWhiteListResponseBody& setContactWhitelistList(GetContactWhiteListResponseBody::ContactWhitelistList && contactWhitelistList) { DARABONBA_PTR_SET_RVALUE(contactWhitelistList_, contactWhitelistList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetContactWhiteListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetContactWhiteListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContactWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetContactWhiteListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetContactWhiteListResponseBody::ContactWhitelistList> contactWhitelistList_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
