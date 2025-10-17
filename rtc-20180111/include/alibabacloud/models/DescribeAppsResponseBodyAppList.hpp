// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppsResponseBodyAppListApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppsResponseBodyAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyAppList& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
    };
    DescribeAppsResponseBodyAppList() = default ;
    DescribeAppsResponseBodyAppList(const DescribeAppsResponseBodyAppList &) = default ;
    DescribeAppsResponseBodyAppList(DescribeAppsResponseBodyAppList &&) = default ;
    DescribeAppsResponseBodyAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyAppList() = default ;
    DescribeAppsResponseBodyAppList& operator=(const DescribeAppsResponseBodyAppList &) = default ;
    DescribeAppsResponseBodyAppList& operator=(DescribeAppsResponseBodyAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const vector<Models::DescribeAppsResponseBodyAppListApp> & app() const { DARABONBA_PTR_GET_CONST(app_, vector<Models::DescribeAppsResponseBodyAppListApp>) };
    inline vector<Models::DescribeAppsResponseBodyAppListApp> app() { DARABONBA_PTR_GET(app_, vector<Models::DescribeAppsResponseBodyAppListApp>) };
    inline DescribeAppsResponseBodyAppList& setApp(const vector<Models::DescribeAppsResponseBodyAppListApp> & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline DescribeAppsResponseBodyAppList& setApp(vector<Models::DescribeAppsResponseBodyAppListApp> && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


  protected:
    std::shared_ptr<vector<Models::DescribeAppsResponseBodyAppListApp>> app_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
