// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class UpdateBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(backupTaskId, backupTaskId_);
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(backupTaskId, backupTaskId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateBackupRequest() = default ;
    UpdateBackupRequest(const UpdateBackupRequest &) = default ;
    UpdateBackupRequest(UpdateBackupRequest &&) = default ;
    UpdateBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBackupRequest() = default ;
    UpdateBackupRequest& operator=(const UpdateBackupRequest &) = default ;
    UpdateBackupRequest& operator=(UpdateBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->backupTaskId_ == nullptr && this->description_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateBackupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // backupTaskId Field Functions 
    bool hasBackupTaskId() const { return this->backupTaskId_ != nullptr;};
    void deleteBackupTaskId() { this->backupTaskId_ = nullptr;};
    inline string getBackupTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupTaskId_, "") };
    inline UpdateBackupRequest& setBackupTaskId(string backupTaskId) { DARABONBA_PTR_SET_VALUE(backupTaskId_, backupTaskId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateBackupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> backupTaskId_ {};
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
