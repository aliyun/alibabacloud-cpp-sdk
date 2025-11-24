// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGKIALI_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGKIALI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->url_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Indicates whether mesh topology is enabled. Mesh topology can be enabled only when Prometheus monitoring is enabled. If Prometheus monitoring is disabled, you must set this parameter to `false`.`` Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enabled_ = nullptr;
    // The endpoint of the mesh topology service.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
