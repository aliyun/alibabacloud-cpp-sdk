// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUESTSUBMITCOMMANDUPSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUESTSUBMITCOMMANDUPSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTaskRequestSubmitCommandUpStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTaskRequestSubmitCommandUpStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(DependPeriod, dependPeriod_);
      DARABONBA_PTR_TO_JSON(DependStrategy, dependStrategy_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PeriodDiff, periodDiff_);
      DARABONBA_PTR_TO_JSON(SourceNodeEnabled, sourceNodeEnabled_);
      DARABONBA_PTR_TO_JSON(SourceNodeId, sourceNodeId_);
      DARABONBA_PTR_TO_JSON(SourceNodeOutputName, sourceNodeOutputName_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTaskRequestSubmitCommandUpStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(DependPeriod, dependPeriod_);
      DARABONBA_PTR_FROM_JSON(DependStrategy, dependStrategy_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PeriodDiff, periodDiff_);
      DARABONBA_PTR_FROM_JSON(SourceNodeEnabled, sourceNodeEnabled_);
      DARABONBA_PTR_FROM_JSON(SourceNodeId, sourceNodeId_);
      DARABONBA_PTR_FROM_JSON(SourceNodeOutputName, sourceNodeOutputName_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
    };
    SubmitBatchTaskRequestSubmitCommandUpStreamList() = default ;
    SubmitBatchTaskRequestSubmitCommandUpStreamList(const SubmitBatchTaskRequestSubmitCommandUpStreamList &) = default ;
    SubmitBatchTaskRequestSubmitCommandUpStreamList(SubmitBatchTaskRequestSubmitCommandUpStreamList &&) = default ;
    SubmitBatchTaskRequestSubmitCommandUpStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTaskRequestSubmitCommandUpStreamList() = default ;
    SubmitBatchTaskRequestSubmitCommandUpStreamList& operator=(const SubmitBatchTaskRequestSubmitCommandUpStreamList &) = default ;
    SubmitBatchTaskRequestSubmitCommandUpStreamList& operator=(SubmitBatchTaskRequestSubmitCommandUpStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependPeriod_ != nullptr
        && this->dependStrategy_ != nullptr && this->fieldList_ != nullptr && this->nodeType_ != nullptr && this->periodDiff_ != nullptr && this->sourceNodeEnabled_ != nullptr
        && this->sourceNodeId_ != nullptr && this->sourceNodeOutputName_ != nullptr && this->sourceTableName_ != nullptr; };
    // dependPeriod Field Functions 
    bool hasDependPeriod() const { return this->dependPeriod_ != nullptr;};
    void deleteDependPeriod() { this->dependPeriod_ = nullptr;};
    inline const Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod & dependPeriod() const { DARABONBA_PTR_GET_CONST(dependPeriod_, Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod) };
    inline Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod dependPeriod() { DARABONBA_PTR_GET(dependPeriod_, Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod) };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setDependPeriod(const Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod & dependPeriod) { DARABONBA_PTR_SET_VALUE(dependPeriod_, dependPeriod) };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setDependPeriod(Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod && dependPeriod) { DARABONBA_PTR_SET_RVALUE(dependPeriod_, dependPeriod) };


    // dependStrategy Field Functions 
    bool hasDependStrategy() const { return this->dependStrategy_ != nullptr;};
    void deleteDependStrategy() { this->dependStrategy_ = nullptr;};
    inline string dependStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependStrategy_, "") };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setDependStrategy(string dependStrategy) { DARABONBA_PTR_SET_VALUE(dependStrategy_, dependStrategy) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline const vector<string> & fieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<string>) };
    inline vector<string> fieldList() { DARABONBA_PTR_GET(fieldList_, vector<string>) };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setFieldList(const vector<string> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setFieldList(vector<string> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // periodDiff Field Functions 
    bool hasPeriodDiff() const { return this->periodDiff_ != nullptr;};
    void deletePeriodDiff() { this->periodDiff_ = nullptr;};
    inline int32_t periodDiff() const { DARABONBA_PTR_GET_DEFAULT(periodDiff_, 0) };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setPeriodDiff(int32_t periodDiff) { DARABONBA_PTR_SET_VALUE(periodDiff_, periodDiff) };


    // sourceNodeEnabled Field Functions 
    bool hasSourceNodeEnabled() const { return this->sourceNodeEnabled_ != nullptr;};
    void deleteSourceNodeEnabled() { this->sourceNodeEnabled_ = nullptr;};
    inline bool sourceNodeEnabled() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeEnabled_, false) };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setSourceNodeEnabled(bool sourceNodeEnabled) { DARABONBA_PTR_SET_VALUE(sourceNodeEnabled_, sourceNodeEnabled) };


    // sourceNodeId Field Functions 
    bool hasSourceNodeId() const { return this->sourceNodeId_ != nullptr;};
    void deleteSourceNodeId() { this->sourceNodeId_ = nullptr;};
    inline string sourceNodeId() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeId_, "") };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setSourceNodeId(string sourceNodeId) { DARABONBA_PTR_SET_VALUE(sourceNodeId_, sourceNodeId) };


    // sourceNodeOutputName Field Functions 
    bool hasSourceNodeOutputName() const { return this->sourceNodeOutputName_ != nullptr;};
    void deleteSourceNodeOutputName() { this->sourceNodeOutputName_ = nullptr;};
    inline string sourceNodeOutputName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeOutputName_, "") };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setSourceNodeOutputName(string sourceNodeOutputName) { DARABONBA_PTR_SET_VALUE(sourceNodeOutputName_, sourceNodeOutputName) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline SubmitBatchTaskRequestSubmitCommandUpStreamList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


  protected:
    std::shared_ptr<Models::SubmitBatchTaskRequestSubmitCommandUpStreamListDependPeriod> dependPeriod_ = nullptr;
    std::shared_ptr<string> dependStrategy_ = nullptr;
    std::shared_ptr<vector<string>> fieldList_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> periodDiff_ = nullptr;
    std::shared_ptr<bool> sourceNodeEnabled_ = nullptr;
    std::shared_ptr<string> sourceNodeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceNodeOutputName_ = nullptr;
    std::shared_ptr<string> sourceTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
