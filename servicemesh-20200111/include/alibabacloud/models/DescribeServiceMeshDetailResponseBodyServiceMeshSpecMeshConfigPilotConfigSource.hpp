// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPILOTCONFIGSOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPILOTCONFIGSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NacosID, nacosID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NacosID, nacosID_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->nacosID_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nacosID Field Functions 
    bool hasNacosID() const { return this->nacosID_ != nullptr;};
    void deleteNacosID() { this->nacosID_ = nullptr;};
    inline string nacosID() const { DARABONBA_PTR_GET_DEFAULT(nacosID_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource& setNacosID(string nacosID) { DARABONBA_PTR_SET_VALUE(nacosID_, nacosID) };


  protected:
    // Indicates whether communication is allowed between external services and services in the mesh. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the Nacos instance that provides external service information.
    std::shared_ptr<string> nacosID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
