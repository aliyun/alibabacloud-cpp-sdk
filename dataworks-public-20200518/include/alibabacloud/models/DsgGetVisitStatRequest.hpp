// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGGETVISITSTATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGGETVISITSTATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgGetVisitStatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgGetVisitStatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SensLevel, sensLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DsgGetVisitStatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SensLevel, sensLevel_);
    };
    DsgGetVisitStatRequest() = default ;
    DsgGetVisitStatRequest(const DsgGetVisitStatRequest &) = default ;
    DsgGetVisitStatRequest(DsgGetVisitStatRequest &&) = default ;
    DsgGetVisitStatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgGetVisitStatRequest() = default ;
    DsgGetVisitStatRequest& operator=(const DsgGetVisitStatRequest &) = default ;
    DsgGetVisitStatRequest& operator=(DsgGetVisitStatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->engineName_ == nullptr && this->nodeId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->projectId_ == nullptr && this->ruleName_ == nullptr && this->sensLevel_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DsgGetVisitStatRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DsgGetVisitStatRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DsgGetVisitStatRequest& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DsgGetVisitStatRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DsgGetVisitStatRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DsgGetVisitStatRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DsgGetVisitStatRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DsgGetVisitStatRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevel Field Functions 
    bool hasSensLevel() const { return this->sensLevel_ != nullptr;};
    void deleteSensLevel() { this->sensLevel_ = nullptr;};
    inline string getSensLevel() const { DARABONBA_PTR_GET_DEFAULT(sensLevel_, "") };
    inline DsgGetVisitStatRequest& setSensLevel(string sensLevel) { DARABONBA_PTR_SET_VALUE(sensLevel_, sensLevel) };


  protected:
    // The start time in the format of "2026-06-30 03:59:59".
    // 
    // This parameter is required.
    shared_ptr<string> beginTime_ {};
    // The end time in the format of "2026-06-30 23:59:59".
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The engine type. Valid values:
    // - ODPS.ODPS
    // - EMR
    // - HOLO.POSTGRES
    // 
    // This parameter is required.
    shared_ptr<string> engineName_ {};
    // The node ID. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the node ID.
    shared_ptr<string> nodeId_ {};
    // The page number. Minimum value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int64_t> pageSize_ {};
    // The name of the project space. Example value: dsg_demo_gw.
    shared_ptr<string> projectId_ {};
    // The name of the sensitive field.
    shared_ptr<string> ruleName_ {};
    // The classification level. Example value: 3.
    shared_ptr<string> sensLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
