// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppsResponseBodyAppsAppItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppsResponseBodyApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppItem, appItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItem, appItem_);
    };
    DescribeAppsResponseBodyApps() = default ;
    DescribeAppsResponseBodyApps(const DescribeAppsResponseBodyApps &) = default ;
    DescribeAppsResponseBodyApps(DescribeAppsResponseBodyApps &&) = default ;
    DescribeAppsResponseBodyApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyApps() = default ;
    DescribeAppsResponseBodyApps& operator=(const DescribeAppsResponseBodyApps &) = default ;
    DescribeAppsResponseBodyApps& operator=(DescribeAppsResponseBodyApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appItem_ == nullptr; };
    // appItem Field Functions 
    bool hasAppItem() const { return this->appItem_ != nullptr;};
    void deleteAppItem() { this->appItem_ = nullptr;};
    inline const vector<Models::DescribeAppsResponseBodyAppsAppItem> & appItem() const { DARABONBA_PTR_GET_CONST(appItem_, vector<Models::DescribeAppsResponseBodyAppsAppItem>) };
    inline vector<Models::DescribeAppsResponseBodyAppsAppItem> appItem() { DARABONBA_PTR_GET(appItem_, vector<Models::DescribeAppsResponseBodyAppsAppItem>) };
    inline DescribeAppsResponseBodyApps& setAppItem(const vector<Models::DescribeAppsResponseBodyAppsAppItem> & appItem) { DARABONBA_PTR_SET_VALUE(appItem_, appItem) };
    inline DescribeAppsResponseBodyApps& setAppItem(vector<Models::DescribeAppsResponseBodyAppsAppItem> && appItem) { DARABONBA_PTR_SET_RVALUE(appItem_, appItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeAppsResponseBodyAppsAppItem>> appItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
