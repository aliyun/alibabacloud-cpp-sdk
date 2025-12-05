// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETHOSTACCOUNTCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETHOSTACCOUNTCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ResetHostAccountCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetHostAccountCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetHostAccountCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetHostAccountCredentialRequest() = default ;
    ResetHostAccountCredentialRequest(const ResetHostAccountCredentialRequest &) = default ;
    ResetHostAccountCredentialRequest(ResetHostAccountCredentialRequest &&) = default ;
    ResetHostAccountCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetHostAccountCredentialRequest() = default ;
    ResetHostAccountCredentialRequest& operator=(const ResetHostAccountCredentialRequest &) = default ;
    ResetHostAccountCredentialRequest& operator=(ResetHostAccountCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialType_ == nullptr
        && return this->hostAccountId_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline ResetHostAccountCredentialRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline ResetHostAccountCredentialRequest& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResetHostAccountCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetHostAccountCredentialRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the logon credential that you want to delete. Valid values:
    // 
    // *   **Password**
    // *   **PrivateKey**
    // 
    // This parameter is required.
    std::shared_ptr<string> credentialType_ = nullptr;
    // The ID of the host account for which the logon credential is to be deleted.
    // 
    // >  You can call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query the ID of the host account.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // The ID of the bastion host from which you want to delete the logon credential for the host account.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host from which you want to delete the logon credential for the host account.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
