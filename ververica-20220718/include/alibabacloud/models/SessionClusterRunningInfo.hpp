// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSIONCLUSTERRUNNINGINFO_HPP_
#define ALIBABACLOUD_MODELS_SESSIONCLUSTERRUNNINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SessionClusterRunningInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionClusterRunningInfo& obj) { 
      DARABONBA_PTR_TO_JSON(lastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(referenceDeploymentIds, referenceDeploymentIds_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
    };
    friend void from_json(const Darabonba::Json& j, SessionClusterRunningInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(lastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(referenceDeploymentIds, referenceDeploymentIds_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
    };
    SessionClusterRunningInfo() = default ;
    SessionClusterRunningInfo(const SessionClusterRunningInfo &) = default ;
    SessionClusterRunningInfo(SessionClusterRunningInfo &&) = default ;
    SessionClusterRunningInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionClusterRunningInfo() = default ;
    SessionClusterRunningInfo& operator=(const SessionClusterRunningInfo &) = default ;
    SessionClusterRunningInfo& operator=(SessionClusterRunningInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastUpdateTime_ == nullptr
        && return this->referenceDeploymentIds_ == nullptr && return this->startedAt_ == nullptr; };
    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline int64_t lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
    inline SessionClusterRunningInfo& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // referenceDeploymentIds Field Functions 
    bool hasReferenceDeploymentIds() const { return this->referenceDeploymentIds_ != nullptr;};
    void deleteReferenceDeploymentIds() { this->referenceDeploymentIds_ = nullptr;};
    inline const vector<string> & referenceDeploymentIds() const { DARABONBA_PTR_GET_CONST(referenceDeploymentIds_, vector<string>) };
    inline vector<string> referenceDeploymentIds() { DARABONBA_PTR_GET(referenceDeploymentIds_, vector<string>) };
    inline SessionClusterRunningInfo& setReferenceDeploymentIds(const vector<string> & referenceDeploymentIds) { DARABONBA_PTR_SET_VALUE(referenceDeploymentIds_, referenceDeploymentIds) };
    inline SessionClusterRunningInfo& setReferenceDeploymentIds(vector<string> && referenceDeploymentIds) { DARABONBA_PTR_SET_RVALUE(referenceDeploymentIds_, referenceDeploymentIds) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline int64_t startedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, 0L) };
    inline SessionClusterRunningInfo& setStartedAt(int64_t startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


  protected:
    std::shared_ptr<int64_t> lastUpdateTime_ = nullptr;
    std::shared_ptr<vector<string>> referenceDeploymentIds_ = nullptr;
    std::shared_ptr<int64_t> startedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
