// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONAUTHINFOSCOPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONAUTHINFOSCOPES_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes& obj) { 
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scopes_ != nullptr; };
    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> scopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


  protected:
    std::shared_ptr<vector<string>> scopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
