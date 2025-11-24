// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGEXTRACONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGEXTRACONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Playground, playground_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Playground, playground_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playground_ == nullptr; };
    // playground Field Functions 
    bool hasPlayground() const { return this->playground_ != nullptr;};
    void deletePlayground() { this->playground_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground & playground() const { DARABONBA_PTR_GET_CONST(playground_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground playground() { DARABONBA_PTR_GET(playground_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration& setPlayground(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground & playground) { DARABONBA_PTR_SET_VALUE(playground_, playground) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration& setPlayground(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground && playground) { DARABONBA_PTR_SET_RVALUE(playground_, playground) };


  protected:
    // The configurations of the ASM Playground (valid only for ASM Playground instances).
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground> playground_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
