// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETEMPLATEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETEMPLATEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds(const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds(DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds& operator=(const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds& operator=(DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline const vector<string> & templateId() const { DARABONBA_PTR_GET_CONST(templateId_, vector<string>) };
    inline vector<string> templateId() { DARABONBA_PTR_GET(templateId_, vector<string>) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds& setTemplateId(const vector<string> & templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds& setTemplateId(vector<string> && templateId) { DARABONBA_PTR_SET_RVALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<vector<string>> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
