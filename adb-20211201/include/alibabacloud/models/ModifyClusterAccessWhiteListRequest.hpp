// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERACCESSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERACCESSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyClusterAccessWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterAccessWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterAccessWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
    };
    ModifyClusterAccessWhiteListRequest() = default ;
    ModifyClusterAccessWhiteListRequest(const ModifyClusterAccessWhiteListRequest &) = default ;
    ModifyClusterAccessWhiteListRequest(ModifyClusterAccessWhiteListRequest &&) = default ;
    ModifyClusterAccessWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterAccessWhiteListRequest() = default ;
    ModifyClusterAccessWhiteListRequest& operator=(const ModifyClusterAccessWhiteListRequest &) = default ;
    ModifyClusterAccessWhiteListRequest& operator=(ModifyClusterAccessWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterIPArrayAttribute_ == nullptr
        && return this->DBClusterIPArrayName_ == nullptr && return this->DBClusterId_ == nullptr && return this->modifyMode_ == nullptr && return this->securityIps_ == nullptr; };
    // DBClusterIPArrayAttribute Field Functions 
    bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
    void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
    inline string DBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
    inline ModifyClusterAccessWhiteListRequest& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


    // DBClusterIPArrayName Field Functions 
    bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
    void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
    inline string DBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
    inline ModifyClusterAccessWhiteListRequest& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyClusterAccessWhiteListRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyClusterAccessWhiteListRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string securityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline ModifyClusterAccessWhiteListRequest& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


  protected:
    // The attribute of the IP address whitelist. By default, this parameter is empty.
    // 
    // >  IP address whitelists with the hidden attribute are not displayed in the console. Those whitelists are used to access Data Transmission Service (DTS) and PolarDB.
    std::shared_ptr<string> DBClusterIPArrayAttribute_ = nullptr;
    // The name of the IP address whitelist. If you do not specify this parameter, the Default whitelist is modified.
    // 
    // *   The whitelist name must be 2 to 32 characters in length. The name can contain lowercase letters, digits, and underscores (_). The name must start with a lowercase letter and end with a lowercase letter or a digit.
    // *   Each cluster supports up to 50 IP address whitelists.
    std::shared_ptr<string> DBClusterIPArrayName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The method used to modify the IP address whitelist. Valid values:
    // 
    // *   **Cover** (default)
    // *   **Append**
    // *   **Delete**
    std::shared_ptr<string> modifyMode_ = nullptr;
    // The IP addresses in an IP address whitelist of a cluster. Separate multiple IP addresses with commas (,). You can add a maximum of 500 different IP addresses to a whitelist. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as 10.23.XX.XX.
    // *   CIDR blocks, such as 10.23.xx.xx/24. In this example, 24 indicates that the prefix of each IP address in the IP whitelist is 24 bits in length. You can replace 24 with a value within the range of 1 to 32.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityIps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
