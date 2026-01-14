// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpgradeClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(UpgradeVersion, upgradeVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(UpgradeVersion, upgradeVersion_);
    };
    UpgradeClusterRequest() = default ;
    UpgradeClusterRequest(const UpgradeClusterRequest &) = default ;
    UpgradeClusterRequest(UpgradeClusterRequest &&) = default ;
    UpgradeClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterRequest() = default ;
    UpgradeClusterRequest& operator=(const UpgradeClusterRequest &) = default ;
    UpgradeClusterRequest& operator=(UpgradeClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->instanceId_ == nullptr && this->requestPars_ == nullptr && this->upgradeVersion_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpgradeClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline UpgradeClusterRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // upgradeVersion Field Functions 
    bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
    void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
    inline string getUpgradeVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeVersion_, "") };
    inline UpgradeClusterRequest& setUpgradeVersion(string upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The extended request parameters in the JSON format.
    shared_ptr<string> requestPars_ {};
    // The destination version.
    // 
    // This parameter is required.
    shared_ptr<string> upgradeVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
