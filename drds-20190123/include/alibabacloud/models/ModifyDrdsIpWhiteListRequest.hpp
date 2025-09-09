// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDRDSIPWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDRDSIPWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ModifyDrdsIpWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDrdsIpWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(GroupAttribute, groupAttribute_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpWhiteList, ipWhiteList_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDrdsIpWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(GroupAttribute, groupAttribute_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpWhiteList, ipWhiteList_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    ModifyDrdsIpWhiteListRequest() = default ;
    ModifyDrdsIpWhiteListRequest(const ModifyDrdsIpWhiteListRequest &) = default ;
    ModifyDrdsIpWhiteListRequest(ModifyDrdsIpWhiteListRequest &&) = default ;
    ModifyDrdsIpWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDrdsIpWhiteListRequest() = default ;
    ModifyDrdsIpWhiteListRequest& operator=(const ModifyDrdsIpWhiteListRequest &) = default ;
    ModifyDrdsIpWhiteListRequest& operator=(ModifyDrdsIpWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->groupAttribute_ != nullptr && this->groupName_ != nullptr && this->ipWhiteList_ != nullptr && this->mode_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyDrdsIpWhiteListRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ModifyDrdsIpWhiteListRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // groupAttribute Field Functions 
    bool hasGroupAttribute() const { return this->groupAttribute_ != nullptr;};
    void deleteGroupAttribute() { this->groupAttribute_ = nullptr;};
    inline string groupAttribute() const { DARABONBA_PTR_GET_DEFAULT(groupAttribute_, "") };
    inline ModifyDrdsIpWhiteListRequest& setGroupAttribute(string groupAttribute) { DARABONBA_PTR_SET_VALUE(groupAttribute_, groupAttribute) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDrdsIpWhiteListRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline string ipWhiteList() const { DARABONBA_PTR_GET_DEFAULT(ipWhiteList_, "") };
    inline ModifyDrdsIpWhiteListRequest& setIpWhiteList(string ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline bool mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, false) };
    inline ModifyDrdsIpWhiteListRequest& setMode(bool mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The name of the DRDS database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the Message Queue for Apache Kafka instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The attribute of the IP address whitelist group.
    std::shared_ptr<string> groupAttribute_ = nullptr;
    // The name of the IP address whitelist group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The modified whitelist. Separate multiple IP addresses with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> ipWhiteList_ = nullptr;
    // Specifies the mode. Valid values:
    // 
    // *   `True`: append modifications
    // *   `False`: overwrite modification
    std::shared_ptr<bool> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
