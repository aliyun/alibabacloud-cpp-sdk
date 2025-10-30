// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOGLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOGLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(constraint_action, constraintAction_);
      DARABONBA_PTR_TO_JSON(constraint_api_version, constraintApiVersion_);
      DARABONBA_PTR_TO_JSON(constraint_category, constraintCategory_);
      DARABONBA_PTR_TO_JSON(constraint_group, constraintGroup_);
      DARABONBA_PTR_TO_JSON(constraint_kind, constraintKind_);
      DARABONBA_PTR_TO_JSON(constraint_name, constraintName_);
      DARABONBA_PTR_TO_JSON(event_msg, eventMsg_);
      DARABONBA_PTR_TO_JSON(event_type, eventType_);
      DARABONBA_PTR_TO_JSON(request_uid, requestUid_);
      DARABONBA_PTR_TO_JSON(request_userinfo, requestUserinfo_);
      DARABONBA_PTR_TO_JSON(request_username, requestUsername_);
      DARABONBA_PTR_TO_JSON(resource_kind, resourceKind_);
      DARABONBA_PTR_TO_JSON(resource_name, resourceName_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(constraint_action, constraintAction_);
      DARABONBA_PTR_FROM_JSON(constraint_api_version, constraintApiVersion_);
      DARABONBA_PTR_FROM_JSON(constraint_category, constraintCategory_);
      DARABONBA_PTR_FROM_JSON(constraint_group, constraintGroup_);
      DARABONBA_PTR_FROM_JSON(constraint_kind, constraintKind_);
      DARABONBA_PTR_FROM_JSON(constraint_name, constraintName_);
      DARABONBA_PTR_FROM_JSON(event_msg, eventMsg_);
      DARABONBA_PTR_FROM_JSON(event_type, eventType_);
      DARABONBA_PTR_FROM_JSON(request_uid, requestUid_);
      DARABONBA_PTR_FROM_JSON(request_userinfo, requestUserinfo_);
      DARABONBA_PTR_FROM_JSON(request_username, requestUsername_);
      DARABONBA_PTR_FROM_JSON(resource_kind, resourceKind_);
      DARABONBA_PTR_FROM_JSON(resource_name, resourceName_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs() = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs(const DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs(DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs() = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& operator=(const DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& operator=(DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->constraintAction_ == nullptr && return this->constraintApiVersion_ == nullptr && return this->constraintCategory_ == nullptr && return this->constraintGroup_ == nullptr && return this->constraintKind_ == nullptr
        && return this->constraintName_ == nullptr && return this->eventMsg_ == nullptr && return this->eventType_ == nullptr && return this->requestUid_ == nullptr && return this->requestUserinfo_ == nullptr
        && return this->requestUsername_ == nullptr && return this->resourceKind_ == nullptr && return this->resourceName_ == nullptr && return this->time_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraintAction Field Functions 
    bool hasConstraintAction() const { return this->constraintAction_ != nullptr;};
    void deleteConstraintAction() { this->constraintAction_ = nullptr;};
    inline string constraintAction() const { DARABONBA_PTR_GET_DEFAULT(constraintAction_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setConstraintAction(string constraintAction) { DARABONBA_PTR_SET_VALUE(constraintAction_, constraintAction) };


    // constraintApiVersion Field Functions 
    bool hasConstraintApiVersion() const { return this->constraintApiVersion_ != nullptr;};
    void deleteConstraintApiVersion() { this->constraintApiVersion_ = nullptr;};
    inline string constraintApiVersion() const { DARABONBA_PTR_GET_DEFAULT(constraintApiVersion_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setConstraintApiVersion(string constraintApiVersion) { DARABONBA_PTR_SET_VALUE(constraintApiVersion_, constraintApiVersion) };


    // constraintCategory Field Functions 
    bool hasConstraintCategory() const { return this->constraintCategory_ != nullptr;};
    void deleteConstraintCategory() { this->constraintCategory_ = nullptr;};
    inline string constraintCategory() const { DARABONBA_PTR_GET_DEFAULT(constraintCategory_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setConstraintCategory(string constraintCategory) { DARABONBA_PTR_SET_VALUE(constraintCategory_, constraintCategory) };


    // constraintGroup Field Functions 
    bool hasConstraintGroup() const { return this->constraintGroup_ != nullptr;};
    void deleteConstraintGroup() { this->constraintGroup_ = nullptr;};
    inline string constraintGroup() const { DARABONBA_PTR_GET_DEFAULT(constraintGroup_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setConstraintGroup(string constraintGroup) { DARABONBA_PTR_SET_VALUE(constraintGroup_, constraintGroup) };


    // constraintKind Field Functions 
    bool hasConstraintKind() const { return this->constraintKind_ != nullptr;};
    void deleteConstraintKind() { this->constraintKind_ = nullptr;};
    inline string constraintKind() const { DARABONBA_PTR_GET_DEFAULT(constraintKind_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setConstraintKind(string constraintKind) { DARABONBA_PTR_SET_VALUE(constraintKind_, constraintKind) };


    // constraintName Field Functions 
    bool hasConstraintName() const { return this->constraintName_ != nullptr;};
    void deleteConstraintName() { this->constraintName_ = nullptr;};
    inline string constraintName() const { DARABONBA_PTR_GET_DEFAULT(constraintName_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setConstraintName(string constraintName) { DARABONBA_PTR_SET_VALUE(constraintName_, constraintName) };


    // eventMsg Field Functions 
    bool hasEventMsg() const { return this->eventMsg_ != nullptr;};
    void deleteEventMsg() { this->eventMsg_ = nullptr;};
    inline string eventMsg() const { DARABONBA_PTR_GET_DEFAULT(eventMsg_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setEventMsg(string eventMsg) { DARABONBA_PTR_SET_VALUE(eventMsg_, eventMsg) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // requestUid Field Functions 
    bool hasRequestUid() const { return this->requestUid_ != nullptr;};
    void deleteRequestUid() { this->requestUid_ = nullptr;};
    inline string requestUid() const { DARABONBA_PTR_GET_DEFAULT(requestUid_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setRequestUid(string requestUid) { DARABONBA_PTR_SET_VALUE(requestUid_, requestUid) };


    // requestUserinfo Field Functions 
    bool hasRequestUserinfo() const { return this->requestUserinfo_ != nullptr;};
    void deleteRequestUserinfo() { this->requestUserinfo_ = nullptr;};
    inline string requestUserinfo() const { DARABONBA_PTR_GET_DEFAULT(requestUserinfo_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setRequestUserinfo(string requestUserinfo) { DARABONBA_PTR_SET_VALUE(requestUserinfo_, requestUserinfo) };


    // requestUsername Field Functions 
    bool hasRequestUsername() const { return this->requestUsername_ != nullptr;};
    void deleteRequestUsername() { this->requestUsername_ = nullptr;};
    inline string requestUsername() const { DARABONBA_PTR_GET_DEFAULT(requestUsername_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setRequestUsername(string requestUsername) { DARABONBA_PTR_SET_VALUE(requestUsername_, requestUsername) };


    // resourceKind Field Functions 
    bool hasResourceKind() const { return this->resourceKind_ != nullptr;};
    void deleteResourceKind() { this->resourceKind_ = nullptr;};
    inline string resourceKind() const { DARABONBA_PTR_GET_DEFAULT(resourceKind_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setResourceKind(string resourceKind) { DARABONBA_PTR_SET_VALUE(resourceKind_, resourceKind) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> constraintAction_ = nullptr;
    std::shared_ptr<string> constraintApiVersion_ = nullptr;
    std::shared_ptr<string> constraintCategory_ = nullptr;
    std::shared_ptr<string> constraintGroup_ = nullptr;
    std::shared_ptr<string> constraintKind_ = nullptr;
    std::shared_ptr<string> constraintName_ = nullptr;
    std::shared_ptr<string> eventMsg_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> requestUid_ = nullptr;
    std::shared_ptr<string> requestUserinfo_ = nullptr;
    std::shared_ptr<string> requestUsername_ = nullptr;
    std::shared_ptr<string> resourceKind_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
