// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODY_HPP_
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
  class UpdateWhitelistTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateWhitelistTemplateResponseBody() = default ;
    UpdateWhitelistTemplateResponseBody(const UpdateWhitelistTemplateResponseBody &) = default ;
    UpdateWhitelistTemplateResponseBody(UpdateWhitelistTemplateResponseBody &&) = default ;
    UpdateWhitelistTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhitelistTemplateResponseBody() = default ;
    UpdateWhitelistTemplateResponseBody& operator=(const UpdateWhitelistTemplateResponseBody &) = default ;
    UpdateWhitelistTemplateResponseBody& operator=(UpdateWhitelistTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Templates, templates_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Templates, templates_);
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
      class Templates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Templates& obj) { 
          DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, Templates& obj) { 
          DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
            DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
          };
          friend void from_json(const Darabonba::Json& j, DbInstances& obj) { 
            DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
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
          virtual bool empty() const override { return this->dbInstanceName_ == nullptr; };
          // dbInstanceName Field Functions 
          bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
          void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
          inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
          inline DbInstances& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


        protected:
          shared_ptr<string> dbInstanceName_ {};
        };

        virtual bool empty() const override { return this->dbInstances_ == nullptr
        && this->securityIPList_ == nullptr && this->templateId_ == nullptr; };
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


      protected:
        shared_ptr<vector<Templates::DbInstances>> dbInstances_ {};
        shared_ptr<string> securityIPList_ {};
        shared_ptr<string> templateId_ {};
      };

      virtual bool empty() const override { return this->templates_ == nullptr; };
      // templates Field Functions 
      bool hasTemplates() const { return this->templates_ != nullptr;};
      void deleteTemplates() { this->templates_ = nullptr;};
      inline const vector<Data::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Data::Templates>) };
      inline vector<Data::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<Data::Templates>) };
      inline Data& setTemplates(const vector<Data::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
      inline Data& setTemplates(vector<Data::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    protected:
      shared_ptr<vector<Data::Templates>> templates_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateWhitelistTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateWhitelistTemplateResponseBody::Data) };
    inline UpdateWhitelistTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateWhitelistTemplateResponseBody::Data) };
    inline UpdateWhitelistTemplateResponseBody& setData(const UpdateWhitelistTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateWhitelistTemplateResponseBody& setData(UpdateWhitelistTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWhitelistTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateWhitelistTemplateResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
