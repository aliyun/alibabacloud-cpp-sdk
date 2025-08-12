// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETEMPLATEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETEMPLATEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateInfo, templateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateInfo, templateInfo_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos(const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos(DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos& operator=(const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos& operator=(DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateInfo_ != nullptr; };
    // templateInfo Field Functions 
    bool hasTemplateInfo() const { return this->templateInfo_ != nullptr;};
    void deleteTemplateInfo() { this->templateInfo_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo> & templateInfo() const { DARABONBA_PTR_GET_CONST(templateInfo_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo>) };
    inline vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo> templateInfo() { DARABONBA_PTR_GET(templateInfo_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo>) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos& setTemplateInfo(const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo> & templateInfo) { DARABONBA_PTR_SET_VALUE(templateInfo_, templateInfo) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos& setTemplateInfo(vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo> && templateInfo) { DARABONBA_PTR_SET_RVALUE(templateInfo_, templateInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo>> templateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
