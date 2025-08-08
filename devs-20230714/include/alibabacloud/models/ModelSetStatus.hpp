// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSETSTATUS_HPP_
#define ALIBABACLOUD_MODELS_MODELSETSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelSetStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSetStatus& obj) { 
      DARABONBA_PTR_TO_JSON(observedGeneration, observedGeneration_);
      DARABONBA_PTR_TO_JSON(observedTime, observedTime_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSetStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(observedGeneration, observedGeneration_);
      DARABONBA_PTR_FROM_JSON(observedTime, observedTime_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
    };
    ModelSetStatus() = default ;
    ModelSetStatus(const ModelSetStatus &) = default ;
    ModelSetStatus(ModelSetStatus &&) = default ;
    ModelSetStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSetStatus() = default ;
    ModelSetStatus& operator=(const ModelSetStatus &) = default ;
    ModelSetStatus& operator=(ModelSetStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->observedGeneration_ != nullptr
        && this->observedTime_ != nullptr && this->phase_ != nullptr; };
    // observedGeneration Field Functions 
    bool hasObservedGeneration() const { return this->observedGeneration_ != nullptr;};
    void deleteObservedGeneration() { this->observedGeneration_ = nullptr;};
    inline int64_t observedGeneration() const { DARABONBA_PTR_GET_DEFAULT(observedGeneration_, 0L) };
    inline ModelSetStatus& setObservedGeneration(int64_t observedGeneration) { DARABONBA_PTR_SET_VALUE(observedGeneration_, observedGeneration) };


    // observedTime Field Functions 
    bool hasObservedTime() const { return this->observedTime_ != nullptr;};
    void deleteObservedTime() { this->observedTime_ = nullptr;};
    inline string observedTime() const { DARABONBA_PTR_GET_DEFAULT(observedTime_, "") };
    inline ModelSetStatus& setObservedTime(string observedTime) { DARABONBA_PTR_SET_VALUE(observedTime_, observedTime) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ModelSetStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


  protected:
    std::shared_ptr<int64_t> observedGeneration_ = nullptr;
    std::shared_ptr<string> observedTime_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
