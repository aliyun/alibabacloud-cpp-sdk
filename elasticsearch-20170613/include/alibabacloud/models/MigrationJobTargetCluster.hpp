// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBTARGETCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBTARGETCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class MigrationJobTargetCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobTargetCluster& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobTargetCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    MigrationJobTargetCluster() = default ;
    MigrationJobTargetCluster(const MigrationJobTargetCluster &) = default ;
    MigrationJobTargetCluster(MigrationJobTargetCluster &&) = default ;
    MigrationJobTargetCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobTargetCluster() = default ;
    MigrationJobTargetCluster& operator=(const MigrationJobTargetCluster &) = default ;
    MigrationJobTargetCluster& operator=(MigrationJobTargetCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->type_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MigrationJobTargetCluster& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MigrationJobTargetCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
