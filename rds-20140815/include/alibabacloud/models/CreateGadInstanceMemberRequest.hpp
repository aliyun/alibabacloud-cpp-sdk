// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGadInstanceMemberRequestUnitNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGadInstanceMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadInstanceMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_TO_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_TO_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_TO_JSON(DBList, DBList_);
      DARABONBA_PTR_TO_JSON(GadInstanceId, gadInstanceId_);
      DARABONBA_PTR_TO_JSON(UnitNode, unitNode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadInstanceMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CentralDBInstanceId, centralDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminAccount, centralRdsDtsAdminAccount_);
      DARABONBA_PTR_FROM_JSON(CentralRdsDtsAdminPassword, centralRdsDtsAdminPassword_);
      DARABONBA_PTR_FROM_JSON(CentralRegionId, centralRegionId_);
      DARABONBA_PTR_FROM_JSON(DBList, DBList_);
      DARABONBA_PTR_FROM_JSON(GadInstanceId, gadInstanceId_);
      DARABONBA_PTR_FROM_JSON(UnitNode, unitNode_);
    };
    CreateGadInstanceMemberRequest() = default ;
    CreateGadInstanceMemberRequest(const CreateGadInstanceMemberRequest &) = default ;
    CreateGadInstanceMemberRequest(CreateGadInstanceMemberRequest &&) = default ;
    CreateGadInstanceMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadInstanceMemberRequest() = default ;
    CreateGadInstanceMemberRequest& operator=(const CreateGadInstanceMemberRequest &) = default ;
    CreateGadInstanceMemberRequest& operator=(CreateGadInstanceMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->centralDBInstanceId_ == nullptr
        && return this->centralRdsDtsAdminAccount_ == nullptr && return this->centralRdsDtsAdminPassword_ == nullptr && return this->centralRegionId_ == nullptr && return this->DBList_ == nullptr && return this->gadInstanceId_ == nullptr
        && return this->unitNode_ == nullptr; };
    // centralDBInstanceId Field Functions 
    bool hasCentralDBInstanceId() const { return this->centralDBInstanceId_ != nullptr;};
    void deleteCentralDBInstanceId() { this->centralDBInstanceId_ = nullptr;};
    inline string centralDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(centralDBInstanceId_, "") };
    inline CreateGadInstanceMemberRequest& setCentralDBInstanceId(string centralDBInstanceId) { DARABONBA_PTR_SET_VALUE(centralDBInstanceId_, centralDBInstanceId) };


    // centralRdsDtsAdminAccount Field Functions 
    bool hasCentralRdsDtsAdminAccount() const { return this->centralRdsDtsAdminAccount_ != nullptr;};
    void deleteCentralRdsDtsAdminAccount() { this->centralRdsDtsAdminAccount_ = nullptr;};
    inline string centralRdsDtsAdminAccount() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminAccount_, "") };
    inline CreateGadInstanceMemberRequest& setCentralRdsDtsAdminAccount(string centralRdsDtsAdminAccount) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminAccount_, centralRdsDtsAdminAccount) };


    // centralRdsDtsAdminPassword Field Functions 
    bool hasCentralRdsDtsAdminPassword() const { return this->centralRdsDtsAdminPassword_ != nullptr;};
    void deleteCentralRdsDtsAdminPassword() { this->centralRdsDtsAdminPassword_ = nullptr;};
    inline string centralRdsDtsAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(centralRdsDtsAdminPassword_, "") };
    inline CreateGadInstanceMemberRequest& setCentralRdsDtsAdminPassword(string centralRdsDtsAdminPassword) { DARABONBA_PTR_SET_VALUE(centralRdsDtsAdminPassword_, centralRdsDtsAdminPassword) };


    // centralRegionId Field Functions 
    bool hasCentralRegionId() const { return this->centralRegionId_ != nullptr;};
    void deleteCentralRegionId() { this->centralRegionId_ = nullptr;};
    inline string centralRegionId() const { DARABONBA_PTR_GET_DEFAULT(centralRegionId_, "") };
    inline CreateGadInstanceMemberRequest& setCentralRegionId(string centralRegionId) { DARABONBA_PTR_SET_VALUE(centralRegionId_, centralRegionId) };


    // DBList Field Functions 
    bool hasDBList() const { return this->DBList_ != nullptr;};
    void deleteDBList() { this->DBList_ = nullptr;};
    inline string DBList() const { DARABONBA_PTR_GET_DEFAULT(DBList_, "") };
    inline CreateGadInstanceMemberRequest& setDBList(string DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };


    // gadInstanceId Field Functions 
    bool hasGadInstanceId() const { return this->gadInstanceId_ != nullptr;};
    void deleteGadInstanceId() { this->gadInstanceId_ = nullptr;};
    inline string gadInstanceId() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceId_, "") };
    inline CreateGadInstanceMemberRequest& setGadInstanceId(string gadInstanceId) { DARABONBA_PTR_SET_VALUE(gadInstanceId_, gadInstanceId) };


    // unitNode Field Functions 
    bool hasUnitNode() const { return this->unitNode_ != nullptr;};
    void deleteUnitNode() { this->unitNode_ = nullptr;};
    inline const vector<CreateGadInstanceMemberRequestUnitNode> & unitNode() const { DARABONBA_PTR_GET_CONST(unitNode_, vector<CreateGadInstanceMemberRequestUnitNode>) };
    inline vector<CreateGadInstanceMemberRequestUnitNode> unitNode() { DARABONBA_PTR_GET(unitNode_, vector<CreateGadInstanceMemberRequestUnitNode>) };
    inline CreateGadInstanceMemberRequest& setUnitNode(const vector<CreateGadInstanceMemberRequestUnitNode> & unitNode) { DARABONBA_PTR_SET_VALUE(unitNode_, unitNode) };
    inline CreateGadInstanceMemberRequest& setUnitNode(vector<CreateGadInstanceMemberRequestUnitNode> && unitNode) { DARABONBA_PTR_SET_RVALUE(unitNode_, unitNode) };


  protected:
    // The ID of the central node . You can call the DescribeGadInstances operation to query the ID.
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
    // A JSON array that consists of the information about the databases on the central node. All database information that you specify in this array is synchronized to the unit nodes of the global active database cluster. The JSON array contains the following fields:
    // 
    // *   **name**: the name of the database.
    // *   **all**: specifies whether to synchronize all data in the database or the table. Valid values: **true** and **false**.
    // *   **Table**: the name of the table. If you set the **all** field to **false**, you must nest the name of the table that you want to synchronize into the JSON array.
    // 
    // Example: `{ "testdb": { "name": "testdb", "all": false, "Table": { "order": { "name": "order", "all": true }, "ordernew": { "name": "ordernew", "all": true } } } }`
    // 
    // >  For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> DBList_ = nullptr;
    // The ID of the global active database cluster. You can call the DescribeGadInstances operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> gadInstanceId_ = nullptr;
    // The information about the unit node.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateGadInstanceMemberRequestUnitNode>> unitNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
