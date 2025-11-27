// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGADInstanceRequestTag.hpp>
#include <alibabacloud/models/CreateGADInstanceRequestUnitNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGADInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGADInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_TO_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnitNode, unitNode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGADInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_FROM_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnitNode, unitNode_);
    };
    CreateGADInstanceRequest() = default ;
    CreateGADInstanceRequest(const CreateGADInstanceRequest &) = default ;
    CreateGADInstanceRequest(CreateGADInstanceRequest &&) = default ;
    CreateGADInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGADInstanceRequest() = default ;
    CreateGADInstanceRequest& operator=(const CreateGADInstanceRequest &) = default ;
    CreateGADInstanceRequest& operator=(CreateGADInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->centralDBInstanceId_ == nullptr
        && return this->centralRdsDtsAdminAccount_ == nullptr && return this->centralRdsDtsAdminPassword_ == nullptr && return this->centralRegionId_ == nullptr && return this->DBList_ == nullptr && return this->description_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr && return this->unitNode_ == nullptr; };
    // centralDBInstanceId Field Functions 
    bool hasCentralDBInstanceId() const { return this->centralDBInstanceId_ != nullptr;};
    void deleteCentralDBInstanceId() { this->centralDBInstanceId_ = nullptr;};
    inline string centralDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(centralDBInstanceId_, "") };
    inline CreateGADInstanceRequest& setCentralDBInstanceId(string centralDBInstanceId) { DARABONBA_PTR_SET_VALUE(centralDBInstanceId_, centralDBInstanceId) };


    // centralRdsDtsAdminAccount Field Functions 
    bool hasCentralRdsDtsAdminAccount() const { return this->centralRdsDtsAdminAccount_ != nullptr;};
    void deleteCentralRdsDtsAdminAccount() { this->centralRdsDtsAdminAccount_ = nullptr;};
    inline string centralRdsDtsAdminAccount() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminAccount_, "") };
    inline CreateGADInstanceRequest& setCentralRdsDtsAdminAccount(string centralRdsDtsAdminAccount) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminAccount_, centralRdsDtsAdminAccount) };


    // centralRdsDtsAdminPassword Field Functions 
    bool hasCentralRdsDtsAdminPassword() const { return this->centralRdsDtsAdminPassword_ != nullptr;};
    void deleteCentralRdsDtsAdminPassword() { this->centralRdsDtsAdminPassword_ = nullptr;};
    inline string centralRdsDtsAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminPassword_, "") };
    inline CreateGADInstanceRequest& setCentralRdsDtsAdminPassword(string centralRdsDtsAdminPassword) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminPassword_, centralRdsDtsAdminPassword) };


    // centralRegionId Field Functions 
    bool hasCentralRegionId() const { return this->centralRegionId_ != nullptr;};
    void deleteCentralRegionId() { this->centralRegionId_ = nullptr;};
    inline string centralRegionId() const { DARABONBA_PTR_GET_DEFAULT(centralRegionId_, "") };
    inline CreateGADInstanceRequest& setCentralRegionId(string centralRegionId) { DARABONBA_PTR_SET_VALUE(centralRegionId_, centralRegionId) };


    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline string DBList() const { DARABONBA_PTR_GET_DEFAULT(DBList_, "") };
    inline CreateGADInstanceRequest& setDBList(string DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGADInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGADInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateGADInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateGADInstanceRequestTag>) };
    inline vector<CreateGADInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateGADInstanceRequestTag>) };
    inline CreateGADInstanceRequest& setTag(const vector<CreateGADInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateGADInstanceRequest& setTag(vector<CreateGADInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // unitNode Field Functions 
    bool hasUnitNode() const { return this->unitNode_ != nullptr;};
    void deleteUnitNode() { this->unitNode_ = nullptr;};
    inline const vector<CreateGADInstanceRequestUnitNode> & unitNode() const { DARABONBA_PTR_GET_CONST(unitNode_, vector<CreateGADInstanceRequestUnitNode>) };
    inline vector<CreateGADInstanceRequestUnitNode> unitNode() { DARABONBA_PTR_GET(unitNode_, vector<CreateGADInstanceRequestUnitNode>) };
    inline CreateGADInstanceRequest& setUnitNode(const vector<CreateGADInstanceRequestUnitNode> & unitNode) { DARABONBA_PTR_SET_VALUE(unitNode_, unitNode) };
    inline CreateGADInstanceRequest& setUnitNode(vector<CreateGADInstanceRequestUnitNode> && unitNode) { DARABONBA_PTR_SET_RVALUE(unitNode_, unitNode) };


  protected:
    // The ID of the primary instance. You can call the DescribeDBInstances operation to query the instance ID. The primary instance serves as the central node of the global active database cluster.
    // 
    // > *   A primary instance can serve only as the central node of a single global active database cluster.
    // > *   The primary instance can serve as the central node of the global active database cluster only in the following regions: China (Hangzhou), China (Shanghai), China (Qingdao), China (Beijing), China (Zhangjiakou), China (Shenzhen), and China (Chengdu).
    // 
    // This parameter is required.
    std::shared_ptr<string> centralDBInstanceId_ = nullptr;
    // The username of the privileged account of the central node. You can call the DescribeAccounts operation to query the privileged account of the central node.
    // 
    // This parameter is required.
    std::shared_ptr<string> centralRdsDtsAdminAccount_ = nullptr;
    // The password of the privileged account of the central node.
    // 
    // This parameter is required.
    std::shared_ptr<string> centralRdsDtsAdminPassword_ = nullptr;
    // The region ID of the central node. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> centralRegionId_ = nullptr;
    // A JSON array that consists of the information about a specified database on the central node. All database information that you specify in this array is synchronized to the unit nodes of the global active database cluster. The JSON array contains the following fields:
    // 
    // *   **name**: the name of the database.
    // *   **all**: specifies whether to synchronize all data in the database or the table. Valid values: **true** and **false**.
    // *   **Table**: the name of the table. If you set the **all** field to **false**, you must nest the name of the table that you want to synchronize into the JSON array.
    // 
    // Example: `{ "testdb": { "name": "testdb", "all": false, "Table": { "order": { "name": "order", "all": true }, "ordernew": { "name": "ordernew", "all": true } } } }`
    // 
    // This parameter is required.
    std::shared_ptr<string> DBList_ = nullptr;
    // The name of the global active database cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // An array that consists of the details about the tag.
    std::shared_ptr<vector<CreateGADInstanceRequestTag>> tag_ = nullptr;
    // The information about the unit node.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateGADInstanceRequestUnitNode>> unitNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
