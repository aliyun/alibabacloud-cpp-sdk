// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICWARMPOOL_HPP_
#define ALIBABACLOUD_MODELS_PUBLICWARMPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WarmPoolCapacityPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class PublicWarmPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicWarmPool& obj) { 
      DARABONBA_PTR_TO_JSON(capacityObservedTime, capacityObservedTime_);
      DARABONBA_PTR_TO_JSON(capacityPolicy, capacityPolicy_);
      DARABONBA_PTR_TO_JSON(currentError, currentError_);
      DARABONBA_PTR_TO_JSON(deleting, deleting_);
      DARABONBA_PTR_TO_JSON(preparing, preparing_);
      DARABONBA_PTR_TO_JSON(ready, ready_);
      DARABONBA_PTR_TO_JSON(releasing, releasing_);
      DARABONBA_PTR_TO_JSON(sourceUnavailable, sourceUnavailable_);
      DARABONBA_PTR_TO_JSON(targetCapacity, targetCapacity_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, PublicWarmPool& obj) { 
      DARABONBA_PTR_FROM_JSON(capacityObservedTime, capacityObservedTime_);
      DARABONBA_PTR_FROM_JSON(capacityPolicy, capacityPolicy_);
      DARABONBA_PTR_FROM_JSON(currentError, currentError_);
      DARABONBA_PTR_FROM_JSON(deleting, deleting_);
      DARABONBA_PTR_FROM_JSON(preparing, preparing_);
      DARABONBA_PTR_FROM_JSON(ready, ready_);
      DARABONBA_PTR_FROM_JSON(releasing, releasing_);
      DARABONBA_PTR_FROM_JSON(sourceUnavailable, sourceUnavailable_);
      DARABONBA_PTR_FROM_JSON(targetCapacity, targetCapacity_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    PublicWarmPool() = default ;
    PublicWarmPool(const PublicWarmPool &) = default ;
    PublicWarmPool(PublicWarmPool &&) = default ;
    PublicWarmPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicWarmPool() = default ;
    PublicWarmPool& operator=(const PublicWarmPool &) = default ;
    PublicWarmPool& operator=(PublicWarmPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityObservedTime_ == nullptr
        && this->capacityPolicy_ == nullptr && this->currentError_ == nullptr && this->deleting_ == nullptr && this->preparing_ == nullptr && this->ready_ == nullptr
        && this->releasing_ == nullptr && this->sourceUnavailable_ == nullptr && this->targetCapacity_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr; };
    // capacityObservedTime Field Functions 
    bool hasCapacityObservedTime() const { return this->capacityObservedTime_ != nullptr;};
    void deleteCapacityObservedTime() { this->capacityObservedTime_ = nullptr;};
    inline string getCapacityObservedTime() const { DARABONBA_PTR_GET_DEFAULT(capacityObservedTime_, "") };
    inline PublicWarmPool& setCapacityObservedTime(string capacityObservedTime) { DARABONBA_PTR_SET_VALUE(capacityObservedTime_, capacityObservedTime) };


    // capacityPolicy Field Functions 
    bool hasCapacityPolicy() const { return this->capacityPolicy_ != nullptr;};
    void deleteCapacityPolicy() { this->capacityPolicy_ = nullptr;};
    inline const WarmPoolCapacityPolicy & getCapacityPolicy() const { DARABONBA_PTR_GET_CONST(capacityPolicy_, WarmPoolCapacityPolicy) };
    inline WarmPoolCapacityPolicy getCapacityPolicy() { DARABONBA_PTR_GET(capacityPolicy_, WarmPoolCapacityPolicy) };
    inline PublicWarmPool& setCapacityPolicy(const WarmPoolCapacityPolicy & capacityPolicy) { DARABONBA_PTR_SET_VALUE(capacityPolicy_, capacityPolicy) };
    inline PublicWarmPool& setCapacityPolicy(WarmPoolCapacityPolicy && capacityPolicy) { DARABONBA_PTR_SET_RVALUE(capacityPolicy_, capacityPolicy) };


    // currentError Field Functions 
    bool hasCurrentError() const { return this->currentError_ != nullptr;};
    void deleteCurrentError() { this->currentError_ = nullptr;};
    inline string getCurrentError() const { DARABONBA_PTR_GET_DEFAULT(currentError_, "") };
    inline PublicWarmPool& setCurrentError(string currentError) { DARABONBA_PTR_SET_VALUE(currentError_, currentError) };


    // deleting Field Functions 
    bool hasDeleting() const { return this->deleting_ != nullptr;};
    void deleteDeleting() { this->deleting_ = nullptr;};
    inline bool getDeleting() const { DARABONBA_PTR_GET_DEFAULT(deleting_, false) };
    inline PublicWarmPool& setDeleting(bool deleting) { DARABONBA_PTR_SET_VALUE(deleting_, deleting) };


    // preparing Field Functions 
    bool hasPreparing() const { return this->preparing_ != nullptr;};
    void deletePreparing() { this->preparing_ = nullptr;};
    inline int64_t getPreparing() const { DARABONBA_PTR_GET_DEFAULT(preparing_, 0L) };
    inline PublicWarmPool& setPreparing(int64_t preparing) { DARABONBA_PTR_SET_VALUE(preparing_, preparing) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline int64_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0L) };
    inline PublicWarmPool& setReady(int64_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // releasing Field Functions 
    bool hasReleasing() const { return this->releasing_ != nullptr;};
    void deleteReleasing() { this->releasing_ = nullptr;};
    inline int64_t getReleasing() const { DARABONBA_PTR_GET_DEFAULT(releasing_, 0L) };
    inline PublicWarmPool& setReleasing(int64_t releasing) { DARABONBA_PTR_SET_VALUE(releasing_, releasing) };


    // sourceUnavailable Field Functions 
    bool hasSourceUnavailable() const { return this->sourceUnavailable_ != nullptr;};
    void deleteSourceUnavailable() { this->sourceUnavailable_ = nullptr;};
    inline bool getSourceUnavailable() const { DARABONBA_PTR_GET_DEFAULT(sourceUnavailable_, false) };
    inline PublicWarmPool& setSourceUnavailable(bool sourceUnavailable) { DARABONBA_PTR_SET_VALUE(sourceUnavailable_, sourceUnavailable) };


    // targetCapacity Field Functions 
    bool hasTargetCapacity() const { return this->targetCapacity_ != nullptr;};
    void deleteTargetCapacity() { this->targetCapacity_ = nullptr;};
    inline int64_t getTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(targetCapacity_, 0L) };
    inline PublicWarmPool& setTargetCapacity(int64_t targetCapacity) { DARABONBA_PTR_SET_VALUE(targetCapacity_, targetCapacity) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline PublicWarmPool& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline PublicWarmPool& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The most recent observation time of the capacity status.
    shared_ptr<string> capacityObservedTime_ {};
    // The capacity policy of the warm pool, which includes the base target capacity and optional scheduled rules.
    shared_ptr<WarmPoolCapacityPolicy> capacityPolicy_ {};
    // The masked text of the current background error. This value is null if no error occurs.
    shared_ptr<string> currentError_ {};
    // Indicates whether the warm pool is being deleted.
    shared_ptr<bool> deleting_ {};
    // The number of sandboxes that are currently being prepared.
    shared_ptr<int64_t> preparing_ {};
    // The number of sandboxes that are currently ready.
    shared_ptr<int64_t> ready_ {};
    // The number of sandboxes that are currently being released.
    shared_ptr<int64_t> releasing_ {};
    // Indicates whether the source of the associated template is unavailable.
    shared_ptr<bool> sourceUnavailable_ {};
    // The current target capacity.
    shared_ptr<int64_t> targetCapacity_ {};
    // The team ID.
    shared_ptr<string> teamID_ {};
    // The template ID, which specifies the template associated with the warm pool.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
