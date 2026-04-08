// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanQueryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanQueryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(emptyNotDesesn, emptyNotDesesn_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanQueryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(emptyNotDesesn, emptyNotDesesn_);
    };
    DsgDesensPlanQueryListRequest() = default ;
    DsgDesensPlanQueryListRequest(const DsgDesensPlanQueryListRequest &) = default ;
    DsgDesensPlanQueryListRequest(DsgDesensPlanQueryListRequest &&) = default ;
    DsgDesensPlanQueryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanQueryListRequest() = default ;
    DsgDesensPlanQueryListRequest& operator=(const DsgDesensPlanQueryListRequest &) = default ;
    DsgDesensPlanQueryListRequest& operator=(DsgDesensPlanQueryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(column, column_);
        DARABONBA_PTR_TO_JSON(dbType, dbType_);
        DARABONBA_PTR_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(column, column_);
        DARABONBA_PTR_FROM_JSON(dbType, dbType_);
        DARABONBA_PTR_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(table, table_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->column_ == nullptr
        && this->dbType_ == nullptr && this->project_ == nullptr && this->table_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
      inline Columns& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Columns& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Columns& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
      inline Columns& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    protected:
      shared_ptr<string> column_ {};
      shared_ptr<string> dbType_ {};
      shared_ptr<string> project_ {};
      shared_ptr<string> table_ {};
    };

    virtual bool empty() const override { return this->owner_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->ruleName_ == nullptr && this->sceneId_ == nullptr && this->status_ == nullptr
        && this->columns_ == nullptr && this->dataType_ == nullptr && this->emptyNotDesesn_ == nullptr; };
    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DsgDesensPlanQueryListRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DsgDesensPlanQueryListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DsgDesensPlanQueryListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DsgDesensPlanQueryListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DsgDesensPlanQueryListRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DsgDesensPlanQueryListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<DsgDesensPlanQueryListRequest::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<DsgDesensPlanQueryListRequest::Columns>) };
    inline vector<DsgDesensPlanQueryListRequest::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<DsgDesensPlanQueryListRequest::Columns>) };
    inline DsgDesensPlanQueryListRequest& setColumns(const vector<DsgDesensPlanQueryListRequest::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DsgDesensPlanQueryListRequest& setColumns(vector<DsgDesensPlanQueryListRequest::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DsgDesensPlanQueryListRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // emptyNotDesesn Field Functions 
    bool hasEmptyNotDesesn() const { return this->emptyNotDesesn_ != nullptr;};
    void deleteEmptyNotDesesn() { this->emptyNotDesesn_ = nullptr;};
    inline string getEmptyNotDesesn() const { DARABONBA_PTR_GET_DEFAULT(emptyNotDesesn_, "") };
    inline DsgDesensPlanQueryListRequest& setEmptyNotDesesn(string emptyNotDesesn) { DARABONBA_PTR_SET_VALUE(emptyNotDesesn_, emptyNotDesesn) };


  protected:
    // The owner of the data masking rule.
    shared_ptr<string> owner_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the sensitive field.
    shared_ptr<string> ruleName_ {};
    // The ID of the level-2 data masking scenario. You can call the [DsgSceneQuerySceneListByName](https://help.aliyun.com/document_detail/2786322.html) operation to query the list of IDs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sceneId_ {};
    // The status of the data masking rule. Valid values:
    // 
    // *   0: expired
    // *   1: effective
    shared_ptr<int32_t> status_ {};
    shared_ptr<vector<DsgDesensPlanQueryListRequest::Columns>> columns_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> emptyNotDesesn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
