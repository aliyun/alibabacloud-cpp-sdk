// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGDNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGDNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateGdnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGdnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GdnMode, gdnMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RplConflictStrategy, rplConflictStrategy_);
      DARABONBA_PTR_TO_JSON(RplDmlStrategy, rplDmlStrategy_);
      DARABONBA_PTR_TO_JSON(RplSyncDdl, rplSyncDdl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGdnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GdnMode, gdnMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RplConflictStrategy, rplConflictStrategy_);
      DARABONBA_PTR_FROM_JSON(RplDmlStrategy, rplDmlStrategy_);
      DARABONBA_PTR_FROM_JSON(RplSyncDdl, rplSyncDdl_);
    };
    CreateGdnInstanceRequest() = default ;
    CreateGdnInstanceRequest(const CreateGdnInstanceRequest &) = default ;
    CreateGdnInstanceRequest(CreateGdnInstanceRequest &&) = default ;
    CreateGdnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGdnInstanceRequest() = default ;
    CreateGdnInstanceRequest& operator=(const CreateGdnInstanceRequest &) = default ;
    CreateGdnInstanceRequest& operator=(CreateGdnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->description_ == nullptr && return this->gdnMode_ == nullptr && return this->regionId_ == nullptr && return this->rplConflictStrategy_ == nullptr && return this->rplDmlStrategy_ == nullptr
        && return this->rplSyncDdl_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateGdnInstanceRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGdnInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gdnMode Field Functions 
    bool hasGdnMode() const { return this->gdnMode_ != nullptr;};
    void deleteGdnMode() { this->gdnMode_ = nullptr;};
    inline string gdnMode() const { DARABONBA_PTR_GET_DEFAULT(gdnMode_, "") };
    inline CreateGdnInstanceRequest& setGdnMode(string gdnMode) { DARABONBA_PTR_SET_VALUE(gdnMode_, gdnMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGdnInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rplConflictStrategy Field Functions 
    bool hasRplConflictStrategy() const { return this->rplConflictStrategy_ != nullptr;};
    void deleteRplConflictStrategy() { this->rplConflictStrategy_ = nullptr;};
    inline string rplConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(rplConflictStrategy_, "") };
    inline CreateGdnInstanceRequest& setRplConflictStrategy(string rplConflictStrategy) { DARABONBA_PTR_SET_VALUE(rplConflictStrategy_, rplConflictStrategy) };


    // rplDmlStrategy Field Functions 
    bool hasRplDmlStrategy() const { return this->rplDmlStrategy_ != nullptr;};
    void deleteRplDmlStrategy() { this->rplDmlStrategy_ = nullptr;};
    inline string rplDmlStrategy() const { DARABONBA_PTR_GET_DEFAULT(rplDmlStrategy_, "") };
    inline CreateGdnInstanceRequest& setRplDmlStrategy(string rplDmlStrategy) { DARABONBA_PTR_SET_VALUE(rplDmlStrategy_, rplDmlStrategy) };


    // rplSyncDdl Field Functions 
    bool hasRplSyncDdl() const { return this->rplSyncDdl_ != nullptr;};
    void deleteRplSyncDdl() { this->rplSyncDdl_ = nullptr;};
    inline bool rplSyncDdl() const { DARABONBA_PTR_GET_DEFAULT(rplSyncDdl_, false) };
    inline CreateGdnInstanceRequest& setRplSyncDdl(bool rplSyncDdl) { DARABONBA_PTR_SET_VALUE(rplSyncDdl_, rplSyncDdl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gdnMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> rplConflictStrategy_ = nullptr;
    std::shared_ptr<string> rplDmlStrategy_ = nullptr;
    std::shared_ptr<bool> rplSyncDdl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
