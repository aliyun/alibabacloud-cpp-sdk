// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOPENSEARCHACCESSPROTOCOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOPENSEARCHACCESSPROTOCOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyOpenSearchAccessProtocolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOpenSearchAccessProtocolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOpenSearchAccessProtocolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyOpenSearchAccessProtocolRequest() = default ;
    ModifyOpenSearchAccessProtocolRequest(const ModifyOpenSearchAccessProtocolRequest &) = default ;
    ModifyOpenSearchAccessProtocolRequest(ModifyOpenSearchAccessProtocolRequest &&) = default ;
    ModifyOpenSearchAccessProtocolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOpenSearchAccessProtocolRequest() = default ;
    ModifyOpenSearchAccessProtocolRequest& operator=(const ModifyOpenSearchAccessProtocolRequest &) = default ;
    ModifyOpenSearchAccessProtocolRequest& operator=(ModifyOpenSearchAccessProtocolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->protocol_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyOpenSearchAccessProtocolRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ModifyOpenSearchAccessProtocolRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOpenSearchAccessProtocolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance name.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The access protocol. Valid values:
    // 
    // - **http**: HTTP protocol.
    // - **https**: HTTPS protocol.
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
