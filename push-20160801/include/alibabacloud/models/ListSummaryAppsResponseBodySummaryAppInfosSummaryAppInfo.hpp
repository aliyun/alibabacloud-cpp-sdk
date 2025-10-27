// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODYSUMMARYAPPINFOSSUMMARYAPPINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODYSUMMARYAPPINFOSSUMMARYAPPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo() = default ;
    ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo(const ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo &) = default ;
    ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo(ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo &&) = default ;
    ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo() = default ;
    ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo& operator=(const ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo &) = default ;
    ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo& operator=(ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->appName_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
