// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class RegisterLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InventoryCollectEnabled, inventoryCollectEnabled_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OssLogCollectEnabled, ossLogCollectEnabled_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InventoryCollectEnabled, inventoryCollectEnabled_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OssLogCollectEnabled, ossLogCollectEnabled_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    RegisterLocationRequest() = default ;
    RegisterLocationRequest(const RegisterLocationRequest &) = default ;
    RegisterLocationRequest(RegisterLocationRequest &&) = default ;
    RegisterLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterLocationRequest() = default ;
    RegisterLocationRequest& operator=(const RegisterLocationRequest &) = default ;
    RegisterLocationRequest& operator=(RegisterLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inventoryCollectEnabled_ == nullptr
        && return this->location_ == nullptr && return this->ossLogCollectEnabled_ == nullptr && return this->roleName_ == nullptr; };
    // inventoryCollectEnabled Field Functions 
    bool hasInventoryCollectEnabled() const { return this->inventoryCollectEnabled_ != nullptr;};
    void deleteInventoryCollectEnabled() { this->inventoryCollectEnabled_ = nullptr;};
    inline bool inventoryCollectEnabled() const { DARABONBA_PTR_GET_DEFAULT(inventoryCollectEnabled_, false) };
    inline RegisterLocationRequest& setInventoryCollectEnabled(bool inventoryCollectEnabled) { DARABONBA_PTR_SET_VALUE(inventoryCollectEnabled_, inventoryCollectEnabled) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline RegisterLocationRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ossLogCollectEnabled Field Functions 
    bool hasOssLogCollectEnabled() const { return this->ossLogCollectEnabled_ != nullptr;};
    void deleteOssLogCollectEnabled() { this->ossLogCollectEnabled_ = nullptr;};
    inline bool ossLogCollectEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossLogCollectEnabled_, false) };
    inline RegisterLocationRequest& setOssLogCollectEnabled(bool ossLogCollectEnabled) { DARABONBA_PTR_SET_VALUE(ossLogCollectEnabled_, ossLogCollectEnabled) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline RegisterLocationRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // Whether to enable OSS bucket inventory
    std::shared_ptr<bool> inventoryCollectEnabled_ = nullptr;
    // Registered OSS path
    // 
    // This parameter is required.
    std::shared_ptr<string> location_ = nullptr;
    // Whether to enable OSS log storage
    std::shared_ptr<bool> ossLogCollectEnabled_ = nullptr;
    // RAM role name
    // 
    // >  Data Lake Formation read and write data in the OSS path. If you want to AliyunDLFWorkFlowDefaultRole a role, the role is automatically built in to the role. Alternatively, you can create a custom role, but you must manually ensure that the role has the read and write permissions on the corresponding path.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
