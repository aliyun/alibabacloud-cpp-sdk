// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONISTIODEXTRACONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONISTIODEXTRACONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(LabelsForOffloadedWorkloads, labelsForOffloadedWorkloads_);
      DARABONBA_PTR_TO_JSON(PilotEnableQuicListeners, pilotEnableQuicListeners_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelsForOffloadedWorkloads, labelsForOffloadedWorkloads_);
      DARABONBA_PTR_FROM_JSON(PilotEnableQuicListeners, pilotEnableQuicListeners_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelsForOffloadedWorkloads_ == nullptr
        && return this->pilotEnableQuicListeners_ == nullptr; };
    // labelsForOffloadedWorkloads Field Functions 
    bool hasLabelsForOffloadedWorkloads() const { return this->labelsForOffloadedWorkloads_ != nullptr;};
    void deleteLabelsForOffloadedWorkloads() { this->labelsForOffloadedWorkloads_ = nullptr;};
    inline string labelsForOffloadedWorkloads() const { DARABONBA_PTR_GET_DEFAULT(labelsForOffloadedWorkloads_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration& setLabelsForOffloadedWorkloads(string labelsForOffloadedWorkloads) { DARABONBA_PTR_SET_VALUE(labelsForOffloadedWorkloads_, labelsForOffloadedWorkloads) };


    // pilotEnableQuicListeners Field Functions 
    bool hasPilotEnableQuicListeners() const { return this->pilotEnableQuicListeners_ != nullptr;};
    void deletePilotEnableQuicListeners() { this->pilotEnableQuicListeners_ = nullptr;};
    inline bool pilotEnableQuicListeners() const { DARABONBA_PTR_GET_DEFAULT(pilotEnableQuicListeners_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration& setPilotEnableQuicListeners(bool pilotEnableQuicListeners) { DARABONBA_PTR_SET_VALUE(pilotEnableQuicListeners_, pilotEnableQuicListeners) };


  protected:
    // The labels for isolated workloads.
    std::shared_ptr<string> labelsForOffloadedWorkloads_ = nullptr;
    std::shared_ptr<bool> pilotEnableQuicListeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
