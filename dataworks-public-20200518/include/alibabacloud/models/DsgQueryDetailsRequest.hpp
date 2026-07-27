// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGQUERYDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGQUERYDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgQueryDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgQueryDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpAare, ipAare_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SensLevel, sensLevel_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DsgQueryDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpAare, ipAare_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SensLevel, sensLevel_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DsgQueryDetailsRequest() = default ;
    DsgQueryDetailsRequest(const DsgQueryDetailsRequest &) = default ;
    DsgQueryDetailsRequest(DsgQueryDetailsRequest &&) = default ;
    DsgQueryDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgQueryDetailsRequest() = default ;
    DsgQueryDetailsRequest& operator=(const DsgQueryDetailsRequest &) = default ;
    DsgQueryDetailsRequest& operator=(DsgQueryDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->engineName_ == nullptr && this->ip_ == nullptr && this->ipAare_ == nullptr && this->nodeId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->rows_ == nullptr && this->ruleType_ == nullptr
        && this->sensLevel_ == nullptr && this->user_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DsgQueryDetailsRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DsgQueryDetailsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DsgQueryDetailsRequest& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DsgQueryDetailsRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipAare Field Functions 
    bool hasIpAare() const { return this->ipAare_ != nullptr;};
    void deleteIpAare() { this->ipAare_ = nullptr;};
    inline string getIpAare() const { DARABONBA_PTR_GET_DEFAULT(ipAare_, "") };
    inline DsgQueryDetailsRequest& setIpAare(string ipAare) { DARABONBA_PTR_SET_VALUE(ipAare_, ipAare) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DsgQueryDetailsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DsgQueryDetailsRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DsgQueryDetailsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DsgQueryDetailsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline int32_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0) };
    inline DsgQueryDetailsRequest& setRows(int32_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DsgQueryDetailsRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // sensLevel Field Functions 
    bool hasSensLevel() const { return this->sensLevel_ != nullptr;};
    void deleteSensLevel() { this->sensLevel_ = nullptr;};
    inline string getSensLevel() const { DARABONBA_PTR_GET_DEFAULT(sensLevel_, "") };
    inline DsgQueryDetailsRequest& setSensLevel(string sensLevel) { DARABONBA_PTR_SET_VALUE(sensLevel_, sensLevel) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DsgQueryDetailsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The start time of the query range. Example: "2026-06-26 00:00:00".
    // 
    // This parameter is required.
    shared_ptr<string> beginTime_ {};
    // The end time of the query range. Example: "2026-06-30 23:59:59".
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
    // The internal IP address of the ECU.
    shared_ptr<string> ip_ {};
    // The region to which the IP address belongs. Example: China-Beijing-Beijing, or internal IP address.
    shared_ptr<string> ipAare_ {};
    // The node ID.
    shared_ptr<string> nodeId_ {};
    // The page number. Minimum value: 1.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Maximum value: 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The project workspace name (essentially ProjectName). Example: dsg_demo_gw.
    shared_ptr<string> projectId_ {};
    // The minimum value of the export volume.
    shared_ptr<int32_t> rows_ {};
    // The type of triggered sensitive rule. Example: Name.
    shared_ptr<string> ruleType_ {};
    // The classification level. Example: 3.
    shared_ptr<string> sensLevel_ {};
    // The operator account. Example: dsg_test.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
