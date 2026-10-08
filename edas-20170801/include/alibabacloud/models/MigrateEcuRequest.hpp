// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEECUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEECUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class MigrateEcuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateEcuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateEcuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
    };
    MigrateEcuRequest() = default ;
    MigrateEcuRequest(const MigrateEcuRequest &) = default ;
    MigrateEcuRequest(MigrateEcuRequest &&) = default ;
    MigrateEcuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateEcuRequest() = default ;
    MigrateEcuRequest& operator=(const MigrateEcuRequest &) = default ;
    MigrateEcuRequest& operator=(MigrateEcuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->logicalRegionId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline MigrateEcuRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string getLogicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline MigrateEcuRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


  protected:
    // The IDs of the instances. To specify multiple instances, separate the IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    // The ID of the namespace.
    // 
    // - A custom namespace ID is in the format `Region ID:Namespace identifier`. Example: cn-beijing:tdy218.
    // 
    // - A default namespace ID is the same as its region ID. Example: cn-beijing.
    shared_ptr<string> logicalRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
