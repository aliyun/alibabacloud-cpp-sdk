// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGEXTRACONFIGURATIONPLAYGROUND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGEXTRACONFIGURATIONPLAYGROUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfigurationPlayground& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // The ID of the ASM Playground scenario.
    std::shared_ptr<string> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
