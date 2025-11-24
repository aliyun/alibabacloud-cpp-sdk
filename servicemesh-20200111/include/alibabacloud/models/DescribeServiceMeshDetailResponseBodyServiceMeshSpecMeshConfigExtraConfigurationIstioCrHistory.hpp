// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONISTIOCRHISTORY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONISTIOCRHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory& obj) { 
      DARABONBA_PTR_TO_JSON(EnableHistory, enableHistory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableHistory, enableHistory_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableHistory_ == nullptr; };
    // enableHistory Field Functions 
    bool hasEnableHistory() const { return this->enableHistory_ != nullptr;};
    void deleteEnableHistory() { this->enableHistory_ = nullptr;};
    inline bool enableHistory() const { DARABONBA_PTR_GET_DEFAULT(enableHistory_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory& setEnableHistory(bool enableHistory) { DARABONBA_PTR_SET_VALUE(enableHistory_, enableHistory) };


  protected:
    // Indicates whether the rollback feature for Istio resources is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
