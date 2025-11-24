// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPROMETHEUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPROMETHEUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_TO_JSON(UseExternal, useExternal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_FROM_JSON(UseExternal, useExternal_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUrl_ == nullptr
        && return this->useExternal_ == nullptr; };
    // externalUrl Field Functions 
    bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
    void deleteExternalUrl() { this->externalUrl_ = nullptr;};
    inline string externalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


    // useExternal Field Functions 
    bool hasUseExternal() const { return this->useExternal_ != nullptr;};
    void deleteUseExternal() { this->useExternal_ = nullptr;};
    inline bool useExternal() const { DARABONBA_PTR_GET_DEFAULT(useExternal_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus& setUseExternal(bool useExternal) { DARABONBA_PTR_SET_VALUE(useExternal_, useExternal) };


  protected:
    // The endpoint of Prometheus monitoring. If you use a custom Prometheus instance, this parameter is populated by the system.
    std::shared_ptr<string> externalUrl_ = nullptr;
    // Indicates whether a custom Prometheus instance is used. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> useExternal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
