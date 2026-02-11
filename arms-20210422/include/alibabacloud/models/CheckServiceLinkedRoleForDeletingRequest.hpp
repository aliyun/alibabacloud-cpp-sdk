// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CheckServiceLinkedRoleForDeletingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleForDeletingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionTaskId, deletionTaskId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(SPIRegionId, SPIRegionId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleForDeletingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionTaskId, deletionTaskId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(SPIRegionId, SPIRegionId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CheckServiceLinkedRoleForDeletingRequest() = default ;
    CheckServiceLinkedRoleForDeletingRequest(const CheckServiceLinkedRoleForDeletingRequest &) = default ;
    CheckServiceLinkedRoleForDeletingRequest(CheckServiceLinkedRoleForDeletingRequest &&) = default ;
    CheckServiceLinkedRoleForDeletingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleForDeletingRequest() = default ;
    CheckServiceLinkedRoleForDeletingRequest& operator=(const CheckServiceLinkedRoleForDeletingRequest &) = default ;
    CheckServiceLinkedRoleForDeletingRequest& operator=(CheckServiceLinkedRoleForDeletingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionTaskId_ == nullptr
        && this->regionId_ == nullptr && this->roleArn_ == nullptr && this->SPIRegionId_ == nullptr && this->serviceName_ == nullptr; };
    // deletionTaskId Field Functions 
    bool hasDeletionTaskId() const { return this->deletionTaskId_ != nullptr;};
    void deleteDeletionTaskId() { this->deletionTaskId_ = nullptr;};
    inline string getDeletionTaskId() const { DARABONBA_PTR_GET_DEFAULT(deletionTaskId_, "") };
    inline CheckServiceLinkedRoleForDeletingRequest& setDeletionTaskId(string deletionTaskId) { DARABONBA_PTR_SET_VALUE(deletionTaskId_, deletionTaskId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckServiceLinkedRoleForDeletingRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CheckServiceLinkedRoleForDeletingRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // SPIRegionId Field Functions 
    bool hasSPIRegionId() const { return this->SPIRegionId_ != nullptr;};
    void deleteSPIRegionId() { this->SPIRegionId_ = nullptr;};
    inline string getSPIRegionId() const { DARABONBA_PTR_GET_DEFAULT(SPIRegionId_, "") };
    inline CheckServiceLinkedRoleForDeletingRequest& setSPIRegionId(string SPIRegionId) { DARABONBA_PTR_SET_VALUE(SPIRegionId_, SPIRegionId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CheckServiceLinkedRoleForDeletingRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> deletionTaskId_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> roleArn_ {};
    // This parameter is required.
    shared_ptr<string> SPIRegionId_ {};
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
