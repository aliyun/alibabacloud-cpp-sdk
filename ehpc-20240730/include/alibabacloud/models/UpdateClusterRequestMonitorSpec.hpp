// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERREQUESTMONITORSPEC_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERREQUESTMONITORSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateClusterRequestMonitorSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterRequestMonitorSpec& obj) { 
      DARABONBA_PTR_TO_JSON(EnableComputeLoadMonitor, enableComputeLoadMonitor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterRequestMonitorSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableComputeLoadMonitor, enableComputeLoadMonitor_);
    };
    UpdateClusterRequestMonitorSpec() = default ;
    UpdateClusterRequestMonitorSpec(const UpdateClusterRequestMonitorSpec &) = default ;
    UpdateClusterRequestMonitorSpec(UpdateClusterRequestMonitorSpec &&) = default ;
    UpdateClusterRequestMonitorSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterRequestMonitorSpec() = default ;
    UpdateClusterRequestMonitorSpec& operator=(const UpdateClusterRequestMonitorSpec &) = default ;
    UpdateClusterRequestMonitorSpec& operator=(UpdateClusterRequestMonitorSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableComputeLoadMonitor_ == nullptr; };
    // enableComputeLoadMonitor Field Functions 
    bool hasEnableComputeLoadMonitor() const { return this->enableComputeLoadMonitor_ != nullptr;};
    void deleteEnableComputeLoadMonitor() { this->enableComputeLoadMonitor_ = nullptr;};
    inline bool enableComputeLoadMonitor() const { DARABONBA_PTR_GET_DEFAULT(enableComputeLoadMonitor_, false) };
    inline UpdateClusterRequestMonitorSpec& setEnableComputeLoadMonitor(bool enableComputeLoadMonitor) { DARABONBA_PTR_SET_VALUE(enableComputeLoadMonitor_, enableComputeLoadMonitor) };


  protected:
    // Specifies whether to enable the monitoring component of compute nodes. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableComputeLoadMonitor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
