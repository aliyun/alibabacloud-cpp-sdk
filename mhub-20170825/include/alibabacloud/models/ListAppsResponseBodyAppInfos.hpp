// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYAPPINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYAPPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppsResponseBodyAppInfosAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListAppsResponseBodyAppInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBodyAppInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBodyAppInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
    };
    ListAppsResponseBodyAppInfos() = default ;
    ListAppsResponseBodyAppInfos(const ListAppsResponseBodyAppInfos &) = default ;
    ListAppsResponseBodyAppInfos(ListAppsResponseBodyAppInfos &&) = default ;
    ListAppsResponseBodyAppInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBodyAppInfos() = default ;
    ListAppsResponseBodyAppInfos& operator=(const ListAppsResponseBodyAppInfos &) = default ;
    ListAppsResponseBodyAppInfos& operator=(ListAppsResponseBodyAppInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfo_ != nullptr; };
    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline const vector<Models::ListAppsResponseBodyAppInfosAppInfo> & appInfo() const { DARABONBA_PTR_GET_CONST(appInfo_, vector<Models::ListAppsResponseBodyAppInfosAppInfo>) };
    inline vector<Models::ListAppsResponseBodyAppInfosAppInfo> appInfo() { DARABONBA_PTR_GET(appInfo_, vector<Models::ListAppsResponseBodyAppInfosAppInfo>) };
    inline ListAppsResponseBodyAppInfos& setAppInfo(const vector<Models::ListAppsResponseBodyAppInfosAppInfo> & appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };
    inline ListAppsResponseBodyAppInfos& setAppInfo(vector<Models::ListAppsResponseBodyAppInfosAppInfo> && appInfo) { DARABONBA_PTR_SET_RVALUE(appInfo_, appInfo) };


  protected:
    std::shared_ptr<vector<Models::ListAppsResponseBodyAppInfosAppInfo>> appInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
