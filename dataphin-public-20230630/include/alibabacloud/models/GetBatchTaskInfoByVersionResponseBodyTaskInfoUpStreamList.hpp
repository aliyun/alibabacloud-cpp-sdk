// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKINFOBYVERSIONRESPONSEBODYTASKINFOUPSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKINFOBYVERSIONRESPONSEBODYTASKINFOUPSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(DependPeriod, dependPeriod_);
      DARABONBA_PTR_TO_JSON(DependStrategy, dependStrategy_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PeriodDiff, periodDiff_);
      DARABONBA_PTR_TO_JSON(SourceNodeEnabled, sourceNodeEnabled_);
      DARABONBA_PTR_TO_JSON(SourceNodeId, sourceNodeId_);
      DARABONBA_PTR_TO_JSON(SourceNodeName, sourceNodeName_);
      DARABONBA_PTR_TO_JSON(SourceNodeOutputName, sourceNodeOutputName_);
      DARABONBA_PTR_TO_JSON(SourceNodeUserName, sourceNodeUserName_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(DependPeriod, dependPeriod_);
      DARABONBA_PTR_FROM_JSON(DependStrategy, dependStrategy_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PeriodDiff, periodDiff_);
      DARABONBA_PTR_FROM_JSON(SourceNodeEnabled, sourceNodeEnabled_);
      DARABONBA_PTR_FROM_JSON(SourceNodeId, sourceNodeId_);
      DARABONBA_PTR_FROM_JSON(SourceNodeName, sourceNodeName_);
      DARABONBA_PTR_FROM_JSON(SourceNodeOutputName, sourceNodeOutputName_);
      DARABONBA_PTR_FROM_JSON(SourceNodeUserName, sourceNodeUserName_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
    };
    GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList() = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList(const GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList &) = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList(GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList &&) = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList() = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& operator=(const GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList &) = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& operator=(GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependPeriod_ == nullptr
        && return this->dependStrategy_ == nullptr && return this->fieldList_ == nullptr && return this->nodeType_ == nullptr && return this->periodDiff_ == nullptr && return this->sourceNodeEnabled_ == nullptr
        && return this->sourceNodeId_ == nullptr && return this->sourceNodeName_ == nullptr && return this->sourceNodeOutputName_ == nullptr && return this->sourceNodeUserName_ == nullptr && return this->sourceTableName_ == nullptr; };
    // dependPeriod Field Functions 
    bool hasDependPeriod() const { return this->dependPeriod_ != nullptr;};
    void deleteDependPeriod() { this->dependPeriod_ = nullptr;};
    inline const Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod & dependPeriod() const { DARABONBA_PTR_GET_CONST(dependPeriod_, Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod) };
    inline Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod dependPeriod() { DARABONBA_PTR_GET(dependPeriod_, Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setDependPeriod(const Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod & dependPeriod) { DARABONBA_PTR_SET_VALUE(dependPeriod_, dependPeriod) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setDependPeriod(Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod && dependPeriod) { DARABONBA_PTR_SET_RVALUE(dependPeriod_, dependPeriod) };


    // dependStrategy Field Functions 
    bool hasDependStrategy() const { return this->dependStrategy_ != nullptr;};
    void deleteDependStrategy() { this->dependStrategy_ = nullptr;};
    inline string dependStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependStrategy_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setDependStrategy(string dependStrategy) { DARABONBA_PTR_SET_VALUE(dependStrategy_, dependStrategy) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline const vector<string> & fieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<string>) };
    inline vector<string> fieldList() { DARABONBA_PTR_GET(fieldList_, vector<string>) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setFieldList(const vector<string> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setFieldList(vector<string> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // periodDiff Field Functions 
    bool hasPeriodDiff() const { return this->periodDiff_ != nullptr;};
    void deletePeriodDiff() { this->periodDiff_ = nullptr;};
    inline int32_t periodDiff() const { DARABONBA_PTR_GET_DEFAULT(periodDiff_, 0) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setPeriodDiff(int32_t periodDiff) { DARABONBA_PTR_SET_VALUE(periodDiff_, periodDiff) };


    // sourceNodeEnabled Field Functions 
    bool hasSourceNodeEnabled() const { return this->sourceNodeEnabled_ != nullptr;};
    void deleteSourceNodeEnabled() { this->sourceNodeEnabled_ = nullptr;};
    inline bool sourceNodeEnabled() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeEnabled_, false) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setSourceNodeEnabled(bool sourceNodeEnabled) { DARABONBA_PTR_SET_VALUE(sourceNodeEnabled_, sourceNodeEnabled) };


    // sourceNodeId Field Functions 
    bool hasSourceNodeId() const { return this->sourceNodeId_ != nullptr;};
    void deleteSourceNodeId() { this->sourceNodeId_ = nullptr;};
    inline string sourceNodeId() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeId_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setSourceNodeId(string sourceNodeId) { DARABONBA_PTR_SET_VALUE(sourceNodeId_, sourceNodeId) };


    // sourceNodeName Field Functions 
    bool hasSourceNodeName() const { return this->sourceNodeName_ != nullptr;};
    void deleteSourceNodeName() { this->sourceNodeName_ = nullptr;};
    inline string sourceNodeName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeName_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setSourceNodeName(string sourceNodeName) { DARABONBA_PTR_SET_VALUE(sourceNodeName_, sourceNodeName) };


    // sourceNodeOutputName Field Functions 
    bool hasSourceNodeOutputName() const { return this->sourceNodeOutputName_ != nullptr;};
    void deleteSourceNodeOutputName() { this->sourceNodeOutputName_ = nullptr;};
    inline string sourceNodeOutputName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeOutputName_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setSourceNodeOutputName(string sourceNodeOutputName) { DARABONBA_PTR_SET_VALUE(sourceNodeOutputName_, sourceNodeOutputName) };


    // sourceNodeUserName Field Functions 
    bool hasSourceNodeUserName() const { return this->sourceNodeUserName_ != nullptr;};
    void deleteSourceNodeUserName() { this->sourceNodeUserName_ = nullptr;};
    inline string sourceNodeUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceNodeUserName_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setSourceNodeUserName(string sourceNodeUserName) { DARABONBA_PTR_SET_VALUE(sourceNodeUserName_, sourceNodeUserName) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


  protected:
    std::shared_ptr<Models::GetBatchTaskInfoByVersionResponseBodyTaskInfoUpStreamListDependPeriod> dependPeriod_ = nullptr;
    std::shared_ptr<string> dependStrategy_ = nullptr;
    std::shared_ptr<vector<string>> fieldList_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<int32_t> periodDiff_ = nullptr;
    std::shared_ptr<bool> sourceNodeEnabled_ = nullptr;
    std::shared_ptr<string> sourceNodeId_ = nullptr;
    std::shared_ptr<string> sourceNodeName_ = nullptr;
    std::shared_ptr<string> sourceNodeOutputName_ = nullptr;
    std::shared_ptr<string> sourceNodeUserName_ = nullptr;
    std::shared_ptr<string> sourceTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
