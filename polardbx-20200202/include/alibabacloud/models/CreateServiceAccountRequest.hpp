// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateServiceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceAccountType, serviceAccountType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountType, serviceAccountType_);
    };
    CreateServiceAccountRequest() = default ;
    CreateServiceAccountRequest(const CreateServiceAccountRequest &) = default ;
    CreateServiceAccountRequest(CreateServiceAccountRequest &&) = default ;
    CreateServiceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAccountRequest() = default ;
    CreateServiceAccountRequest& operator=(const CreateServiceAccountRequest &) = default ;
    CreateServiceAccountRequest& operator=(CreateServiceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->serviceAccountType_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateServiceAccountRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceAccountType Field Functions 
    bool hasServiceAccountType() const { return this->serviceAccountType_ != nullptr;};
    void deleteServiceAccountType() { this->serviceAccountType_ = nullptr;};
    inline string getServiceAccountType() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountType_, "") };
    inline CreateServiceAccountRequest& setServiceAccountType(string serviceAccountType) { DARABONBA_PTR_SET_VALUE(serviceAccountType_, serviceAccountType) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The type of the service account.
    // 
    // This parameter is required.
    shared_ptr<string> serviceAccountType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
