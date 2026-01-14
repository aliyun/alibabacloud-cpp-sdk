// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDatasetInfoResponseBody() = default ;
    QueryDatasetInfoResponseBody(const QueryDatasetInfoResponseBody &) = default ;
    QueryDatasetInfoResponseBody(QueryDatasetInfoResponseBody &&) = default ;
    QueryDatasetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBody() = default ;
    QueryDatasetInfoResponseBody& operator=(const QueryDatasetInfoResponseBody &) = default ;
    QueryDatasetInfoResponseBody& operator=(QueryDatasetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CubeTableList, cubeTableList_);
        DARABONBA_PTR_TO_JSON(CustimzeSql, custimzeSql_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(DimensionList, dimensionList_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(DsId, dsId_);
        DARABONBA_PTR_TO_JSON(DsName, dsName_);
        DARABONBA_PTR_TO_JSON(DsType, dsType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
        DARABONBA_PTR_TO_JSON(MeasureList, measureList_);
        DARABONBA_PTR_TO_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(RowLevel, rowLevel_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CubeTableList, cubeTableList_);
        DARABONBA_PTR_FROM_JSON(CustimzeSql, custimzeSql_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(DimensionList, dimensionList_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(DsId, dsId_);
        DARABONBA_PTR_FROM_JSON(DsName, dsName_);
        DARABONBA_PTR_FROM_JSON(DsType, dsType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
        DARABONBA_PTR_FROM_JSON(MeasureList, measureList_);
        DARABONBA_PTR_FROM_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(RowLevel, rowLevel_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MeasureList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeasureList& obj) { 
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(ExpressionV2, expressionV2_);
          DARABONBA_PTR_TO_JSON(FactColumn, factColumn_);
          DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_TO_JSON(MeasureType, measureType_);
          DARABONBA_PTR_TO_JSON(TableUniqueId, tableUniqueId_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, MeasureList& obj) { 
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(ExpressionV2, expressionV2_);
          DARABONBA_PTR_FROM_JSON(FactColumn, factColumn_);
          DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_FROM_JSON(MeasureType, measureType_);
          DARABONBA_PTR_FROM_JSON(TableUniqueId, tableUniqueId_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
        };
        MeasureList() = default ;
        MeasureList(const MeasureList &) = default ;
        MeasureList(MeasureList &&) = default ;
        MeasureList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeasureList() = default ;
        MeasureList& operator=(const MeasureList &) = default ;
        MeasureList& operator=(MeasureList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caption_ == nullptr
        && this->dataType_ == nullptr && this->expression_ == nullptr && this->expressionV2_ == nullptr && this->factColumn_ == nullptr && this->fieldDescription_ == nullptr
        && this->measureType_ == nullptr && this->tableUniqueId_ == nullptr && this->uid_ == nullptr; };
        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline MeasureList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline MeasureList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline MeasureList& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // expressionV2 Field Functions 
        bool hasExpressionV2() const { return this->expressionV2_ != nullptr;};
        void deleteExpressionV2() { this->expressionV2_ = nullptr;};
        inline string getExpressionV2() const { DARABONBA_PTR_GET_DEFAULT(expressionV2_, "") };
        inline MeasureList& setExpressionV2(string expressionV2) { DARABONBA_PTR_SET_VALUE(expressionV2_, expressionV2) };


        // factColumn Field Functions 
        bool hasFactColumn() const { return this->factColumn_ != nullptr;};
        void deleteFactColumn() { this->factColumn_ = nullptr;};
        inline string getFactColumn() const { DARABONBA_PTR_GET_DEFAULT(factColumn_, "") };
        inline MeasureList& setFactColumn(string factColumn) { DARABONBA_PTR_SET_VALUE(factColumn_, factColumn) };


        // fieldDescription Field Functions 
        bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
        void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
        inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
        inline MeasureList& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


        // measureType Field Functions 
        bool hasMeasureType() const { return this->measureType_ != nullptr;};
        void deleteMeasureType() { this->measureType_ = nullptr;};
        inline string getMeasureType() const { DARABONBA_PTR_GET_DEFAULT(measureType_, "") };
        inline MeasureList& setMeasureType(string measureType) { DARABONBA_PTR_SET_VALUE(measureType_, measureType) };


        // tableUniqueId Field Functions 
        bool hasTableUniqueId() const { return this->tableUniqueId_ != nullptr;};
        void deleteTableUniqueId() { this->tableUniqueId_ = nullptr;};
        inline string getTableUniqueId() const { DARABONBA_PTR_GET_DEFAULT(tableUniqueId_, "") };
        inline MeasureList& setTableUniqueId(string tableUniqueId) { DARABONBA_PTR_SET_VALUE(tableUniqueId_, tableUniqueId) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline MeasureList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        // The actual physical field.
        shared_ptr<string> caption_ {};
        // A list of all measures for the dataset.
        shared_ptr<string> dataType_ {};
        // Data type; value:
        // 
        // *   string: character
        // *   number: a number
        // *   datetime: time
        shared_ptr<string> expression_ {};
        // Expression for flattened computation metrics.
        shared_ptr<string> expressionV2_ {};
        // The type of the measure. Valid values:
        // 
        // *   standard_measure: General Metrics
        // *   calculate_measure: Calculating Measures
        shared_ptr<string> factColumn_ {};
        // The description of the field.
        shared_ptr<string> fieldDescription_ {};
        // An expression that calculates a measure; valid only for calculated measures.
        shared_ptr<string> measureType_ {};
        // The display name of the metric.
        shared_ptr<string> tableUniqueId_ {};
        // The unique ID of the table to which the table belongs, which corresponds to the UniqueId of the CubeTypeList.
        shared_ptr<string> uid_ {};
      };

      class Directory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Directory& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PathId, pathId_);
          DARABONBA_PTR_TO_JSON(PathName, pathName_);
        };
        friend void from_json(const Darabonba::Json& j, Directory& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PathId, pathId_);
          DARABONBA_PTR_FROM_JSON(PathName, pathName_);
        };
        Directory() = default ;
        Directory(const Directory &) = default ;
        Directory(Directory &&) = default ;
        Directory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Directory() = default ;
        Directory& operator=(const Directory &) = default ;
        Directory& operator=(Directory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->pathId_ == nullptr && this->pathName_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Directory& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Directory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pathId Field Functions 
        bool hasPathId() const { return this->pathId_ != nullptr;};
        void deletePathId() { this->pathId_ = nullptr;};
        inline string getPathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
        inline Directory& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


        // pathName Field Functions 
        bool hasPathName() const { return this->pathName_ != nullptr;};
        void deletePathName() { this->pathName_ = nullptr;};
        inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
        inline Directory& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


      protected:
        // Test directory
        shared_ptr<string> id_ {};
        // Test directory
        shared_ptr<string> name_ {};
        // The information about the directory to which the dataset belongs.
        shared_ptr<string> pathId_ {};
        // The path of the directory ID, for example, aa/bb/cc/dd.
        shared_ptr<string> pathName_ {};
      };

      class DimensionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DimensionList& obj) { 
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(ExpressionV2, expressionV2_);
          DARABONBA_PTR_TO_JSON(FactColumn, factColumn_);
          DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_TO_JSON(Granularity, granularity_);
          DARABONBA_PTR_TO_JSON(RefUid, refUid_);
          DARABONBA_PTR_TO_JSON(TableUniqueId, tableUniqueId_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, DimensionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(ExpressionV2, expressionV2_);
          DARABONBA_PTR_FROM_JSON(FactColumn, factColumn_);
          DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
          DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
          DARABONBA_PTR_FROM_JSON(RefUid, refUid_);
          DARABONBA_PTR_FROM_JSON(TableUniqueId, tableUniqueId_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
        };
        DimensionList() = default ;
        DimensionList(const DimensionList &) = default ;
        DimensionList(DimensionList &&) = default ;
        DimensionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DimensionList() = default ;
        DimensionList& operator=(const DimensionList &) = default ;
        DimensionList& operator=(DimensionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caption_ == nullptr
        && this->dataType_ == nullptr && this->dimensionType_ == nullptr && this->expression_ == nullptr && this->expressionV2_ == nullptr && this->factColumn_ == nullptr
        && this->fieldDescription_ == nullptr && this->granularity_ == nullptr && this->refUid_ == nullptr && this->tableUniqueId_ == nullptr && this->uid_ == nullptr; };
        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline DimensionList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline DimensionList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // dimensionType Field Functions 
        bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
        void deleteDimensionType() { this->dimensionType_ = nullptr;};
        inline string getDimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
        inline DimensionList& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline DimensionList& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // expressionV2 Field Functions 
        bool hasExpressionV2() const { return this->expressionV2_ != nullptr;};
        void deleteExpressionV2() { this->expressionV2_ = nullptr;};
        inline string getExpressionV2() const { DARABONBA_PTR_GET_DEFAULT(expressionV2_, "") };
        inline DimensionList& setExpressionV2(string expressionV2) { DARABONBA_PTR_SET_VALUE(expressionV2_, expressionV2) };


        // factColumn Field Functions 
        bool hasFactColumn() const { return this->factColumn_ != nullptr;};
        void deleteFactColumn() { this->factColumn_ = nullptr;};
        inline string getFactColumn() const { DARABONBA_PTR_GET_DEFAULT(factColumn_, "") };
        inline DimensionList& setFactColumn(string factColumn) { DARABONBA_PTR_SET_VALUE(factColumn_, factColumn) };


        // fieldDescription Field Functions 
        bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
        void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
        inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
        inline DimensionList& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


        // granularity Field Functions 
        bool hasGranularity() const { return this->granularity_ != nullptr;};
        void deleteGranularity() { this->granularity_ = nullptr;};
        inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
        inline DimensionList& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


        // refUid Field Functions 
        bool hasRefUid() const { return this->refUid_ != nullptr;};
        void deleteRefUid() { this->refUid_ = nullptr;};
        inline string getRefUid() const { DARABONBA_PTR_GET_DEFAULT(refUid_, "") };
        inline DimensionList& setRefUid(string refUid) { DARABONBA_PTR_SET_VALUE(refUid_, refUid) };


        // tableUniqueId Field Functions 
        bool hasTableUniqueId() const { return this->tableUniqueId_ != nullptr;};
        void deleteTableUniqueId() { this->tableUniqueId_ = nullptr;};
        inline string getTableUniqueId() const { DARABONBA_PTR_GET_DEFAULT(tableUniqueId_, "") };
        inline DimensionList& setTableUniqueId(string tableUniqueId) { DARABONBA_PTR_SET_VALUE(tableUniqueId_, tableUniqueId) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline DimensionList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        // The unique ID of the field that is referenced by the group measure. Non-NULL if and only if the metric is a grouping metric.
        shared_ptr<string> caption_ {};
        // A list of all dimensions in the dataset.
        shared_ptr<string> dataType_ {};
        // The actual physical field.
        shared_ptr<string> dimensionType_ {};
        // Data type; value:
        // 
        // *   string: character
        // *   number: a number
        // *   datetime: time
        shared_ptr<string> expression_ {};
        // Expression for the flattened calculation dimensions.
        shared_ptr<string> expressionV2_ {};
        // Expression for a calculated dimension; valid only for calculated dimensions.
        shared_ptr<string> factColumn_ {};
        // The description of the field.
        shared_ptr<string> fieldDescription_ {};
        // The type of the dimension. Valid values:
        // 
        // *   standard_dimension: General Dimension
        // *   calculate_dimension: calculating dimensions
        // *   group_dimension: grouping dimensions
        shared_ptr<string> granularity_ {};
        // The granularity.
        shared_ptr<string> refUid_ {};
        // The ARN.
        shared_ptr<string> tableUniqueId_ {};
        // The display name of the dimension.
        shared_ptr<string> uid_ {};
      };

      class CubeTableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CubeTableList& obj) { 
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(Customsql, customsql_);
          DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_TO_JSON(DsType, dsType_);
          DARABONBA_PTR_TO_JSON(FactTable, factTable_);
          DARABONBA_PTR_TO_JSON(Sql, sql_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
        };
        friend void from_json(const Darabonba::Json& j, CubeTableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(Customsql, customsql_);
          DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_FROM_JSON(DsType, dsType_);
          DARABONBA_PTR_FROM_JSON(FactTable, factTable_);
          DARABONBA_PTR_FROM_JSON(Sql, sql_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
        };
        CubeTableList() = default ;
        CubeTableList(const CubeTableList &) = default ;
        CubeTableList(CubeTableList &&) = default ;
        CubeTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CubeTableList() = default ;
        CubeTableList& operator=(const CubeTableList &) = default ;
        CubeTableList& operator=(CubeTableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caption_ == nullptr
        && this->customsql_ == nullptr && this->datasourceId_ == nullptr && this->dsType_ == nullptr && this->factTable_ == nullptr && this->sql_ == nullptr
        && this->tableName_ == nullptr && this->uniqueId_ == nullptr; };
        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline CubeTableList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // customsql Field Functions 
        bool hasCustomsql() const { return this->customsql_ != nullptr;};
        void deleteCustomsql() { this->customsql_ = nullptr;};
        inline bool getCustomsql() const { DARABONBA_PTR_GET_DEFAULT(customsql_, false) };
        inline CubeTableList& setCustomsql(bool customsql) { DARABONBA_PTR_SET_VALUE(customsql_, customsql) };


        // datasourceId Field Functions 
        bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
        void deleteDatasourceId() { this->datasourceId_ = nullptr;};
        inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
        inline CubeTableList& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


        // dsType Field Functions 
        bool hasDsType() const { return this->dsType_ != nullptr;};
        void deleteDsType() { this->dsType_ = nullptr;};
        inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
        inline CubeTableList& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


        // factTable Field Functions 
        bool hasFactTable() const { return this->factTable_ != nullptr;};
        void deleteFactTable() { this->factTable_ = nullptr;};
        inline bool getFactTable() const { DARABONBA_PTR_GET_DEFAULT(factTable_, false) };
        inline CubeTableList& setFactTable(bool factTable) { DARABONBA_PTR_SET_VALUE(factTable_, factTable) };


        // sql Field Functions 
        bool hasSql() const { return this->sql_ != nullptr;};
        void deleteSql() { this->sql_ = nullptr;};
        inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
        inline CubeTableList& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline CubeTableList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline CubeTableList& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


      protected:
        // Indicates whether the data source table is valid. Valid values:
        // 
        // *   true: data source table
        // *   false: custom table
        shared_ptr<string> caption_ {};
        // The display name of the table.
        shared_ptr<bool> customsql_ {};
        // The name of the table.
        shared_ptr<string> datasourceId_ {};
        // The ID of the data source.
        shared_ptr<string> dsType_ {};
        // The unique ID of the table.
        shared_ptr<bool> factTable_ {};
        // Indicates whether the table is a custom SQL table. Valid values:
        // 
        // *   true: custom SQL table
        // *   false: non-custom SQL table
        shared_ptr<string> sql_ {};
        // The list of tables used by the dataset.
        shared_ptr<string> tableName_ {};
        // The type of the data source. Valid values:
        // 
        // *   mysql
        // *   odps
        // *   oracle
        // *   ... and other data source types supported by Quick BI
        shared_ptr<string> uniqueId_ {};
      };

      virtual bool empty() const override { return this->cubeTableList_ == nullptr
        && this->custimzeSql_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->dimensionList_ == nullptr && this->directory_ == nullptr
        && this->dsId_ == nullptr && this->dsName_ == nullptr && this->dsType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr
        && this->measureList_ == nullptr && this->openOfflineAcceleration_ == nullptr && this->ownerId_ == nullptr && this->ownerName_ == nullptr && this->rowLevel_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
      // cubeTableList Field Functions 
      bool hasCubeTableList() const { return this->cubeTableList_ != nullptr;};
      void deleteCubeTableList() { this->cubeTableList_ = nullptr;};
      inline const vector<Result::CubeTableList> & getCubeTableList() const { DARABONBA_PTR_GET_CONST(cubeTableList_, vector<Result::CubeTableList>) };
      inline vector<Result::CubeTableList> getCubeTableList() { DARABONBA_PTR_GET(cubeTableList_, vector<Result::CubeTableList>) };
      inline Result& setCubeTableList(const vector<Result::CubeTableList> & cubeTableList) { DARABONBA_PTR_SET_VALUE(cubeTableList_, cubeTableList) };
      inline Result& setCubeTableList(vector<Result::CubeTableList> && cubeTableList) { DARABONBA_PTR_SET_RVALUE(cubeTableList_, cubeTableList) };


      // custimzeSql Field Functions 
      bool hasCustimzeSql() const { return this->custimzeSql_ != nullptr;};
      void deleteCustimzeSql() { this->custimzeSql_ = nullptr;};
      inline bool getCustimzeSql() const { DARABONBA_PTR_GET_DEFAULT(custimzeSql_, false) };
      inline Result& setCustimzeSql(bool custimzeSql) { DARABONBA_PTR_SET_VALUE(custimzeSql_, custimzeSql) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline Result& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline Result& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // dimensionList Field Functions 
      bool hasDimensionList() const { return this->dimensionList_ != nullptr;};
      void deleteDimensionList() { this->dimensionList_ = nullptr;};
      inline const vector<Result::DimensionList> & getDimensionList() const { DARABONBA_PTR_GET_CONST(dimensionList_, vector<Result::DimensionList>) };
      inline vector<Result::DimensionList> getDimensionList() { DARABONBA_PTR_GET(dimensionList_, vector<Result::DimensionList>) };
      inline Result& setDimensionList(const vector<Result::DimensionList> & dimensionList) { DARABONBA_PTR_SET_VALUE(dimensionList_, dimensionList) };
      inline Result& setDimensionList(vector<Result::DimensionList> && dimensionList) { DARABONBA_PTR_SET_RVALUE(dimensionList_, dimensionList) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline const Result::Directory & getDirectory() const { DARABONBA_PTR_GET_CONST(directory_, Result::Directory) };
      inline Result::Directory getDirectory() { DARABONBA_PTR_GET(directory_, Result::Directory) };
      inline Result& setDirectory(const Result::Directory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
      inline Result& setDirectory(Result::Directory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


      // dsId Field Functions 
      bool hasDsId() const { return this->dsId_ != nullptr;};
      void deleteDsId() { this->dsId_ = nullptr;};
      inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
      inline Result& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


      // dsName Field Functions 
      bool hasDsName() const { return this->dsName_ != nullptr;};
      void deleteDsName() { this->dsName_ = nullptr;};
      inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
      inline Result& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


      // dsType Field Functions 
      bool hasDsType() const { return this->dsType_ != nullptr;};
      void deleteDsType() { this->dsType_ = nullptr;};
      inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
      inline Result& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModify Field Functions 
      bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
      void deleteGmtModify() { this->gmtModify_ = nullptr;};
      inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
      inline Result& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


      // measureList Field Functions 
      bool hasMeasureList() const { return this->measureList_ != nullptr;};
      void deleteMeasureList() { this->measureList_ = nullptr;};
      inline const vector<Result::MeasureList> & getMeasureList() const { DARABONBA_PTR_GET_CONST(measureList_, vector<Result::MeasureList>) };
      inline vector<Result::MeasureList> getMeasureList() { DARABONBA_PTR_GET(measureList_, vector<Result::MeasureList>) };
      inline Result& setMeasureList(const vector<Result::MeasureList> & measureList) { DARABONBA_PTR_SET_VALUE(measureList_, measureList) };
      inline Result& setMeasureList(vector<Result::MeasureList> && measureList) { DARABONBA_PTR_SET_RVALUE(measureList_, measureList) };


      // openOfflineAcceleration Field Functions 
      bool hasOpenOfflineAcceleration() const { return this->openOfflineAcceleration_ != nullptr;};
      void deleteOpenOfflineAcceleration() { this->openOfflineAcceleration_ = nullptr;};
      inline bool getOpenOfflineAcceleration() const { DARABONBA_PTR_GET_DEFAULT(openOfflineAcceleration_, false) };
      inline Result& setOpenOfflineAcceleration(bool openOfflineAcceleration) { DARABONBA_PTR_SET_VALUE(openOfflineAcceleration_, openOfflineAcceleration) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Result& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline Result& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // rowLevel Field Functions 
      bool hasRowLevel() const { return this->rowLevel_ != nullptr;};
      void deleteRowLevel() { this->rowLevel_ = nullptr;};
      inline bool getRowLevel() const { DARABONBA_PTR_GET_DEFAULT(rowLevel_, false) };
      inline Result& setRowLevel(bool rowLevel) { DARABONBA_PTR_SET_VALUE(rowLevel_, rowLevel) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Result& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // The unique ID of the dataset.
      shared_ptr<vector<Result::CubeTableList>> cubeTableList_ {};
      // The unique ID of the workspace to which the dataset belongs.
      shared_ptr<bool> custimzeSql_ {};
      // The type of the data source. Valid values:
      // 
      // *   mysql
      // *   odps
      // *   oracle
      // *   ... Data source types supported by Quick BI such as
      shared_ptr<string> datasetId_ {};
      // The user ID of the dataset owner in the Quick BI.
      shared_ptr<string> datasetName_ {};
      // A list of all dimensions in the dataset.
      shared_ptr<vector<Result::DimensionList>> dimensionList_ {};
      // The unique ID of the metric.
      shared_ptr<Result::Directory> directory_ {};
      // The name of the data source.
      shared_ptr<string> dsId_ {};
      // The time when the dataset was last modified.
      shared_ptr<string> dsName_ {};
      // The point in time when the training dataset was created.
      shared_ptr<string> dsType_ {};
      // Indicates whether to customize SQL statements. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<string> gmtCreate_ {};
      // The information about the dataset.
      shared_ptr<string> gmtModify_ {};
      // A list of all measures for the dataset.
      shared_ptr<vector<Result::MeasureList>> measureList_ {};
      // Whether to enable extraction acceleration. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> openOfflineAcceleration_ {};
      // Test Space
      shared_ptr<string> ownerId_ {};
      // The unique ID of the data source.
      shared_ptr<string> ownerName_ {};
      // The name of the training dataset.
      shared_ptr<bool> rowLevel_ {};
      // Whether row-level permissions are enabled. Valid values:
      // 
      // *   true: The VIP Netty channel is enabled.
      // *   false: The VIP Netty channel is disabled.
      shared_ptr<string> workspaceId_ {};
      // Big Baby
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDatasetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDatasetInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryDatasetInfoResponseBody::Result) };
    inline QueryDatasetInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryDatasetInfoResponseBody::Result) };
    inline QueryDatasetInfoResponseBody& setResult(const QueryDatasetInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDatasetInfoResponseBody& setResult(QueryDatasetInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDatasetInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Whether the operation is successfully returned. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<string> requestId_ {};
    // The dataset information.
    shared_ptr<QueryDatasetInfoResponseBody::Result> result_ {};
    // The unique ID of the dataset.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
