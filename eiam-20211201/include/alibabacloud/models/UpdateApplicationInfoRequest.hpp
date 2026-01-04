// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateApplicationInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationVisibility, applicationVisibility_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationVisibility, applicationVisibility_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
    };
    UpdateApplicationInfoRequest() = default ;
    UpdateApplicationInfoRequest(const UpdateApplicationInfoRequest &) = default ;
    UpdateApplicationInfoRequest(UpdateApplicationInfoRequest &&) = default ;
    UpdateApplicationInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationInfoRequest() = default ;
    UpdateApplicationInfoRequest& operator=(const UpdateApplicationInfoRequest &) = default ;
    UpdateApplicationInfoRequest& operator=(UpdateApplicationInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->applicationVisibility_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->logoUrl_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationInfoRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateApplicationInfoRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationVisibility Field Functions 
    bool hasApplicationVisibility() const { return this->applicationVisibility_ != nullptr;};
    void deleteApplicationVisibility() { this->applicationVisibility_ = nullptr;};
    inline const vector<string> & getApplicationVisibility() const { DARABONBA_PTR_GET_CONST(applicationVisibility_, vector<string>) };
    inline vector<string> getApplicationVisibility() { DARABONBA_PTR_GET(applicationVisibility_, vector<string>) };
    inline UpdateApplicationInfoRequest& setApplicationVisibility(const vector<string> & applicationVisibility) { DARABONBA_PTR_SET_VALUE(applicationVisibility_, applicationVisibility) };
    inline UpdateApplicationInfoRequest& setApplicationVisibility(vector<string> && applicationVisibility) { DARABONBA_PTR_SET_RVALUE(applicationVisibility_, applicationVisibility) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateApplicationInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationInfoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline UpdateApplicationInfoRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


  protected:
    // IDaaS的应用主键id
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 应用的表示名称
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    shared_ptr<vector<string>> applicationVisibility_ {};
    shared_ptr<string> clientToken_ {};
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 应用Logo地址
    shared_ptr<string> logoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
