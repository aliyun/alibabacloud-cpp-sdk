// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERREQUESTSCHEDULERSPEC_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERREQUESTSCHEDULERSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateClusterRequestSchedulerSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterRequestSchedulerSpec& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTopologyAwareness, enableTopologyAwareness_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterRequestSchedulerSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTopologyAwareness, enableTopologyAwareness_);
    };
    UpdateClusterRequestSchedulerSpec() = default ;
    UpdateClusterRequestSchedulerSpec(const UpdateClusterRequestSchedulerSpec &) = default ;
    UpdateClusterRequestSchedulerSpec(UpdateClusterRequestSchedulerSpec &&) = default ;
    UpdateClusterRequestSchedulerSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterRequestSchedulerSpec() = default ;
    UpdateClusterRequestSchedulerSpec& operator=(const UpdateClusterRequestSchedulerSpec &) = default ;
    UpdateClusterRequestSchedulerSpec& operator=(UpdateClusterRequestSchedulerSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTopologyAwareness_ == nullptr; };
    // enableTopologyAwareness Field Functions 
    bool hasEnableTopologyAwareness() const { return this->enableTopologyAwareness_ != nullptr;};
    void deleteEnableTopologyAwareness() { this->enableTopologyAwareness_ = nullptr;};
    inline bool enableTopologyAwareness() const { DARABONBA_PTR_GET_DEFAULT(enableTopologyAwareness_, false) };
    inline UpdateClusterRequestSchedulerSpec& setEnableTopologyAwareness(bool enableTopologyAwareness) { DARABONBA_PTR_SET_VALUE(enableTopologyAwareness_, enableTopologyAwareness) };


  protected:
    // Specifies whether to enable the topology awareness feature. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableTopologyAwareness_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
