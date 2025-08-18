// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList.hpp>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommandFilterList.hpp>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommandGlobalParamList.hpp>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommandNodeIdList.hpp>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommandNodeParamsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateNodeSupplementRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ContainAllDownStream, containAllDownStream_);
      DARABONBA_PTR_TO_JSON(DownStreamNodeIdList, downStreamNodeIdList_);
      DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_TO_JSON(FilterList, filterList_);
      DARABONBA_PTR_TO_JSON(GlobalParamList, globalParamList_);
      DARABONBA_PTR_TO_JSON(MaxDueTime, maxDueTime_);
      DARABONBA_PTR_TO_JSON(MinDueTime, minDueTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_TO_JSON(NodeParamsList, nodeParamsList_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainAllDownStream, containAllDownStream_);
      DARABONBA_PTR_FROM_JSON(DownStreamNodeIdList, downStreamNodeIdList_);
      DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_FROM_JSON(FilterList, filterList_);
      DARABONBA_PTR_FROM_JSON(GlobalParamList, globalParamList_);
      DARABONBA_PTR_FROM_JSON(MaxDueTime, maxDueTime_);
      DARABONBA_PTR_FROM_JSON(MinDueTime, minDueTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
      DARABONBA_PTR_FROM_JSON(NodeParamsList, nodeParamsList_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
    };
    CreateNodeSupplementRequestCreateCommand() = default ;
    CreateNodeSupplementRequestCreateCommand(const CreateNodeSupplementRequestCreateCommand &) = default ;
    CreateNodeSupplementRequestCreateCommand(CreateNodeSupplementRequestCreateCommand &&) = default ;
    CreateNodeSupplementRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementRequestCreateCommand() = default ;
    CreateNodeSupplementRequestCreateCommand& operator=(const CreateNodeSupplementRequestCreateCommand &) = default ;
    CreateNodeSupplementRequestCreateCommand& operator=(CreateNodeSupplementRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containAllDownStream_ != nullptr
        && this->downStreamNodeIdList_ != nullptr && this->endBizDate_ != nullptr && this->filterList_ != nullptr && this->globalParamList_ != nullptr && this->maxDueTime_ != nullptr
        && this->minDueTime_ != nullptr && this->name_ != nullptr && this->nodeIdList_ != nullptr && this->nodeParamsList_ != nullptr && this->parallelism_ != nullptr
        && this->projectId_ != nullptr && this->startBizDate_ != nullptr; };
    // containAllDownStream Field Functions 
    bool hasContainAllDownStream() const { return this->containAllDownStream_ != nullptr;};
    void deleteContainAllDownStream() { this->containAllDownStream_ = nullptr;};
    inline bool containAllDownStream() const { DARABONBA_PTR_GET_DEFAULT(containAllDownStream_, false) };
    inline CreateNodeSupplementRequestCreateCommand& setContainAllDownStream(bool containAllDownStream) { DARABONBA_PTR_SET_VALUE(containAllDownStream_, containAllDownStream) };


    // downStreamNodeIdList Field Functions 
    bool hasDownStreamNodeIdList() const { return this->downStreamNodeIdList_ != nullptr;};
    void deleteDownStreamNodeIdList() { this->downStreamNodeIdList_ = nullptr;};
    inline const vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList> & downStreamNodeIdList() const { DARABONBA_PTR_GET_CONST(downStreamNodeIdList_, vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList>) };
    inline vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList> downStreamNodeIdList() { DARABONBA_PTR_GET(downStreamNodeIdList_, vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList>) };
    inline CreateNodeSupplementRequestCreateCommand& setDownStreamNodeIdList(const vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList> & downStreamNodeIdList) { DARABONBA_PTR_SET_VALUE(downStreamNodeIdList_, downStreamNodeIdList) };
    inline CreateNodeSupplementRequestCreateCommand& setDownStreamNodeIdList(vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList> && downStreamNodeIdList) { DARABONBA_PTR_SET_RVALUE(downStreamNodeIdList_, downStreamNodeIdList) };


    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string endBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline CreateNodeSupplementRequestCreateCommand& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // filterList Field Functions 
    bool hasFilterList() const { return this->filterList_ != nullptr;};
    void deleteFilterList() { this->filterList_ = nullptr;};
    inline const vector<Models::CreateNodeSupplementRequestCreateCommandFilterList> & filterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<Models::CreateNodeSupplementRequestCreateCommandFilterList>) };
    inline vector<Models::CreateNodeSupplementRequestCreateCommandFilterList> filterList() { DARABONBA_PTR_GET(filterList_, vector<Models::CreateNodeSupplementRequestCreateCommandFilterList>) };
    inline CreateNodeSupplementRequestCreateCommand& setFilterList(const vector<Models::CreateNodeSupplementRequestCreateCommandFilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline CreateNodeSupplementRequestCreateCommand& setFilterList(vector<Models::CreateNodeSupplementRequestCreateCommandFilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // globalParamList Field Functions 
    bool hasGlobalParamList() const { return this->globalParamList_ != nullptr;};
    void deleteGlobalParamList() { this->globalParamList_ = nullptr;};
    inline const vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList> & globalParamList() const { DARABONBA_PTR_GET_CONST(globalParamList_, vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList>) };
    inline vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList> globalParamList() { DARABONBA_PTR_GET(globalParamList_, vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList>) };
    inline CreateNodeSupplementRequestCreateCommand& setGlobalParamList(const vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList> & globalParamList) { DARABONBA_PTR_SET_VALUE(globalParamList_, globalParamList) };
    inline CreateNodeSupplementRequestCreateCommand& setGlobalParamList(vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList> && globalParamList) { DARABONBA_PTR_SET_RVALUE(globalParamList_, globalParamList) };


    // maxDueTime Field Functions 
    bool hasMaxDueTime() const { return this->maxDueTime_ != nullptr;};
    void deleteMaxDueTime() { this->maxDueTime_ = nullptr;};
    inline string maxDueTime() const { DARABONBA_PTR_GET_DEFAULT(maxDueTime_, "") };
    inline CreateNodeSupplementRequestCreateCommand& setMaxDueTime(string maxDueTime) { DARABONBA_PTR_SET_VALUE(maxDueTime_, maxDueTime) };


    // minDueTime Field Functions 
    bool hasMinDueTime() const { return this->minDueTime_ != nullptr;};
    void deleteMinDueTime() { this->minDueTime_ = nullptr;};
    inline string minDueTime() const { DARABONBA_PTR_GET_DEFAULT(minDueTime_, "") };
    inline CreateNodeSupplementRequestCreateCommand& setMinDueTime(string minDueTime) { DARABONBA_PTR_SET_VALUE(minDueTime_, minDueTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNodeSupplementRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeIdList Field Functions 
    bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
    void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
    inline const vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList> & nodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList>) };
    inline vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList> nodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList>) };
    inline CreateNodeSupplementRequestCreateCommand& setNodeIdList(const vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
    inline CreateNodeSupplementRequestCreateCommand& setNodeIdList(vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


    // nodeParamsList Field Functions 
    bool hasNodeParamsList() const { return this->nodeParamsList_ != nullptr;};
    void deleteNodeParamsList() { this->nodeParamsList_ = nullptr;};
    inline const vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList> & nodeParamsList() const { DARABONBA_PTR_GET_CONST(nodeParamsList_, vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList>) };
    inline vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList> nodeParamsList() { DARABONBA_PTR_GET(nodeParamsList_, vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList>) };
    inline CreateNodeSupplementRequestCreateCommand& setNodeParamsList(const vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList> & nodeParamsList) { DARABONBA_PTR_SET_VALUE(nodeParamsList_, nodeParamsList) };
    inline CreateNodeSupplementRequestCreateCommand& setNodeParamsList(vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList> && nodeParamsList) { DARABONBA_PTR_SET_RVALUE(nodeParamsList_, nodeParamsList) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int32_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
    inline CreateNodeSupplementRequestCreateCommand& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateNodeSupplementRequestCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string startBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline CreateNodeSupplementRequestCreateCommand& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


  protected:
    std::shared_ptr<bool> containAllDownStream_ = nullptr;
    std::shared_ptr<vector<Models::CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList>> downStreamNodeIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endBizDate_ = nullptr;
    std::shared_ptr<vector<Models::CreateNodeSupplementRequestCreateCommandFilterList>> filterList_ = nullptr;
    std::shared_ptr<vector<Models::CreateNodeSupplementRequestCreateCommandGlobalParamList>> globalParamList_ = nullptr;
    std::shared_ptr<string> maxDueTime_ = nullptr;
    std::shared_ptr<string> minDueTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateNodeSupplementRequestCreateCommandNodeIdList>> nodeIdList_ = nullptr;
    std::shared_ptr<vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsList>> nodeParamsList_ = nullptr;
    std::shared_ptr<int32_t> parallelism_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startBizDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
