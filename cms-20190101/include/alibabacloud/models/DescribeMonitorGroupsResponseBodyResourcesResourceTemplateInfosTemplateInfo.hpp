// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETEMPLATEINFOSTEMPLATEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETEMPLATEINFOSTEMPLATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Ver, ver_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Ver, ver_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo(const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo(DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& operator=(const DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& operator=(DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectTime_ != nullptr
        && this->templateId_ != nullptr && this->ver_ != nullptr; };
    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline int64_t effectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, 0L) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& setEffectTime(int64_t effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // ver Field Functions 
    bool hasVer() const { return this->ver_ != nullptr;};
    void deleteVer() { this->ver_ = nullptr;};
    inline string ver() const { DARABONBA_PTR_GET_DEFAULT(ver_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfosTemplateInfo& setVer(string ver) { DARABONBA_PTR_SET_VALUE(ver_, ver) };


  protected:
    std::shared_ptr<int64_t> effectTime_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> ver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
