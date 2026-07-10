// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELANGFUSEORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELANGFUSEORGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateLangfuseOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLangfuseOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerEmail, ownerEmail_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLangfuseOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerEmail, ownerEmail_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateLangfuseOrgRequest() = default ;
    CreateLangfuseOrgRequest(const CreateLangfuseOrgRequest &) = default ;
    CreateLangfuseOrgRequest(CreateLangfuseOrgRequest &&) = default ;
    CreateLangfuseOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLangfuseOrgRequest() = default ;
    CreateLangfuseOrgRequest& operator=(const CreateLangfuseOrgRequest &) = default ;
    CreateLangfuseOrgRequest& operator=(CreateLangfuseOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->name_ == nullptr && this->ownerEmail_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateLangfuseOrgRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLangfuseOrgRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerEmail Field Functions 
    bool hasOwnerEmail() const { return this->ownerEmail_ != nullptr;};
    void deleteOwnerEmail() { this->ownerEmail_ = nullptr;};
    inline string getOwnerEmail() const { DARABONBA_PTR_GET_DEFAULT(ownerEmail_, "") };
    inline CreateLangfuseOrgRequest& setOwnerEmail(string ownerEmail) { DARABONBA_PTR_SET_VALUE(ownerEmail_, ownerEmail) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLangfuseOrgRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Langfuse instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the Langfuse organization.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The email address of the Langfuse organization owner.
    // 
    // This parameter is required.
    shared_ptr<string> ownerEmail_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
