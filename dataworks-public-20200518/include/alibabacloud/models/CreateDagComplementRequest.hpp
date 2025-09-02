// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDAGCOMPLEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDAGCOMPLEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDagComplementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDagComplementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizBeginTime, bizBeginTime_);
      DARABONBA_PTR_TO_JSON(BizEndTime, bizEndTime_);
      DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_TO_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_TO_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(RootNodeId, rootNodeId_);
      DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDagComplementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizBeginTime, bizBeginTime_);
      DARABONBA_PTR_FROM_JSON(BizEndTime, bizEndTime_);
      DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_FROM_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_FROM_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(RootNodeId, rootNodeId_);
      DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
    };
    CreateDagComplementRequest() = default ;
    CreateDagComplementRequest(const CreateDagComplementRequest &) = default ;
    CreateDagComplementRequest(CreateDagComplementRequest &&) = default ;
    CreateDagComplementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDagComplementRequest() = default ;
    CreateDagComplementRequest& operator=(const CreateDagComplementRequest &) = default ;
    CreateDagComplementRequest& operator=(CreateDagComplementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizBeginTime_ != nullptr
        && this->bizEndTime_ != nullptr && this->endBizDate_ != nullptr && this->excludeNodeIds_ != nullptr && this->includeNodeIds_ != nullptr && this->name_ != nullptr
        && this->nodeParams_ != nullptr && this->parallelism_ != nullptr && this->projectEnv_ != nullptr && this->rootNodeId_ != nullptr && this->startBizDate_ != nullptr; };
    // bizBeginTime Field Functions 
    bool hasBizBeginTime() const { return this->bizBeginTime_ != nullptr;};
    void deleteBizBeginTime() { this->bizBeginTime_ = nullptr;};
    inline string bizBeginTime() const { DARABONBA_PTR_GET_DEFAULT(bizBeginTime_, "") };
    inline CreateDagComplementRequest& setBizBeginTime(string bizBeginTime) { DARABONBA_PTR_SET_VALUE(bizBeginTime_, bizBeginTime) };


    // bizEndTime Field Functions 
    bool hasBizEndTime() const { return this->bizEndTime_ != nullptr;};
    void deleteBizEndTime() { this->bizEndTime_ = nullptr;};
    inline string bizEndTime() const { DARABONBA_PTR_GET_DEFAULT(bizEndTime_, "") };
    inline CreateDagComplementRequest& setBizEndTime(string bizEndTime) { DARABONBA_PTR_SET_VALUE(bizEndTime_, bizEndTime) };


    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string endBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline CreateDagComplementRequest& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // excludeNodeIds Field Functions 
    bool hasExcludeNodeIds() const { return this->excludeNodeIds_ != nullptr;};
    void deleteExcludeNodeIds() { this->excludeNodeIds_ = nullptr;};
    inline string excludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(excludeNodeIds_, "") };
    inline CreateDagComplementRequest& setExcludeNodeIds(string excludeNodeIds) { DARABONBA_PTR_SET_VALUE(excludeNodeIds_, excludeNodeIds) };


    // includeNodeIds Field Functions 
    bool hasIncludeNodeIds() const { return this->includeNodeIds_ != nullptr;};
    void deleteIncludeNodeIds() { this->includeNodeIds_ = nullptr;};
    inline string includeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(includeNodeIds_, "") };
    inline CreateDagComplementRequest& setIncludeNodeIds(string includeNodeIds) { DARABONBA_PTR_SET_VALUE(includeNodeIds_, includeNodeIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDagComplementRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeParams Field Functions 
    bool hasNodeParams() const { return this->nodeParams_ != nullptr;};
    void deleteNodeParams() { this->nodeParams_ = nullptr;};
    inline string nodeParams() const { DARABONBA_PTR_GET_DEFAULT(nodeParams_, "") };
    inline CreateDagComplementRequest& setNodeParams(string nodeParams) { DARABONBA_PTR_SET_VALUE(nodeParams_, nodeParams) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline bool parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, false) };
    inline CreateDagComplementRequest& setParallelism(bool parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline CreateDagComplementRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // rootNodeId Field Functions 
    bool hasRootNodeId() const { return this->rootNodeId_ != nullptr;};
    void deleteRootNodeId() { this->rootNodeId_ = nullptr;};
    inline int64_t rootNodeId() const { DARABONBA_PTR_GET_DEFAULT(rootNodeId_, 0L) };
    inline CreateDagComplementRequest& setRootNodeId(int64_t rootNodeId) { DARABONBA_PTR_SET_VALUE(rootNodeId_, rootNodeId) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string startBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline CreateDagComplementRequest& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


  protected:
    std::shared_ptr<string> bizBeginTime_ = nullptr;
    std::shared_ptr<string> bizEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endBizDate_ = nullptr;
    std::shared_ptr<string> excludeNodeIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> includeNodeIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> parallelism_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> rootNodeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startBizDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
