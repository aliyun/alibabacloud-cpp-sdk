// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEPROJECTSECURITYIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEPROJECTSECURITYIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySupabaseProjectSecurityIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseProjectSecurityIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(UpdateDb, updateDb_);
      DARABONBA_PTR_TO_JSON(UpdateWeb, updateWeb_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseProjectSecurityIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(UpdateDb, updateDb_);
      DARABONBA_PTR_FROM_JSON(UpdateWeb, updateWeb_);
    };
    ModifySupabaseProjectSecurityIpsRequest() = default ;
    ModifySupabaseProjectSecurityIpsRequest(const ModifySupabaseProjectSecurityIpsRequest &) = default ;
    ModifySupabaseProjectSecurityIpsRequest(ModifySupabaseProjectSecurityIpsRequest &&) = default ;
    ModifySupabaseProjectSecurityIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseProjectSecurityIpsRequest() = default ;
    ModifySupabaseProjectSecurityIpsRequest& operator=(const ModifySupabaseProjectSecurityIpsRequest &) = default ;
    ModifySupabaseProjectSecurityIpsRequest& operator=(ModifySupabaseProjectSecurityIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->regionId_ == nullptr && this->securityIPList_ == nullptr && this->updateDb_ == nullptr && this->updateWeb_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifySupabaseProjectSecurityIpsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseProjectSecurityIpsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifySupabaseProjectSecurityIpsRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // updateDb Field Functions 
    bool hasUpdateDb() const { return this->updateDb_ != nullptr;};
    void deleteUpdateDb() { this->updateDb_ = nullptr;};
    inline bool getUpdateDb() const { DARABONBA_PTR_GET_DEFAULT(updateDb_, false) };
    inline ModifySupabaseProjectSecurityIpsRequest& setUpdateDb(bool updateDb) { DARABONBA_PTR_SET_VALUE(updateDb_, updateDb) };


    // updateWeb Field Functions 
    bool hasUpdateWeb() const { return this->updateWeb_ != nullptr;};
    void deleteUpdateWeb() { this->updateWeb_ = nullptr;};
    inline bool getUpdateWeb() const { DARABONBA_PTR_GET_DEFAULT(updateWeb_, false) };
    inline ModifySupabaseProjectSecurityIpsRequest& setUpdateWeb(bool updateWeb) { DARABONBA_PTR_SET_VALUE(updateWeb_, updateWeb) };


  protected:
    // The Supabase project ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID of the cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // A comma-separated list of IP addresses and CIDR blocks to set as the whitelist. You can specify up to 1,000 entries. Supported formats:
    // 
    // *   Single IP: 10.23.12.24
    // *   CIDR Block: 10.23.12.0/24 (the prefix`/24` indicates the length must be between 1 and 32)``
    // 
    // This parameter is required.
    shared_ptr<string> securityIPList_ {};
    shared_ptr<bool> updateDb_ {};
    shared_ptr<bool> updateWeb_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
