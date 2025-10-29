// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class PageQueryAgentListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryAgentListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(AuditReason, auditReason_);
      DARABONBA_PTR_TO_JSON(BuildFailReason, buildFailReason_);
      DARABONBA_PTR_TO_JSON(BusinessTypeName, businessTypeName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LastOnlineTime, lastOnlineTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WithConfig, withConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryAgentListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(AuditReason, auditReason_);
      DARABONBA_PTR_FROM_JSON(BuildFailReason, buildFailReason_);
      DARABONBA_PTR_FROM_JSON(BusinessTypeName, businessTypeName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LastOnlineTime, lastOnlineTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WithConfig, withConfig_);
    };
    PageQueryAgentListResponseBodyDataList() = default ;
    PageQueryAgentListResponseBodyDataList(const PageQueryAgentListResponseBodyDataList &) = default ;
    PageQueryAgentListResponseBodyDataList(PageQueryAgentListResponseBodyDataList &&) = default ;
    PageQueryAgentListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryAgentListResponseBodyDataList() = default ;
    PageQueryAgentListResponseBodyDataList& operator=(const PageQueryAgentListResponseBodyDataList &) = default ;
    PageQueryAgentListResponseBodyDataList& operator=(PageQueryAgentListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->applicationCode_ == nullptr && return this->auditReason_ == nullptr && return this->buildFailReason_ == nullptr && return this->businessTypeName_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->lastOnlineTime_ == nullptr && return this->modifyTime_ == nullptr && return this->status_ == nullptr
        && return this->withConfig_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline PageQueryAgentListResponseBodyDataList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline PageQueryAgentListResponseBodyDataList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string applicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline PageQueryAgentListResponseBodyDataList& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // auditReason Field Functions 
    bool hasAuditReason() const { return this->auditReason_ != nullptr;};
    void deleteAuditReason() { this->auditReason_ = nullptr;};
    inline string auditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
    inline PageQueryAgentListResponseBodyDataList& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


    // buildFailReason Field Functions 
    bool hasBuildFailReason() const { return this->buildFailReason_ != nullptr;};
    void deleteBuildFailReason() { this->buildFailReason_ = nullptr;};
    inline string buildFailReason() const { DARABONBA_PTR_GET_DEFAULT(buildFailReason_, "") };
    inline PageQueryAgentListResponseBodyDataList& setBuildFailReason(string buildFailReason) { DARABONBA_PTR_SET_VALUE(buildFailReason_, buildFailReason) };


    // businessTypeName Field Functions 
    bool hasBusinessTypeName() const { return this->businessTypeName_ != nullptr;};
    void deleteBusinessTypeName() { this->businessTypeName_ = nullptr;};
    inline string businessTypeName() const { DARABONBA_PTR_GET_DEFAULT(businessTypeName_, "") };
    inline PageQueryAgentListResponseBodyDataList& setBusinessTypeName(string businessTypeName) { DARABONBA_PTR_SET_VALUE(businessTypeName_, businessTypeName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PageQueryAgentListResponseBodyDataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PageQueryAgentListResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastOnlineTime Field Functions 
    bool hasLastOnlineTime() const { return this->lastOnlineTime_ != nullptr;};
    void deleteLastOnlineTime() { this->lastOnlineTime_ = nullptr;};
    inline string lastOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(lastOnlineTime_, "") };
    inline PageQueryAgentListResponseBodyDataList& setLastOnlineTime(string lastOnlineTime) { DARABONBA_PTR_SET_VALUE(lastOnlineTime_, lastOnlineTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline PageQueryAgentListResponseBodyDataList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline PageQueryAgentListResponseBodyDataList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // withConfig Field Functions 
    bool hasWithConfig() const { return this->withConfig_ != nullptr;};
    void deleteWithConfig() { this->withConfig_ = nullptr;};
    inline bool withConfig() const { DARABONBA_PTR_GET_DEFAULT(withConfig_, false) };
    inline PageQueryAgentListResponseBodyDataList& setWithConfig(bool withConfig) { DARABONBA_PTR_SET_VALUE(withConfig_, withConfig) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> applicationCode_ = nullptr;
    std::shared_ptr<string> auditReason_ = nullptr;
    std::shared_ptr<string> buildFailReason_ = nullptr;
    std::shared_ptr<string> businessTypeName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lastOnlineTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<bool> withConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
