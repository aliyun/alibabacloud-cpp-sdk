// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODYAUTHORIZEDAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODYAUTHORIZEDAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedAppsResponseBodyAuthorizedApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedAppsResponseBodyAuthorizedApps& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApp, authorizedApp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedAppsResponseBodyAuthorizedApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApp, authorizedApp_);
    };
    DescribeAuthorizedAppsResponseBodyAuthorizedApps() = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedApps(const DescribeAuthorizedAppsResponseBodyAuthorizedApps &) = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedApps(DescribeAuthorizedAppsResponseBodyAuthorizedApps &&) = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedAppsResponseBodyAuthorizedApps() = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedApps& operator=(const DescribeAuthorizedAppsResponseBodyAuthorizedApps &) = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedApps& operator=(DescribeAuthorizedAppsResponseBodyAuthorizedApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedApp_ == nullptr; };
    // authorizedApp Field Functions 
    bool hasAuthorizedApp() const { return this->authorizedApp_ != nullptr;};
    void deleteAuthorizedApp() { this->authorizedApp_ = nullptr;};
    inline const vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp> & authorizedApp() const { DARABONBA_PTR_GET_CONST(authorizedApp_, vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp>) };
    inline vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp> authorizedApp() { DARABONBA_PTR_GET(authorizedApp_, vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp>) };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedApps& setAuthorizedApp(const vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp> & authorizedApp) { DARABONBA_PTR_SET_VALUE(authorizedApp_, authorizedApp) };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedApps& setAuthorizedApp(vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp> && authorizedApp) { DARABONBA_PTR_SET_RVALUE(authorizedApp_, authorizedApp) };


  protected:
    std::shared_ptr<vector<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp>> authorizedApp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
