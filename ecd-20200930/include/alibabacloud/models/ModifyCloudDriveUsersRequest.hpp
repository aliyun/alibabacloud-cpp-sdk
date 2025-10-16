// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDDRIVEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDDRIVEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCloudDriveUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudDriveUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserMaxSize, userMaxSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudDriveUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserMaxSize, userMaxSize_);
    };
    ModifyCloudDriveUsersRequest() = default ;
    ModifyCloudDriveUsersRequest(const ModifyCloudDriveUsersRequest &) = default ;
    ModifyCloudDriveUsersRequest(ModifyCloudDriveUsersRequest &&) = default ;
    ModifyCloudDriveUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudDriveUsersRequest() = default ;
    ModifyCloudDriveUsersRequest& operator=(const ModifyCloudDriveUsersRequest &) = default ;
    ModifyCloudDriveUsersRequest& operator=(ModifyCloudDriveUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->endUserId_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->userMaxSize_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ModifyCloudDriveUsersRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & endUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> endUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline ModifyCloudDriveUsersRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline ModifyCloudDriveUsersRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudDriveUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyCloudDriveUsersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userMaxSize Field Functions 
    bool hasUserMaxSize() const { return this->userMaxSize_ != nullptr;};
    void deleteUserMaxSize() { this->userMaxSize_ = nullptr;};
    inline int64_t userMaxSize() const { DARABONBA_PTR_GET_DEFAULT(userMaxSize_, 0L) };
    inline ModifyCloudDriveUsersRequest& setUserMaxSize(int64_t userMaxSize) { DARABONBA_PTR_SET_VALUE(userMaxSize_, userMaxSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> endUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of Cloud Drive Service users.
    // 
    // Valid values:
    // 
    // *   disabled
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     unavailable
    // 
    //     <!-- -->
    // 
    // *   enabled
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     available
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The maximum storage space of a user. Unit: bytes.
    std::shared_ptr<int64_t> userMaxSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
