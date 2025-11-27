// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCollectorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCollectorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(collectorType, collectorType_);
      DARABONBA_PTR_TO_JSON(language, language_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCollectorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(collectorType, collectorType_);
      DARABONBA_PTR_FROM_JSON(language, language_);
    };
    ListIntegrationPolicyCollectorsRequest() = default ;
    ListIntegrationPolicyCollectorsRequest(const ListIntegrationPolicyCollectorsRequest &) = default ;
    ListIntegrationPolicyCollectorsRequest(ListIntegrationPolicyCollectorsRequest &&) = default ;
    ListIntegrationPolicyCollectorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCollectorsRequest() = default ;
    ListIntegrationPolicyCollectorsRequest& operator=(const ListIntegrationPolicyCollectorsRequest &) = default ;
    ListIntegrationPolicyCollectorsRequest& operator=(ListIntegrationPolicyCollectorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonReleaseName_ == nullptr
        && return this->collectorType_ == nullptr && return this->language_ == nullptr; };
    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListIntegrationPolicyCollectorsRequest& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // collectorType Field Functions 
    bool hasCollectorType() const { return this->collectorType_ != nullptr;};
    void deleteCollectorType() { this->collectorType_ = nullptr;};
    inline string collectorType() const { DARABONBA_PTR_GET_DEFAULT(collectorType_, "") };
    inline ListIntegrationPolicyCollectorsRequest& setCollectorType(string collectorType) { DARABONBA_PTR_SET_VALUE(collectorType_, collectorType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListIntegrationPolicyCollectorsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> collectorType_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
