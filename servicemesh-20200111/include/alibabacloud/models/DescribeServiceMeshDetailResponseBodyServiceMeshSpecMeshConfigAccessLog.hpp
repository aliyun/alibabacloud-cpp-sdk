// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGACCESSLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGACCESSLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Project, project_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->project_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // Indicates whether access log collection is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the Simple Log Service project that stores access logs.
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
