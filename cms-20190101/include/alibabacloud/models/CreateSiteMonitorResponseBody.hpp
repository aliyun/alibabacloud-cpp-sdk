// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateResultList, createResultList_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateResultList, createResultList_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSiteMonitorResponseBody() = default ;
    CreateSiteMonitorResponseBody(const CreateSiteMonitorResponseBody &) = default ;
    CreateSiteMonitorResponseBody(CreateSiteMonitorResponseBody &&) = default ;
    CreateSiteMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorResponseBody() = default ;
    CreateSiteMonitorResponseBody& operator=(const CreateSiteMonitorResponseBody &) = default ;
    CreateSiteMonitorResponseBody& operator=(CreateSiteMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AttachAlertResult, attachAlertResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachAlertResult, attachAlertResult_);
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
      class AttachAlertResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachAlertResult& obj) { 
          DARABONBA_PTR_TO_JSON(Contact, contact_);
        };
        friend void from_json(const Darabonba::Json& j, AttachAlertResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Contact, contact_);
        };
        AttachAlertResult() = default ;
        AttachAlertResult(const AttachAlertResult &) = default ;
        AttachAlertResult(AttachAlertResult &&) = default ;
        AttachAlertResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachAlertResult() = default ;
        AttachAlertResult& operator=(const AttachAlertResult &) = default ;
        AttachAlertResult& operator=(AttachAlertResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Contact : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contact& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(RequestId, requestId_);
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            DARABONBA_PTR_TO_JSON(Success, success_);
          };
          friend void from_json(const Darabonba::Json& j, Contact& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
            DARABONBA_PTR_FROM_JSON(Success, success_);
          };
          Contact() = default ;
          Contact(const Contact &) = default ;
          Contact(Contact &&) = default ;
          Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Contact() = default ;
          Contact& operator=(const Contact &) = default ;
          Contact& operator=(Contact &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->ruleId_ == nullptr && this->success_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Contact& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Contact& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // requestId Field Functions 
          bool hasRequestId() const { return this->requestId_ != nullptr;};
          void deleteRequestId() { this->requestId_ = nullptr;};
          inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
          inline Contact& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
          inline Contact& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // success Field Functions 
          bool hasSuccess() const { return this->success_ != nullptr;};
          void deleteSuccess() { this->success_ = nullptr;};
          inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
          inline Contact& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        protected:
          // The status code that is returned after you associate the existing alert rule with the site monitoring task.
          // 
          // >  The status code 200 indicates that the request was successful.
          shared_ptr<string> code_ {};
          // The message that is returned after you associate the existing alert rule with the site monitoring task.
          shared_ptr<string> message_ {};
          // The ID of the request that was sent to associate the existing alert rule with the site monitoring task.
          shared_ptr<string> requestId_ {};
          // The ID of the alert rule.
          shared_ptr<string> ruleId_ {};
          // Indicates whether the existing alert rule was associated with the site monitoring task. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<string> success_ {};
        };

        virtual bool empty() const override { return this->contact_ == nullptr; };
        // contact Field Functions 
        bool hasContact() const { return this->contact_ != nullptr;};
        void deleteContact() { this->contact_ = nullptr;};
        inline const vector<AttachAlertResult::Contact> & getContact() const { DARABONBA_PTR_GET_CONST(contact_, vector<AttachAlertResult::Contact>) };
        inline vector<AttachAlertResult::Contact> getContact() { DARABONBA_PTR_GET(contact_, vector<AttachAlertResult::Contact>) };
        inline AttachAlertResult& setContact(const vector<AttachAlertResult::Contact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
        inline AttachAlertResult& setContact(vector<AttachAlertResult::Contact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


      protected:
        shared_ptr<vector<AttachAlertResult::Contact>> contact_ {};
      };

      virtual bool empty() const override { return this->attachAlertResult_ == nullptr; };
      // attachAlertResult Field Functions 
      bool hasAttachAlertResult() const { return this->attachAlertResult_ != nullptr;};
      void deleteAttachAlertResult() { this->attachAlertResult_ = nullptr;};
      inline const Data::AttachAlertResult & getAttachAlertResult() const { DARABONBA_PTR_GET_CONST(attachAlertResult_, Data::AttachAlertResult) };
      inline Data::AttachAlertResult getAttachAlertResult() { DARABONBA_PTR_GET(attachAlertResult_, Data::AttachAlertResult) };
      inline Data& setAttachAlertResult(const Data::AttachAlertResult & attachAlertResult) { DARABONBA_PTR_SET_VALUE(attachAlertResult_, attachAlertResult) };
      inline Data& setAttachAlertResult(Data::AttachAlertResult && attachAlertResult) { DARABONBA_PTR_SET_RVALUE(attachAlertResult_, attachAlertResult) };


    protected:
      // The result that is returned after you associate the existing alert rule with the site monitoring task.
      shared_ptr<Data::AttachAlertResult> attachAlertResult_ {};
    };

    class CreateResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateResultList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateResultList, createResultList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateResultList, createResultList_);
      };
      CreateResultList() = default ;
      CreateResultList(const CreateResultList &) = default ;
      CreateResultList(CreateResultList &&) = default ;
      CreateResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateResultList() = default ;
      CreateResultList& operator=(const CreateResultList &) = default ;
      CreateResultList& operator=(CreateResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CreateResultListItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreateResultListItem& obj) { 
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        };
        friend void from_json(const Darabonba::Json& j, CreateResultListItem& obj) { 
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        };
        CreateResultListItem() = default ;
        CreateResultListItem(const CreateResultListItem &) = default ;
        CreateResultListItem(CreateResultListItem &&) = default ;
        CreateResultListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreateResultListItem() = default ;
        CreateResultListItem& operator=(const CreateResultListItem &) = default ;
        CreateResultListItem& operator=(CreateResultListItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->taskId_ == nullptr
        && this->taskName_ == nullptr; };
        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline CreateResultListItem& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline CreateResultListItem& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      protected:
        // The ID of the site monitoring task.
        shared_ptr<string> taskId_ {};
        // The name of the site monitoring task.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->createResultList_ == nullptr; };
      // createResultList Field Functions 
      bool hasCreateResultList() const { return this->createResultList_ != nullptr;};
      void deleteCreateResultList() { this->createResultList_ = nullptr;};
      inline const vector<CreateResultList::CreateResultListItem> & getCreateResultList() const { DARABONBA_PTR_GET_CONST(createResultList_, vector<CreateResultList::CreateResultListItem>) };
      inline vector<CreateResultList::CreateResultListItem> getCreateResultList() { DARABONBA_PTR_GET(createResultList_, vector<CreateResultList::CreateResultListItem>) };
      inline CreateResultList& setCreateResultList(const vector<CreateResultList::CreateResultListItem> & createResultList) { DARABONBA_PTR_SET_VALUE(createResultList_, createResultList) };
      inline CreateResultList& setCreateResultList(vector<CreateResultList::CreateResultListItem> && createResultList) { DARABONBA_PTR_SET_RVALUE(createResultList_, createResultList) };


    protected:
      shared_ptr<vector<CreateResultList::CreateResultListItem>> createResultList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createResultList_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSiteMonitorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createResultList Field Functions 
    bool hasCreateResultList() const { return this->createResultList_ != nullptr;};
    void deleteCreateResultList() { this->createResultList_ = nullptr;};
    inline const CreateSiteMonitorResponseBody::CreateResultList & getCreateResultList() const { DARABONBA_PTR_GET_CONST(createResultList_, CreateSiteMonitorResponseBody::CreateResultList) };
    inline CreateSiteMonitorResponseBody::CreateResultList getCreateResultList() { DARABONBA_PTR_GET(createResultList_, CreateSiteMonitorResponseBody::CreateResultList) };
    inline CreateSiteMonitorResponseBody& setCreateResultList(const CreateSiteMonitorResponseBody::CreateResultList & createResultList) { DARABONBA_PTR_SET_VALUE(createResultList_, createResultList) };
    inline CreateSiteMonitorResponseBody& setCreateResultList(CreateSiteMonitorResponseBody::CreateResultList && createResultList) { DARABONBA_PTR_SET_RVALUE(createResultList_, createResultList) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSiteMonitorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSiteMonitorResponseBody::Data) };
    inline CreateSiteMonitorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSiteMonitorResponseBody::Data) };
    inline CreateSiteMonitorResponseBody& setData(const CreateSiteMonitorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSiteMonitorResponseBody& setData(CreateSiteMonitorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSiteMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSiteMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateSiteMonitorResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned result.
    // 
    // If a site monitoring task is created, the result is returned. If a site monitoring task fails to be created, no result is returned.
    shared_ptr<CreateSiteMonitorResponseBody::CreateResultList> createResultList_ {};
    // The result of the site monitoring task.
    shared_ptr<CreateSiteMonitorResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
