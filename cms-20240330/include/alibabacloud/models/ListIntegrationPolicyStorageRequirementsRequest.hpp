// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
    };
    ListIntegrationPolicyStorageRequirementsRequest() = default ;
    ListIntegrationPolicyStorageRequirementsRequest(const ListIntegrationPolicyStorageRequirementsRequest &) = default ;
    ListIntegrationPolicyStorageRequirementsRequest(ListIntegrationPolicyStorageRequirementsRequest &&) = default ;
    ListIntegrationPolicyStorageRequirementsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsRequest() = default ;
    ListIntegrationPolicyStorageRequirementsRequest& operator=(const ListIntegrationPolicyStorageRequirementsRequest &) = default ;
    ListIntegrationPolicyStorageRequirementsRequest& operator=(ListIntegrationPolicyStorageRequirementsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && return this->addonReleaseName_ == nullptr && return this->storageType_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPolicyStorageRequirementsRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListIntegrationPolicyStorageRequirementsRequest& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListIntegrationPolicyStorageRequirementsRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> addonName_ = nullptr;
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
