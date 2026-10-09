// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPABASEBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPABASEBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateSupabaseBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupabaseBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupabaseBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateSupabaseBackupRequest() = default ;
    CreateSupabaseBackupRequest(const CreateSupabaseBackupRequest &) = default ;
    CreateSupabaseBackupRequest(CreateSupabaseBackupRequest &&) = default ;
    CreateSupabaseBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupabaseBackupRequest() = default ;
    CreateSupabaseBackupRequest& operator=(const CreateSupabaseBackupRequest &) = default ;
    CreateSupabaseBackupRequest& operator=(CreateSupabaseBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->regionId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateSupabaseBackupRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSupabaseBackupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Instance ID of the Supabase instance. You can obtain instance ID on the Supabase page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
