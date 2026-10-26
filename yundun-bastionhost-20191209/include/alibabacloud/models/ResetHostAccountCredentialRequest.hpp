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
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetHostAccountCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
        && this->hostAccountId_ == nullptr && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline ResetHostAccountCredentialRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline ResetHostAccountCredentialRequest& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResetHostAccountCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ResetHostAccountCredentialRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetHostAccountCredentialRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the logon credential to purge. Valid values:
    // - **Password**: password
    // - **PrivateKey**: SSH private key
    // 
    // This parameter is required.
    shared_ptr<string> credentialType_ {};
    // The ID of the host account whose logon credentials you want to purge.
    // > You can call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> hostAccountId_ {};
    // The instance ID of the Bastionhost instance to which the host account whose logon credentials you want to purge belongs.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance to which the host account whose logon credentials you want to purge belongs.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
