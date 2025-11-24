// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSMCCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESSMCCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // Indicates whether the SMC-R optimization feature is enabled. The SMC-R optimization feature uses Alibaba Cloud Linux 3 and elastic remote direct memory access (eRDMA) network devices, which optimizes cross-node communication.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
