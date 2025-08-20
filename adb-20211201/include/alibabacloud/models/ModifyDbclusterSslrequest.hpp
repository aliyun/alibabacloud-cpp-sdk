// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBClusterSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDBClusterSSLRequest() = default ;
    ModifyDBClusterSSLRequest(const ModifyDBClusterSSLRequest &) = default ;
    ModifyDBClusterSSLRequest(ModifyDBClusterSSLRequest &&) = default ;
    ModifyDBClusterSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterSSLRequest() = default ;
    ModifyDBClusterSSLRequest& operator=(const ModifyDBClusterSSLRequest &) = default ;
    ModifyDBClusterSSLRequest& operator=(ModifyDBClusterSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->DBClusterId_ != nullptr && this->enableSSL_ != nullptr && this->regionId_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBClusterSSLRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterSSLRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline ModifyDBClusterSSLRequest& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterSSLRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableSSL_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
