// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSIONCLUSTERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SESSIONCLUSTERSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SessionClusterFailureInfo.hpp>
#include <alibabacloud/models/SessionClusterRunningInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SessionClusterStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionClusterStatus& obj) { 
      DARABONBA_PTR_TO_JSON(currentSessionClusterStatus, currentSessionClusterStatus_);
      DARABONBA_PTR_TO_JSON(failure, failure_);
      DARABONBA_PTR_TO_JSON(running, running_);
    };
    friend void from_json(const Darabonba::Json& j, SessionClusterStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(currentSessionClusterStatus, currentSessionClusterStatus_);
      DARABONBA_PTR_FROM_JSON(failure, failure_);
      DARABONBA_PTR_FROM_JSON(running, running_);
    };
    SessionClusterStatus() = default ;
    SessionClusterStatus(const SessionClusterStatus &) = default ;
    SessionClusterStatus(SessionClusterStatus &&) = default ;
    SessionClusterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionClusterStatus() = default ;
    SessionClusterStatus& operator=(const SessionClusterStatus &) = default ;
    SessionClusterStatus& operator=(SessionClusterStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentSessionClusterStatus_ == nullptr
        && return this->failure_ == nullptr && return this->running_ == nullptr; };
    // currentSessionClusterStatus Field Functions 
    bool hasCurrentSessionClusterStatus() const { return this->currentSessionClusterStatus_ != nullptr;};
    void deleteCurrentSessionClusterStatus() { this->currentSessionClusterStatus_ = nullptr;};
    inline string currentSessionClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(currentSessionClusterStatus_, "") };
    inline SessionClusterStatus& setCurrentSessionClusterStatus(string currentSessionClusterStatus) { DARABONBA_PTR_SET_VALUE(currentSessionClusterStatus_, currentSessionClusterStatus) };


    // failure Field Functions 
    bool hasFailure() const { return this->failure_ != nullptr;};
    void deleteFailure() { this->failure_ = nullptr;};
    inline const SessionClusterFailureInfo & failure() const { DARABONBA_PTR_GET_CONST(failure_, SessionClusterFailureInfo) };
    inline SessionClusterFailureInfo failure() { DARABONBA_PTR_GET(failure_, SessionClusterFailureInfo) };
    inline SessionClusterStatus& setFailure(const SessionClusterFailureInfo & failure) { DARABONBA_PTR_SET_VALUE(failure_, failure) };
    inline SessionClusterStatus& setFailure(SessionClusterFailureInfo && failure) { DARABONBA_PTR_SET_RVALUE(failure_, failure) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline const SessionClusterRunningInfo & running() const { DARABONBA_PTR_GET_CONST(running_, SessionClusterRunningInfo) };
    inline SessionClusterRunningInfo running() { DARABONBA_PTR_GET(running_, SessionClusterRunningInfo) };
    inline SessionClusterStatus& setRunning(const SessionClusterRunningInfo & running) { DARABONBA_PTR_SET_VALUE(running_, running) };
    inline SessionClusterStatus& setRunning(SessionClusterRunningInfo && running) { DARABONBA_PTR_SET_RVALUE(running_, running) };


  protected:
    std::shared_ptr<string> currentSessionClusterStatus_ = nullptr;
    std::shared_ptr<SessionClusterFailureInfo> failure_ = nullptr;
    std::shared_ptr<SessionClusterRunningInfo> running_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
