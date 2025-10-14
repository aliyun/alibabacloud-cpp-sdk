// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupDynamicRulesResponseBodyResourceResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupDynamicRulesResponseBodyResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesResponseBodyResource& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesResponseBodyResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeMonitorGroupDynamicRulesResponseBodyResource() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResource(const DescribeMonitorGroupDynamicRulesResponseBodyResource &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResource(DescribeMonitorGroupDynamicRulesResponseBodyResource &&) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesResponseBodyResource() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResource& operator=(const DescribeMonitorGroupDynamicRulesResponseBodyResource &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResource& operator=(DescribeMonitorGroupDynamicRulesResponseBodyResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource>) };
    inline vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource>) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResource& setResource(const vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResource& setResource(vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
