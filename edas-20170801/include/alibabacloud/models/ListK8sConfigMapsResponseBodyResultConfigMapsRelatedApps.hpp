// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODYRESULTCONFIGMAPSRELATEDAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODYRESULTCONFIGMAPSRELATEDAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps() = default ;
    ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps(const ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps &) = default ;
    ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps(ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps &&) = default ;
    ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps() = default ;
    ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps& operator=(const ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps &) = default ;
    ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps& operator=(ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
