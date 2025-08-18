// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODYPARSERESULTDEPENDNODELISTSCHEDULENODEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODYPARSERESULTDEPENDNODELISTSCHEDULENODEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList() = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList(const ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList &) = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList(ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList &&) = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList() = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& operator=(const ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList &) = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& operator=(ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldList_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->outputName_ != nullptr && this->ownerName_ != nullptr && this->ownerUserId_ != nullptr
        && this->tableName_ != nullptr; };
    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline const vector<string> & fieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<string>) };
    inline vector<string> fieldList() { DARABONBA_PTR_GET(fieldList_, vector<string>) };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setFieldList(const vector<string> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setFieldList(vector<string> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string outputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<string>> fieldList_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> outputName_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
