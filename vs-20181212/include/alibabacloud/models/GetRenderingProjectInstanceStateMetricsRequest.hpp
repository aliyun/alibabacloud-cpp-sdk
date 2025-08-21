// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GetRenderingProjectInstanceStateMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenderingProjectInstanceStateMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenderingProjectInstanceStateMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetRenderingProjectInstanceStateMetricsRequest() = default ;
    GetRenderingProjectInstanceStateMetricsRequest(const GetRenderingProjectInstanceStateMetricsRequest &) = default ;
    GetRenderingProjectInstanceStateMetricsRequest(GetRenderingProjectInstanceStateMetricsRequest &&) = default ;
    GetRenderingProjectInstanceStateMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenderingProjectInstanceStateMetricsRequest() = default ;
    GetRenderingProjectInstanceStateMetricsRequest& operator=(const GetRenderingProjectInstanceStateMetricsRequest &) = default ;
    GetRenderingProjectInstanceStateMetricsRequest& operator=(GetRenderingProjectInstanceStateMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetRenderingProjectInstanceStateMetricsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
