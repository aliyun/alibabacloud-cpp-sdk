// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEINSTANCEZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEINSTANCEZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class MigrateInstanceZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateInstanceZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateInstanceZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    MigrateInstanceZoneRequest() = default ;
    MigrateInstanceZoneRequest(const MigrateInstanceZoneRequest &) = default ;
    MigrateInstanceZoneRequest(MigrateInstanceZoneRequest &&) = default ;
    MigrateInstanceZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateInstanceZoneRequest() = default ;
    MigrateInstanceZoneRequest& operator=(const MigrateInstanceZoneRequest &) = default ;
    MigrateInstanceZoneRequest& operator=(MigrateInstanceZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline MigrateInstanceZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
