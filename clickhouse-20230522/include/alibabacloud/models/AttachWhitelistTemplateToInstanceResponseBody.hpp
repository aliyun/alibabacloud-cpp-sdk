// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachWhitelistTemplateToInstanceResponseBody() = default ;
    AttachWhitelistTemplateToInstanceResponseBody(const AttachWhitelistTemplateToInstanceResponseBody &) = default ;
    AttachWhitelistTemplateToInstanceResponseBody(AttachWhitelistTemplateToInstanceResponseBody &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBody() = default ;
    AttachWhitelistTemplateToInstanceResponseBody& operator=(const AttachWhitelistTemplateToInstanceResponseBody &) = default ;
    AttachWhitelistTemplateToInstanceResponseBody& operator=(AttachWhitelistTemplateToInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AttachFailList, attachFailList_);
        DARABONBA_PTR_TO_JSON(AttachSuccessedList, attachSuccessedList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachFailList, attachFailList_);
        DARABONBA_PTR_FROM_JSON(AttachSuccessedList, attachSuccessedList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class AttachSuccessedList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachSuccessedList& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(Templates, templates_);
        };
        friend void from_json(const Darabonba::Json& j, AttachSuccessedList& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(Templates, templates_);
        };
        AttachSuccessedList() = default ;
        AttachSuccessedList(const AttachSuccessedList &) = default ;
        AttachSuccessedList(AttachSuccessedList &&) = default ;
        AttachSuccessedList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachSuccessedList() = default ;
        AttachSuccessedList& operator=(const AttachSuccessedList &) = default ;
        AttachSuccessedList& operator=(AttachSuccessedList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Templates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Templates& obj) { 
            DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
            DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
            DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          };
          friend void from_json(const Darabonba::Json& j, Templates& obj) { 
            DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
            DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
            DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          };
          Templates() = default ;
          Templates(const Templates &) = default ;
          Templates(Templates &&) = default ;
          Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Templates() = default ;
          Templates& operator=(const Templates &) = default ;
          Templates& operator=(Templates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DbInstances : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DbInstances& obj) { 
              DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
            };
            friend void from_json(const Darabonba::Json& j, DbInstances& obj) { 
              DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
            };
            DbInstances() = default ;
            DbInstances(const DbInstances &) = default ;
            DbInstances(DbInstances &&) = default ;
            DbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DbInstances() = default ;
            DbInstances& operator=(const DbInstances &) = default ;
            DbInstances& operator=(DbInstances &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
            // DBInstanceId Field Functions 
            bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
            void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
            inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
            inline DbInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


          protected:
            shared_ptr<string> DBInstanceId_ {};
          };

          virtual bool empty() const override { return this->dbInstances_ == nullptr
        && this->securityIPList_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
          // dbInstances Field Functions 
          bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
          void deleteDbInstances() { this->dbInstances_ = nullptr;};
          inline const vector<Templates::DbInstances> & getDbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, vector<Templates::DbInstances>) };
          inline vector<Templates::DbInstances> getDbInstances() { DARABONBA_PTR_GET(dbInstances_, vector<Templates::DbInstances>) };
          inline Templates& setDbInstances(const vector<Templates::DbInstances> & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
          inline Templates& setDbInstances(vector<Templates::DbInstances> && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


          // securityIPList Field Functions 
          bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
          void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
          inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
          inline Templates& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Templates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


          // templateName Field Functions 
          bool hasTemplateName() const { return this->templateName_ != nullptr;};
          void deleteTemplateName() { this->templateName_ = nullptr;};
          inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
          inline Templates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        protected:
          shared_ptr<vector<Templates::DbInstances>> dbInstances_ {};
          shared_ptr<string> securityIPList_ {};
          shared_ptr<string> templateId_ {};
          shared_ptr<string> templateName_ {};
        };

        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->templates_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline AttachSuccessedList& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // templates Field Functions 
        bool hasTemplates() const { return this->templates_ != nullptr;};
        void deleteTemplates() { this->templates_ = nullptr;};
        inline const vector<AttachSuccessedList::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<AttachSuccessedList::Templates>) };
        inline vector<AttachSuccessedList::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<AttachSuccessedList::Templates>) };
        inline AttachSuccessedList& setTemplates(const vector<AttachSuccessedList::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
        inline AttachSuccessedList& setTemplates(vector<AttachSuccessedList::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


      protected:
        shared_ptr<string> DBInstanceId_ {};
        shared_ptr<vector<AttachSuccessedList::Templates>> templates_ {};
      };

      class AttachFailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachFailList& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, AttachFailList& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        AttachFailList() = default ;
        AttachFailList(const AttachFailList &) = default ;
        AttachFailList(AttachFailList &&) = default ;
        AttachFailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachFailList() = default ;
        AttachFailList& operator=(const AttachFailList &) = default ;
        AttachFailList& operator=(AttachFailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->reason_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline AttachFailList& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline AttachFailList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        shared_ptr<string> DBInstanceId_ {};
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->attachFailList_ == nullptr
        && this->attachSuccessedList_ == nullptr && this->status_ == nullptr; };
      // attachFailList Field Functions 
      bool hasAttachFailList() const { return this->attachFailList_ != nullptr;};
      void deleteAttachFailList() { this->attachFailList_ = nullptr;};
      inline const vector<Data::AttachFailList> & getAttachFailList() const { DARABONBA_PTR_GET_CONST(attachFailList_, vector<Data::AttachFailList>) };
      inline vector<Data::AttachFailList> getAttachFailList() { DARABONBA_PTR_GET(attachFailList_, vector<Data::AttachFailList>) };
      inline Data& setAttachFailList(const vector<Data::AttachFailList> & attachFailList) { DARABONBA_PTR_SET_VALUE(attachFailList_, attachFailList) };
      inline Data& setAttachFailList(vector<Data::AttachFailList> && attachFailList) { DARABONBA_PTR_SET_RVALUE(attachFailList_, attachFailList) };


      // attachSuccessedList Field Functions 
      bool hasAttachSuccessedList() const { return this->attachSuccessedList_ != nullptr;};
      void deleteAttachSuccessedList() { this->attachSuccessedList_ = nullptr;};
      inline const vector<Data::AttachSuccessedList> & getAttachSuccessedList() const { DARABONBA_PTR_GET_CONST(attachSuccessedList_, vector<Data::AttachSuccessedList>) };
      inline vector<Data::AttachSuccessedList> getAttachSuccessedList() { DARABONBA_PTR_GET(attachSuccessedList_, vector<Data::AttachSuccessedList>) };
      inline Data& setAttachSuccessedList(const vector<Data::AttachSuccessedList> & attachSuccessedList) { DARABONBA_PTR_SET_VALUE(attachSuccessedList_, attachSuccessedList) };
      inline Data& setAttachSuccessedList(vector<Data::AttachSuccessedList> && attachSuccessedList) { DARABONBA_PTR_SET_RVALUE(attachSuccessedList_, attachSuccessedList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<Data::AttachFailList>> attachFailList_ {};
      shared_ptr<vector<Data::AttachSuccessedList>> attachSuccessedList_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AttachWhitelistTemplateToInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AttachWhitelistTemplateToInstanceResponseBody::Data) };
    inline AttachWhitelistTemplateToInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AttachWhitelistTemplateToInstanceResponseBody::Data) };
    inline AttachWhitelistTemplateToInstanceResponseBody& setData(const AttachWhitelistTemplateToInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AttachWhitelistTemplateToInstanceResponseBody& setData(AttachWhitelistTemplateToInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<AttachWhitelistTemplateToInstanceResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
