// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYEXPLAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYEXPLAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeQueryExplainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryExplainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Argument, argument_);
      DARABONBA_PTR_TO_JSON(AvgRowSize, avgRowSize_);
      DARABONBA_PTR_TO_JSON(DefinedValues, definedValues_);
      DARABONBA_PTR_TO_JSON(EstimateCPU, estimateCPU_);
      DARABONBA_PTR_TO_JSON(EstimateExecutions, estimateExecutions_);
      DARABONBA_PTR_TO_JSON(EstimateIO, estimateIO_);
      DARABONBA_PTR_TO_JSON(EstimateRows, estimateRows_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IndexList, indexList_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyLen, keyLen_);
      DARABONBA_PTR_TO_JSON(LogicalOp, logicalOp_);
      DARABONBA_PTR_TO_JSON(LogicalPlanList, logicalPlanList_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OutputList, outputList_);
      DARABONBA_PTR_TO_JSON(Parallel, parallel_);
      DARABONBA_PTR_TO_JSON(Parent, parent_);
      DARABONBA_PTR_TO_JSON(PhysicalOp, physicalOp_);
      DARABONBA_PTR_TO_JSON(PossibleKeys, possibleKeys_);
      DARABONBA_PTR_TO_JSON(QueryPlan, queryPlan_);
      DARABONBA_PTR_TO_JSON(Ref, ref_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
      DARABONBA_PTR_TO_JSON(StmtId, stmtId_);
      DARABONBA_PTR_TO_JSON(StmtText, stmtText_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
      DARABONBA_PTR_TO_JSON(TotalSubtreeCost, totalSubtreeCost_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryExplainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Argument, argument_);
      DARABONBA_PTR_FROM_JSON(AvgRowSize, avgRowSize_);
      DARABONBA_PTR_FROM_JSON(DefinedValues, definedValues_);
      DARABONBA_PTR_FROM_JSON(EstimateCPU, estimateCPU_);
      DARABONBA_PTR_FROM_JSON(EstimateExecutions, estimateExecutions_);
      DARABONBA_PTR_FROM_JSON(EstimateIO, estimateIO_);
      DARABONBA_PTR_FROM_JSON(EstimateRows, estimateRows_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IndexList, indexList_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyLen, keyLen_);
      DARABONBA_PTR_FROM_JSON(LogicalOp, logicalOp_);
      DARABONBA_PTR_FROM_JSON(LogicalPlanList, logicalPlanList_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
      DARABONBA_PTR_FROM_JSON(Parallel, parallel_);
      DARABONBA_PTR_FROM_JSON(Parent, parent_);
      DARABONBA_PTR_FROM_JSON(PhysicalOp, physicalOp_);
      DARABONBA_PTR_FROM_JSON(PossibleKeys, possibleKeys_);
      DARABONBA_PTR_FROM_JSON(QueryPlan, queryPlan_);
      DARABONBA_PTR_FROM_JSON(Ref, ref_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
      DARABONBA_PTR_FROM_JSON(StmtId, stmtId_);
      DARABONBA_PTR_FROM_JSON(StmtText, stmtText_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
      DARABONBA_PTR_FROM_JSON(TotalSubtreeCost, totalSubtreeCost_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
    };
    DescribeQueryExplainResponseBodyData() = default ;
    DescribeQueryExplainResponseBodyData(const DescribeQueryExplainResponseBodyData &) = default ;
    DescribeQueryExplainResponseBodyData(DescribeQueryExplainResponseBodyData &&) = default ;
    DescribeQueryExplainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryExplainResponseBodyData() = default ;
    DescribeQueryExplainResponseBodyData& operator=(const DescribeQueryExplainResponseBodyData &) = default ;
    DescribeQueryExplainResponseBodyData& operator=(DescribeQueryExplainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argument_ != nullptr
        && this->avgRowSize_ != nullptr && this->definedValues_ != nullptr && this->estimateCPU_ != nullptr && this->estimateExecutions_ != nullptr && this->estimateIO_ != nullptr
        && this->estimateRows_ != nullptr && this->extra_ != nullptr && this->id_ != nullptr && this->indexList_ != nullptr && this->key_ != nullptr
        && this->keyLen_ != nullptr && this->logicalOp_ != nullptr && this->logicalPlanList_ != nullptr && this->nodeId_ != nullptr && this->outputList_ != nullptr
        && this->parallel_ != nullptr && this->parent_ != nullptr && this->physicalOp_ != nullptr && this->possibleKeys_ != nullptr && this->queryPlan_ != nullptr
        && this->ref_ != nullptr && this->rows_ != nullptr && this->selectType_ != nullptr && this->stmtId_ != nullptr && this->stmtText_ != nullptr
        && this->table_ != nullptr && this->tableList_ != nullptr && this->totalSubtreeCost_ != nullptr && this->type_ != nullptr && this->warnings_ != nullptr; };
    // argument Field Functions 
    bool hasArgument() const { return this->argument_ != nullptr;};
    void deleteArgument() { this->argument_ = nullptr;};
    inline string argument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
    inline DescribeQueryExplainResponseBodyData& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


    // avgRowSize Field Functions 
    bool hasAvgRowSize() const { return this->avgRowSize_ != nullptr;};
    void deleteAvgRowSize() { this->avgRowSize_ = nullptr;};
    inline string avgRowSize() const { DARABONBA_PTR_GET_DEFAULT(avgRowSize_, "") };
    inline DescribeQueryExplainResponseBodyData& setAvgRowSize(string avgRowSize) { DARABONBA_PTR_SET_VALUE(avgRowSize_, avgRowSize) };


    // definedValues Field Functions 
    bool hasDefinedValues() const { return this->definedValues_ != nullptr;};
    void deleteDefinedValues() { this->definedValues_ = nullptr;};
    inline string definedValues() const { DARABONBA_PTR_GET_DEFAULT(definedValues_, "") };
    inline DescribeQueryExplainResponseBodyData& setDefinedValues(string definedValues) { DARABONBA_PTR_SET_VALUE(definedValues_, definedValues) };


    // estimateCPU Field Functions 
    bool hasEstimateCPU() const { return this->estimateCPU_ != nullptr;};
    void deleteEstimateCPU() { this->estimateCPU_ = nullptr;};
    inline string estimateCPU() const { DARABONBA_PTR_GET_DEFAULT(estimateCPU_, "") };
    inline DescribeQueryExplainResponseBodyData& setEstimateCPU(string estimateCPU) { DARABONBA_PTR_SET_VALUE(estimateCPU_, estimateCPU) };


    // estimateExecutions Field Functions 
    bool hasEstimateExecutions() const { return this->estimateExecutions_ != nullptr;};
    void deleteEstimateExecutions() { this->estimateExecutions_ = nullptr;};
    inline string estimateExecutions() const { DARABONBA_PTR_GET_DEFAULT(estimateExecutions_, "") };
    inline DescribeQueryExplainResponseBodyData& setEstimateExecutions(string estimateExecutions) { DARABONBA_PTR_SET_VALUE(estimateExecutions_, estimateExecutions) };


    // estimateIO Field Functions 
    bool hasEstimateIO() const { return this->estimateIO_ != nullptr;};
    void deleteEstimateIO() { this->estimateIO_ = nullptr;};
    inline string estimateIO() const { DARABONBA_PTR_GET_DEFAULT(estimateIO_, "") };
    inline DescribeQueryExplainResponseBodyData& setEstimateIO(string estimateIO) { DARABONBA_PTR_SET_VALUE(estimateIO_, estimateIO) };


    // estimateRows Field Functions 
    bool hasEstimateRows() const { return this->estimateRows_ != nullptr;};
    void deleteEstimateRows() { this->estimateRows_ = nullptr;};
    inline string estimateRows() const { DARABONBA_PTR_GET_DEFAULT(estimateRows_, "") };
    inline DescribeQueryExplainResponseBodyData& setEstimateRows(string estimateRows) { DARABONBA_PTR_SET_VALUE(estimateRows_, estimateRows) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DescribeQueryExplainResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeQueryExplainResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // indexList Field Functions 
    bool hasIndexList() const { return this->indexList_ != nullptr;};
    void deleteIndexList() { this->indexList_ = nullptr;};
    inline const vector<string> & indexList() const { DARABONBA_PTR_GET_CONST(indexList_, vector<string>) };
    inline vector<string> indexList() { DARABONBA_PTR_GET(indexList_, vector<string>) };
    inline DescribeQueryExplainResponseBodyData& setIndexList(const vector<string> & indexList) { DARABONBA_PTR_SET_VALUE(indexList_, indexList) };
    inline DescribeQueryExplainResponseBodyData& setIndexList(vector<string> && indexList) { DARABONBA_PTR_SET_RVALUE(indexList_, indexList) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeQueryExplainResponseBodyData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyLen Field Functions 
    bool hasKeyLen() const { return this->keyLen_ != nullptr;};
    void deleteKeyLen() { this->keyLen_ = nullptr;};
    inline string keyLen() const { DARABONBA_PTR_GET_DEFAULT(keyLen_, "") };
    inline DescribeQueryExplainResponseBodyData& setKeyLen(string keyLen) { DARABONBA_PTR_SET_VALUE(keyLen_, keyLen) };


    // logicalOp Field Functions 
    bool hasLogicalOp() const { return this->logicalOp_ != nullptr;};
    void deleteLogicalOp() { this->logicalOp_ = nullptr;};
    inline string logicalOp() const { DARABONBA_PTR_GET_DEFAULT(logicalOp_, "") };
    inline DescribeQueryExplainResponseBodyData& setLogicalOp(string logicalOp) { DARABONBA_PTR_SET_VALUE(logicalOp_, logicalOp) };


    // logicalPlanList Field Functions 
    bool hasLogicalPlanList() const { return this->logicalPlanList_ != nullptr;};
    void deleteLogicalPlanList() { this->logicalPlanList_ = nullptr;};
    inline const vector<string> & logicalPlanList() const { DARABONBA_PTR_GET_CONST(logicalPlanList_, vector<string>) };
    inline vector<string> logicalPlanList() { DARABONBA_PTR_GET(logicalPlanList_, vector<string>) };
    inline DescribeQueryExplainResponseBodyData& setLogicalPlanList(const vector<string> & logicalPlanList) { DARABONBA_PTR_SET_VALUE(logicalPlanList_, logicalPlanList) };
    inline DescribeQueryExplainResponseBodyData& setLogicalPlanList(vector<string> && logicalPlanList) { DARABONBA_PTR_SET_RVALUE(logicalPlanList_, logicalPlanList) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeQueryExplainResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // outputList Field Functions 
    bool hasOutputList() const { return this->outputList_ != nullptr;};
    void deleteOutputList() { this->outputList_ = nullptr;};
    inline string outputList() const { DARABONBA_PTR_GET_DEFAULT(outputList_, "") };
    inline DescribeQueryExplainResponseBodyData& setOutputList(string outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };


    // parallel Field Functions 
    bool hasParallel() const { return this->parallel_ != nullptr;};
    void deleteParallel() { this->parallel_ = nullptr;};
    inline string parallel() const { DARABONBA_PTR_GET_DEFAULT(parallel_, "") };
    inline DescribeQueryExplainResponseBodyData& setParallel(string parallel) { DARABONBA_PTR_SET_VALUE(parallel_, parallel) };


    // parent Field Functions 
    bool hasParent() const { return this->parent_ != nullptr;};
    void deleteParent() { this->parent_ = nullptr;};
    inline string parent() const { DARABONBA_PTR_GET_DEFAULT(parent_, "") };
    inline DescribeQueryExplainResponseBodyData& setParent(string parent) { DARABONBA_PTR_SET_VALUE(parent_, parent) };


    // physicalOp Field Functions 
    bool hasPhysicalOp() const { return this->physicalOp_ != nullptr;};
    void deletePhysicalOp() { this->physicalOp_ = nullptr;};
    inline string physicalOp() const { DARABONBA_PTR_GET_DEFAULT(physicalOp_, "") };
    inline DescribeQueryExplainResponseBodyData& setPhysicalOp(string physicalOp) { DARABONBA_PTR_SET_VALUE(physicalOp_, physicalOp) };


    // possibleKeys Field Functions 
    bool hasPossibleKeys() const { return this->possibleKeys_ != nullptr;};
    void deletePossibleKeys() { this->possibleKeys_ = nullptr;};
    inline string possibleKeys() const { DARABONBA_PTR_GET_DEFAULT(possibleKeys_, "") };
    inline DescribeQueryExplainResponseBodyData& setPossibleKeys(string possibleKeys) { DARABONBA_PTR_SET_VALUE(possibleKeys_, possibleKeys) };


    // queryPlan Field Functions 
    bool hasQueryPlan() const { return this->queryPlan_ != nullptr;};
    void deleteQueryPlan() { this->queryPlan_ = nullptr;};
    inline string queryPlan() const { DARABONBA_PTR_GET_DEFAULT(queryPlan_, "") };
    inline DescribeQueryExplainResponseBodyData& setQueryPlan(string queryPlan) { DARABONBA_PTR_SET_VALUE(queryPlan_, queryPlan) };


    // ref Field Functions 
    bool hasRef() const { return this->ref_ != nullptr;};
    void deleteRef() { this->ref_ = nullptr;};
    inline string ref() const { DARABONBA_PTR_GET_DEFAULT(ref_, "") };
    inline DescribeQueryExplainResponseBodyData& setRef(string ref) { DARABONBA_PTR_SET_VALUE(ref_, ref) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline DescribeQueryExplainResponseBodyData& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline string selectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
    inline DescribeQueryExplainResponseBodyData& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


    // stmtId Field Functions 
    bool hasStmtId() const { return this->stmtId_ != nullptr;};
    void deleteStmtId() { this->stmtId_ = nullptr;};
    inline string stmtId() const { DARABONBA_PTR_GET_DEFAULT(stmtId_, "") };
    inline DescribeQueryExplainResponseBodyData& setStmtId(string stmtId) { DARABONBA_PTR_SET_VALUE(stmtId_, stmtId) };


    // stmtText Field Functions 
    bool hasStmtText() const { return this->stmtText_ != nullptr;};
    void deleteStmtText() { this->stmtText_ = nullptr;};
    inline string stmtText() const { DARABONBA_PTR_GET_DEFAULT(stmtText_, "") };
    inline DescribeQueryExplainResponseBodyData& setStmtText(string stmtText) { DARABONBA_PTR_SET_VALUE(stmtText_, stmtText) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DescribeQueryExplainResponseBodyData& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const vector<string> & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<string>) };
    inline vector<string> tableList() { DARABONBA_PTR_GET(tableList_, vector<string>) };
    inline DescribeQueryExplainResponseBodyData& setTableList(const vector<string> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline DescribeQueryExplainResponseBodyData& setTableList(vector<string> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


    // totalSubtreeCost Field Functions 
    bool hasTotalSubtreeCost() const { return this->totalSubtreeCost_ != nullptr;};
    void deleteTotalSubtreeCost() { this->totalSubtreeCost_ = nullptr;};
    inline string totalSubtreeCost() const { DARABONBA_PTR_GET_DEFAULT(totalSubtreeCost_, "") };
    inline DescribeQueryExplainResponseBodyData& setTotalSubtreeCost(string totalSubtreeCost) { DARABONBA_PTR_SET_VALUE(totalSubtreeCost_, totalSubtreeCost) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeQueryExplainResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline string warnings() const { DARABONBA_PTR_GET_DEFAULT(warnings_, "") };
    inline DescribeQueryExplainResponseBodyData& setWarnings(string warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };


  protected:
    std::shared_ptr<string> argument_ = nullptr;
    std::shared_ptr<string> avgRowSize_ = nullptr;
    std::shared_ptr<string> definedValues_ = nullptr;
    std::shared_ptr<string> estimateCPU_ = nullptr;
    std::shared_ptr<string> estimateExecutions_ = nullptr;
    std::shared_ptr<string> estimateIO_ = nullptr;
    std::shared_ptr<string> estimateRows_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<string>> indexList_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> keyLen_ = nullptr;
    std::shared_ptr<string> logicalOp_ = nullptr;
    std::shared_ptr<vector<string>> logicalPlanList_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> outputList_ = nullptr;
    std::shared_ptr<string> parallel_ = nullptr;
    std::shared_ptr<string> parent_ = nullptr;
    std::shared_ptr<string> physicalOp_ = nullptr;
    std::shared_ptr<string> possibleKeys_ = nullptr;
    std::shared_ptr<string> queryPlan_ = nullptr;
    std::shared_ptr<string> ref_ = nullptr;
    std::shared_ptr<string> rows_ = nullptr;
    std::shared_ptr<string> selectType_ = nullptr;
    std::shared_ptr<string> stmtId_ = nullptr;
    std::shared_ptr<string> stmtText_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
    std::shared_ptr<vector<string>> tableList_ = nullptr;
    std::shared_ptr<string> totalSubtreeCost_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> warnings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
