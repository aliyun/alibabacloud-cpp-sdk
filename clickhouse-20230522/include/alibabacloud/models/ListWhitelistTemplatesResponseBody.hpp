// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWHITELISTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWHITELISTTEMPLATESRESPONSEBODY_HPP_
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
  class ListWhitelistTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWhitelistTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWhitelistTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListWhitelistTemplatesResponseBody() = default ;
    ListWhitelistTemplatesResponseBody(const ListWhitelistTemplatesResponseBody &) = default ;
    ListWhitelistTemplatesResponseBody(ListWhitelistTemplatesResponseBody &&) = default ;
    ListWhitelistTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWhitelistTemplatesResponseBody() = default ;
    ListWhitelistTemplatesResponseBody& operator=(const ListWhitelistTemplatesResponseBody &) = default ;
    ListWhitelistTemplatesResponseBody& operator=(ListWhitelistTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrPageNumbers, currPageNumbers_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(HasPrev, hasPrev_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Templates, templates_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPageNumbers, totalPageNumbers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrPageNumbers, currPageNumbers_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(HasPrev, hasPrev_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Templates, templates_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPageNumbers, totalPageNumbers_);
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

      virtual bool empty() const override { return this->currPageNumbers_ == nullptr
        && this->hasNext_ == nullptr && this->hasPrev_ == nullptr && this->pageSize_ == nullptr && this->templates_ == nullptr && this->totalCount_ == nullptr
        && this->totalPageNumbers_ == nullptr; };
      // currPageNumbers Field Functions 
      bool hasCurrPageNumbers() const { return this->currPageNumbers_ != nullptr;};
      void deleteCurrPageNumbers() { this->currPageNumbers_ = nullptr;};
      inline int32_t getCurrPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(currPageNumbers_, 0) };
      inline Data& setCurrPageNumbers(int32_t currPageNumbers) { DARABONBA_PTR_SET_VALUE(currPageNumbers_, currPageNumbers) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // hasPrev Field Functions 
      bool hasHasPrev() const { return this->hasPrev_ != nullptr;};
      void deleteHasPrev() { this->hasPrev_ = nullptr;};
      inline bool getHasPrev() const { DARABONBA_PTR_GET_DEFAULT(hasPrev_, false) };
      inline Data& setHasPrev(bool hasPrev) { DARABONBA_PTR_SET_VALUE(hasPrev_, hasPrev) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // templates Field Functions 
      bool hasTemplates() const { return this->templates_ != nullptr;};
      void deleteTemplates() { this->templates_ = nullptr;};
      inline const vector<Data::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Data::Templates>) };
      inline vector<Data::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<Data::Templates>) };
      inline Data& setTemplates(const vector<Data::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
      inline Data& setTemplates(vector<Data::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPageNumbers Field Functions 
      bool hasTotalPageNumbers() const { return this->totalPageNumbers_ != nullptr;};
      void deleteTotalPageNumbers() { this->totalPageNumbers_ = nullptr;};
      inline int32_t getTotalPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(totalPageNumbers_, 0) };
      inline Data& setTotalPageNumbers(int32_t totalPageNumbers) { DARABONBA_PTR_SET_VALUE(totalPageNumbers_, totalPageNumbers) };


    protected:
      shared_ptr<int32_t> currPageNumbers_ {};
      shared_ptr<bool> hasNext_ {};
      shared_ptr<bool> hasPrev_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Templates>> templates_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<int32_t> totalPageNumbers_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWhitelistTemplatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWhitelistTemplatesResponseBody::Data) };
    inline ListWhitelistTemplatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWhitelistTemplatesResponseBody::Data) };
    inline ListWhitelistTemplatesResponseBody& setData(const ListWhitelistTemplatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWhitelistTemplatesResponseBody& setData(ListWhitelistTemplatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWhitelistTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListWhitelistTemplatesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
