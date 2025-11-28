// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYPRIVATERAGSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYPRIVATERAGSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeployPrivateRAGServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployPrivateRAGServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployPrivateRAGServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DeployPrivateRAGServiceRequest() = default ;
    DeployPrivateRAGServiceRequest(const DeployPrivateRAGServiceRequest &) = default ;
    DeployPrivateRAGServiceRequest(DeployPrivateRAGServiceRequest &&) = default ;
    DeployPrivateRAGServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployPrivateRAGServiceRequest() = default ;
    DeployPrivateRAGServiceRequest& operator=(const DeployPrivateRAGServiceRequest &) = default ;
    DeployPrivateRAGServiceRequest& operator=(DeployPrivateRAGServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeployPrivateRAGServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DeployPrivateRAGServiceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DeployPrivateRAGServiceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
