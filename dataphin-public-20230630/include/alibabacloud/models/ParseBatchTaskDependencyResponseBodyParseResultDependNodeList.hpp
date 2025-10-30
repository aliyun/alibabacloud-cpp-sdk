// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODYPARSERESULTDEPENDNODELIST_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODYPARSERESULTDEPENDNODELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyResponseBodyParseResultDependNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIoType, nodeIoType_);
      DARABONBA_PTR_TO_JSON(ScheduleNodeInfoList, scheduleNodeInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIoType, nodeIoType_);
      DARABONBA_PTR_FROM_JSON(ScheduleNodeInfoList, scheduleNodeInfoList_);
    };
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeList() = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeList(const ParseBatchTaskDependencyResponseBodyParseResultDependNodeList &) = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeList(ParseBatchTaskDependencyResponseBodyParseResultDependNodeList &&) = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyResponseBodyParseResultDependNodeList() = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& operator=(const ParseBatchTaskDependencyResponseBodyParseResultDependNodeList &) = default ;
    ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& operator=(ParseBatchTaskDependencyResponseBodyParseResultDependNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeIoType_ == nullptr
        && return this->scheduleNodeInfoList_ == nullptr; };
    // nodeIoType Field Functions 
    bool hasNodeIoType() const { return this->nodeIoType_ != nullptr;};
    void deleteNodeIoType() { this->nodeIoType_ = nullptr;};
    inline string nodeIoType() const { DARABONBA_PTR_GET_DEFAULT(nodeIoType_, "") };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& setNodeIoType(string nodeIoType) { DARABONBA_PTR_SET_VALUE(nodeIoType_, nodeIoType) };


    // scheduleNodeInfoList Field Functions 
    bool hasScheduleNodeInfoList() const { return this->scheduleNodeInfoList_ != nullptr;};
    void deleteScheduleNodeInfoList() { this->scheduleNodeInfoList_ = nullptr;};
    inline const vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList> & scheduleNodeInfoList() const { DARABONBA_PTR_GET_CONST(scheduleNodeInfoList_, vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList>) };
    inline vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList> scheduleNodeInfoList() { DARABONBA_PTR_GET(scheduleNodeInfoList_, vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList>) };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& setScheduleNodeInfoList(const vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList> & scheduleNodeInfoList) { DARABONBA_PTR_SET_VALUE(scheduleNodeInfoList_, scheduleNodeInfoList) };
    inline ParseBatchTaskDependencyResponseBodyParseResultDependNodeList& setScheduleNodeInfoList(vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList> && scheduleNodeInfoList) { DARABONBA_PTR_SET_RVALUE(scheduleNodeInfoList_, scheduleNodeInfoList) };


  protected:
    std::shared_ptr<string> nodeIoType_ = nullptr;
    std::shared_ptr<vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeListScheduleNodeInfoList>> scheduleNodeInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
