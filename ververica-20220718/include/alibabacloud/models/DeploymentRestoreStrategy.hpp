// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTRESTORESTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTRESTORESTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeploymentRestoreStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentRestoreStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(allowNonRestoredState, allowNonRestoredState_);
      DARABONBA_PTR_TO_JSON(jobStartTimeInMs, jobStartTimeInMs_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(savepointId, savepointId_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentRestoreStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(allowNonRestoredState, allowNonRestoredState_);
      DARABONBA_PTR_FROM_JSON(jobStartTimeInMs, jobStartTimeInMs_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(savepointId, savepointId_);
    };
    DeploymentRestoreStrategy() = default ;
    DeploymentRestoreStrategy(const DeploymentRestoreStrategy &) = default ;
    DeploymentRestoreStrategy(DeploymentRestoreStrategy &&) = default ;
    DeploymentRestoreStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentRestoreStrategy() = default ;
    DeploymentRestoreStrategy& operator=(const DeploymentRestoreStrategy &) = default ;
    DeploymentRestoreStrategy& operator=(DeploymentRestoreStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowNonRestoredState_ == nullptr
        && return this->jobStartTimeInMs_ == nullptr && return this->kind_ == nullptr && return this->savepointId_ == nullptr; };
    // allowNonRestoredState Field Functions 
    bool hasAllowNonRestoredState() const { return this->allowNonRestoredState_ != nullptr;};
    void deleteAllowNonRestoredState() { this->allowNonRestoredState_ = nullptr;};
    inline bool allowNonRestoredState() const { DARABONBA_PTR_GET_DEFAULT(allowNonRestoredState_, false) };
    inline DeploymentRestoreStrategy& setAllowNonRestoredState(bool allowNonRestoredState) { DARABONBA_PTR_SET_VALUE(allowNonRestoredState_, allowNonRestoredState) };


    // jobStartTimeInMs Field Functions 
    bool hasJobStartTimeInMs() const { return this->jobStartTimeInMs_ != nullptr;};
    void deleteJobStartTimeInMs() { this->jobStartTimeInMs_ = nullptr;};
    inline int64_t jobStartTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(jobStartTimeInMs_, 0L) };
    inline DeploymentRestoreStrategy& setJobStartTimeInMs(int64_t jobStartTimeInMs) { DARABONBA_PTR_SET_VALUE(jobStartTimeInMs_, jobStartTimeInMs) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline DeploymentRestoreStrategy& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // savepointId Field Functions 
    bool hasSavepointId() const { return this->savepointId_ != nullptr;};
    void deleteSavepointId() { this->savepointId_ = nullptr;};
    inline string savepointId() const { DARABONBA_PTR_GET_DEFAULT(savepointId_, "") };
    inline DeploymentRestoreStrategy& setSavepointId(string savepointId) { DARABONBA_PTR_SET_VALUE(savepointId_, savepointId) };


  protected:
    std::shared_ptr<bool> allowNonRestoredState_ = nullptr;
    std::shared_ptr<int64_t> jobStartTimeInMs_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<string> savepointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
