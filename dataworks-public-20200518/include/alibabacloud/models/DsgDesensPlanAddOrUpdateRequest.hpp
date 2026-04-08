// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUEST_HPP_
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
  class DsgDesensPlanAddOrUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesensRules, desensRules_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensRules, desensRules_);
    };
    DsgDesensPlanAddOrUpdateRequest() = default ;
    DsgDesensPlanAddOrUpdateRequest(const DsgDesensPlanAddOrUpdateRequest &) = default ;
    DsgDesensPlanAddOrUpdateRequest(DsgDesensPlanAddOrUpdateRequest &&) = default ;
    DsgDesensPlanAddOrUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanAddOrUpdateRequest() = default ;
    DsgDesensPlanAddOrUpdateRequest& operator=(const DsgDesensPlanAddOrUpdateRequest &) = default ;
    DsgDesensPlanAddOrUpdateRequest& operator=(DsgDesensPlanAddOrUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesensRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesensRules& obj) { 
        DARABONBA_PTR_TO_JSON(CheckWatermark, checkWatermark_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(DesensPlan, desensPlan_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SceneIds, sceneIds_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(columns, columns_);
        DARABONBA_PTR_TO_JSON(emptyNotDesesn, emptyNotDesesn_);
      };
      friend void from_json(const Darabonba::Json& j, DesensRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckWatermark, checkWatermark_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(DesensPlan, desensPlan_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SceneIds, sceneIds_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(columns, columns_);
        DARABONBA_PTR_FROM_JSON(emptyNotDesesn, emptyNotDesesn_);
      };
      DesensRules() = default ;
      DesensRules(const DesensRules &) = default ;
      DesensRules(DesensRules &&) = default ;
      DesensRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesensRules() = default ;
      DesensRules& operator=(const DesensRules &) = default ;
      DesensRules& operator=(DesensRules &&) = default ;
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
        // This parameter is required.
        shared_ptr<string> column_ {};
        // This parameter is required.
        shared_ptr<string> dbType_ {};
        // This parameter is required.
        shared_ptr<string> project_ {};
        // This parameter is required.
        shared_ptr<string> table_ {};
      };

      class DesensPlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesensPlan& obj) { 
          DARABONBA_PTR_TO_JSON(DesensPlanType, desensPlanType_);
          DARABONBA_ANY_TO_JSON(ExtParam, extParam_);
        };
        friend void from_json(const Darabonba::Json& j, DesensPlan& obj) { 
          DARABONBA_PTR_FROM_JSON(DesensPlanType, desensPlanType_);
          DARABONBA_ANY_FROM_JSON(ExtParam, extParam_);
        };
        DesensPlan() = default ;
        DesensPlan(const DesensPlan &) = default ;
        DesensPlan(DesensPlan &&) = default ;
        DesensPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesensPlan() = default ;
        DesensPlan& operator=(const DesensPlan &) = default ;
        DesensPlan& operator=(DesensPlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desensPlanType_ == nullptr
        && this->extParam_ == nullptr; };
        // desensPlanType Field Functions 
        bool hasDesensPlanType() const { return this->desensPlanType_ != nullptr;};
        void deleteDesensPlanType() { this->desensPlanType_ = nullptr;};
        inline string getDesensPlanType() const { DARABONBA_PTR_GET_DEFAULT(desensPlanType_, "") };
        inline DesensPlan& setDesensPlanType(string desensPlanType) { DARABONBA_PTR_SET_VALUE(desensPlanType_, desensPlanType) };


        // extParam Field Functions 
        bool hasExtParam() const { return this->extParam_ != nullptr;};
        void deleteExtParam() { this->extParam_ = nullptr;};
        inline         const Darabonba::Json & getExtParam() const { DARABONBA_GET(extParam_) };
        Darabonba::Json & getExtParam() { DARABONBA_GET(extParam_) };
        inline DesensPlan& setExtParam(const Darabonba::Json & extParam) { DARABONBA_SET_VALUE(extParam_, extParam) };
        inline DesensPlan& setExtParam(Darabonba::Json && extParam) { DARABONBA_SET_RVALUE(extParam_, extParam) };


      protected:
        // The masking method configured in the data masking rule. Valid values:
        // 
        // *   hash
        // *   mapping
        // *   mask
        // *   charreplacement
        // *   intervalselect
        // *   decimalpoint
        // *   emptydesens
        // 
        // This parameter is required.
        shared_ptr<string> desensPlanType_ {};
        // The parameters for the data masking rule.
        Darabonba::Json extParam_ {};
      };

      virtual bool empty() const override { return this->checkWatermark_ == nullptr
        && this->dataType_ == nullptr && this->desensPlan_ == nullptr && this->id_ == nullptr && this->owner_ == nullptr && this->ruleName_ == nullptr
        && this->sceneIds_ == nullptr && this->status_ == nullptr && this->columns_ == nullptr && this->emptyNotDesesn_ == nullptr; };
      // checkWatermark Field Functions 
      bool hasCheckWatermark() const { return this->checkWatermark_ != nullptr;};
      void deleteCheckWatermark() { this->checkWatermark_ = nullptr;};
      inline bool getCheckWatermark() const { DARABONBA_PTR_GET_DEFAULT(checkWatermark_, false) };
      inline DesensRules& setCheckWatermark(bool checkWatermark) { DARABONBA_PTR_SET_VALUE(checkWatermark_, checkWatermark) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline DesensRules& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // desensPlan Field Functions 
      bool hasDesensPlan() const { return this->desensPlan_ != nullptr;};
      void deleteDesensPlan() { this->desensPlan_ = nullptr;};
      inline const DesensRules::DesensPlan & getDesensPlan() const { DARABONBA_PTR_GET_CONST(desensPlan_, DesensRules::DesensPlan) };
      inline DesensRules::DesensPlan getDesensPlan() { DARABONBA_PTR_GET(desensPlan_, DesensRules::DesensPlan) };
      inline DesensRules& setDesensPlan(const DesensRules::DesensPlan & desensPlan) { DARABONBA_PTR_SET_VALUE(desensPlan_, desensPlan) };
      inline DesensRules& setDesensPlan(DesensRules::DesensPlan && desensPlan) { DARABONBA_PTR_SET_RVALUE(desensPlan_, desensPlan) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DesensRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline DesensRules& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline DesensRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sceneIds Field Functions 
      bool hasSceneIds() const { return this->sceneIds_ != nullptr;};
      void deleteSceneIds() { this->sceneIds_ = nullptr;};
      inline const vector<int64_t> & getSceneIds() const { DARABONBA_PTR_GET_CONST(sceneIds_, vector<int64_t>) };
      inline vector<int64_t> getSceneIds() { DARABONBA_PTR_GET(sceneIds_, vector<int64_t>) };
      inline DesensRules& setSceneIds(const vector<int64_t> & sceneIds) { DARABONBA_PTR_SET_VALUE(sceneIds_, sceneIds) };
      inline DesensRules& setSceneIds(vector<int64_t> && sceneIds) { DARABONBA_PTR_SET_RVALUE(sceneIds_, sceneIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DesensRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<DesensRules::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<DesensRules::Columns>) };
      inline vector<DesensRules::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<DesensRules::Columns>) };
      inline DesensRules& setColumns(const vector<DesensRules::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline DesensRules& setColumns(vector<DesensRules::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // emptyNotDesesn Field Functions 
      bool hasEmptyNotDesesn() const { return this->emptyNotDesesn_ != nullptr;};
      void deleteEmptyNotDesesn() { this->emptyNotDesesn_ = nullptr;};
      inline bool getEmptyNotDesesn() const { DARABONBA_PTR_GET_DEFAULT(emptyNotDesesn_, false) };
      inline DesensRules& setEmptyNotDesesn(bool emptyNotDesesn) { DARABONBA_PTR_SET_VALUE(emptyNotDesesn_, emptyNotDesesn) };


    protected:
      // Specifies whether to add a watermark. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> checkWatermark_ {};
      // The sensitive field type.
      shared_ptr<string> dataType_ {};
      // The data masking rule.
      // 
      // This parameter is required.
      shared_ptr<DesensRules::DesensPlan> desensPlan_ {};
      // The ID of the data masking rule. You can call the [DsgDesensPlanQueryList](https://help.aliyun.com/document_detail/2786578.html) operation to query the ID of the data masking rule.
      shared_ptr<int64_t> id_ {};
      // The owner of the data masking rule.
      // 
      // This parameter is required.
      shared_ptr<string> owner_ {};
      // The name of the data masking rule.
      // 
      // This parameter is required.
      shared_ptr<string> ruleName_ {};
      // The level-2 data masking scenario.
      // 
      // This parameter is required.
      shared_ptr<vector<int64_t>> sceneIds_ {};
      // The status of the data masking rule. Valid values:
      // 
      // *   0: expired
      // *   1: effective
      shared_ptr<int32_t> status_ {};
      shared_ptr<vector<DesensRules::Columns>> columns_ {};
      shared_ptr<bool> emptyNotDesesn_ {};
    };

    virtual bool empty() const override { return this->desensRules_ == nullptr; };
    // desensRules Field Functions 
    bool hasDesensRules() const { return this->desensRules_ != nullptr;};
    void deleteDesensRules() { this->desensRules_ = nullptr;};
    inline const vector<DsgDesensPlanAddOrUpdateRequest::DesensRules> & getDesensRules() const { DARABONBA_PTR_GET_CONST(desensRules_, vector<DsgDesensPlanAddOrUpdateRequest::DesensRules>) };
    inline vector<DsgDesensPlanAddOrUpdateRequest::DesensRules> getDesensRules() { DARABONBA_PTR_GET(desensRules_, vector<DsgDesensPlanAddOrUpdateRequest::DesensRules>) };
    inline DsgDesensPlanAddOrUpdateRequest& setDesensRules(const vector<DsgDesensPlanAddOrUpdateRequest::DesensRules> & desensRules) { DARABONBA_PTR_SET_VALUE(desensRules_, desensRules) };
    inline DsgDesensPlanAddOrUpdateRequest& setDesensRules(vector<DsgDesensPlanAddOrUpdateRequest::DesensRules> && desensRules) { DARABONBA_PTR_SET_RVALUE(desensRules_, desensRules) };


  protected:
    // A collection of data masking rules that you want to add or modify.
    // 
    // This parameter is required.
    shared_ptr<vector<DsgDesensPlanAddOrUpdateRequest::DesensRules>> desensRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
