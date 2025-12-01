// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYDATASITECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYDATASITECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTemplatesResponseBodyDataSiteConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBodyDataSiteConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBodyDataSiteConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DescribeTemplatesResponseBodyDataSiteConfigList() = default ;
    DescribeTemplatesResponseBodyDataSiteConfigList(const DescribeTemplatesResponseBodyDataSiteConfigList &) = default ;
    DescribeTemplatesResponseBodyDataSiteConfigList(DescribeTemplatesResponseBodyDataSiteConfigList &&) = default ;
    DescribeTemplatesResponseBodyDataSiteConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBodyDataSiteConfigList() = default ;
    DescribeTemplatesResponseBodyDataSiteConfigList& operator=(const DescribeTemplatesResponseBodyDataSiteConfigList &) = default ;
    DescribeTemplatesResponseBodyDataSiteConfigList& operator=(DescribeTemplatesResponseBodyDataSiteConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appRuleId_ == nullptr
        && return this->siteId_ == nullptr; };
    // appRuleId Field Functions 
    bool hasAppRuleId() const { return this->appRuleId_ != nullptr;};
    void deleteAppRuleId() { this->appRuleId_ = nullptr;};
    inline string appRuleId() const { DARABONBA_PTR_GET_DEFAULT(appRuleId_, "") };
    inline DescribeTemplatesResponseBodyDataSiteConfigList& setAppRuleId(string appRuleId) { DARABONBA_PTR_SET_VALUE(appRuleId_, appRuleId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeTemplatesResponseBodyDataSiteConfigList& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // 应用管控策略ID
    std::shared_ptr<string> appRuleId_ = nullptr;
    // 站点名称。
    std::shared_ptr<string> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
