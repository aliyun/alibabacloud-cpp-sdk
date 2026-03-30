// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINCLOUDACCOUNTROLEACCESSCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINCLOUDACCOUNTROLEACCESSCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ObtainCloudAccountRoleAccessCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainCloudAccountRoleAccessCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cloudAccountRoleExternalId, cloudAccountRoleExternalId_);
      DARABONBA_PTR_TO_JSON(durationSeconds, durationSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainCloudAccountRoleAccessCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cloudAccountRoleExternalId, cloudAccountRoleExternalId_);
      DARABONBA_PTR_FROM_JSON(durationSeconds, durationSeconds_);
    };
    ObtainCloudAccountRoleAccessCredentialRequest() = default ;
    ObtainCloudAccountRoleAccessCredentialRequest(const ObtainCloudAccountRoleAccessCredentialRequest &) = default ;
    ObtainCloudAccountRoleAccessCredentialRequest(ObtainCloudAccountRoleAccessCredentialRequest &&) = default ;
    ObtainCloudAccountRoleAccessCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainCloudAccountRoleAccessCredentialRequest() = default ;
    ObtainCloudAccountRoleAccessCredentialRequest& operator=(const ObtainCloudAccountRoleAccessCredentialRequest &) = default ;
    ObtainCloudAccountRoleAccessCredentialRequest& operator=(ObtainCloudAccountRoleAccessCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountRoleExternalId_ == nullptr
        && this->durationSeconds_ == nullptr; };
    // cloudAccountRoleExternalId Field Functions 
    bool hasCloudAccountRoleExternalId() const { return this->cloudAccountRoleExternalId_ != nullptr;};
    void deleteCloudAccountRoleExternalId() { this->cloudAccountRoleExternalId_ = nullptr;};
    inline string getCloudAccountRoleExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleExternalId_, "") };
    inline ObtainCloudAccountRoleAccessCredentialRequest& setCloudAccountRoleExternalId(string cloudAccountRoleExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleExternalId_, cloudAccountRoleExternalId) };


    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int32_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0) };
    inline ObtainCloudAccountRoleAccessCredentialRequest& setDurationSeconds(int32_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


  protected:
    // This parameter is required.
    shared_ptr<string> cloudAccountRoleExternalId_ {};
    shared_ptr<int32_t> durationSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
