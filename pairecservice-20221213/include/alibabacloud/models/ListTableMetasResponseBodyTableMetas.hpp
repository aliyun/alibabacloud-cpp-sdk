// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEMETASRESPONSEBODYTABLEMETAS_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEMETASRESPONSEBODYTABLEMETAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTableMetasResponseBodyTableMetasFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTableMetasResponseBodyTableMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableMetasResponseBodyTableMetas& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTableMetasResponseBodyTableMetas& obj) { 
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
    ListTableMetasResponseBodyTableMetas() = default ;
    ListTableMetasResponseBodyTableMetas(const ListTableMetasResponseBodyTableMetas &) = default ;
    ListTableMetasResponseBodyTableMetas(ListTableMetasResponseBodyTableMetas &&) = default ;
    ListTableMetasResponseBodyTableMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableMetasResponseBodyTableMetas() = default ;
    ListTableMetasResponseBodyTableMetas& operator=(const ListTableMetasResponseBodyTableMetas &) = default ;
    ListTableMetasResponseBodyTableMetas& operator=(ListTableMetasResponseBodyTableMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canDelete_ != nullptr
        && this->config_ != nullptr && this->description_ != nullptr && this->fields_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtImportedTime_ != nullptr
        && this->gmtModifiedTime_ != nullptr && this->module_ != nullptr && this->name_ != nullptr && this->resourceId_ != nullptr && this->tableMetaId_ != nullptr
        && this->tableName_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool canDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline ListTableMetasResponseBodyTableMetas& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListTableMetasResponseBodyTableMetas& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTableMetasResponseBodyTableMetas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<Models::ListTableMetasResponseBodyTableMetasFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Models::ListTableMetasResponseBodyTableMetasFields>) };
    inline vector<Models::ListTableMetasResponseBodyTableMetasFields> fields() { DARABONBA_PTR_GET(fields_, vector<Models::ListTableMetasResponseBodyTableMetasFields>) };
    inline ListTableMetasResponseBodyTableMetas& setFields(const vector<Models::ListTableMetasResponseBodyTableMetasFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline ListTableMetasResponseBodyTableMetas& setFields(vector<Models::ListTableMetasResponseBodyTableMetasFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListTableMetasResponseBodyTableMetas& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtImportedTime Field Functions 
    bool hasGmtImportedTime() const { return this->gmtImportedTime_ != nullptr;};
    void deleteGmtImportedTime() { this->gmtImportedTime_ = nullptr;};
    inline string gmtImportedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtImportedTime_, "") };
    inline ListTableMetasResponseBodyTableMetas& setGmtImportedTime(string gmtImportedTime) { DARABONBA_PTR_SET_VALUE(gmtImportedTime_, gmtImportedTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListTableMetasResponseBodyTableMetas& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline ListTableMetasResponseBodyTableMetas& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTableMetasResponseBodyTableMetas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTableMetasResponseBodyTableMetas& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string tableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline ListTableMetasResponseBodyTableMetas& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListTableMetasResponseBodyTableMetas& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTableMetasResponseBodyTableMetas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListTableMetasResponseBodyTableMetas& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<bool> canDelete_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::ListTableMetasResponseBodyTableMetasFields>> fields_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtImportedTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> module_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> tableMetaId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
