// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERMAINTAINTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERMAINTAINTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBClusterMaintainTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterMaintainTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterMaintainTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
    };
    ModifyDBClusterMaintainTimeRequest() = default ;
    ModifyDBClusterMaintainTimeRequest(const ModifyDBClusterMaintainTimeRequest &) = default ;
    ModifyDBClusterMaintainTimeRequest(ModifyDBClusterMaintainTimeRequest &&) = default ;
    ModifyDBClusterMaintainTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterMaintainTimeRequest() = default ;
    ModifyDBClusterMaintainTimeRequest& operator=(const ModifyDBClusterMaintainTimeRequest &) = default ;
    ModifyDBClusterMaintainTimeRequest& operator=(ModifyDBClusterMaintainTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->maintainTime_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterMaintainTimeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline ModifyDBClusterMaintainTimeRequest& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The maintenance window of the cluster. It must be in the hh:mmZ-hh:mmZ format.
    // 
    // > The interval must be 1 hour and start and end at the beginning of an hour.
    // 
    // This parameter is required.
    std::shared_ptr<string> maintainTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
