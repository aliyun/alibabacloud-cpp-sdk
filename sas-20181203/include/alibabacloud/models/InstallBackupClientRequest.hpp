// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLBACKUPCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLBACKUPCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class InstallBackupClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallBackupClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, InstallBackupClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    InstallBackupClientRequest() = default ;
    InstallBackupClientRequest(const InstallBackupClientRequest &) = default ;
    InstallBackupClientRequest(InstallBackupClientRequest &&) = default ;
    InstallBackupClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallBackupClientRequest() = default ;
    InstallBackupClientRequest& operator=(const InstallBackupClientRequest &) = default ;
    InstallBackupClientRequest& operator=(InstallBackupClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyVersion_ != nullptr
        && this->uuid_ != nullptr && this->uuidList_ != nullptr; };
    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string policyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline InstallBackupClientRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline InstallBackupClientRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline InstallBackupClientRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline InstallBackupClientRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The version of the anti-ransomware policy. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    // 
    // This parameter is required.
    std::shared_ptr<string> policyVersion_ = nullptr;
    // The UUID of the server on which you want to install the anti-ransomware agent.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers. You must specify at least one of the UuidList and Uuid parameters.
    std::shared_ptr<string> uuid_ = nullptr;
    // The UUIDs of servers on which you want to install the anti-ransomware agent.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
