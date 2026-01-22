// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETEMBODIEDAIPLATFORMPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETEMBODIEDAIPLATFORMPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class ResetEmbodiedAIPlatformPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetEmbodiedAIPlatformPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetEmbodiedAIPlatformPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetEmbodiedAIPlatformPasswordRequest() = default ;
    ResetEmbodiedAIPlatformPasswordRequest(const ResetEmbodiedAIPlatformPasswordRequest &) = default ;
    ResetEmbodiedAIPlatformPasswordRequest(ResetEmbodiedAIPlatformPasswordRequest &&) = default ;
    ResetEmbodiedAIPlatformPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetEmbodiedAIPlatformPasswordRequest() = default ;
    ResetEmbodiedAIPlatformPasswordRequest& operator=(const ResetEmbodiedAIPlatformPasswordRequest &) = default ;
    ResetEmbodiedAIPlatformPasswordRequest& operator=(ResetEmbodiedAIPlatformPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->password_ == nullptr && this->platformName_ == nullptr && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ResetEmbodiedAIPlatformPasswordRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ResetEmbodiedAIPlatformPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline ResetEmbodiedAIPlatformPasswordRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetEmbodiedAIPlatformPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> platformName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
