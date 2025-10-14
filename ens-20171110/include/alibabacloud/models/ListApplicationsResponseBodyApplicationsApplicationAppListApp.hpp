// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONAPPLISTAPP_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONSAPPLICATIONAPPLISTAPP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListApplicationsResponseBodyApplicationsApplicationAppListApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplicationsApplicationAppListApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplicationsApplicationAppListApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
    };
    ListApplicationsResponseBodyApplicationsApplicationAppListApp() = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppListApp(const ListApplicationsResponseBodyApplicationsApplicationAppListApp &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppListApp(ListApplicationsResponseBodyApplicationsApplicationAppListApp &&) = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppListApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplicationsApplicationAppListApp() = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppListApp& operator=(const ListApplicationsResponseBodyApplicationsApplicationAppListApp &) = default ;
    ListApplicationsResponseBodyApplicationsApplicationAppListApp& operator=(ListApplicationsResponseBodyApplicationsApplicationAppListApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appInfo_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsResponseBodyApplicationsApplicationAppListApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline string appInfo() const { DARABONBA_PTR_GET_DEFAULT(appInfo_, "") };
    inline ListApplicationsResponseBodyApplicationsApplicationAppListApp& setAppInfo(string appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The information about the application, such as the resource specification, parameter configuration, and resources.
    std::shared_ptr<string> appInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
