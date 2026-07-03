// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPABASENETTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPABASENETTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateSupabaseNetTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupabaseNetTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupabaseNetTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateSupabaseNetTypeRequest() = default ;
    CreateSupabaseNetTypeRequest(const CreateSupabaseNetTypeRequest &) = default ;
    CreateSupabaseNetTypeRequest(CreateSupabaseNetTypeRequest &&) = default ;
    CreateSupabaseNetTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupabaseNetTypeRequest() = default ;
    CreateSupabaseNetTypeRequest& operator=(const CreateSupabaseNetTypeRequest &) = default ;
    CreateSupabaseNetTypeRequest& operator=(CreateSupabaseNetTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline CreateSupabaseNetTypeRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateSupabaseNetTypeRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSupabaseNetTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The custom endpoint prefix.
    shared_ptr<string> connectionString_ {};
    // The instance name.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
