// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTRESPONSEBODYAUTHORIZEDAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTRESPONSEBODYAUTHORIZEDAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppsByApiProductResponseBodyAuthorizedApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsByApiProductResponseBodyAuthorizedApps& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApp, authorizedApp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsByApiProductResponseBodyAuthorizedApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApp, authorizedApp_);
    };
    DescribeAppsByApiProductResponseBodyAuthorizedApps() = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedApps(const DescribeAppsByApiProductResponseBodyAuthorizedApps &) = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedApps(DescribeAppsByApiProductResponseBodyAuthorizedApps &&) = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsByApiProductResponseBodyAuthorizedApps() = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedApps& operator=(const DescribeAppsByApiProductResponseBodyAuthorizedApps &) = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedApps& operator=(DescribeAppsByApiProductResponseBodyAuthorizedApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedApp_ == nullptr; };
    // authorizedApp Field Functions 
    bool hasAuthorizedApp() const { return this->authorizedApp_ != nullptr;};
    void deleteAuthorizedApp() { this->authorizedApp_ = nullptr;};
    inline const vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp> & authorizedApp() const { DARABONBA_PTR_GET_CONST(authorizedApp_, vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp>) };
    inline vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp> authorizedApp() { DARABONBA_PTR_GET(authorizedApp_, vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp>) };
    inline DescribeAppsByApiProductResponseBodyAuthorizedApps& setAuthorizedApp(const vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp> & authorizedApp) { DARABONBA_PTR_SET_VALUE(authorizedApp_, authorizedApp) };
    inline DescribeAppsByApiProductResponseBodyAuthorizedApps& setAuthorizedApp(vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp> && authorizedApp) { DARABONBA_PTR_SET_RVALUE(authorizedApp_, authorizedApp) };


  protected:
    std::shared_ptr<vector<Models::DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp>> authorizedApp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
