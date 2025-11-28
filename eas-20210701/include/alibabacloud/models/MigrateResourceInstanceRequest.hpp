// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATERESOURCEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATERESOURCEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class MigrateResourceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateResourceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestResourceId, destResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MigrateToHybrid, migrateToHybrid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateResourceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestResourceId, destResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MigrateToHybrid, migrateToHybrid_);
    };
    MigrateResourceInstanceRequest() = default ;
    MigrateResourceInstanceRequest(const MigrateResourceInstanceRequest &) = default ;
    MigrateResourceInstanceRequest(MigrateResourceInstanceRequest &&) = default ;
    MigrateResourceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateResourceInstanceRequest() = default ;
    MigrateResourceInstanceRequest& operator=(const MigrateResourceInstanceRequest &) = default ;
    MigrateResourceInstanceRequest& operator=(MigrateResourceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destResourceId_ == nullptr
        && return this->instanceIds_ == nullptr && return this->migrateToHybrid_ == nullptr; };
    // destResourceId Field Functions 
    bool hasDestResourceId() const { return this->destResourceId_ != nullptr;};
    void deleteDestResourceId() { this->destResourceId_ = nullptr;};
    inline string destResourceId() const { DARABONBA_PTR_GET_DEFAULT(destResourceId_, "") };
    inline MigrateResourceInstanceRequest& setDestResourceId(string destResourceId) { DARABONBA_PTR_SET_VALUE(destResourceId_, destResourceId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline MigrateResourceInstanceRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline MigrateResourceInstanceRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // migrateToHybrid Field Functions 
    bool hasMigrateToHybrid() const { return this->migrateToHybrid_ != nullptr;};
    void deleteMigrateToHybrid() { this->migrateToHybrid_ = nullptr;};
    inline bool migrateToHybrid() const { DARABONBA_PTR_GET_DEFAULT(migrateToHybrid_, false) };
    inline MigrateResourceInstanceRequest& setMigrateToHybrid(bool migrateToHybrid) { DARABONBA_PTR_SET_VALUE(migrateToHybrid_, migrateToHybrid) };


  protected:
    // The ID of the destination resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> destResourceId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<bool> migrateToHybrid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
