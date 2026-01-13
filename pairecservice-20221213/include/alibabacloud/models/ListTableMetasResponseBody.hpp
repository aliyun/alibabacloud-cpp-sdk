// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEMETASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTableMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableMetas, tableMetas_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableMetas, tableMetas_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTableMetasResponseBody() = default ;
    ListTableMetasResponseBody(const ListTableMetasResponseBody &) = default ;
    ListTableMetasResponseBody(ListTableMetasResponseBody &&) = default ;
    ListTableMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableMetasResponseBody() = default ;
    ListTableMetasResponseBody& operator=(const ListTableMetasResponseBody &) = default ;
    ListTableMetasResponseBody& operator=(ListTableMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableMetas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableMetas& obj) { 
        DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtImportedTime, gmtImportedTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Module, module_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(TableMetaId, tableMetaId_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, TableMetas& obj) { 
        DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtImportedTime, gmtImportedTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Module, module_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(TableMetaId, tableMetaId_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      TableMetas() = default ;
      TableMetas(const TableMetas &) = default ;
      TableMetas(TableMetas &&) = default ;
      TableMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableMetas() = default ;
      TableMetas& operator=(const TableMetas &) = default ;
      TableMetas& operator=(TableMetas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Fields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fields& obj) { 
          DARABONBA_PTR_TO_JSON(IsDimensionField, isDimensionField_);
          DARABONBA_PTR_TO_JSON(Meaning, meaning_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Fields& obj) { 
          DARABONBA_PTR_FROM_JSON(IsDimensionField, isDimensionField_);
          DARABONBA_PTR_FROM_JSON(Meaning, meaning_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Fields() = default ;
        Fields(const Fields &) = default ;
        Fields(Fields &&) = default ;
        Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fields() = default ;
        Fields& operator=(const Fields &) = default ;
        Fields& operator=(Fields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDimensionField_ == nullptr
        && this->meaning_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // isDimensionField Field Functions 
        bool hasIsDimensionField() const { return this->isDimensionField_ != nullptr;};
        void deleteIsDimensionField() { this->isDimensionField_ = nullptr;};
        inline bool getIsDimensionField() const { DARABONBA_PTR_GET_DEFAULT(isDimensionField_, false) };
        inline Fields& setIsDimensionField(bool isDimensionField) { DARABONBA_PTR_SET_VALUE(isDimensionField_, isDimensionField) };


        // meaning Field Functions 
        bool hasMeaning() const { return this->meaning_ != nullptr;};
        void deleteMeaning() { this->meaning_ = nullptr;};
        inline string getMeaning() const { DARABONBA_PTR_GET_DEFAULT(meaning_, "") };
        inline Fields& setMeaning(string meaning) { DARABONBA_PTR_SET_VALUE(meaning_, meaning) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<bool> isDimensionField_ {};
        shared_ptr<string> meaning_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->canDelete_ == nullptr
        && this->config_ == nullptr && this->description_ == nullptr && this->fields_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtImportedTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->module_ == nullptr && this->name_ == nullptr && this->resourceId_ == nullptr && this->tableMetaId_ == nullptr
        && this->tableName_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
      // canDelete Field Functions 
      bool hasCanDelete() const { return this->canDelete_ != nullptr;};
      void deleteCanDelete() { this->canDelete_ = nullptr;};
      inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
      inline TableMetas& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline TableMetas& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TableMetas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<TableMetas::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<TableMetas::Fields>) };
      inline vector<TableMetas::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<TableMetas::Fields>) };
      inline TableMetas& setFields(const vector<TableMetas::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline TableMetas& setFields(vector<TableMetas::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline TableMetas& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtImportedTime Field Functions 
      bool hasGmtImportedTime() const { return this->gmtImportedTime_ != nullptr;};
      void deleteGmtImportedTime() { this->gmtImportedTime_ = nullptr;};
      inline string getGmtImportedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtImportedTime_, "") };
      inline TableMetas& setGmtImportedTime(string gmtImportedTime) { DARABONBA_PTR_SET_VALUE(gmtImportedTime_, gmtImportedTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline TableMetas& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // module Field Functions 
      bool hasModule() const { return this->module_ != nullptr;};
      void deleteModule() { this->module_ = nullptr;};
      inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
      inline TableMetas& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TableMetas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TableMetas& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // tableMetaId Field Functions 
      bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
      void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
      inline string getTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
      inline TableMetas& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline TableMetas& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TableMetas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline TableMetas& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<bool> canDelete_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<TableMetas::Fields>> fields_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtImportedTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> module_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> tableMetaId_ {};
      shared_ptr<string> tableName_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tableMetas_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTableMetasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableMetas Field Functions 
    bool hasTableMetas() const { return this->tableMetas_ != nullptr;};
    void deleteTableMetas() { this->tableMetas_ = nullptr;};
    inline const vector<ListTableMetasResponseBody::TableMetas> & getTableMetas() const { DARABONBA_PTR_GET_CONST(tableMetas_, vector<ListTableMetasResponseBody::TableMetas>) };
    inline vector<ListTableMetasResponseBody::TableMetas> getTableMetas() { DARABONBA_PTR_GET(tableMetas_, vector<ListTableMetasResponseBody::TableMetas>) };
    inline ListTableMetasResponseBody& setTableMetas(const vector<ListTableMetasResponseBody::TableMetas> & tableMetas) { DARABONBA_PTR_SET_VALUE(tableMetas_, tableMetas) };
    inline ListTableMetasResponseBody& setTableMetas(vector<ListTableMetasResponseBody::TableMetas> && tableMetas) { DARABONBA_PTR_SET_RVALUE(tableMetas_, tableMetas) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTableMetasResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTableMetasResponseBody::TableMetas>> tableMetas_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
