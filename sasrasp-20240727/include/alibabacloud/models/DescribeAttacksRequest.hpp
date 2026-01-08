// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttacksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttacksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AttackHostId, attackHostId_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(AttackUrl, attackUrl_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_TO_JSON(HandlerType, handlerType_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RaspType, raspType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Remote, remote_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttacksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AttackHostId, attackHostId_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(AttackUrl, attackUrl_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_FROM_JSON(HandlerType, handlerType_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RaspType, raspType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Remote, remote_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    DescribeAttacksRequest() = default ;
    DescribeAttacksRequest(const DescribeAttacksRequest &) = default ;
    DescribeAttacksRequest(DescribeAttacksRequest &&) = default ;
    DescribeAttacksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttacksRequest() = default ;
    DescribeAttacksRequest& operator=(const DescribeAttacksRequest &) = default ;
    DescribeAttacksRequest& operator=(DescribeAttacksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->applicationId_ == nullptr && this->attackHostId_ == nullptr && this->attackType_ == nullptr && this->attackUrl_ == nullptr && this->endTimestamp_ == nullptr
        && this->handleStatus_ == nullptr && this->handlerType_ == nullptr && this->hostname_ == nullptr && this->ip_ == nullptr && this->lang_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pid_ == nullptr && this->raspType_ == nullptr && this->region_ == nullptr
        && this->remote_ == nullptr && this->severity_ == nullptr && this->startTimestamp_ == nullptr && this->unionId_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline DescribeAttacksRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeAttacksRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attackHostId Field Functions 
    bool hasAttackHostId() const { return this->attackHostId_ != nullptr;};
    void deleteAttackHostId() { this->attackHostId_ = nullptr;};
    inline string getAttackHostId() const { DARABONBA_PTR_GET_DEFAULT(attackHostId_, "") };
    inline DescribeAttacksRequest& setAttackHostId(string attackHostId) { DARABONBA_PTR_SET_VALUE(attackHostId_, attackHostId) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline DescribeAttacksRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // attackUrl Field Functions 
    bool hasAttackUrl() const { return this->attackUrl_ != nullptr;};
    void deleteAttackUrl() { this->attackUrl_ = nullptr;};
    inline string getAttackUrl() const { DARABONBA_PTR_GET_DEFAULT(attackUrl_, "") };
    inline DescribeAttacksRequest& setAttackUrl(string attackUrl) { DARABONBA_PTR_SET_VALUE(attackUrl_, attackUrl) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline DescribeAttacksRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // handleStatus Field Functions 
    bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
    void deleteHandleStatus() { this->handleStatus_ = nullptr;};
    inline int32_t getHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, 0) };
    inline DescribeAttacksRequest& setHandleStatus(int32_t handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


    // handlerType Field Functions 
    bool hasHandlerType() const { return this->handlerType_ != nullptr;};
    void deleteHandlerType() { this->handlerType_ = nullptr;};
    inline string getHandlerType() const { DARABONBA_PTR_GET_DEFAULT(handlerType_, "") };
    inline DescribeAttacksRequest& setHandlerType(string handlerType) { DARABONBA_PTR_SET_VALUE(handlerType_, handlerType) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeAttacksRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeAttacksRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAttacksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAttacksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAttacksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribeAttacksRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // raspType Field Functions 
    bool hasRaspType() const { return this->raspType_ != nullptr;};
    void deleteRaspType() { this->raspType_ = nullptr;};
    inline string getRaspType() const { DARABONBA_PTR_GET_DEFAULT(raspType_, "") };
    inline DescribeAttacksRequest& setRaspType(string raspType) { DARABONBA_PTR_SET_VALUE(raspType_, raspType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeAttacksRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remote Field Functions 
    bool hasRemote() const { return this->remote_ != nullptr;};
    void deleteRemote() { this->remote_ = nullptr;};
    inline string getRemote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
    inline DescribeAttacksRequest& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeAttacksRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribeAttacksRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline DescribeAttacksRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    shared_ptr<string> agentType_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> attackHostId_ {};
    shared_ptr<string> attackType_ {};
    shared_ptr<string> attackUrl_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTimestamp_ {};
    shared_ptr<int32_t> handleStatus_ {};
    shared_ptr<string> handlerType_ {};
    shared_ptr<string> hostname_ {};
    shared_ptr<string> ip_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> pid_ {};
    shared_ptr<string> raspType_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> remote_ {};
    shared_ptr<string> severity_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTimestamp_ {};
    shared_ptr<string> unionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
