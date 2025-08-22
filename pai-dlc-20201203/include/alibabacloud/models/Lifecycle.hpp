// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLE_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecyclePostStart.hpp>
#include <alibabacloud/models/LifecyclePreStop.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class Lifecycle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Lifecycle& obj) { 
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
    };
    friend void from_json(const Darabonba::Json& j, Lifecycle& obj) { 
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
    };
    Lifecycle() = default ;
    Lifecycle(const Lifecycle &) = default ;
    Lifecycle(Lifecycle &&) = default ;
    Lifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Lifecycle() = default ;
    Lifecycle& operator=(const Lifecycle &) = default ;
    Lifecycle& operator=(Lifecycle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->postStart_ != nullptr
        && this->preStop_ != nullptr; };
    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline const LifecyclePostStart & postStart() const { DARABONBA_PTR_GET_CONST(postStart_, LifecyclePostStart) };
    inline LifecyclePostStart postStart() { DARABONBA_PTR_GET(postStart_, LifecyclePostStart) };
    inline Lifecycle& setPostStart(const LifecyclePostStart & postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };
    inline Lifecycle& setPostStart(LifecyclePostStart && postStart) { DARABONBA_PTR_SET_RVALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline const LifecyclePreStop & preStop() const { DARABONBA_PTR_GET_CONST(preStop_, LifecyclePreStop) };
    inline LifecyclePreStop preStop() { DARABONBA_PTR_GET(preStop_, LifecyclePreStop) };
    inline Lifecycle& setPreStop(const LifecyclePreStop & preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };
    inline Lifecycle& setPreStop(LifecyclePreStop && preStop) { DARABONBA_PTR_SET_RVALUE(preStop_, preStop) };


  protected:
    std::shared_ptr<LifecyclePostStart> postStart_ = nullptr;
    std::shared_ptr<LifecyclePreStop> preStop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
