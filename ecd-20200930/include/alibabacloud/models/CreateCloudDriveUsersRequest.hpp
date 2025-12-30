// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVEUSERSREQUEST_HPP_
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
  class CreateCloudDriveUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserMaxSize, userMaxSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserMaxSize, userMaxSize_);
    };
    CreateCloudDriveUsersRequest() = default ;
    CreateCloudDriveUsersRequest(const CreateCloudDriveUsersRequest &) = default ;
    CreateCloudDriveUsersRequest(CreateCloudDriveUsersRequest &&) = default ;
    CreateCloudDriveUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveUsersRequest() = default ;
    CreateCloudDriveUsersRequest& operator=(const CreateCloudDriveUsersRequest &) = default ;
    CreateCloudDriveUsersRequest& operator=(CreateCloudDriveUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->endUserId_ == nullptr && this->regionId_ == nullptr && this->userMaxSize_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCloudDriveUsersRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline CreateCloudDriveUsersRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline CreateCloudDriveUsersRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudDriveUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userMaxSize Field Functions 
    bool hasUserMaxSize() const { return this->userMaxSize_ != nullptr;};
    void deleteUserMaxSize() { this->userMaxSize_ = nullptr;};
    inline int64_t getUserMaxSize() const { DARABONBA_PTR_GET_DEFAULT(userMaxSize_, 0L) };
    inline CreateCloudDriveUsersRequest& setUserMaxSize(int64_t userMaxSize) { DARABONBA_PTR_SET_VALUE(userMaxSize_, userMaxSize) };


  protected:
    // The ID of the cloud disk.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The IDs of the end users.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> endUserId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The maximum storage space of an end user. Unit: bytes.
    // 
    // This parameter is required.
    shared_ptr<int64_t> userMaxSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
