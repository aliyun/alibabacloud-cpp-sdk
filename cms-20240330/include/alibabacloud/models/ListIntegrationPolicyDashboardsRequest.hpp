// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyDashboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyDashboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyDashboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    ListIntegrationPolicyDashboardsRequest() = default ;
    ListIntegrationPolicyDashboardsRequest(const ListIntegrationPolicyDashboardsRequest &) = default ;
    ListIntegrationPolicyDashboardsRequest(ListIntegrationPolicyDashboardsRequest &&) = default ;
    ListIntegrationPolicyDashboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyDashboardsRequest() = default ;
    ListIntegrationPolicyDashboardsRequest& operator=(const ListIntegrationPolicyDashboardsRequest &) = default ;
    ListIntegrationPolicyDashboardsRequest& operator=(ListIntegrationPolicyDashboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && this->language_ == nullptr && this->scene_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPolicyDashboardsRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListIntegrationPolicyDashboardsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListIntegrationPolicyDashboardsRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Addon Name.
    shared_ptr<string> addonName_ {};
    // Query Language
    shared_ptr<string> language_ {};
    // Component Scenario.
    shared_ptr<string> scene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
